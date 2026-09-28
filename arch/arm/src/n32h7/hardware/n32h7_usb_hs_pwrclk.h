/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_usb_hs_pwrclk.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_USB_HS_PWRCLK_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_USB_HS_PWRCLK_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_USB_HS_PWRCLK_USBHS_PWRCTRL_OFFSET      0x0 /* USBHS_PWRCTRL */
#define N32_USB_HS_PWRCLK_USBHS_PWRCTRL1_OFFSET     0x4 /* USBHS_PWRCTRL1 */

#define N32_USB_HS1_PWRCLK_USBHS_PWRCTRL            (N32_USB_HS1_PWRCLK_BASE + \
                                                     N32_USB_HS_PWRCLK_USBHS_PWRCTRL_OFFSET)
#define N32_USB_HS1_PWRCLK_USBHS_PWRCTRL1           (N32_USB_HS1_PWRCLK_BASE + \
                                                     N32_USB_HS_PWRCLK_USBHS_PWRCTRL1_OFFSET)

#define N32_USB_HS2_PWRCLK_USBHS_PWRCTRL            (N32_USB_HS2_PWRCLK_BASE + \
                                                     N32_USB_HS_PWRCLK_USBHS_PWRCTRL_OFFSET)
#define N32_USB_HS2_PWRCLK_USBHS_PWRCTRL1           (N32_USB_HS2_PWRCLK_BASE + \
                                                     N32_USB_HS_PWRCLK_USBHS_PWRCTRL1_OFFSET)

/******** Bit definition for USBHS_PWRCTRL register  ********/
#define USB_HS_PWRCLK_USBHS_PWRCTRL_PHYSTP          (1 << 0)    /* PHYSTP */
#define USB_HS_PWRCLK_USBHS_PWRCTRL_GATEHCLK        (1 << 1)    /* GATEHCLK */
#define USB_HS_PWRCLK_USBHS_PWRCTRL_PDMRST          (1 << 3)    /* PDMRST */
#define USB_HS_PWRCLK_USBHS_PWRCTRL_PHYSLEEP        (1 << 6)    /* PHYSLEEP */
#define USB_HS_PWRCLK_USBHS_PWRCTRL_DSLEEP          (1 << 7)    /* DSLEEP */

/******** Bit definition for USBHS_PWRCTRL1 register  ********/
#define USB_HS_PWRCLK_USBHS_PWRCTRL1_GATEN          (1 << 0) /* GATEN */
#define USB_HS_PWRCLK_USBHS_PWRCTRL1_CNT_SHIFT      (1)
#define USB_HS_PWRCLK_USBHS_PWRCTRL1_CNT_MASK       (0x3 << \
  USB_HS_PWRCLK_USBHS_PWRCTRL1_CNT_SHIFT)                       /* CNT */
#define USB_HS_PWRCLK_USBHS_PWRCTRL1_RAMCLKEN       (1 << 3)    /* RAMCLKEN */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_USB_HS_PWRCLK_H */
