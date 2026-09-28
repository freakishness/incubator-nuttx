/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_usb_hs_wrpctrl.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_USB_HS_WRPCTRL_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_USB_HS_WRPCTRL_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_USB_HS_WRPCTRL_USBHS_WRPCTRL_OFFSET         0x0 /* USBHS_WRPCTRL
                                                             */
#define N32_USB_HS_WRPCTRL_USBHS_WRPCFG_OFFSET          0x4 /* USBHS_WRPCFG */

#define N32_USB_HS1_WRP_USBHS_WRPCTRL                   (N32_USB_HS1_WRP_BASE \
                                                         +                    \
                                                         N32_USB_HS_WRPCTRL_USBHS_WRPCTRL_OFFSET)
#define N32_USB_HS1_WRP_USBHS_WRPCFG                    (N32_USB_HS1_WRP_BASE \
                                                         +                    \
                                                         N32_USB_HS_WRPCTRL_USBHS_WRPCFG_OFFSET)

#define N32_USB_HS2_WRP_USBHS_WRPCTRL                   (N32_USB_HS2_WRP_BASE \
                                                         +                    \
                                                         N32_USB_HS_WRPCTRL_USBHS_WRPCTRL_OFFSET)
#define N32_USB_HS2_WRP_USBHS_WRPCFG                    (N32_USB_HS2_WRP_BASE \
                                                         +                    \
                                                         N32_USB_HS_WRPCTRL_USBHS_WRPCFG_OFFSET)

/******** Bit definition for USBHS_WRPCTRL register  ********/
#define USB_HS_WRPCTRL_USBHS_WRPCTRL_PINDETEN           (1 << 16)   /*
                                                                     * PINDETEN
                                                                     */
#define USB_HS_WRPCTRL_USBHS_WRPCTRL_VBRMDETEN          (1 << 17)   /*
                                                                     * VBRMDETEN
                                                                     */
#define USB_HS_WRPCTRL_USBHS_WRPCTRL_HDISCEN            (1 << 18)   /* HDISCEN
                                                                     */
#define USB_HS_WRPCTRL_USBHS_WRPCTRL_IDDETEN            (1 << 19)   /* IDDETEN
                                                                     */
#define USB_HS_WRPCTRL_USBHS_WRPCTRL_SUSPWKEN           (1 << 20)   /*
                                                                     * SUSPWKEN
                                                                     */
#define USB_HS_WRPCTRL_USBHS_WRPCTRL_LSCHGEN            (1 << 21)   /* LSCHGEN
                                                                     */

/******** Bit definition for USBHS_WRPCFG register  ********/
#define USB_HS_WRPCTRL_USBHS_WRPCFG_PHYCLKSEL_SHIFT     (0)
#define USB_HS_WRPCTRL_USBHS_WRPCFG_PHYCLKSEL_MASK      (0x7 << \
          USB_HS_WRPCTRL_USBHS_WRPCFG_PHYCLKSEL_SHIFT)              /*
                                                                     * PHYCLKSEL
                                                                     */
#define USB_HS_WRPCTRL_USBHS_WRPCFG_PLLEN               (1 << 3)    /* PLLEN
                                                                     */
#define USB_HS_WRPCTRL_USBHS_WRPCFG_IDEN                (1 << 9)    /* IDEN */
#define USB_HS_WRPCTRL_USBHS_WRPCFG_LSEN                (1 << 10)   /* LSEN */
#define USB_HS_WRPCTRL_USBHS_WRPCFG_SOFDEN              (1 << 11)   /* SOFDEN
                                                                     */
#define USB_HS_WRPCTRL_USBHS_WRPCFG_IDSIG               (1 << 12)   /* IDSIG
                                                                     */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_USB_HS_WRPCTRL_H */
