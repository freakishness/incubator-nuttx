/****************************************************************************
 * boards/arm/imxrt/ok1050-c/src/imxrt_bringup.c
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

#include <sys/types.h>
#include <debug.h>

#include <syslog.h>
#include <nuttx/fs/fs.h>
#include <nuttx/i2c/i2c_master.h>
#include <nuttx/video/fb.h>
#include <imxrt_lpi2c.h>
#include <imxrt_lpspi.h>
#include <imxrt_enet.h>
#include <imxrt_pit.h>
#include <nuttx/drivers/ramdisk.h>
#include <sys/mount.h>
#include <stdio.h>
#include <nuttx/binfmt/symtab.h>

#include <nuttx/timers/rx8010.h>

#include "imxrt_romfs.h"

#ifdef CONFIG_IMXRT_USDHC
#include "imxrt_usdhc.h"
#endif

#include "ok1050-c.h"

#include <arch/board/board.h> /* Must always be included last */

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Checking needed by MMC/SDCard */

#ifdef CONFIG_NSH_MMCSDMINOR
#define MMCSD_MINOR CONFIG_NSH_MMCSDMINOR
#else
#define MMCSD_MINOR 0
#endif

const struct symtab_s g_symtab[] =
{
  {"printf", (FAR void *)printf}
};
int g_nsymbols = 1;
/****************************************************************************
 * Private Functions
 ****************************************************************************/

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: imxrt_bringup
 *
 * Description:
 *   Bring up board features
 *
 ****************************************************************************/

int imxrt_bringup(void)
{
  int ret;

#ifdef CONFIG_FS_PROCFS
  /* Mount the procfs file system */

  ret = nx_mount(NULL, "/proc", "procfs", 0, NULL);
  if (ret < 0)
    {
      syslog(LOG_ERR, "ERROR: Failed to mount procfs at /proc: %d\n", ret);
    }

#endif

#ifdef CONFIG_FS_BINFS
  ret = nx_mount(NULL, "/bin", "binfs", 0, NULL);
  if (ret < 0)
    {
        syslog(LOG_ERR, "ERROR: Failed to mount binfs at /bin: %d", ret);
    }

#endif

#ifdef CONFIG_MMCSD
  /* Initialize SDHC-base MMC/SD card support */

  imxrt_mmcsd_initialize();
#endif

#ifdef CONFIG_MMCSD_SPI
  /* Initialize SPI-based MMC/SD card support */

  imxrt_spidev_initialize();

  ret = imxrt_mmcsd_spi_initialize(MMCSD_MINOR);
  if (ret < 0)
    {
      syslog(LOG_ERR, "ERROR: Failed to initialize SD slot %d: %d\n", ret);
    }

#endif

#ifdef CONFIG_DEV_GPIO
  ret = imxrt_gpio_initialize();
  if (ret < 0)
    {
      syslog(LOG_ERR, "Failed to initialize GPIO Driver: %d\n", ret);
      return ret;
    }

#endif

#if defined(CONFIG_IMXRT_ENET) && defined(CONFIG_NETDEV_LATEINIT)
  ret = imxrt_netinitialize(0);
#endif

#ifdef CONFIG_IMXRT_FLEXCAN
  ret = imxrt_can_setup();
  if (ret < 0)
    {
      syslog(LOG_ERR, "ERROR: imxrt_can_setup() failed: %d\n", ret);
      return ret;
    }

#endif

#ifdef CONFIG_IMXRT_ADC
  ret = imxrt_adc_initialize();
  if (ret < 0)
    {
      syslog(LOG_ERR, "ERROR: imxrt_adc_initialize() failed: %d\n", ret);
      return ret;
    }
#endif

#ifdef CONFIG_IMXRT_PIT
  imxrt_pit_initialize(0);
#endif

#ifdef CONFIG_VIDEO_FB
  /* Initialize and register the framebuffer driver */

  ret = fb_register(0, 0);
  if (ret < 0)
    {
      syslog(LOG_ERR, "ERROR: fb_register() failed: %d\n", ret);
    }

#endif

#ifdef CONFIG_CDCACM
  ret = cdcacm_initialize(0, NULL);
#endif

#ifdef CONFIG_USBMONITOR

  /* Start the USB Monitor */

  ret = usbmonitor_start();
  if (ret != OK)
    {
      syslog(LOG_ERR, "ERROR: Failed to start USB monitor: %d\n", ret);
    }

#endif

#ifdef CONFIG_USBHOST
  ret = imxrt_usbhost_initialize();
#endif

#ifdef IMXRT_ROMFS
    ret = imxrt_romfs_initialize();
  if (ret < 0)
    {
      serr("ERROR: Failed to mount romfs at %s: %d\n",
           CONFIG_IMXRT_ROMFS_MOUNTPOINT, ret);
    }
#endif

#ifdef CONFIG_IMXRT_FLEXSPI
    ret = imxrt_flexspi_nor_initialize();
  if (ret < 0)
    {
      syslog(LOG_ERR,
              "ERROR: imxrt_flexspi_nor_initialize failed: %d\n", ret);
    }
#endif /* CONFIG_IMXRT_FLEXSPI */

#ifdef CONFIG_RTC_RX8010SJ
  imxrt_rx8010_init(1);
#endif

  UNUSED(ret);
  return OK;
}
