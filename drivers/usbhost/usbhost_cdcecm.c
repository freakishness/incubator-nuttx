/****************************************************************************
 * drivers/usbhost/usbhost_cdcecm.c
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <semaphore.h>
#include <assert.h>
#include <errno.h>
#include <debug.h>
#include <poll.h>
#include <fcntl.h>

#include <arpa/inet.h>

#include <nuttx/arch.h>
#include <nuttx/irq.h>
#include <nuttx/kmalloc.h>
#include <nuttx/kthread.h>
#include <nuttx/mutex.h>
#include <nuttx/fs/fs.h>
#include <nuttx/wqueue.h>
#include <nuttx/signal.h>
#include <nuttx/net/ip.h>
#include <nuttx/net/netdev.h>
#include <nuttx/net/ethernet.h>

#include <nuttx/usb/cdc.h>
#include <nuttx/usb/usb.h>
#include <nuttx/usb/usbhost.h>

#include <wdog/wdog.h>

#ifdef CONFIG_USBHOST_CDCECM

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define CDCECM_NETBUF_SIZE 2048

/* Configuration ************************************************************/

#ifndef CONFIG_SCHED_WORKQUEUE
#  warning "Worker thread support is required (CONFIG_SCHED_WORKQUEUE)"
#endif

#ifndef CONFIG_USBHOST_ASYNCH
#  warning Asynchronous transfer support is required (CONFIG_USBHOST_ASYNCH)
#endif

#define USBHOST_CDCECM_NTDELAY MSEC2TICK(200)

#ifndef CONFIG_USBHOST_CDCECM_NPOLLWAITERS
#  define CONFIG_USBHOST_CDCECM_NPOLLWAITERS 1
#endif

/* Driver support ***********************************************************/

/* This format is used to construct the /dev/cdc-wdm[n] device driver path.
 * It defined here so that it will be used consistently in all places.
 */

/* Used in usbhost_cfgdesc() */

#define USBHOST_CTRLIFFOUND 0x01
#define USBHOST_DATAIFFOUND 0x02
#define USBHOST_INTRIFFOUND 0x04
#define USBHOST_BINFOUND    0x08
#define USBHOST_BOUTFOUND   0x10
#define USBHOST_ALLFOUND    0x1f

#define USBHOST_MAX_CREFS   0x7fff

/****************************************************************************
 * Private Types
 ****************************************************************************/

struct usb_cdc_ncm_nth16_s
{
    uint8_t signature[4];
    uint8_t length[2];
    uint8_t sequence[2];
    uint8_t block_length[2];
    uint8_t ndp_index[2];
};

struct usb_cdc_ncm_dpe16_s
{
    uint8_t index[2];
    uint8_t length[2];
};

struct usb_cdc_ncm_ndp16_s
{
    uint8_t signature[4];
    uint8_t length[2];
    uint8_t next_ndp_index[2];
    struct usb_cdc_ncm_dpe16_s dpe16[0];
};

struct usb_cdc_ncm_ntb_params_s
{
    uint8_t length[2];
    uint8_t ntb_formats_supported[2];
    uint8_t ntb_in_max_size[4];
    uint8_t ndp_in_divisor[2];
    uint8_t ndp_in_payload_remainder[2];
    uint8_t ndp_in_alignment[2];
    uint8_t reserved[2];
    uint8_t ntb_out_max_size[4];
    uint8_t ndp_out_divisor[2];
    uint8_t ndp_out_payload_remainder[2];
    uint8_t ndp_out_alignment[2];
    uint8_t ntb_out_max_datagrams[2];
};

struct usb_csifdesc_s
{
    uint8_t len;
    uint8_t type;
    uint8_t subtype;
};

struct usb_ecm_desc_s
{
    uint8_t len;
    uint8_t type;
    uint8_t subtype;
    uint8_t mac;
    uint8_t statistics[4];
    uint8_t max_segment_size[2];
    uint8_t num_mc_filters[2];
    uint8_t num_power_filters;
};

/* This structure contains the internal, private state of the USB host class
 * driver.
 */

struct usbhost_cdcecm_s
{
    /* This is the externally visible portion of the state */

    struct usbhost_class_s  usbclass;

    /* The remainder of the fields are provided to the class driver */
    struct wdog_s           txtimeout;
    volatile bool           disconnected; /* TRUE: Device has been disconnected */
    uint16_t                ctrlif;       /* Control interface number */
    uint16_t                dataif;       /* Data interface number */
    int16_t                 crefs;        /* Reference count on the driver instance */
    mutex_t                 lock;         /* Used to maintain mutual exclusive access */
    struct work_s           ntwork;       /* Notification work */
    struct work_s           comm_rxwork;  /* Communication interface RX work */
    struct work_s           bulk_rxwork;
    struct work_s           txpollwork;
    struct work_s           destroywork;
    int16_t                 nnbytes;      /* Number of bytes received in notification */
    int16_t                 bulkinbytes;
    uint16_t                comm_rxlen;   /* Number of bytes in the RX buffer */
    uint16_t                comm_rxmsgs;  /* Number of messages available to be read */
    uint16_t                comm_rxpos;   /* Read position for input buffer */
    uint16_t                maxctrlsize;  /* Maximum size of a ctrl request */
    uint16_t                maxintsize;   /* Maximum size of interrupt IN packet */
    uint16_t                max_segment_size;
    uint8_t                 mac_address;
    uint32_t                maxntbin;     /* Maximum size of NTB IN message */
    uint32_t                maxntbout;    /* Maximum size of NTB OUT message */
    FAR uint8_t            *ctrlreq;      /* Allocated ctrl request structure */
    FAR uint8_t            *data_txbuf;   /* Allocated TX buffer for network datagrams */
    FAR uint8_t            *data_rxbuf;   /* Allocated RX buffer for network datagrams */
    FAR uint8_t            *comm_rxbuf;   /* Allocated RX buffer comm IN messages */
    FAR uint8_t            *notification; /* Allocated RX buffer for async notifications */
    FAR uint8_t            *rxnetbuf;     /* Allocated RX buffer for NTB frames */
    FAR uint8_t            *txnetbuf;     /* Allocated TX buffer for NTB frames */
    usbhost_ep_t            intin;        /* Interrupt endpoint */
    usbhost_ep_t            bulkin;       /* Bulk IN endpoint */
    usbhost_ep_t            bulkout;      /* Bulk OUT endpoint */
    uint16_t                bulkmxpacket; /* Max packet size for Bulk OUT endpoint */
    uint16_t                ntbseq;       /* NTB sequence number */

    FAR struct pollfd      *fds[CONFIG_USBHOST_CDCECM_NPOLLWAITERS];

    /* Network device members */

    bool                    bifup;        /* true:ifup false:ifdown */
    struct net_driver_s     netdev;       /* Interface understood by the network */
    uint16_t                txpktbuf[(MAX_NETDEV_PKTSIZE + 1) / 2];
};

/****************************************************************************
 * Private Function Prototypes
 ****************************************************************************/

/* Memory allocation services */

static inline FAR struct usbhost_cdcecm_s *usbhost_allocclass(void);
static inline void usbhost_freeclass(FAR struct usbhost_cdcecm_s *usbclass);

/* Worker thread actions */

static void usbhost_notification_work(FAR void *arg);
static void usbhost_notification_callback(FAR void *arg, ssize_t nbytes);
static void usbhost_bulkin_work(FAR void *arg);
static void usbhost_bulkin_callback(FAR void *arg, ssize_t nbytes);

static void usbhost_destroy(FAR void *arg);

/* Helpers for usbhost_connect() */

static int usbhost_cfgdesc(FAR struct usbhost_cdcecm_s *priv,
                           FAR const uint8_t *configdesc, int desclen);
static inline int usbhost_devinit(FAR struct usbhost_cdcecm_s *priv);

/* (Little Endian) Data helpers */

static inline uint16_t usbhost_getle16(FAR const uint8_t *val);
static inline void usbhost_putle16(FAR uint8_t *dest, uint16_t val);
static inline uint32_t usbhost_getle32(FAR const FAR uint8_t *val);

/* Buffer memory management */

static int usbhost_alloc_buffers(FAR struct usbhost_cdcecm_s *priv);
static void usbhost_free_buffers(FAR struct usbhost_cdcecm_s *priv);

/* struct usbhost_registry_s methods */

static FAR struct usbhost_class_s *
usbhost_create(FAR struct usbhost_hubport_s *hport,
               FAR const struct usbhost_id_s *id);

/* struct usbhost_class_s methods */

static int usbhost_connect(FAR struct usbhost_class_s *usbclass,
                           FAR const uint8_t *configdesc, int desclen);
static int usbhost_disconnected(FAR struct usbhost_class_s *usbclass);

/* NuttX network callback functions */

static int cdcecm_ifup(FAR struct net_driver_s *dev);
static int cdcecm_ifdown(FAR struct net_driver_s *dev);
static int cdcecm_txavail(FAR struct net_driver_s *dev);

/* Network support functions */

static void cdcecm_receive(FAR struct usbhost_cdcecm_s *priv,
                            FAR uint8_t *buf, size_t len);

static int cdcecm_txpoll(FAR struct net_driver_s *dev);

static int cdc_ecm_set_eth_packet_filter(FAR struct usbhost_cdcecm_s *priv, uint16_t filter);

/****************************************************************************
 * Private Data
 ****************************************************************************/

/* This structure provides the registry entry ID information that will  be
 * used to associate the USB class driver to a connected USB device.
 */

static const struct usbhost_id_s g_id[2] =
{
  {
    USB_CLASS_CDC,      /* base */
    CDC_SUBCLASS_ECM,  /* subclass */
    CDC_PROTO_NONE,                  /* proto */
    0x0000,                  /* vid */
    0x0000                   /* pid */
  },
  {
    USB_CLASS_CDC_DATA,      /* base */
    CDC_SUBCLASS_NONE,  /* subclass */
    CDC_PROTO_NONE,                  /* proto */
    0x0000,                  /* vid */
    0x0000                   /* pid */
  },
};

/* This is the USB host storage class's registry entry */

static struct usbhost_registry_s g_cdcecm =
        {
                NULL,                   /* flink */
                usbhost_create,         /* create */
                2,                      /* nids */
                &g_id[0]                   /* id[] */
        };

/****************************************************************************
 * Private Functions
 ****************************************************************************/

static int  usbhost_ctrl_cmd(FAR struct usbhost_cdcecm_s *priv,
                            uint8_t type, uint8_t req, uint16_t value,
                            uint16_t iface, FAR uint8_t *payload,
                            uint16_t len)
{
  FAR struct usbhost_hubport_s *hport;
  FAR struct usb_ctrlreq_s *ctrlreq;
  int ret;

  hport = priv->usbclass.hport;

  ctrlreq       = (FAR struct usb_ctrlreq_s *)priv->ctrlreq;
  ctrlreq->type = type;
  ctrlreq->req  = req;

  usbhost_putle16(ctrlreq->value, value);
  usbhost_putle16(ctrlreq->index, iface);
  usbhost_putle16(ctrlreq->len,   len);

  if (type & USB_REQ_DIR_IN)
    {
      ret = DRVR_CTRLIN(hport->drvr, hport->ep0, ctrlreq, payload);
    }
  else
    {
      ret = DRVR_CTRLOUT(hport->drvr, hport->ep0, ctrlreq, payload);
    }

  return ret;
}

/****************************************************************************
 * Name: usbhost_allocclass
 *
 * Description:
 *   This is really part of the logic that implements the create() method
 *   of struct usbhost_registry_s.  This function allocates memory for one
 *   new class instance.
 *
 * Input Parameters:
 *   None
 *
 * Returned Value:
 *   On success, this function will return a non-NULL instance of struct
 *   usbhost_class_s.  NULL is returned on failure; this function will
 *   will fail only if there are insufficient resources to create another
 *   USB host class instance.
 *
 ****************************************************************************/

static inline FAR struct usbhost_cdcecm_s *usbhost_allocclass(void)
{
  FAR struct usbhost_cdcecm_s *priv;

  DEBUGASSERT(!up_interrupt_context());
  priv = kmm_malloc(sizeof(struct usbhost_cdcecm_s));
          uinfo("Allocated: %p\n", priv);
  return priv;
}

/****************************************************************************
 * Name: usbhost_freeclass
 *
 * Description:
 *   Free a class instance previously allocated by usbhost_allocclass().
 *
 * Input Parameters:
 *   usbclass - A reference to the class instance to be freed.
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

static inline void usbhost_freeclass(FAR struct usbhost_cdcecm_s *usbclass)
{
  DEBUGASSERT(usbclass != NULL);

  /* Free the class instance (perhaps calling sched_kmm_free() in case we are
   * executing from an interrupt handler.
   */

  uinfo("Freeing: %p\n", usbclass);
  kmm_free(usbclass);
}

static void usbhost_bulkin_callback(FAR void *arg, ssize_t nbytes)
{
  FAR struct usbhost_cdcecm_s *priv = (FAR struct usbhost_cdcecm_s *)arg;
  uint32_t delay = 0;

  DEBUGASSERT(priv);

  if (priv->disconnected)
    {
      return;
    }

  priv->bulkinbytes = (int16_t)nbytes;

  if (nbytes < 0)
    {
      if (nbytes != -EAGAIN)
        {
          uerr("ERROR: Transfer failed: %d\n", nbytes);
        }

      delay = MSEC2TICK(30);
    }

  if (work_available(&priv->bulk_rxwork))
    {
      work_queue(LPWORK, &priv->bulk_rxwork,
               usbhost_bulkin_work, priv, delay);
    }
}

static void usbhost_bulkin_work(FAR void *arg)
{
  FAR struct usbhost_cdcecm_s *priv;
  FAR struct usbhost_hubport_s *hport;

  priv = (FAR struct usbhost_cdcecm_s *)arg;
  DEBUGASSERT(priv);

  hport = priv->usbclass.hport;
  DEBUGASSERT(hport);

  if (priv->disconnected || !priv->bifup)
    {
      return;
    }

  nxmutex_lock(&priv->lock);

  if (priv->bulkinbytes < 0)
    {
      goto out;
    }

  cdcecm_receive(priv, priv->rxnetbuf, priv->bulkinbytes);

out:
  DRVR_ASYNCH(hport->drvr, priv->bulkin,
              (FAR uint8_t *)priv->rxnetbuf, CDCECM_NETBUF_SIZE,
              usbhost_bulkin_callback, priv);
  nxmutex_unlock(&priv->lock);
}

/****************************************************************************
 * Name: usbhost_notification_work
 *
 * Description:
 *   Handle receipt of an asynchronous notification from the CDC device
 *
 * Input Parameters:
 *   arg - The argument provided with the asynchronous I/O was setup
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   Probably called from an interrupt handler.
 *
 ****************************************************************************/

static void usbhost_notification_work(FAR void *arg)
{
  FAR struct usbhost_cdcecm_s *priv;
  FAR struct usbhost_hubport_s *hport;
  FAR struct cdc_notification_s *inmsg;
  int ret;

  priv = (FAR struct usbhost_cdcecm_s *)arg;
  DEBUGASSERT(priv);

  hport = priv->usbclass.hport;
  DEBUGASSERT(hport);

  /* Are we still connected? */

  if (!priv->disconnected && priv->intin)
    {
      /* Yes.. Was an interrupt IN message received correctly? */

      if (priv->nnbytes >= 0)
        {
        /* Yes.. decode the notification */

          inmsg = (FAR struct cdc_notification_s *) priv->notification;

          /* We care only about the ResponseAvailable notification */

          if (inmsg->type == (USB_REQ_DIR_IN | USB_REQ_TYPE_CLASS |
                               USB_REQ_RECIPIENT_INTERFACE))
            {
              if (inmsg->notification == ACM_RESPONSE_AVAILABLE)
                {
                  priv->comm_rxmsgs++;

                  /* If this is the only message available, read it */

                }

              if (inmsg->notification == ACM_NETWORK_CONNECTION)
                {
                  if (inmsg->value[0] == 1)
                    {
                      syslog(LOG_INFO, "cdc ecm connected");
                    }
                  else
                    {
                      syslog(LOG_INFO, "cdc ecm disconnected");
                    }
                }

              if  (inmsg->notification == ACM_CONNECTION_SPEED_CHANGE)
                {
                  syslog(LOG_INFO, "connection speed changed: USBitRate: %lu, DSBitRate: %lu", *((uint32_t *)&(inmsg->data[0])), *((uint32_t *)&inmsg->data[4]));
                }
            }
        }

      /* Setup to receive the next notification */

      ret = DRVR_ASYNCH(hport->drvr, priv->intin,
                        (FAR uint8_t *)priv->notification,
                        SIZEOF_NOTIFICATION_S(0),
                        usbhost_notification_callback,
                        priv);
      if (ret < 0)
        {
          uerr("ERROR: DRVR_ASYNCH failed: %d\n", ret);
        }
    }
}

/****************************************************************************
 * Name: usbhost_notification_callback
 *
 * Description:
 *   Handle receipt of Response Available from the CDC/MBIM device
 *
 * Input Parameters:
 *   arg - The argument provided with the asynchronous I/O was setup
 *   nbytes - The number of bytes actually transferred (or a negated errno
 *     value;
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   Probably called from an interrupt handler.
 *
 ****************************************************************************/

static void usbhost_notification_callback(FAR void *arg, ssize_t nbytes)
{
  FAR struct usbhost_cdcecm_s *priv = (FAR struct usbhost_cdcecm_s *)arg;
  uint32_t delay = 0;

  DEBUGASSERT(priv);

  /* Are we still connected? */

  if (!priv->disconnected)
  {
    /* Check for a failure.  On higher end host controllers, the
     * asynchronous transfer will pend until data is available (OHCI and
     * EHCI).  On lower end host controllers (like STM32 and EFM32), the
     * transfer will fail immediately when the device NAKs the first
     * attempted interrupt IN transfer (with nbytes == -EAGAIN).  In that
     * case (or in the case of other errors), we must fall back to
     * polling.
     */

    DEBUGASSERT(nbytes >= INT16_MIN && nbytes <= INT16_MAX);
    priv->nnbytes = (int16_t)nbytes;

    if (nbytes < 0)
    {
      /* This debug output is good to know, but really a nuisance for
       * those configurations where we have to fall back to polling.
       * FIX:  Don't output the message is the result is -EAGAIN.
       */

#if defined(CONFIG_DEBUG_USB) && !defined(CONFIG_DEBUG_INFO)
      if (nbytes != -EAGAIN)
#endif
      {
        uerr("ERROR: Transfer failed: %d\n", nbytes);
      }

      /* We don't know the nature of the failure, but we need to do all
       * that we can do to avoid a CPU hog error loop.
       *
       * Use the low-priority work queue and delay polling for the next
       * event.  We want to use as little CPU bandwidth as possible in
       * this case.
       */

      delay = USBHOST_CDCECM_NTDELAY;
    }

    /* Make sure that the work structure available.  There is a remote
     * chance that this may collide with a device disconnection event.
     */

    if (work_available(&priv->ntwork))
    {
      work_queue(LPWORK, &priv->ntwork,
                 usbhost_notification_work,
                 priv, delay);
    }
  }
}

/****************************************************************************
 * Name: usbhost_destroy
 *
 * Description:
 *   The USB device has been disconnected and the reference count on the USB
 *   host class instance has gone to 1.. Time to destroy the USB host class
 *   instance.
 *
 * Input Parameters:
 *   arg - A reference to the class instance to be destroyed.
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

static void usbhost_destroy(FAR void *arg)
{
  FAR struct usbhost_cdcecm_s *priv = (FAR struct usbhost_cdcecm_s *)arg;
  FAR struct usbhost_hubport_s *hport;
  FAR struct usbhost_driver_s *drvr;

  DEBUGASSERT(priv != NULL && priv->usbclass.hport != NULL);
  hport = priv->usbclass.hport;

  DEBUGASSERT(hport->drvr);
  drvr = hport->drvr;

          uinfo("crefs: %d\n", priv->crefs);

  /* Free the endpoints */

  if (priv->intin)
  {
    DRVR_EPFREE(hport->drvr, priv->intin);
  }

  if (priv->bulkin)
  {
    DRVR_EPFREE(hport->drvr, priv->bulkin);
  }

  if (priv->bulkout)
  {
    DRVR_EPFREE(hport->drvr, priv->bulkout);
  }

  /* Free any transfer buffers */

  usbhost_free_buffers(priv);

  /* Free the function address assigned to this device */

  usbhost_devaddr_destroy(hport, hport->funcaddr);
  hport->funcaddr = 0;

  /* Destroy the semaphores */

  /* Disconnect the USB host device */

  DRVR_DISCONNECT(drvr, hport);

  /* And free the class instance.  Hmmm.. this may execute on the worker
   * thread and the work structure is part of what is getting freed.  That
   * should be okay because once the work contained is removed from the
   * queue, it should not longer be accessed by the worker thread.
   */

  usbhost_freeclass(priv);
}

/****************************************************************************
 * Name: usbhost_cfgdesc
 *
 * Description:
 *   This function implements the connect() method of struct
 *   usbhost_class_s.  This method is a callback into the class
 *   implementation.  It is used to provide the device's configuration
 *   descriptor to the class so that the class may initialize properly
 *
 * Input Parameters:
 *   priv - The USB host class instance.
 *   configdesc - A pointer to a uint8_t buffer container the configuration
 *     descriptor.
 *   desclen - The length in bytes of the configuration descriptor.
 *
 * Returned Value:
 *   On success, zero (OK) is returned. On a failure, a negated errno value
 *   is returned indicating the nature of the failure
 *
 * Assumptions:
 *   This function will *not* be called from an interrupt handler.
 *
 ****************************************************************************/

static int usbhost_cfgdesc(FAR struct usbhost_cdcecm_s *priv,
                           FAR const uint8_t *configdesc, int desclen)
{
  FAR struct usbhost_hubport_s *hport;
  FAR struct usb_cfgdesc_s *cfgdesc;
  FAR struct usb_desc_s *desc;
  struct usbhost_epdesc_s bindesc;
  struct usbhost_epdesc_s boutdesc;
  struct usbhost_epdesc_s iindesc;
  int remaining;
  uint8_t found = 0;
  int ret;

  DEBUGASSERT(priv != NULL && priv->usbclass.hport &&
              configdesc != NULL && desclen >= sizeof(struct usb_cfgdesc_s));
  hport = priv->usbclass.hport;

  /* Verify that we were passed a configuration descriptor */

  cfgdesc = (FAR struct usb_cfgdesc_s *)configdesc;
  if (cfgdesc->type != USB_DESC_TYPE_CONFIG)
  {
    return -EINVAL;
  }

  /* Get the total length of the configuration descriptor (little endian).
   * It might be a good check to get the number of interfaces here too.
   */

  remaining = (int)usbhost_getle16(cfgdesc->totallen);

  /* Skip to the next entry descriptor */

  configdesc += cfgdesc->len;
  remaining  -= cfgdesc->len;

  /* Loop where there are more descriptors to examine */

  while (remaining >= sizeof(struct usb_desc_s))
  {
    /* What is the next descriptor? */

    desc = (FAR struct usb_desc_s *)configdesc;
    switch (desc->type)
    {
      /* Interface descriptor. We really should get the number of endpoints
       * from this descriptor too.
       */

      case USB_DESC_TYPE_INTERFACE:
      {
        FAR struct usb_ifdesc_s *ifdesc =
                (FAR struct usb_ifdesc_s *)configdesc;

        uinfo("Interface descriptor\n");
        DEBUGASSERT(remaining >= USB_SIZEOF_IFDESC);

        /* Is this the control interface? */

        if (ifdesc->classid  == CDC_CLASS_COMM &&
            ifdesc->subclass == CDC_SUBCLASS_ECM &&
            ifdesc->protocol == CDC_PROTO_NONE)
        {
          priv->ctrlif  = ifdesc->ifno;
          found        |= USBHOST_CTRLIFFOUND;
        }

          /* Is this the data interface? */

        else if (ifdesc->classid  == USB_CLASS_CDC_DATA &&
                 ifdesc->subclass == CDC_SUBCLASS_NONE &&
                 ifdesc->protocol == CDC_DATA_PROTO_NONE)
        {
          priv->dataif  = ifdesc->ifno;
          found        |= USBHOST_DATAIFFOUND;
        }
      }
            break;
      case USB_DESC_TYPE_CSINTERFACE:
      {
        FAR struct usb_csifdesc_s *csdesc =
                (FAR struct usb_csifdesc_s *)desc;

        /* MBIM functional descriptor */

        if (csdesc->subtype == CDC_DSUBTYPE_ECM)
        {
          FAR struct usb_ecm_desc_s *ecm =
                  (FAR struct usb_ecm_desc_s *)desc;
          priv->mac_address = ecm->mac;
          priv->max_segment_size = usbhost_getle16(ecm->max_segment_size);
        }
      }
      break;

    /* Endpoint descriptor.  Here, we expect two bulk endpoints, an IN
     * and an OUT.
     */

      case USB_DESC_TYPE_ENDPOINT:
      {
        FAR struct usb_epdesc_s *epdesc =
                (FAR struct usb_epdesc_s *)configdesc;

                uinfo("Endpoint descriptor\n");
        DEBUGASSERT(remaining >= USB_SIZEOF_EPDESC);

        /* Check for interrupt endpoint */

        if ((epdesc->attr & USB_EP_ATTR_XFERTYPE_MASK) ==
            USB_EP_ATTR_XFER_INT)
        {
          if (USB_ISEPIN(epdesc->addr))
          {
            found |= USBHOST_INTRIFFOUND;
            iindesc.hport        = hport;
            iindesc.addr         = epdesc->addr &
                                   USB_EP_ADDR_NUMBER_MASK;
            iindesc.in           = true;
            iindesc.xfrtype      = USB_EP_ATTR_XFER_INT;
            iindesc.interval     = epdesc->interval;
            iindesc.mxpacketsize =
                    usbhost_getle16(epdesc->mxpacketsize);
                    uinfo("Interrupt IN EP addr:%d mxpacketsize:%d\n",
                          iindesc.addr, iindesc.mxpacketsize);

            priv->maxintsize = iindesc.mxpacketsize;
          }
        }

          /* Check for a bulk endpoint. */

        else if ((epdesc->attr & USB_EP_ATTR_XFERTYPE_MASK) ==
                 USB_EP_ATTR_XFER_BULK)
        {
          /* Yes.. it is a bulk endpoint.  IN or OUT? */

          if (USB_ISEPOUT(epdesc->addr))
          {
            /* It is an OUT bulk endpoint.  There should be only one
             * bulk OUT endpoint.
             */

            if ((found & USBHOST_BOUTFOUND) != 0)
            {
              /* Oops.. more than one endpoint.  We don't know
               * what to do with this.
               */

              return -EINVAL;
            }

            found |= USBHOST_BOUTFOUND;

            /* Save the bulk OUT endpoint information */

            boutdesc.hport        = hport;
            boutdesc.addr         = epdesc->addr &
                                    USB_EP_ADDR_NUMBER_MASK;
            boutdesc.in           = false;
            boutdesc.xfrtype      = USB_EP_ATTR_XFER_BULK;
            boutdesc.interval     = epdesc->interval;
            boutdesc.mxpacketsize =
                    usbhost_getle16(epdesc->mxpacketsize);
                    uinfo("Bulk OUT EP addr:%d mxpacketsize:%d\n",
                          boutdesc.addr, boutdesc.mxpacketsize);

            priv->bulkmxpacket = boutdesc.mxpacketsize;
          }
          else
          {
            /* It is an IN bulk endpoint.  There should be only one
             * bulk IN endpoint.
             */

            if ((found & USBHOST_BINFOUND) != 0)
            {
              /* Oops.. more than one endpoint.  We don't know
               * what to do with this.
               */

              return -EINVAL;
            }

            found |= USBHOST_BINFOUND;

            /* Save the bulk IN endpoint information */

            bindesc.hport        = hport;
            bindesc.addr         = epdesc->addr &
                                   USB_EP_ADDR_NUMBER_MASK;
            bindesc.in           = true;
            bindesc.xfrtype      = USB_EP_ATTR_XFER_BULK;
            bindesc.interval     = epdesc->interval;
            bindesc.mxpacketsize =
                    usbhost_getle16(epdesc->mxpacketsize);
                    uinfo("Bulk IN EP addr:%d mxpacketsize:%d\n",
                          bindesc.addr, bindesc.mxpacketsize);
          }
        }
      }
      break;

      default:
        break;
    }

    /* If we found everything we need with this interface, then break out
     * of the loop early.
     */

    if (found == USBHOST_ALLFOUND)
    {
      break;
    }

    /* Increment the address of the next descriptor */

    configdesc += desc->len;
    remaining  -= desc->len;
  }

  /* Sanity checking... did we find all of things that we need? */

  if (found != USBHOST_ALLFOUND)
  {
    uerr("ERROR: Found CTRLIF:%s DATAIF: %s BIN:%s BOUT:%s\n",
         (found & USBHOST_CTRLIFFOUND) != 0 ? "YES" : "NO",
         (found & USBHOST_DATAIFFOUND) != 0 ? "YES" : "NO",
         (found & USBHOST_BINFOUND) != 0 ? "YES" : "NO",
         (found & USBHOST_BOUTFOUND) != 0 ? "YES" : "NO");
    return -EINVAL;
  }

  /* We are good... Allocate the endpoints */

  ret = DRVR_EPALLOC(hport->drvr, &boutdesc, &priv->bulkout);
  if (ret < 0)
    {
      uerr("ERROR: Failed to allocate Bulk OUT endpoint\n");
      return ret;
    }

  ret = DRVR_EPALLOC(hport->drvr, &bindesc, &priv->bulkin);
  if (ret < 0)
    {
      uerr("ERROR: Failed to allocate Bulk IN endpoint\n");
      (void)DRVR_EPFREE(hport->drvr, priv->bulkout);
      return ret;
    }

  ret = DRVR_EPALLOC(hport->drvr, &iindesc, &priv->intin);
  if (ret < 0)
    {
      uerr("ERROR: Failed to allocate Interrupt IN endpoint\n");
      (void)DRVR_EPFREE(hport->drvr, priv->bulkout);
      (void)DRVR_EPFREE(hport->drvr, priv->bulkin);
      return ret;
    }

  uinfo("Endpoints allocated\n");
  return OK;
}

static int usbhost_setinterface(FAR struct usbhost_cdcecm_s *priv,
                                uint16_t iface, uint16_t setting)
{
  return usbhost_ctrl_cmd(priv,
                          USB_REQ_DIR_OUT | USB_REQ_RECIPIENT_INTERFACE | USB_REQ_TYPE_STANDARD,
                          USB_REQ_SETINTERFACE, setting, iface, NULL, 0);
}

static int cdc_ecm_set_eth_packet_filter(FAR struct usbhost_cdcecm_s *priv, uint16_t filter)
{
  int ret;

  ret = usbhost_ctrl_cmd(priv,
                         USB_REQ_DIR_OUT | USB_REQ_TYPE_CLASS |
                         USB_REQ_RECIPIENT_INTERFACE,
                         ECM_SET_PACKET_FILTER,
                         filter, priv->ctrlif, NULL, 0);
  return ret;
}

/****************************************************************************
 * Name: usbhost_devinit
 *
 * Description:
 *   The USB device has been successfully connected.  This completes the
 *   initialization operations.  It is first called after the
 *   configuration descriptor has been received.
 *
 *   This function is called from the connect() method.  This function always
 *   executes on the thread of the caller of connect().
 *
 * Input Parameters:
 *   priv - A reference to the class instance.
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

static inline int usbhost_devinit(FAR struct usbhost_cdcecm_s *priv)
{
  FAR struct usbhost_hubport_s *hport;
  uint8_t mac_buffer[64];
  int ret = OK;

  hport = priv->usbclass.hport;

  /* Increment the reference count.  This will prevent usbhost_destroy() from
   * being called asynchronously if the device is removed.
   */

  priv->crefs++;
  DEBUGASSERT(priv->crefs == 2);

  /* Configure the device */

  priv->ntbseq = 0;

  /* Set aside transfer buffers for exclusive use by the class driver */

  ret = usbhost_alloc_buffers(priv);
  if (ret)
    {
      uerr("ERROR: failed to allocate buffers\n");
      return ret;
    }

  ret = usbhost_ctrl_cmd(priv,
                         USB_REQ_DIR_IN | USB_REQ_RECIPIENT_DEVICE| USB_REQ_TYPE_STANDARD,
                         USB_REQ_GETDESCRIPTOR,
                         (USB_DESC_TYPE_STRING << 8) | priv->mac_address, 0x0409, mac_buffer, 26);
  if (ret <  0)
    {
      nwarn("cdc ecm mac get failed: %d\n", ret);
    }

  if (priv->intin)
  {
    /* Begin monitoring of message available events */

    uinfo("Start notification monitoring\n");
    ret = DRVR_ASYNCH(hport->drvr, priv->intin,
                      (FAR uint8_t *)priv->notification,
                      SIZEOF_NOTIFICATION_S(0),
                      usbhost_notification_callback,
                      priv);
    if (ret < 0)
    {
      uerr("ERROR: DRVR_ASYNCH failed on intin: %d\n", ret);
    }
  }

  /* Setup the network interface */

  memset(&priv->netdev, 0, sizeof(struct net_driver_s));
  for (int i = 0, j = 0; i < mac_buffer[0] / 2 - 1; i+=2,j++)
    {
      char byte_str[3];
      byte_str[0] = mac_buffer[2 + i * 2];
      byte_str[1] = mac_buffer[2 + (i + 1) * 2];
      byte_str[2] = '\0';
      priv->netdev.d_mac.ether.ether_addr_octet[j] =
              strtoul( byte_str, NULL, 16);
    }
  priv->netdev.d_ifup    = cdcecm_ifup;
  priv->netdev.d_ifdown  = cdcecm_ifdown;
  priv->netdev.d_txavail = cdcecm_txavail;
  priv->netdev.d_llhdrlen = ETH_HDRLEN;
  priv->netdev.d_pktsize = priv->max_segment_size - ETH_HDRLEN;
  priv->netdev.d_private = priv;

  /* Register the network device */

  netdev_register(&priv->netdev, NET_LL_ETHERNET);

  /* Check if we successfully initialized. We now have to be concerned
   * about asynchronous modification of crefs because the character
   * driver has been registered.
   */

  if (ret >= 0)
  {
    nxmutex_lock(&priv->lock);
    DEBUGASSERT(priv->crefs >= 2);

    /* Handle a corner case where (1) open() has been called so the
     * reference count is > 2, but the device has been disconnected.
     * In this case, the class instance needs to persist until close()
     * is called.
     */

    if (priv->crefs <= 2 && priv->disconnected)
    {
      /* We don't have to give the semaphore because it will be
       * destroyed when usb_destroy is called.
       */

      ret = -ENODEV;
    }
    else
    {
      /* Ready for normal operation */

      uinfo("Successfully initialized\n");
      priv->crefs--;
    }
    nxmutex_unlock(&priv->lock);
  }

  return ret;
}

/****************************************************************************
 * Name: usbhost_getle16
 *
 * Description:
 *   Get a (possibly unaligned) 16-bit little endian value.
 *
 * Input Parameters:
 *   val - A pointer to the first byte of the little endian value.
 *
 * Returned Value:
 *   A uint16_t representing the whole 16-bit integer value
 *
 ****************************************************************************/

static inline uint16_t usbhost_getle16(FAR const uint8_t *val)
{
  return (uint16_t)val[1] << 8 | (uint16_t)val[0];
}

/****************************************************************************
 * Name: usbhost_putle16
 *
 * Description:
 *   Put a (possibly unaligned) 16-bit little endian value.
 *
 * Input Parameters:
 *   dest - A pointer to the first byte to save the little endian value.
 *   val - The 16-bit value to be saved.
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

static void usbhost_putle16(FAR uint8_t *dest, uint16_t val)
{
  dest[0] = val & 0xff; /* Little endian means LS byte first in byte stream */
  dest[1] = val >> 8;
}

/****************************************************************************
 * Name: usbhost_getle32
 *
 * Description:
 *   Get a (possibly unaligned) 32-bit little endian value.
 *
 * Input Parameters:
 *   dest - A pointer to the first byte to save the big endian value.
 *   val - The 32-bit value to be saved.
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

static inline uint32_t usbhost_getle32(FAR const uint8_t *val)
{
  /* Little endian means LS halfword first in byte stream */

  return (uint32_t)usbhost_getle16(&val[2]) << 16 |
         (uint32_t)usbhost_getle16(val);
}

/****************************************************************************
 * Name: usbhost_alloc_buffers
 *
 * Description:
 *   Allocate transfer buffer memory.
 *
 * Input Parameters:
 *   priv - A reference to the class instance.
 *
 * Returned Value:
 *   On success, zero (OK) is returned.  On failure, an negated errno value
 *   is returned to indicate the nature of the failure.
 *
 ****************************************************************************/

static int usbhost_alloc_buffers(FAR struct usbhost_cdcecm_s *priv)
{
  FAR struct usbhost_hubport_s *hport;
  size_t maxlen;
  int ret;

  DEBUGASSERT(priv != NULL && priv->usbclass.hport != NULL &&
              priv->ctrlreq == NULL);
  hport = priv->usbclass.hport;

  /* Allocate memory for control requests */

  ret = DRVR_ALLOC(hport->drvr, (FAR uint8_t **)&priv->ctrlreq, &maxlen);
  if (ret < 0)
  {
    uerr("ERROR: DRVR_ALLOC of ctrlreq failed: %d\n", ret);
    goto errout;
  }

  DEBUGASSERT(maxlen >= sizeof(struct usb_ctrlreq_s));

  /* Allocate buffer for interrupt IN notifications */

  ret = DRVR_IOALLOC(hport->drvr, &priv->notification, priv->maxintsize);
  if (ret < 0)
  {
    uerr("ERROR: DRVR_IOALLOC of notification buf failed: %d (%d bytes)\n",
         ret, priv->maxintsize);
    goto errout;
  }

  ret = DRVR_IOALLOC(hport->drvr, &priv->rxnetbuf, CDCECM_NETBUF_SIZE);
  if (ret < 0)
  {
    uerr("ERROR: DRVR_IOALLOC of net rx buf failed: %d (%d bytes)\n",
         ret, 2048);
    goto errout;
  }

  ret = DRVR_IOALLOC(hport->drvr, &priv->txnetbuf, CDCECM_NETBUF_SIZE);
  if (ret < 0)
  {
    uerr("ERROR: DRVR_IOALLOC of net tx buf failed: %d (%d bytes)\n",
         ret, 2048);
    goto errout;
  }

  return OK;

errout:
  usbhost_free_buffers(priv);
  return ret;
}

/****************************************************************************
 * Name: usbhost_free_buffers
 *
 * Description:
 *   Free transfer buffer memory.
 *
 * Input Parameters:
 *   priv - A reference to the class instance.
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

static void usbhost_free_buffers(FAR struct usbhost_cdcecm_s *priv)
{
  FAR struct usbhost_hubport_s *hport;

  DEBUGASSERT(priv != NULL && priv->usbclass.hport != NULL);
  hport = priv->usbclass.hport;

  if (priv->ctrlreq)
  {
    (void)DRVR_FREE(hport->drvr, priv->ctrlreq);
  }

  if (priv->notification)
  {
    (void)DRVR_IOFREE(hport->drvr, priv->notification);
  }

  if (priv->rxnetbuf)
  {
    (void)DRVR_IOFREE(hport->drvr, priv->rxnetbuf);
  }

  if (priv->txnetbuf)
  {
    (void)DRVR_IOFREE(hport->drvr, priv->txnetbuf);
  }

  priv->ctrlreq      = NULL;
  priv->notification = NULL;
  priv->rxnetbuf     = NULL;
  priv->txnetbuf     = NULL;
}

/****************************************************************************
 * struct usbhost_registry_s methods
 ****************************************************************************/

/****************************************************************************
 * Name: usbhost_create
 *
 * Description:
 *   This function implements the create() method of struct
 *   usbhost_registry_s.
 *   The create() method is a callback into the class implementation.  It is
 *   used to (1) create a new instance of the USB host class state and to (2)
 *   bind a USB host driver "session" to the class instance.  Use of this
 *   create() method will support environments where there may be multiple
 *   USB ports and multiple USB devices simultaneously connected.
 *
 * Input Parameters:
 *   hport - The hub hat manages the new class instance.
 *   id - In the case where the device supports multiple base classes,
 *     subclasses, or protocols, this specifies which to configure for.
 *
 * Returned Value:
 *   On success, this function will return a non-NULL instance of struct
 *   usbhost_class_s that can be used by the USB host driver to communicate
 *   with the USB host class.  NULL is returned on failure; this function
 *   will fail only if the hport input parameter is NULL or if there are
 *   insufficient resources to create another USB host class instance.
 *
 ****************************************************************************/

static FAR struct usbhost_class_s *
usbhost_create(FAR struct usbhost_hubport_s *hport,
               FAR const struct usbhost_id_s *id)
{
  FAR struct usbhost_cdcecm_s *priv;

  /* Allocate a USB host class instance */

  priv = usbhost_allocclass();
  if (priv)
  {
    /* Initialize the allocated storage class instance */

    memset(priv, 0, sizeof(struct usbhost_cdcecm_s));

      /* Initialize class method function pointers */

      priv->usbclass.hport        = hport;
      priv->usbclass.connect      = usbhost_connect;
      priv->usbclass.disconnected = usbhost_disconnected;

      /* The initial reference count is 1... One reference is held by
       * the driver.
       */

      priv->crefs = 1;

      /* Initialize mutex (this works in the interrupt context) */

      nxmutex_init(&priv->lock);

      /* Return the instance of the USB class driver */

      return &priv->usbclass;
  }

  /* An error occurred. Free the allocation and return NULL on all failures */

  if (priv)
  {
    usbhost_freeclass(priv);
  }

  return NULL;
}

/****************************************************************************
 * struct usbhost_class_s methods
 ****************************************************************************/

/****************************************************************************
 * Name: usbhost_connect
 *
 * Description:
 *   This function implements the connect() method of struct
 *   usbhost_class_s.  This method is a callback into the class
 *   implementation.  It is used to provide the device's configuration
 *   descriptor to the class so that the class may initialize properly
 *
 * Input Parameters:
 *   usbclass - The USB host class entry previously obtained from a call to
 *     create().
 *   configdesc - A pointer to a uint8_t buffer container the configuration
 *     descriptor.
 *   desclen - The length in bytes of the configuration descriptor.
 *
 * Returned Value:
 *   On success, zero (OK) is returned. On a failure, a negated errno value
 *   is returned indicating the nature of the failure
 *
 *   NOTE that the class instance remains valid upon return with a failure.
 *   It is the responsibility of the higher level enumeration logic to call
 *   CLASS_DISCONNECTED to free up the class driver resources.
 *
 * Assumptions:
 *   - This function will *not* be called from an interrupt handler.
 *   - If this function returns an error, the USB host controller driver
 *     must call to DISCONNECTED method to recover from the error
 *
 ****************************************************************************/

static int usbhost_connect(FAR struct usbhost_class_s *usbclass,
                           FAR const uint8_t *configdesc, int desclen)
{
  FAR struct usbhost_cdcecm_s *priv =
          (FAR struct usbhost_cdcecm_s *)usbclass;
  int ret = 0;

  DEBUGASSERT(priv != NULL &&
              configdesc != NULL &&
              desclen >= sizeof(struct usb_cfgdesc_s));

  /* Parse the configuration descriptor to get the endpoints */

  ret = usbhost_cfgdesc(priv, configdesc, desclen);
  if (ret < 0)
    {
      uerr("ERROR: usbhost_cfgdesc() failed: %d\n", ret);
    }
  else
    {
      /* Now configure the device and register the NuttX driver */

      ret = usbhost_devinit(priv);
      if (ret < 0)
        {
          uerr("ERROR: usbhost_devinit() failed: %d\n", ret);
        }
    }

  return ret;
}

/****************************************************************************
 * Name: usbhost_disconnected
 *
 * Description:
 *   This function implements the disconnected() method of struct
 *   usbhost_class_s.  This method is a callback into the class
 *   implementation.  It is used to inform the class that the USB device has
 *   been disconnected.
 *
 * Input Parameters:
 *   usbclass - The USB host class entry previously obtained from a call to
 *     create().
 *
 * Returned Value:
 *   On success, zero (OK) is returned. On a failure, a negated errno value
 *   is returned indicating the nature of the failure
 *
 * Assumptions:
 *   This function may be called from an interrupt handler.
 *
 ****************************************************************************/

static int usbhost_disconnected(FAR struct usbhost_class_s *usbclass)
{
  FAR struct usbhost_cdcecm_s *priv =
          (FAR struct usbhost_cdcecm_s *)usbclass;
  irqstate_t flags;

  DEBUGASSERT(priv != NULL);

  /* Set an indication to any users of the device that the device is no
   * longer available.
   */

  flags              = enter_critical_section();
  priv->disconnected = true;

  /* Now check the number of references on the class instance.  If it is one,
   * then we can free the class instance now.  Otherwise, we will have to
   * wait until the holders of the references free them by closing the
   * block driver.
   */

  uinfo("crefs: %d\n", priv->crefs);
  if (priv->crefs == 1)
    {
      /* Destroy the class instance.  If we are executing from an interrupt
       * handler, then defer the destruction to the worker thread.
       * Otherwise, destroy the instance now.
       */

      if (up_interrupt_context())
        {
        /* Destroy the instance on the worker thread. */

          uinfo("Queuing destruction: worker %p->%p\n",
                      priv->destroywork.worker, usbhost_destroy);
          DEBUGASSERT(priv->destroywork.worker == NULL);
          work_queue(LPWORK, &priv->destroywork,
                   usbhost_destroy, priv, 0);
        }
      else
        {
          /* Do the work now */

          usbhost_destroy(priv);
        }
  }

  leave_critical_section(flags);
  return OK;
}

static void cdcecm_txtimeout_expiry(wdparm_t arg) {
    struct usbhost_cdcecm_s *priv = (struct usbhost_cdcecm_s *)arg;
    FAR struct usbhost_hubport_s *hport =  priv->usbclass.hport;

    DRVR_CANCEL(hport->drvr, priv->bulkout);
}

/****************************************************************************
 * Name: cdcecm_transmit
 *
 * Description:
 *   Start hardware transmission.  Called either from the txdone interrupt
 *   handling or from watchdog based polling.
 *
 * Input Parameters:
 *   priv - Reference to the driver state structure
 *
 * Returned Value:
 *   OK on success; a negated errno on failure
 *
 * Assumptions:
 *   The network is locked.
 *
 ****************************************************************************/

static int cdcecm_transmit(FAR struct usbhost_cdcecm_s *priv)
{
  FAR struct usbhost_hubport_s *hport;
  ssize_t ret;
  ssize_t len;

  hport = priv->usbclass.hport;

  uinfo("transmit packet: %d bytes\n", priv->netdev.d_len);

  /* Increment statistics */

  NETDEV_TXPACKETS(&priv->netdev);

  len = priv->netdev.d_len;
  memcpy(priv->txnetbuf, priv->netdev.d_buf, len);

  wd_start(&priv->txtimeout, 60 * CLK_TCK, cdcecm_txtimeout_expiry, (wdparm_t)priv);

  ret = DRVR_TRANSFER(hport->drvr, priv->bulkout, priv->txnetbuf, len);
  if (ret < 0)
    {
      uerr("transfer returned error: %d\n", ret);
      return ret;
    }

  /* If frame is multiple of wMaxPacketSize we must send a ZLP */

  if ((len % priv->bulkmxpacket) == 0)
    {
      ret = DRVR_TRANSFER(hport->drvr, priv->bulkout,
                            priv->txnetbuf, 0);
      if (ret < 0)
        {
            uerr("ERROR: DRVR_TRANSFER for ZLP failed: %d\n", (int)ret);
        }
    }

  wd_cancel(&priv->txtimeout);
  NETDEV_TXDONE(&priv->netdev);
  return OK;
}

/****************************************************************************
 * Name: cdcecm_receive
 *
 * Description:
 *   Handle a received packet.
 *
 * Input Parameters:
 *   priv - Reference to the driver state structure
 *
 * Returned Value:
 *   OK on success; a negated errno on failure
 *
 ****************************************************************************/

static void cdcecm_receive(FAR struct usbhost_cdcecm_s *priv,
                            FAR uint8_t *buf, size_t len)
{
  const struct eth_hdr_s *hdr = (struct eth_hdr_s *)buf;
  uinfo("received packet: %d len\n", len);

  NETDEV_RXPACKETS(&priv->netdev);

  /* Any ACK or other response packet generated by the network stack
   * will always be shorter than the received packet, therefore it is
   * safe to pass the received frame buffer directly.
   */

  priv->netdev.d_buf = buf;
  priv->netdev.d_len = len;

#ifdef CONFIG_NET_IPv4
  if (hdr->type == HTONS(ETHTYPE_IP))
    {
      NETDEV_RXIPV4(&priv->netdev);
      ipv4_input(&priv->netdev);

      if (priv->netdev.d_len > 0)
        {
          cdcecm_transmit(priv);
        }
    }
  else
#endif

#ifdef CONFIG_NET_IPv6
  if (hdr->type == HTONS(ETHTYPE_IP6))
    {
      NETDEV_RXIPV6(&priv->netdev);
      ipv6_input(&priv->netdev);

      if (priv->netdev.d_len > 0)
        {
          cdcecm_transmit(priv);
        }
    }
    else
#endif
#ifdef CONFIG_NET_ARP
    if (hdr->type == HTONS(ETHTYPE_ARP))
      {
        arp_input(&priv->netdev);
        NETDEV_RXARP(&priv->netdev);

        if (priv->netdev.d_len > 0)
          {
            cdcecm_transmit(priv);
          }
      }
    else
#endif
      {
        NETDEV_RXDROPPED(&priv->netdev);
      }
}

/****************************************************************************
 * Name: cdcecm_txpoll
 *
 * Description:
 *   The transmitter is available, check if the network has any outgoing
 *   packets ready to send.  This is a callback from devif_poll().
 *   devif_poll() may be called:
 *
 *   1. When the preceding TX packet send is complete,
 *   2. When the preceding TX packet send timesout and the interface is reset
 *   3. During normal TX polling
 *
 * Input Parameters:
 *   dev - Reference to the NuttX driver state structure
 *
 * Returned Value:
 *   OK on success; a negated errno on failure
 *
 * Assumptions:
 *   The network is locked.
 *
 ****************************************************************************/

static int cdcecm_txpoll(FAR struct net_driver_s *dev)
{
  FAR struct usbhost_cdcecm_s *priv =
          (FAR struct usbhost_cdcecm_s *)dev->d_private;

  /* If the polling resulted in data that should be sent out on the network,
   * the field d_len is set to a value > 0.
   */

  DEBUGASSERT(priv->netdev.d_buf == (FAR uint8_t *)priv->txpktbuf);

  nxmutex_lock(&priv->lock);

  /* Send the packet */

  cdcecm_transmit(priv);

  nxmutex_unlock(&priv->lock);

  return 0;
}

/****************************************************************************
 * Name: cdcecm_ifup
 *
 * Description:
 *   NuttX Callback: Bring up the MBIM interface when an IP address is
 *   provided
 *
 * Input Parameters:
 *   dev - Reference to the NuttX driver state structure
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *
 ****************************************************************************/

static int cdcecm_ifup(FAR struct net_driver_s *dev)
{
  FAR struct usbhost_cdcecm_s *priv =
          (FAR struct usbhost_cdcecm_s *)dev->d_private;
  FAR struct usbhost_hubport_s *hport = priv->usbclass.hport;
  int ret;

#ifdef CONFIG_NET_IPv4
  ninfo("Bringing up: %u.%u.%u.%u\n",
        ip4_addr1(dev->d_ipaddr), ip4_addr2(dev->d_ipaddr),
        ip4_addr3(dev->d_ipaddr), ip4_addr4(dev->d_ipaddr));
#endif
#ifdef CONFIG_NET_IPv6
  ninfo("Bringing up: %04x:%04x:%04x:%04x:%04x:%04x:%04x:%04x\n",
        dev->d_ipv6addr[0], dev->d_ipv6addr[1], dev->d_ipv6addr[2],
        dev->d_ipv6addr[3], dev->d_ipv6addr[4], dev->d_ipv6addr[5],
        dev->d_ipv6addr[6], dev->d_ipv6addr[7]);
#endif

  /* Start RX asynch on bulk in */

  priv->bifup = true;

  ret = usbhost_setinterface(priv, 1, 1);
  if (ret < 0)
    {
      return ret;
    }

  ret = cdc_ecm_set_eth_packet_filter(priv, 0x000e);
  if (ret < 0)
    {
      nwarn("cdc ecm packet filter set failed: %d\n", ret);
      return ret;
    }

  if (priv->bulkin)
    {
      ret = DRVR_ASYNCH(hport->drvr, priv->bulkin,
                        priv->rxnetbuf, CDCECM_NETBUF_SIZE,
                        usbhost_bulkin_callback, priv);
      if (ret < 0)
        {
          uerr("ERROR: DRVR_ASYNCH failed on bulkin: %d\n", ret);
        }
    }
  return ret;
}

/****************************************************************************
 * Name: cdcecm_ifdown
 *
 * Description:
 *   NuttX Callback: Stop the interface.
 *
 * Input Parameters:
 *   dev - Reference to the NuttX driver state structure
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *
 ****************************************************************************/

static int cdcecm_ifdown(FAR struct net_driver_s *dev)
{
  FAR struct usbhost_cdcecm_s *priv =
          (FAR struct usbhost_cdcecm_s *)dev->d_private;
  irqstate_t flags;

  flags = enter_critical_section();

  /* Mark the device "down" */

  priv->bifup = false;

  leave_critical_section(flags);
  return OK;
}

/****************************************************************************
 * Name: cdcecm_txavail_work
 *
 * Description:
 *   Driver callback invoked when new TX data is available.  This is a
 *   stimulus perform an out-of-cycle poll and, thereby, reduce the TX
 *   latency.
 *
 * Input Parameters:
 *   dev - Reference to the NuttX driver state structure
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   Called in normal user mode
 *
 ****************************************************************************/

static void cdcecm_txavail_work(FAR void *arg)
{
  FAR struct usbhost_cdcecm_s *priv = (FAR struct usbhost_cdcecm_s *)arg;

  net_lock();

  priv->netdev.d_buf = (FAR uint8_t *)priv->txpktbuf;

  if (priv->bifup)
    {
      devif_poll(&priv->netdev, cdcecm_txpoll);
    }

  net_unlock();
}

/****************************************************************************
 * Name: cdcecm_txavail
 *
 * Description:
 *   Driver callback invoked when new TX data is available.  This is a
 *   stimulus perform an out-of-cycle poll and, thereby, reduce the TX
 *   latency.
 *
 * Input Parameters:
 *   dev - Reference to the NuttX driver state structure
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   Called from the network stack with the network locked.
 *
 ****************************************************************************/

static int cdcecm_txavail(FAR struct net_driver_s *dev)
{
  FAR struct usbhost_cdcecm_s *priv =
          (FAR struct usbhost_cdcecm_s *)dev->d_private;

  if (work_available(&priv->txpollwork))
    {
      work_queue(LPWORK, &priv->txpollwork, cdcecm_txavail_work, priv, 0);
    }

  return OK;
}

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: usbhost_cdcecm_initialize
 *
 * Description:
 *   Initialize the USB class driver.  This function should be called
 *   be platform-specific code in order to initialize and register support
 *   for the USB host class device.
 *
 * Input Parameters:
 *   None
 *
 * Returned Value:
 *   On success this function will return zero (OK);  A negated errno value
 *   will be returned on failure.
 *
 ****************************************************************************/

int usbhost_cdcecm_initialize(void)
{
  /* Perform any one-time initialization of the class implementation */

  /* Advertise our availability to support CDC MBIM devices */

  return usbhost_registerclass(&g_cdcecm);
}

#endif
