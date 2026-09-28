/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_usb_hs_global.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_USB_HS_GLOBAL_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_USB_HS_GLOBAL_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_USB_HS_Global_USBHS_GCTRLSTS_OFFSET                 0x0     /*
                                                                         * USBHS
                                                                         * global
                                                                         * control
                                                                         * and
                                                                         * status
                                                                         * register
                                                                         */
#define N32_USB_HS_Global_USBHS_GAHBCFG_OFFSET                  0x8     /*
                                                                         * USBHS_GAHBCFG
                                                                         */
#define N32_USB_HS_Global_USBHS_GCFG_OFFSET                     0xC     /*
                                                                         * USBHS_GCFG
                                                                         */
#define N32_USB_HS_Global_USBHS_GRSTCTRL_OFFSET                 0x10    /*
                                                                         * USBHS_GRSTCTRL
                                                                         */
#define N32_USB_HS_Global_USBHS_GINTSTS_OFFSET                  0x14    /*
                                                                         * USBHS_GINTSTS
                                                                         */
#define N32_USB_HS_Global_USBHS_GINTEN_OFFSET                   0x18    /*
                                                                         * USBHS_GINTEN
                                                                         */
#define N32_USB_HS_Global_USBHS_GRXSTS_OFFSET                   0x1C    /*
                                                                         * USBHS_GRXSTS
                                                                         */
#define N32_USB_HS_Global_USBHS_GRXSTSP_OFFSET                  0x20    /*
                                                                         * USBHS_GRXSTSP
                                                                         */
#define N32_USB_HS_Global_USBHS_GRXFSIZ_OFFSET                  0x24    /*
                                                                         * USBHS_GRXFSIZ
                                                                         */
#define N32_USB_HS_Global_USBHS_GNPTXFSIZ_OFFSET                0x28    /*
                                                                         * USBHS_GNPTXFSIZ
                                                                         */
#define N32_USB_HS_Global_USBHS_DINEP0TXFSIZ_OFFSET             0x28    /*
                                                                         * EUSBHS_DINEP0TXFSIZ
                                                                         */
#define N32_USB_HS_Global_USBHS_GNPTXFSTS_OFFSET                0x2C    /*
                                                                         * USBHS_GNPTXFSTS
                                                                         */
#define N32_USB_HS_Global_USBHS_CID_OFFSET                      0x3C    /*
                                                                         * USBHS_CID
                                                                         */
#define N32_USB_HS_Global_USBHS_GPD_OFFSET                      0x58    /*
                                                                         * USBHS_GPD
                                                                         */
#define N32_USB_HS_Global_USBHS_HPTXFSIZ_OFFSET                 0x100   /*
                                                                         * USBHS_HPTXFSIZ
                                                                         */
#define N32_USB_HS_Global_USBHS_DINEPPTXFSIZ1_OFFSET            0x104   /*
                                                                         * USBHS_DINEPPTXFSIZ1
                                                                         */
#define N32_USB_HS_Global_USBHS_DINEPPTXFSIZ2_OFFSET            0x108   /*
                                                                         * USBHS_DINEPPTXFSIZ2
                                                                         */
#define N32_USB_HS_Global_USBHS_DINEPPTXFSIZ3_OFFSET            0x10C   /*
                                                                         * USBHS_DINEPPTXFSIZ3
                                                                         */
#define N32_USB_HS_Global_USBHS_DINEPPTXFSIZ4_OFFSET            0x110   /*
                                                                         * USBHS_DINEPPTXFSIZ4
                                                                         */
#define N32_USB_HS_Global_USBHS_DINEPPTXFSIZ5_OFFSET            0x114   /*
                                                                         * USBHS_DINEPPTXFSIZ5
                                                                         */
#define N32_USB_HS_Global_USBHS_DINEPPTXFSIZ6_OFFSET            0x118   /*
                                                                         * USBHS_DINEPPTXFSIZ6
                                                                         */
#define N32_USB_HS_Global_USBHS_DINEPPTXFSIZ7_OFFSET            0x11C   /*
                                                                         * USBHS_DINEPPTXFSIZ7
                                                                         */
#define N32_USB_HS_Global_USBHS_DINEPPTXFSIZ8_OFFSET            0x120   /*
                                                                         * USBHS_DINEPPTXFSIZ8
                                                                         */

#define N32_USB_HS1_Global_USBHS_GCTRLSTS                       ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GCTRLSTS_OFFSET)
#define N32_USB_HS1_Global_USBHS_GAHBCFG                        ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GAHBCFG_OFFSET)
#define N32_USB_HS1_Global_USBHS_GCFG                           ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GCFG_OFFSET)
#define N32_USB_HS1_Global_USBHS_GRSTCTRL                       ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GRSTCTRL_OFFSET)
#define N32_USB_HS1_Global_USBHS_GINTSTS                        ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GINTSTS_OFFSET)
#define N32_USB_HS1_Global_USBHS_GINTEN                         ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GINTEN_OFFSET)
#define N32_USB_HS1_Global_USBHS_GRXSTS                         ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GRXSTS_OFFSET)
#define N32_USB_HS1_Global_USBHS_GRXSTSP                        ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GRXSTSP_OFFSET)
#define N32_USB_HS1_Global_USBHS_GRXFSIZ                        ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GRXFSIZ_OFFSET)
#define N32_USB_HS1_Global_USBHS_GNPTXFSIZ                      ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GNPTXFSIZ_OFFSET)
#define N32_USB_HS1_Global_USBHS_DINEP0TXFSIZ                   ( \
          N32_USB_HS1_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEP0TXFSIZ_OFFSET)
#define N32_USB_HS1_Global_USBHS_GNPTXFSTS                      ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GNPTXFSTS_OFFSET)
#define N32_USB_HS1_Global_USBHS_CID                            ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_CID_OFFSET)
#define N32_USB_HS1_Global_USBHS_GPD                            ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_GPD_OFFSET)
#define N32_USB_HS1_Global_USBHS_HPTXFSIZ                       ( \
          N32_USB_HS1_Global_BASE + N32_USB_HS_Global_USBHS_HPTXFSIZ_OFFSET)
#define N32_USB_HS1_Global_USBHS_DINEPPTXFSIZ1                  ( \
          N32_USB_HS1_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ1_OFFSET)
#define N32_USB_HS1_Global_USBHS_DINEPPTXFSIZ2                  ( \
          N32_USB_HS1_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ2_OFFSET)
#define N32_USB_HS1_Global_USBHS_DINEPPTXFSIZ3                  ( \
          N32_USB_HS1_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ3_OFFSET)
#define N32_USB_HS1_Global_USBHS_DINEPPTXFSIZ4                  ( \
          N32_USB_HS1_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ4_OFFSET)
#define N32_USB_HS1_Global_USBHS_DINEPPTXFSIZ5                  ( \
          N32_USB_HS1_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ5_OFFSET)
#define N32_USB_HS1_Global_USBHS_DINEPPTXFSIZ6                  ( \
          N32_USB_HS1_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ6_OFFSET)
#define N32_USB_HS1_Global_USBHS_DINEPPTXFSIZ7                  ( \
          N32_USB_HS1_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ7_OFFSET)
#define N32_USB_HS1_Global_USBHS_DINEPPTXFSIZ8                  ( \
          N32_USB_HS1_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ8_OFFSET)

#define N32_USB_HS2_Global_USBHS_GCTRLSTS                       ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GCTRLSTS_OFFSET)
#define N32_USB_HS2_Global_USBHS_GAHBCFG                        ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GAHBCFG_OFFSET)
#define N32_USB_HS2_Global_USBHS_GCFG                           ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GCFG_OFFSET)
#define N32_USB_HS2_Global_USBHS_GRSTCTRL                       ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GRSTCTRL_OFFSET)
#define N32_USB_HS2_Global_USBHS_GINTSTS                        ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GINTSTS_OFFSET)
#define N32_USB_HS2_Global_USBHS_GINTEN                         ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GINTEN_OFFSET)
#define N32_USB_HS2_Global_USBHS_GRXSTS                         ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GRXSTS_OFFSET)
#define N32_USB_HS2_Global_USBHS_GRXSTSP                        ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GRXSTSP_OFFSET)
#define N32_USB_HS2_Global_USBHS_GRXFSIZ                        ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GRXFSIZ_OFFSET)
#define N32_USB_HS2_Global_USBHS_GNPTXFSIZ                      ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GNPTXFSIZ_OFFSET)
#define N32_USB_HS2_Global_USBHS_DINEP0TXFSIZ                   ( \
          N32_USB_HS2_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEP0TXFSIZ_OFFSET)
#define N32_USB_HS2_Global_USBHS_GNPTXFSTS                      ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GNPTXFSTS_OFFSET)
#define N32_USB_HS2_Global_USBHS_CID                            ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_CID_OFFSET)
#define N32_USB_HS2_Global_USBHS_GPD                            ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_GPD_OFFSET)
#define N32_USB_HS2_Global_USBHS_HPTXFSIZ                       ( \
          N32_USB_HS2_Global_BASE + N32_USB_HS_Global_USBHS_HPTXFSIZ_OFFSET)
#define N32_USB_HS2_Global_USBHS_DINEPPTXFSIZ1                  ( \
          N32_USB_HS2_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ1_OFFSET)
#define N32_USB_HS2_Global_USBHS_DINEPPTXFSIZ2                  ( \
          N32_USB_HS2_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ2_OFFSET)
#define N32_USB_HS2_Global_USBHS_DINEPPTXFSIZ3                  ( \
          N32_USB_HS2_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ3_OFFSET)
#define N32_USB_HS2_Global_USBHS_DINEPPTXFSIZ4                  ( \
          N32_USB_HS2_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ4_OFFSET)
#define N32_USB_HS2_Global_USBHS_DINEPPTXFSIZ5                  ( \
          N32_USB_HS2_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ5_OFFSET)
#define N32_USB_HS2_Global_USBHS_DINEPPTXFSIZ6                  ( \
          N32_USB_HS2_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ6_OFFSET)
#define N32_USB_HS2_Global_USBHS_DINEPPTXFSIZ7                  ( \
          N32_USB_HS2_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ7_OFFSET)
#define N32_USB_HS2_Global_USBHS_DINEPPTXFSIZ8                  ( \
          N32_USB_HS2_Global_BASE +                               \
          N32_USB_HS_Global_USBHS_DINEPPTXFSIZ8_OFFSET)

/******** Bit definition for USBHS_GCTRLSTS register  ********/
#define USB_HS_Global_USBHS_GCTRLSTS_VBVALOVEN                  (1 << 2)    /*
                                                                             * VBVALOVEN
                                                                             */
#define USB_HS_Global_USBHS_GCTRLSTS_VBVALOVAL                  (1 << 3)    /*
                                                                             * VBVALOVAL
                                                                             */
#define USB_HS_Global_USBHS_GCTRLSTS_AVALOVEN                   (1 << 4)    /*
                                                                             * AVALOVEN
                                                                             */
#define USB_HS_Global_USBHS_GCTRLSTS_AVALOVAL                   (1 << 5)    /*
                                                                             * AVALOVAL
                                                                             */
#define USB_HS_Global_USBHS_GCTRLSTS_BVALOVEN                   (1 << 6)    /*
                                                                             * BVALOVEN
                                                                             */
#define USB_HS_Global_USBHS_GCTRLSTS_BVALOVAL                   (1 << 7)    /*
                                                                             * BVALOVAL
                                                                             */
#define USB_HS_Global_USBHS_GCTRLSTS_IDSTS                      (1 << 16)   /*
                                                                             * IDSTS
                                                                             */
#define USB_HS_Global_USBHS_GCTRLSTS_DETIM                      (1 << 17)   /*
                                                                             * DETIM
                                                                             */
#define USB_HS_Global_USBHS_GCTRLSTS_ASVLD                      (1 << 18)   /*
                                                                             * ASVLD
                                                                             */
#define USB_HS_Global_USBHS_GCTRLSTS_BSVLD                      (1 << 19)   /*
                                                                             * BSVLD
                                                                             */
#define USB_HS_Global_USBHS_GCTRLSTS_CMODE                      (1 << 21)   /*
                                                                             * CMODE
                                                                             */

/******** Bit definition for USBHS_GAHBCFG register  ********/
#define USB_HS_Global_USBHS_GAHBCFG_GINTEN                      (1 << 0) /*
                                                                          * GINTEN
                                                                          */
#define USB_HS_Global_USBHS_GAHBCFG_BURSTTYP_SHIFT              (1)
#define USB_HS_Global_USBHS_GAHBCFG_BURSTTYP_MASK               (0xF << \
          USB_HS_Global_USBHS_GAHBCFG_BURSTTYP_SHIFT)                       /*
                                                                             * BURSTTYP
                                                                             */
#define USB_HS_Global_USBHS_GAHBCFG_DMAEN                       (1 << 5)    /*
                                                                             * DMAEN
                                                                             */
#define USB_HS_Global_USBHS_GAHBCFG_NPTXFETH                    (1 << 7)    /*
                                                                             * NPTXFETH
                                                                             */
#define USB_HS_Global_USBHS_GAHBCFG_PTXFETH                     (1 << 8)    /*
                                                                             * PTXFETH
                                                                             */

/******** Bit definition for USBHS_GCFG register  ********/
#define USB_HS_Global_USBHS_GCFG_TOCAL_SHIFT                    (0)
#define USB_HS_Global_USBHS_GCFG_TOCAL_MASK                     (0x7 << \
          USB_HS_Global_USBHS_GCFG_TOCAL_SHIFT)                             /*
                                                                             * TOCAL
                                                                             */
#define USB_HS_Global_USBHS_GCFG_PHYIF                          (1 << 3)    /*
                                                                             * PHYIF
                                                                             */
#define USB_HS_Global_USBHS_GCFG_PHYSEL                         (1 << 6)    /*
                                                                             * PHYSEL
                                                                             */
#define USB_HS_Global_USBHS_GCFG_TRDTIM_SHIFT                   (10)
#define USB_HS_Global_USBHS_GCFG_TRDTIM_MASK                    (0xF << \
          USB_HS_Global_USBHS_GCFG_TRDTIM_SHIFT)                            /*
                                                                             * TRDTIM
                                                                             */
#define USB_HS_Global_USBHS_GCFG_FHMODE                         (1 << 29)   /*
                                                                             * FHMODE
                                                                             */
#define USB_HS_Global_USBHS_GCFG_FDMODE                         (1 << 30)   /*
                                                                             * FDMODE
                                                                             */

/******** Bit definition for USBHS_GRSTCTRL register  ********/
#define USB_HS_Global_USBHS_GRSTCTRL_CSRST                      (1 << 0)    /*
                                                                             * CSRST
                                                                             */
#define USB_HS_Global_USBHS_GRSTCTRL_PFSSRST                    (1 << 1)    /*
                                                                             * PFSSRST
                                                                             */
#define USB_HS_Global_USBHS_GRSTCTRL_HFCRST                     (1 << 2)    /*
                                                                             * HFCRST
                                                                             */
#define USB_HS_Global_USBHS_GRSTCTRL_RXFFLSH                    (1 << 4)    /*
                                                                             * RXFFLSH
                                                                             */
#define USB_HS_Global_USBHS_GRSTCTRL_TXFFLSH                    (1 << 5)    /*
                                                                             * TXFFLSH
                                                                             */
#define USB_HS_Global_USBHS_GRSTCTRL_TXFNUM_SHIFT               (6)
#define USB_HS_Global_USBHS_GRSTCTRL_TXFNUM_MASK                (0x1F << \
          USB_HS_Global_USBHS_GRSTCTRL_TXFNUM_SHIFT)                        /*
                                                                             * TXFNUM
                                                                             */
#define USB_HS_Global_USBHS_GRSTCTRL_SRSTDNE                    (1 << 29)   /*
                                                                             * SRSTDNE
                                                                             */
#define USB_HS_Global_USBHS_GRSTCTRL_DMAREQ                     (1 << 30)   /*
                                                                             * DMAREQ
                                                                             */
#define USB_HS_Global_USBHS_GRSTCTRL_AHBIDLE                    (1 << 31)   /*
                                                                             * AHBIDLE
                                                                             */

/******** Bit definition for USBHS_GINTSTS register  ********/
#define USB_HS_Global_USBHS_GINTSTS_CMODE                       (1 << 0)    /*
                                                                             * CMODE
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_MODMISIF                    (1 << 1)    /*
                                                                             * MODMISIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_SOFIF                       (1 << 3)    /*
                                                                             * SOFIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_RXFNEIF                     (1 << 4)    /*
                                                                             * RXFNEIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_NPTXFEIF                    (1 << 5)    /*
                                                                             * NPTXFEIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_GINNPNAKEIF                 (1 << 6)    /*
                                                                             * GINNPNAKEIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_GOUTNAKEIF                  (1 << 7)    /*
                                                                             * GOUTNAKEIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_ESUSPIF                     (1 << 10)   /*
                                                                             * ESUSPIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_USBSUSPIF                   (1 << 11)   /*
                                                                             * USBSUSPIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_USBRSTIF                    (1 << 12)   /*
                                                                             * USBRSTIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_ENUMDIF                     (1 << 13)   /*
                                                                             * ENUMDIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_ISOUTPDIF                   (1 << 14)   /*
                                                                             * ISOUTPDIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_EOPFIF                      (1 << 15)   /*
                                                                             * EOPFIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_INEPIF                      (1 << 18)   /*
                                                                             * INEPIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_OUTEPIF                     (1 << 19)   /*
                                                                             * OUTEPIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_ISOINCIF                    (1 << 20)   /*
                                                                             * ISOINCIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_PTNCIF_ISOUTNCIF            (1 << 21)   /*
                                                                             * PTNCIF_ISOUTNCIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_FETSUSPIF                   (1 << 22)   /*
                                                                             * FETSUSPIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_RSTDIF                      (1 << 23)   /*
                                                                             * RSTDIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_HPIF                        (1 << 24)   /*
                                                                             * HPIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_HCINT                       (1 << 25)   /*
                                                                             * Host
                                                                             * channels
                                                                             * interrupt
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_PTXFEIF                     (1 << 26)   /*
                                                                             * PTXFEIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_IDSTSCIF                    (1 << 28)   /*
                                                                             * IDSTSCIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_DISCIF                      (1 << 29)   /*
                                                                             * DISCIF
                                                                             */
#define USB_HS_Global_USBHS_GINTSTS_WKUPIF                      (1 << 31)   /*
                                                                             * WKUPIF
                                                                             */

/******** Bit definition for USBHS_GINTEN register  ********/
#define USB_HS_Global_USBHS_GINTEN_MODMISIEN                    (1 << 1)    /*
                                                                             * MODMISIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_USBHSIEN                     (1 << 2)    /*
                                                                             * USBHSIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_SOFIEN                       (1 << 3)    /*
                                                                             * SOFIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_RXFNEIEN                     (1 << 4)    /*
                                                                             * RXFNEIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_NPTXFEIEN                    (1 << 5)    /*
                                                                             * NPTXFEIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_GINNPNAKEIEN                 (1 << 6)    /*
                                                                             * GINNPNAKEIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_GOUTNAKEIEN                  (1 << 7)    /*
                                                                             * GOUTNAKEIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_ESUSPIEN                     (1 << 10)   /*
                                                                             * ESUSPIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_USBSUSPIEN                   (1 << 11)   /*
                                                                             * USBSUSPIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_USBRSTIEN                    (1 << 12)   /*
                                                                             * USBRSTIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_ENUMDIEN                     (1 << 13)   /*
                                                                             * ENUMDIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_ISOUTPDIEN                   (1 << 14)   /*
                                                                             * ISOUTPDIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_EOPFIEN                      (1 << 15)   /*
                                                                             * EOPFIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_INEPIEN                      (1 << 18)   /*
                                                                             * INEPIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_OUTEPIEN                     (1 << 19)   /*
                                                                             * OUTEPIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_ISOINCIEN                    (1 << 20)   /*
                                                                             * ISOINCIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_PTNCIEN_ISOUTNCIEN           (1 << 21)   /*
                                                                             * PTNCIEN_ISOUTNCIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_FETSUSPIEN                   (1 << 22)   /*
                                                                             * FETSUSPIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_RSTDIEN                      (1 << 23)   /*
                                                                             * RSTDIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_HPIEN                        (1 << 24)   /*
                                                                             * HPIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_HCHIEN                       (1 << 25)   /*
                                                                             * HCHIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_PTXFEIEN                     (1 << 26)   /*
                                                                             * PTXFEIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_IDSTSCIEN                    (1 << 28)   /*
                                                                             * IDSTSCIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_DISCIEN                      (1 << 29)   /*
                                                                             * DISCIEN
                                                                             */
#define USB_HS_Global_USBHS_GINTEN_WKUPIEN                      (1 << 31)   /*
                                                                             * WKUPIEN
                                                                             */

/******** Bit definition for USBHS_GRXSTS register  ********/
#define USB_HS_Global_USBHS_GRXSTS_CHEPNUM_SHIFT                (0)
#define USB_HS_Global_USBHS_GRXSTS_CHEPNUM_MASK                 (0xF << \
          USB_HS_Global_USBHS_GRXSTS_CHEPNUM_SHIFT)                                               /*
                                                                                                   * CHEPNUM
                                                                                                   */
#define USB_HS_Global_USBHS_GRXSTS_BCNT_SHIFT                   (4)
#define USB_HS_Global_USBHS_GRXSTS_BCNT_MASK                    (0x7FF << \
          USB_HS_Global_USBHS_GRXSTS_BCNT_SHIFT)                                              /*
                                                                                               * BCNT
                                                                                               */
#define USB_HS_Global_USBHS_GRXSTS_DPID_SHIFT                   (15)
#define USB_HS_Global_USBHS_GRXSTS_DPID_MASK                    (0x3 << \
          USB_HS_Global_USBHS_GRXSTS_DPID_SHIFT)                                            /*
                                                                                             * DPID
                                                                                             */
#define USB_HS_Global_USBHS_GRXSTS_PKTSTS_SHIFT                 (17)
#define USB_HS_Global_USBHS_GRXSTS_PKTSTS_MASK                  (0xF << \
          USB_HS_Global_USBHS_GRXSTS_PKTSTS_SHIFT)                                              /*
                                                                                                 * PKTSTS
                                                                                                 */
#define USB_HS_Global_USBHS_GRXSTS_FNUM_SHIFT                   (21)
#define USB_HS_Global_USBHS_GRXSTS_FNUM_MASK                    (0xF << \
          USB_HS_Global_USBHS_GRXSTS_FNUM_SHIFT)                                            /*
                                                                                             * FNUM
                                                                                             */

/******** Bit definition for USBHS_GRXSTSP register  ********/
#define USB_HS_Global_USBHS_GRXSTSP_CHEPNUM_SHIFT               (0)
#define USB_HS_Global_USBHS_GRXSTSP_CHEPNUM_MASK                (0xF << \
          USB_HS_Global_USBHS_GRXSTSP_CHEPNUM_SHIFT)                                                /*
                                                                                                     * CHEPNUM
                                                                                                     */
#define USB_HS_Global_USBHS_GRXSTSP_BCNT_SHIFT                  (4)
#define USB_HS_Global_USBHS_GRXSTSP_BCNT_MASK                   (0x7FF << \
          USB_HS_Global_USBHS_GRXSTSP_BCNT_SHIFT)                                               /*
                                                                                                 * BCNT
                                                                                                 */
#define USB_HS_Global_USBHS_GRXSTSP_DPID_SHIFT                  (15)
#define USB_HS_Global_USBHS_GRXSTSP_DPID_MASK                   (0x3 << \
          USB_HS_Global_USBHS_GRXSTSP_DPID_SHIFT)                                             /*
                                                                                               * DPID
                                                                                               */
#define USB_HS_Global_USBHS_GRXSTSP_PKTSTS_SHIFT                (17)
#define USB_HS_Global_USBHS_GRXSTSP_PKTSTS_MASK                 (0xF << \
          USB_HS_Global_USBHS_GRXSTSP_PKTSTS_SHIFT)                                               /*
                                                                                                   * PKTSTS
                                                                                                   */
#define USB_HS_Global_USBHS_GRXSTSP_FNUM_SHIFT                  (21)
#define USB_HS_Global_USBHS_GRXSTSP_FNUM_MASK                   (0xF << \
          USB_HS_Global_USBHS_GRXSTSP_FNUM_SHIFT)                                             /*
                                                                                               * FNUM
                                                                                               */

/******** Bit definition for USBHS_GRXFSIZ register  ********/
#define USB_HS_Global_USBHS_GRXFSIZ_RXFDEP_SHIFT                (0)
#define USB_HS_Global_USBHS_GRXFSIZ_RXFDEP_MASK                 (0x7FF << \
          USB_HS_Global_USBHS_GRXFSIZ_RXFDEP_SHIFT)                                                 /*
                                                                                                     * RXFDEP
                                                                                                     */

/******** Bit definition for USBHS_GNPTXFSIZ register  ********/
#define USB_HS_Global_USBHS_GNPTXFSIZ_NPTXFSADD_SHIFT           (0)
#define USB_HS_Global_USBHS_GNPTXFSIZ_NPTXFSADD_MASK            (0x7FF << \
          USB_HS_Global_USBHS_GNPTXFSIZ_NPTXFSADD_SHIFT)                                                      /*
                                                                                                               * NNPTXFSADD
                                                                                                               */
#define USB_HS_Global_USBHS_GNPTXFSIZ_NPTXFDEP_SHIFT            (16)
#define USB_HS_Global_USBHS_GNPTXFSIZ_NPTXFDEP_MASK             (0x7FF << \
          USB_HS_Global_USBHS_GNPTXFSIZ_NPTXFDEP_SHIFT)                                                     /*
                                                                                                             * NPTXFDEP
                                                                                                             */

/******** Bit definition for USBHS_DINEP0TXFSIZ register  ********/
#define USB_HS_Global_USBHS_DINEP0TXFSIZ_IEP0TXFRSADD_SHIFT     (0)
#define USB_HS_Global_USBHS_DINEP0TXFSIZ_IEP0TXFRSADD_MASK      (0x7FF << \
          USB_HS_Global_USBHS_DINEP0TXFSIZ_IEP0TXFRSADD_SHIFT)                                                            /*
                                                                                                                           * IEP0TXFRSADD
                                                                                                                           */
#define USB_HS_Global_USBHS_DINEP0TXFSIZ_IEP0TXFDEP_SHIFT       (16)
#define USB_HS_Global_USBHS_DINEP0TXFSIZ_IEP0TXFDEP_MASK        (0x7FF << \
          USB_HS_Global_USBHS_DINEP0TXFSIZ_IEP0TXFDEP_SHIFT)                                                          /*
                                                                                                                       * IEP0TXFDEP
                                                                                                                       */

/******** Bit definition for USBHS_GNPTXFSTS register  ********/
#define USB_HS_Global_USBHS_GNPTXFSTS_NPTXFSAV_SHIFT            (0)
#define USB_HS_Global_USBHS_GNPTXFSTS_NPTXFSAV_MASK             (0xFFFF << \
          USB_HS_Global_USBHS_GNPTXFSTS_NPTXFSAV_SHIFT)                                                      /*
                                                                                                              * NPTXFSAV
                                                                                                              */
#define USB_HS_Global_USBHS_GNPTXFSTS_NPTXRQSAV_SHIFT           (16)
#define USB_HS_Global_USBHS_GNPTXFSTS_NPTXRQSAV_MASK            (0xFF << \
          USB_HS_Global_USBHS_GNPTXFSTS_NPTXRQSAV_SHIFT)                                                     /*
                                                                                                              * NPTXRQSAV
                                                                                                              */
#define USB_HS_Global_USBHS_GNPTXFSTS_NPTXRQTOP_SHIFT           (24)
#define USB_HS_Global_USBHS_GNPTXFSTS_NPTXRQTOP_MASK            (0x7F << \
          USB_HS_Global_USBHS_GNPTXFSTS_NPTXRQTOP_SHIFT)                                                     /*
                                                                                                              * NPTXRQTOP
                                                                                                              */

/******** Bit definition for USBHS_CID register  ********/
#define USB_HS_Global_USBHS_CID_CID_SHIFT                       (0)
#define USB_HS_Global_USBHS_CID_CID_MASK                        (0xFFFFFFFF << \
          USB_HS_Global_USBHS_CID_CID_SHIFT)                                               /*
                                                                                            * CID
                                                                                            */

/******** Bit definition for USBHS_GPD register  ********/
#define USB_HS_Global_USBHS_GPD_LINSTSCHNGSTS                   (1 << 7)    /*
                                                                             * LINSTSCHNGSTS
                                                                             */
#define USB_HS_Global_USBHS_GPD_LINSTSCHNGINTEN                 (1 << 8)    /*
                                                                             * LINSTSCHNGINTEN
                                                                             */
#define USB_HS_Global_USBHS_GPD_RESTDETSTS                      (1 << 9)    /*
                                                                             * RESTDETSTS
                                                                             */
#define USB_HS_Global_USBHS_GPD_RESTDETINTEN                    (1 << 10)   /*
                                                                             * RESTDETINTEN
                                                                             */
#define USB_HS_Global_USBHS_GPD_DISCONNDETSTS                   (1 << 11)   /*
                                                                             * DISCONNDETSTS
                                                                             */
#define USB_HS_Global_USBHS_GPD_DISCONNDETINTEN                 (1 << 12)   /*
                                                                             * DISCONNDETINTEN
                                                                             */
#define USB_HS_Global_USBHS_GPD_CONNDETSTS                      (1 << 13)   /*
                                                                             * CONNDETSTS
                                                                             */
#define USB_HS_Global_USBHS_GPD_CONNDETINTEN                    (1 << 14)   /*
                                                                             * CONNDETINTEN
                                                                             */
#define USB_HS_Global_USBHS_GPD_STSCHNGINTSTS                   (1 << 17)   /*
                                                                             * STSCHNGINTSTS
                                                                             */
#define USB_HS_Global_USBHS_GPD_STSCHNGINTEN                    (1 << 18)   /*
                                                                             * STSCHNGINTEN
                                                                             */
#define USB_HS_Global_USBHS_GPD_LINSTS_SHIFT                    (19)
#define USB_HS_Global_USBHS_GPD_LINSTS_MASK                     (0x3 << \
          USB_HS_Global_USBHS_GPD_LINSTS_SHIFT)                             /*
                                                                             * LINSTS
                                                                             */
#define USB_HS_Global_USBHS_GPD_IDDIG                           (1 << 21)   /*
                                                                             * IDDIG
                                                                             */

/******** Bit definition for USBHS_HPTXFSIZ register  ********/
#define USB_HS_Global_USBHS_HPTXFSIZ_HPTXFSADD_SHIFT            (0)
#define USB_HS_Global_USBHS_HPTXFSIZ_HPTXFSADD_MASK             (0xFFFF << \
          USB_HS_Global_USBHS_HPTXFSIZ_HPTXFSADD_SHIFT)                                                      /*
                                                                                                              * HPTXFSADD
                                                                                                              */
#define USB_HS_Global_USBHS_HPTXFSIZ_HPTXFDEP_SHIFT             (16)
#define USB_HS_Global_USBHS_HPTXFSIZ_HPTXFDEP_MASK              (0xFFFF << \
          USB_HS_Global_USBHS_HPTXFSIZ_HPTXFDEP_SHIFT)                                                     /*
                                                                                                            * HPTXFDEP
                                                                                                            */

/******** Bit definition for USBHS_DINEPPTXFSIZ1 register  ********/
#define USB_HS_Global_USBHS_DINEPPTXFSIZ1_INEPTXSADD_SHIFT      (0)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ1_INEPTXSADD_MASK       (0x7FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ1_INEPTXSADD_SHIFT)                                                           /*
                                                                                                                         * INEPTXSADD
                                                                                                                         */
#define USB_HS_Global_USBHS_DINEPPTXFSIZ1_INEPTXFDEP__SHIFT     (16)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ1_INEPTXFDEP__MASK      (0x1FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ1_INEPTXFDEP__SHIFT)                                                            /*
                                                                                                                           * INEPTXFDEP
                                                                                                                           */

/******** Bit definition for USBHS_DINEPPTXFSIZ2 register  ********/
#define USB_HS_Global_USBHS_DINEPPTXFSIZ2_INEPTXSADD_SHIFT      (0)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ2_INEPTXSADD_MASK       (0x7FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ2_INEPTXSADD_SHIFT)                                                           /*
                                                                                                                         * INEPTXSADD
                                                                                                                         */
#define USB_HS_Global_USBHS_DINEPPTXFSIZ2_INEPTXFDEP__SHIFT     (16)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ2_INEPTXFDEP__MASK      (0x1FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ2_INEPTXFDEP__SHIFT)                                                            /*
                                                                                                                           * INEPTXFDEP
                                                                                                                           */

/******** Bit definition for USBHS_DINEPPTXFSIZ3 register  ********/
#define USB_HS_Global_USBHS_DINEPPTXFSIZ3_INEPTXSADD_SHIFT      (0)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ3_INEPTXSADD_MASK       (0x7FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ3_INEPTXSADD_SHIFT)                                                           /*
                                                                                                                         * INEPTXSADD
                                                                                                                         */
#define USB_HS_Global_USBHS_DINEPPTXFSIZ3_INEPTXFDEP__SHIFT     (16)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ3_INEPTXFDEP__MASK      (0x1FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ3_INEPTXFDEP__SHIFT)                                                            /*
                                                                                                                           * INEPTXFDEP
                                                                                                                           */

/******** Bit definition for USBHS_DINEPPTXFSIZ4 register  ********/
#define USB_HS_Global_USBHS_DINEPPTXFSIZ4_INEPTXSADD_SHIFT      (0)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ4_INEPTXSADD_MASK       (0x7FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ4_INEPTXSADD_SHIFT)                                                           /*
                                                                                                                         * INEPTXSADD
                                                                                                                         */
#define USB_HS_Global_USBHS_DINEPPTXFSIZ4_INEPTXFDEP__SHIFT     (16)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ4_INEPTXFDEP__MASK      (0x1FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ4_INEPTXFDEP__SHIFT)                                                            /*
                                                                                                                           * INEPTXFDEP
                                                                                                                           */

/******** Bit definition for USBHS_DINEPPTXFSIZ5 register  ********/
#define USB_HS_Global_USBHS_DINEPPTXFSIZ5_INEPTXSADD_SHIFT      (0)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ5_INEPTXSADD_MASK       (0x7FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ5_INEPTXSADD_SHIFT)                                                           /*
                                                                                                                         * INEPTXSADD
                                                                                                                         */
#define USB_HS_Global_USBHS_DINEPPTXFSIZ5_INEPTXFDEP__SHIFT     (16)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ5_INEPTXFDEP__MASK      (0x1FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ5_INEPTXFDEP__SHIFT)                                                            /*
                                                                                                                           * INEPTXFDEP
                                                                                                                           */

/******** Bit definition for USBHS_DINEPPTXFSIZ6 register  ********/
#define USB_HS_Global_USBHS_DINEPPTXFSIZ6_INEPTXSADD_SHIFT      (0)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ6_INEPTXSADD_MASK       (0x7FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ6_INEPTXSADD_SHIFT)                                                           /*
                                                                                                                         * INEPTXSADD
                                                                                                                         */
#define USB_HS_Global_USBHS_DINEPPTXFSIZ6_INEPTXFDEP__SHIFT     (16)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ6_INEPTXFDEP__MASK      (0x1FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ6_INEPTXFDEP__SHIFT)                                                            /*
                                                                                                                           * INEPTXFDEP
                                                                                                                           */

/******** Bit definition for USBHS_DINEPPTXFSIZ7 register  ********/
#define USB_HS_Global_USBHS_DINEPPTXFSIZ7_INEPTXSADD_SHIFT      (0)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ7_INEPTXSADD_MASK       (0x7FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ7_INEPTXSADD_SHIFT)                                                           /*
                                                                                                                         * INEPTXSADD
                                                                                                                         */
#define USB_HS_Global_USBHS_DINEPPTXFSIZ7_INEPTXFDEP__SHIFT     (16)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ7_INEPTXFDEP__MASK      (0x1FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ7_INEPTXFDEP__SHIFT)                                                            /*
                                                                                                                           * INEPTXFDEP
                                                                                                                           */

/******** Bit definition for USBHS_DINEPPTXFSIZ8 register  ********/
#define USB_HS_Global_USBHS_DINEPPTXFSIZ8_INEPTXSADD_SHIFT      (0)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ8_INEPTXSADD_MASK       (0x7FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ8_INEPTXSADD_SHIFT)                                                           /*
                                                                                                                         * INEPTXSADD
                                                                                                                         */
#define USB_HS_Global_USBHS_DINEPPTXFSIZ8_INEPTXFDEP__SHIFT     (16)
#define USB_HS_Global_USBHS_DINEPPTXFSIZ8_INEPTXFDEP__MASK      (0x1FF << \
          USB_HS_Global_USBHS_DINEPPTXFSIZ8_INEPTXFDEP__SHIFT)                                                            /*
                                                                                                                           * INEPTXFDEP
                                                                                                                           */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_USB_HS_GLOBAL_H */
