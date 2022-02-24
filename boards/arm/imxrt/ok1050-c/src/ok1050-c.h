/****************************************************************************
 * boards/arm/imxrt/ok1050-c/src/imxrt1050-evk.h
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

#ifndef __BOARDS_ARM_IMXRT_OK1050_C_SRC_OK1050_C_H
#define __BOARDS_ARM_IMXRT_OK1050_C_SRC_OK1050_C_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <stdint.h>
#include <stdbool.h>

#include <arch/irq.h>
#include <nuttx/irq.h>

#include "imxrt_gpio.h"
#include "imxrt_iomuxc.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Automounter defaults */

#ifdef OK1050_C_SDHC_AUTOMOUNT

#  ifndef CONFIG_OK1050_C_SDHC_AUTOMOUNT_FSTYPE
#    define CONFIG_OK1050_C_SDHC_AUTOMOUNT_FSTYPE "vfat"
#  endif

#  ifndef CONFIG_OK1050_C_SDHC_AUTOMOUNT_BLKDEV
#    define CONFIG_OK1050_C_SDHC_AUTOMOUNT_BLKDEV "/dev/mmcsd0"
#  endif

#  ifndef CONFIG_OK1050_C_SDHC_AUTOMOUNT_MOUNTPOINT
#    define CONFIG_OK1050_C_SDHC_AUTOMOUNT_MOUNTPOINT "/mnt/sdcard"
#  endif

#  ifndef CONFIG_OK1050_C_SDHC_AUTOMOUNT_DDELAY
#    define CONFIG_OK1050_C_SDHC_AUTOMOUNT_DDELAY 1000
#  endif

#  ifndef CONFIG_OK1050_C_SDHC_AUTOMOUNT_UDELAY
#    define CONFIG_OK1050_C_SDHC_AUTOMOUNT_UDELAY 2000
#  endif
#endif /* HAVE_SDHC_AUTOMOUNTER */

#ifdef HAVE_USB_AUTOMOUNTER

#  ifndef CONFIG_OK1050_C_USB_AUTOMOUNT_FSTYPE
#    define CONFIG_OK1050_C_USB_AUTOMOUNT_FSTYPE "vfat"
#  endif

#  ifndef CONFIG_OK1050_C_USB_AUTOMOUNT_BLKDEV
#    define CONFIG_OK1050_C_USB_AUTOMOUNT_BLKDEV "/dev/sd"
#  endif

#  ifndef CONFIG_OK1050_C_USB_AUTOMOUNT_MOUNTPOINT
#    define CONFIG_OK1050_C_USB_AUTOMOUNT_MOUNTPOINT "/mnt/usb"
#  endif

#  ifndef CONFIG_OK1050_C_USB_AUTOMOUNT_NUM_BLKDEV
#    define CONFIG_OK1050_C_USB_AUTOMOUNT_NUM_BLKDEV 4
#  endif

#  ifndef CONFIG_OK1050_C_USB_AUTOMOUNT_UDELAY
#    define CONFIG_OK1050_C_USB_AUTOMOUNT_UDELAY 2000
#  endif
#endif /* HAVE_USB_AUTOMOUNTER */

/* LEDs */

#define GPIO_LED (GPIO_OUTPUT | IOMUX_LED_DEFAULT | \
                  GPIO_OUTPUT_ZERO | GPIO_PORT1 | GPIO_PIN2) /* AD_BO_02 */

/* Buttons ******************************************************************/

#define GPIO_SW8 (GPIO_INTERRUPT | GPIO_INT_FALLINGEDGE | \
                  IOMUX_SW_DEFAULT |                      \
                  GPIO_PORT5 | GPIO_PIN0 |) /* WAKEUP */

/* Test Pins ****************************************************************/

#define BOARD_NGPIOIN 0  /* Amount of GPIO Input pins */
#define BOARD_NGPIOOUT 4 /* Amount of GPIO Output pins */
#define BOARD_NGPIOINT 0 /* Amount of GPIO Input w/ Interruption pins */

#define GPIO_GOUT1 (GPIO_OUTPUT | GPIO_OUTPUT_ZERO | IOMUX_GOUT_DEFAULT | \
                    GPIO_PORT1 | GPIO_PIN19)

#define GPIO_GOUT2 (GPIO_OUTPUT | GPIO_OUTPUT_ZERO | IOMUX_GOUT_DEFAULT | \
                    GPIO_PIN18 | GPIO_PORT1)

#define GPIO_GOUT3 (GPIO_OUTPUT | GPIO_OUTPUT_ZERO | IOMUX_GOUT_DEFAULT | \
                    GPIO_PIN10 | GPIO_PORT1)

#define GPIO_GOUT4 (GPIO_OUTPUT | GPIO_OUTPUT_ZERO | IOMUX_GOUT_DEFAULT | \
                    GPIO_PIN9 | GPIO_PORT1)

/* Backlight */

#define GPIO_LCD_BL (GPIO_OUTPUT | GPIO_OUTPUT_ZERO | GPIO_PORT2 | \
                     GPIO_PIN31 | IOMUX_LCD_BL_DEFAULT)

/* Ethernet */

#define GPIO_ENET_INT (IOMUX_ENET_INT_DEFAULT | \
                       GPIO_PORT1 | GPIO_PIN10) /* AD_B0_10 */
#define GPIO_ENET_IRQ IMXRT_IRQ_GPIO1_10
#define GPIO_ENET_RST (GPIO_OUTPUT | GPIO_OUTPUT_ZERO | \
                       GPIO_PORT1 | GPIO_PIN9 | IOMUX_ENET_RST_DEFAULT)

/* LPSPI CS: */

#define IOMUX_LPSPI3_CS (IOMUX_SLEW_FAST | IOMUX_DRIVE_50OHM |     \
                         IOMUX_SPEED_MEDIUM | IOMUX_PULL_UP_100K | \
                         _IOMUX_PULL_ENABLE)
#define GPIO_LPSPI3_CS (GPIO_OUTPUT | GPIO_OUTPUT_ONE | \
                        GPIO_PORT1 | GPIO_PIN3 | IOMUX_LPSPI3_CS) /* GPIO_AD_B0_03 */

/* LPSPI1 CS:  GPIO_SD_B0_01 */

#define IOMUX_LPSPI1_CS (IOMUX_SLEW_FAST | IOMUX_DRIVE_50OHM |     \
                         IOMUX_SPEED_MEDIUM | IOMUX_PULL_UP_100K | \
                         _IOMUX_PULL_ENABLE)
#define GPIO_LPSPI1_CS (GPIO_OUTPUT | GPIO_OUTPUT_ONE | \
                        GPIO_PORT3 | GPIO_PIN13 | IOMUX_LPSPI1_CS)

#define IOMUX_MMCSD_EN (IOMUX_SLEW_FAST | IOMUX_DRIVE_50OHM |     \
                        IOMUX_SPEED_MEDIUM | IOMUX_PULL_UP_100K | \
                        _IOMUX_PULL_ENABLE)
#define GPIO_MMCSD_EN (GPIO_OUTPUT | GPIO_OUTPUT_ZERO | \
                       GPIO_PORT3 | GPIO_PIN2 | IOMUX_MMCSD_EN)

#define GPIO_USBOTG_ID (GPIO_USB_OTG1_ID_2 | IOMUX_USBOTG_ID_DEFAULT)

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

#ifndef __ASSEMBLY__

/****************************************************************************
 * Public Functions Definitions
 ****************************************************************************/

/****************************************************************************
 * Name: imxrt_bringup
 *
 * Description:
 *   Bring up board features
 *
 ****************************************************************************/

#if defined(CONFIG_BOARDCTL) || defined(CONFIG_BOARD_LATE_INITIALIZE)
int imxrt_bringup(void);
#endif

/****************************************************************************
 * Name: imxrt_spidev_initialize
 *
 * Description:
 *   Called to configure SPI chip select GPIO pins for the i.MXRT1050 EVK.
 *
 ****************************************************************************/

void imxrt_spidev_initialize(void);

/****************************************************************************
 * Name: imxrt_mmcsd_spi_initialize
 *
 * Description:
 *   Initialize SPI-based SD card and card detect thread.
 *
 ****************************************************************************/

#ifdef CONFIG_MMCSD_SPI
int imxrt_mmcsd_spi_initialize(int minor);
#endif

/****************************************************************************
 * Name: imxrt_autoled_initialize
 *
 * Description:
 *   Initialize NuttX-controlled LED logic
 *
 * Input Parameters:
 *   None
 *
 * Returned Value:
 *   None
 *
 ****************************************************************************/

#ifdef CONFIG_ARCH_LEDS
void imxrt_autoled_initialize(void);
#endif

#ifdef CONFIG_DEV_GPIO

/****************************************************************************
 * Name: imxrt_gpio_initialize
 *
 * Description:
 *   Initialize GPIO drivers for use with /apps/examples/gpio
 *
 ****************************************************************************/

int imxrt_gpio_initialize(void);
#endif

#ifdef CONFIG_IMXRT_FLEXCAN
int imxrt_can_setup(void);
#endif

#ifdef CONFIG_MMCSD
int imxrt_mmcsd_initialize(void);
#endif

#ifdef CONFIG_ANALOG
int imxrt_adc_initialize(void);
#endif

#ifdef CONFIG_USBHOST
int imxrt_usbhost_initialize(void);
#endif

/****************************************************************************
 * Name:  k28_automount_initialize
 *
 * Description:
 *   Configure auto-mounter for the configured SDHC slot
 *
 * Input Parameters:
 *   None
 *
 *  Returned Value:
 *    None
 *
 ****************************************************************************/

#ifdef CONFIG_FS_AUTOMOUNTER
int imxrt_sdhc_automount_event(void *arg);
void imxrt_automount_initialize(void);
#endif

#ifdef CONFIG_IMXRT_FLEXSPI
int imxrt_flexspi_nor_initialize(void);
#endif

#endif /* __ASSEMBLY__ */
#endif /* __BOARDS_ARM_IMXRT_OK1050_C_SRC_OK1050_C_H */
