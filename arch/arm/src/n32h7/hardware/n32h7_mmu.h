/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_mmu.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_MMU_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_MMU_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_MMU_CTRL_OFFSET         0x0     /* MMU Control Register */
#define N32_MMU_STS_OFFSET          0x4     /* MMU Status Register */
#define N32_MMU_RTADC1_OFFSET       0x34    /* Reserved, must keep reset value
                                             */
#define N32_MMU_RTADC2_OFFSET       0x38    /* RTADC2 */
#define N32_MMU_RTADC3_OFFSET       0x3C    /* RTADC3 */
#define N32_MMU_RTADC4_OFFSET       0x40    /* RTADC4 */
#define N32_MMU_RTK1P0_OFFSET       0x44    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK1P1_OFFSET       0x48    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK1P2_OFFSET       0x4C    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK1P3_OFFSET       0x50    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK2P0_OFFSET       0x54    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK2P1_OFFSET       0x58    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK2P2_OFFSET       0x5C    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK2P3_OFFSET       0x60    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK3P0_OFFSET       0x64    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK3P1_OFFSET       0x68    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK3P2_OFFSET       0x6C    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK3P3_OFFSET       0x70    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK4P0_OFFSET       0x74    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK4P1_OFFSET       0x78    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK4P2_OFFSET       0x7C    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTK4P3_OFFSET       0x80    /* 1) RTAD_KEY1/2/3/4 Can be
                                             * written by Anyone  if
                                             * RTAD_KEYx_LOCK=0 2) Can Not be
                                             * Read by Anyone. Return 0, no
                                             * bus error. */
#define N32_MMU_RTR1_OFFSET         0x84    /* Can be written if
                                             * RTAD_CFGx_LOCK=0 */
#define N32_MMU_RTR2_OFFSET         0x88    /* Can be written if
                                             * RTAD_CFGx_LOCK=0 */
#define N32_MMU_RTR3_OFFSET         0x8C    /* Can be written if
                                             * RTAD_CFGx_LOCK=0 */
#define N32_MMU_RTR4_OFFSET         0x90    /* Can be written if
                                             * RTAD_CFGx_LOCK=0 */
#define N32_MMU_RTCRC_OFFSET        0xB8    /* RTCRC */
#define N32_MMU_ETH1ME_OFFSET       0x12C   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_ETH2ME_OFFSET       0x130   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_USB1ME_OFFSET       0x134   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_USB2ME_OFFSET       0x138   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_SD1ME_OFFSET        0x13C   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_SD2ME_OFFSET        0x140   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_DVP1ME_OFFSET       0x144   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_DVP2ME_OFFSET       0x148   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_DMA1ME_OFFSET       0x14C   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_DMA2ME_OFFSET       0x150   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_DMA3ME_OFFSET       0x154   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_MDMAME_OFFSET       0x158   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_JPEGME_OFFSET       0x15C   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_LCDME_OFFSET        0x160   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_GPUME_OFFSET        0x164   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_SDPUME_OFFSET       0x168   /* Disabling will reset
                                             * master/user ID to 0 */
#define N32_MMU_XRD_OFFSET          0x170   /* XRD */
#define N32_MMU_XRAD_OFFSET         0x178   /* XRAD */
#define N32_MMU_X1WD_OFFSET         0x17C   /* MMU_X1WD */
#define N32_MMU_X1RD_OFFSET         0x180   /* MMU_X1RD */
#define N32_MMU_X1WAD_OFFSET        0x184   /* MMU_X1WAD */
#define N32_MMU_X1RAD_OFFSET        0x188   /* MMU_X1RAD */
#define N32_MMU_X2WD_OFFSET         0x18C   /* MMU_X2WD */
#define N32_MMU_X2RD_OFFSET         0x190   /* MMU_X2RD */
#define N32_MMU_X2WAD_OFFSET        0x194   /* MMU_X2WAD */
#define N32_MMU_X2RAD_OFFSET        0x198   /* MMU_X2RAD */
#define N32_MMU_X3WD_OFFSET         0x19C   /* MMU_X3WD */
#define N32_MMU_X3RD_OFFSET         0x200   /* MMU_X3RD */
#define N32_MMU_X3WAD_OFFSET        0x204   /* MMU_X3WAD */
#define N32_MMU_X3RAD_OFFSET        0x20C   /* MMU_X3RAD */
#define N32_MMU_H1WD_OFFSET         0x210   /* MMU_H1WD */
#define N32_MMU_H1RD_OFFSET         0x214   /* MMU_H1RD */
#define N32_MMU_H1WAD_OFFSET        0x218   /* MMU_H1WAD */
#define N32_MMU_H1RAD_OFFSET        0x21C   /* MMU_H1RAD */
#define N32_MMU_H2WD_OFFSET         0x220   /* MMU_H2WD */
#define N32_MMU_H2RD_OFFSET         0x224   /* MMU_H2RD */
#define N32_MMU_H2WAD_OFFSET        0x228   /* MMU_H2WAD */
#define N32_MMU_H2RAD_OFFSET        0x22C   /* MMU_H2RAD */
#define N32_MMU_H3WD_OFFSET         0x230   /* MMU_H3WD */
#define N32_MMU_H3RD_OFFSET         0x234   /* MMU_H3RD */
#define N32_MMU_H3WAD_OFFSET        0x238   /* MMU_H3WAD */
#define N32_MMU_H3RAD_OFFSET        0x23C   /* MMU_H3RAD */
#define N32_MMU_H4WD_OFFSET         0x240   /* MMU_H4WD */
#define N32_MMU_H4RD_OFFSET         0x244   /* MMU_H4RD */
#define N32_MMU_H4WAD_OFFSET        0x248   /* MMU_H4WAD */
#define N32_MMU_H4RAD_OFFSET        0x24C   /* MMU_H4RAD */
#define N32_MMU_H5WD_OFFSET         0x250   /* MMU_H5WD */
#define N32_MMU_H5RD_OFFSET         0x254   /* MMU_H5RD */
#define N32_MMU_H5WAD_OFFSET        0x258   /* MMU_H5WAD */
#define N32_MMU_H5RAD_OFFSET        0x25C   /* MMU_H5RAD */
#define N32_MMU_BKWD_OFFSET         0x260   /* MMU_BKWD */
#define N32_MMU_BKRD_OFFSET         0x264   /* MMU_BKRD */
#define N32_MMU_BKWAD_OFFSET        0x268   /* MMU_BKWAD */
#define N32_MMU_BKRAD_OFFSET        0x26C   /* MMU_BKRAD */
#define N32_MMU_ITWD_OFFSET         0x270   /* MMU_ITWD */
#define N32_MMU_ITRD_OFFSET         0x274   /* MMU_ITRD */
#define N32_MMU_ITWAD_OFFSET        0x278   /* MMU_ITWAD */
#define N32_MMU_ITRAD_OFFSET        0x27C   /* MMU_ITRAD */

#define N32_MMU_CTRL                (N32_MMU_BASE + N32_MMU_CTRL_OFFSET)
#define N32_MMU_STS                 (N32_MMU_BASE + N32_MMU_STS_OFFSET)
#define N32_MMU_RTADC1              (N32_MMU_BASE + N32_MMU_RTADC1_OFFSET)
#define N32_MMU_RTADC2              (N32_MMU_BASE + N32_MMU_RTADC2_OFFSET)
#define N32_MMU_RTADC3              (N32_MMU_BASE + N32_MMU_RTADC3_OFFSET)
#define N32_MMU_RTADC4              (N32_MMU_BASE + N32_MMU_RTADC4_OFFSET)
#define N32_MMU_RTK1P0              (N32_MMU_BASE + N32_MMU_RTK1P0_OFFSET)
#define N32_MMU_RTK1P1              (N32_MMU_BASE + N32_MMU_RTK1P1_OFFSET)
#define N32_MMU_RTK1P2              (N32_MMU_BASE + N32_MMU_RTK1P2_OFFSET)
#define N32_MMU_RTK1P3              (N32_MMU_BASE + N32_MMU_RTK1P3_OFFSET)
#define N32_MMU_RTK2P0              (N32_MMU_BASE + N32_MMU_RTK2P0_OFFSET)
#define N32_MMU_RTK2P1              (N32_MMU_BASE + N32_MMU_RTK2P1_OFFSET)
#define N32_MMU_RTK2P2              (N32_MMU_BASE + N32_MMU_RTK2P2_OFFSET)
#define N32_MMU_RTK2P3              (N32_MMU_BASE + N32_MMU_RTK2P3_OFFSET)
#define N32_MMU_RTK3P0              (N32_MMU_BASE + N32_MMU_RTK3P0_OFFSET)
#define N32_MMU_RTK3P1              (N32_MMU_BASE + N32_MMU_RTK3P1_OFFSET)
#define N32_MMU_RTK3P2              (N32_MMU_BASE + N32_MMU_RTK3P2_OFFSET)
#define N32_MMU_RTK3P3              (N32_MMU_BASE + N32_MMU_RTK3P3_OFFSET)
#define N32_MMU_RTK4P0              (N32_MMU_BASE + N32_MMU_RTK4P0_OFFSET)
#define N32_MMU_RTK4P1              (N32_MMU_BASE + N32_MMU_RTK4P1_OFFSET)
#define N32_MMU_RTK4P2              (N32_MMU_BASE + N32_MMU_RTK4P2_OFFSET)
#define N32_MMU_RTK4P3              (N32_MMU_BASE + N32_MMU_RTK4P3_OFFSET)
#define N32_MMU_RTR1                (N32_MMU_BASE + N32_MMU_RTR1_OFFSET)
#define N32_MMU_RTR2                (N32_MMU_BASE + N32_MMU_RTR2_OFFSET)
#define N32_MMU_RTR3                (N32_MMU_BASE + N32_MMU_RTR3_OFFSET)
#define N32_MMU_RTR4                (N32_MMU_BASE + N32_MMU_RTR4_OFFSET)
#define N32_MMU_RTCRC               (N32_MMU_BASE + N32_MMU_RTCRC_OFFSET)
#define N32_MMU_ETH1ME              (N32_MMU_BASE + N32_MMU_ETH1ME_OFFSET)
#define N32_MMU_ETH2ME              (N32_MMU_BASE + N32_MMU_ETH2ME_OFFSET)
#define N32_MMU_USB1ME              (N32_MMU_BASE + N32_MMU_USB1ME_OFFSET)
#define N32_MMU_USB2ME              (N32_MMU_BASE + N32_MMU_USB2ME_OFFSET)
#define N32_MMU_SD1ME               (N32_MMU_BASE + N32_MMU_SD1ME_OFFSET)
#define N32_MMU_SD2ME               (N32_MMU_BASE + N32_MMU_SD2ME_OFFSET)
#define N32_MMU_DVP1ME              (N32_MMU_BASE + N32_MMU_DVP1ME_OFFSET)
#define N32_MMU_DVP2ME              (N32_MMU_BASE + N32_MMU_DVP2ME_OFFSET)
#define N32_MMU_DMA1ME              (N32_MMU_BASE + N32_MMU_DMA1ME_OFFSET)
#define N32_MMU_DMA2ME              (N32_MMU_BASE + N32_MMU_DMA2ME_OFFSET)
#define N32_MMU_DMA3ME              (N32_MMU_BASE + N32_MMU_DMA3ME_OFFSET)
#define N32_MMU_MDMAME              (N32_MMU_BASE + N32_MMU_MDMAME_OFFSET)
#define N32_MMU_JPEGME              (N32_MMU_BASE + N32_MMU_JPEGME_OFFSET)
#define N32_MMU_LCDME               (N32_MMU_BASE + N32_MMU_LCDME_OFFSET)
#define N32_MMU_GPUME               (N32_MMU_BASE + N32_MMU_GPUME_OFFSET)
#define N32_MMU_SDPUME              (N32_MMU_BASE + N32_MMU_SDPUME_OFFSET)
#define N32_MMU_XRD                 (N32_MMU_BASE + N32_MMU_XRD_OFFSET)
#define N32_MMU_XRAD                (N32_MMU_BASE + N32_MMU_XRAD_OFFSET)
#define N32_MMU_X1WD                (N32_MMU_BASE + N32_MMU_X1WD_OFFSET)
#define N32_MMU_X1RD                (N32_MMU_BASE + N32_MMU_X1RD_OFFSET)
#define N32_MMU_X1WAD               (N32_MMU_BASE + N32_MMU_X1WAD_OFFSET)
#define N32_MMU_X1RAD               (N32_MMU_BASE + N32_MMU_X1RAD_OFFSET)
#define N32_MMU_X2WD                (N32_MMU_BASE + N32_MMU_X2WD_OFFSET)
#define N32_MMU_X2RD                (N32_MMU_BASE + N32_MMU_X2RD_OFFSET)
#define N32_MMU_X2WAD               (N32_MMU_BASE + N32_MMU_X2WAD_OFFSET)
#define N32_MMU_X2RAD               (N32_MMU_BASE + N32_MMU_X2RAD_OFFSET)
#define N32_MMU_X3WD                (N32_MMU_BASE + N32_MMU_X3WD_OFFSET)
#define N32_MMU_X3RD                (N32_MMU_BASE + N32_MMU_X3RD_OFFSET)
#define N32_MMU_X3WAD               (N32_MMU_BASE + N32_MMU_X3WAD_OFFSET)
#define N32_MMU_X3RAD               (N32_MMU_BASE + N32_MMU_X3RAD_OFFSET)
#define N32_MMU_H1WD                (N32_MMU_BASE + N32_MMU_H1WD_OFFSET)
#define N32_MMU_H1RD                (N32_MMU_BASE + N32_MMU_H1RD_OFFSET)
#define N32_MMU_H1WAD               (N32_MMU_BASE + N32_MMU_H1WAD_OFFSET)
#define N32_MMU_H1RAD               (N32_MMU_BASE + N32_MMU_H1RAD_OFFSET)
#define N32_MMU_H2WD                (N32_MMU_BASE + N32_MMU_H2WD_OFFSET)
#define N32_MMU_H2RD                (N32_MMU_BASE + N32_MMU_H2RD_OFFSET)
#define N32_MMU_H2WAD               (N32_MMU_BASE + N32_MMU_H2WAD_OFFSET)
#define N32_MMU_H2RAD               (N32_MMU_BASE + N32_MMU_H2RAD_OFFSET)
#define N32_MMU_H3WD                (N32_MMU_BASE + N32_MMU_H3WD_OFFSET)
#define N32_MMU_H3RD                (N32_MMU_BASE + N32_MMU_H3RD_OFFSET)
#define N32_MMU_H3WAD               (N32_MMU_BASE + N32_MMU_H3WAD_OFFSET)
#define N32_MMU_H3RAD               (N32_MMU_BASE + N32_MMU_H3RAD_OFFSET)
#define N32_MMU_H4WD                (N32_MMU_BASE + N32_MMU_H4WD_OFFSET)
#define N32_MMU_H4RD                (N32_MMU_BASE + N32_MMU_H4RD_OFFSET)
#define N32_MMU_H4WAD               (N32_MMU_BASE + N32_MMU_H4WAD_OFFSET)
#define N32_MMU_H4RAD               (N32_MMU_BASE + N32_MMU_H4RAD_OFFSET)
#define N32_MMU_H5WD                (N32_MMU_BASE + N32_MMU_H5WD_OFFSET)
#define N32_MMU_H5RD                (N32_MMU_BASE + N32_MMU_H5RD_OFFSET)
#define N32_MMU_H5WAD               (N32_MMU_BASE + N32_MMU_H5WAD_OFFSET)
#define N32_MMU_H5RAD               (N32_MMU_BASE + N32_MMU_H5RAD_OFFSET)
#define N32_MMU_BKWD                (N32_MMU_BASE + N32_MMU_BKWD_OFFSET)
#define N32_MMU_BKRD                (N32_MMU_BASE + N32_MMU_BKRD_OFFSET)
#define N32_MMU_BKWAD               (N32_MMU_BASE + N32_MMU_BKWAD_OFFSET)
#define N32_MMU_BKRAD               (N32_MMU_BASE + N32_MMU_BKRAD_OFFSET)
#define N32_MMU_ITWD                (N32_MMU_BASE + N32_MMU_ITWD_OFFSET)
#define N32_MMU_ITRD                (N32_MMU_BASE + N32_MMU_ITRD_OFFSET)
#define N32_MMU_ITWAD               (N32_MMU_BASE + N32_MMU_ITWAD_OFFSET)
#define N32_MMU_ITRAD               (N32_MMU_BASE + N32_MMU_ITRAD_OFFSET)

/******** Bit definition for MMU_CTRL register  ********/
#define MMU_CTRL_RSTE               (1 << 1)    /* RSTE */
#define MMU_CTRL_INTE               (1 << 0)    /* INTE */

/******** Bit definition for MMU_STS register  ********/
#define MMU_STS_XSPIL               (1 << 26)   /* XSPIL */
#define MMU_STS_ITRDE               (1 << 25)   /* ITRDE */
#define MMU_STS_ITWRE               (1 << 24)   /* ITWRE */
#define MMU_STS_BKRDE               (1 << 23)   /* BKRDE */
#define MMU_STS_BKWRE               (1 << 22)   /* BKWRE */
#define MMU_STS_H5RDE               (1 << 21)   /* H5RDE */
#define MMU_STS_H5WRE               (1 << 20)   /* H5WRE */
#define MMU_STS_H4RDE               (1 << 19)   /* H4RDE */
#define MMU_STS_H4WRE               (1 << 18)   /* H4WRE */
#define MMU_STS_H3RDE               (1 << 17)   /* H3RDE */
#define MMU_STS_H3WRE               (1 << 16)   /* H3WRE */
#define MMU_STS_H2RDE               (1 << 15)   /* H2RDE */
#define MMU_STS_H2WRE               (1 << 14)   /* H2WRE */
#define MMU_STS_H1RDE               (1 << 13)   /* H1RDE */
#define MMU_STS_H1WRE               (1 << 12)   /* H1WRE */
#define MMU_STS_X3RDE               (1 << 11)   /* X3RDE */
#define MMU_STS_X3WRE               (1 << 10)   /* X3WRE */
#define MMU_STS_X2RDE               (1 << 9)    /* X2RDE */
#define MMU_STS_X2WRE               (1 << 8)    /* X2WRE */
#define MMU_STS_X1RDE               (1 << 7)    /* X1RDE */
#define MMU_STS_X1WRE               (1 << 6)    /* X1WRE */
#define MMU_STS_OBL                 (1 << 5)    /* OBL */
#define MMU_STS_FLASHL              (1 << 4)    /* FLASHL */
#define MMU_STS_XSPIRDE             (1 << 3)    /* XSPIRDE */

/******** Bit definition for MMU_RTADC1 register  ********/
#define MMU_RTADC1_RPROPERTY_SHIFT  (6)
#define MMU_RTADC1_RPROPERTY_MASK   (0x3 << MMU_RTADC1_RPROPERTY_SHIFT) /*
                                                                         * RPROPERTY
                                                                         */
#define MMU_RTADC1_RMOD_SHIFT       (4)
#define MMU_RTADC1_RMOD_MASK        (0x3 << MMU_RTADC1_RMOD_SHIFT)      /*
                                                                         * RMOD
                                                                         */
#define MMU_RTADC1_RKEYL            (1 << 2)                            /*
                                                                         * RKEYL
                                                                         */
#define MMU_RTADC1_RCFGL            (1 << 1)                            /*
                                                                         * RCFGL
                                                                         */
#define MMU_RTADC1_REN              (1 << 0)                            /* REN
                                                                         */

/******** Bit definition for MMU_RTADC2 register  ********/
#define MMU_RTADC2_RPROPERTY_SHIFT  (6)
#define MMU_RTADC2_RPROPERTY_MASK   (0x3 << MMU_RTADC2_RPROPERTY_SHIFT) /*
                                                                         * RPROPERTY
                                                                         */
#define MMU_RTADC2_RMOD_SHIFT       (4)
#define MMU_RTADC2_RMOD_MASK        (0x3 << MMU_RTADC2_RMOD_SHIFT)      /*
                                                                         * RMOD
                                                                         */
#define MMU_RTADC2_RKEYL            (1 << 2)                            /*
                                                                         * RKEYL
                                                                         */
#define MMU_RTADC2_RCFGL            (1 << 1)                            /*
                                                                         * RCFGL
                                                                         */
#define MMU_RTADC2_REN              (1 << 0)                            /* REN
                                                                         */

/******** Bit definition for MMU_RTADC3 register  ********/
#define MMU_RTADC3_RPROPERTY_SHIFT  (6)
#define MMU_RTADC3_RPROPERTY_MASK   (0x3 << MMU_RTADC3_RPROPERTY_SHIFT) /*
                                                                         * RPROPERTY
                                                                         */
#define MMU_RTADC3_RMOD_SHIFT       (4)
#define MMU_RTADC3_RMOD_MASK        (0x3 << MMU_RTADC3_RMOD_SHIFT)      /*
                                                                         * RMOD
                                                                         */
#define MMU_RTADC3_RKEYL            (1 << 2)                            /*
                                                                         * RKEYL
                                                                         */
#define MMU_RTADC3_RCFGL            (1 << 1)                            /*
                                                                         * RCFGL
                                                                         */
#define MMU_RTADC3_REN              (1 << 0)                            /* REN
                                                                         */

/******** Bit definition for MMU_RTADC4 register  ********/
#define MMU_RTADC4_RPROPERTY_SHIFT  (6)
#define MMU_RTADC4_RPROPERTY_MASK   (0x3 << MMU_RTADC4_RPROPERTY_SHIFT) /*
                                                                         * RPROPERTY
                                                                         */
#define MMU_RTADC4_RMOD_SHIFT       (4)
#define MMU_RTADC4_RMOD_MASK        (0x3 << MMU_RTADC4_RMOD_SHIFT)      /*
                                                                         * RMOD
                                                                         */
#define MMU_RTADC4_RKEYL            (1 << 2)                            /*
                                                                         * RKEYL
                                                                         */
#define MMU_RTADC4_RCFGL            (1 << 1)                            /*
                                                                         * RCFGL
                                                                         */
#define MMU_RTADC4_REN              (1 << 0)                            /* REN
                                                                         */

/******** Bit definition for MMU_RTK1P0 register  ********/
#define MMU_RTK1P0_KEY_SHIFT        (0)
#define MMU_RTK1P0_KEY_MASK         (0xFFFFFFFF << MMU_RTK1P0_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK1P1 register  ********/
#define MMU_RTK1P1_KEY_SHIFT        (0)
#define MMU_RTK1P1_KEY_MASK         (0xFFFFFFFF << MMU_RTK1P1_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK1P2 register  ********/
#define MMU_RTK1P2_KEY_SHIFT        (0)
#define MMU_RTK1P2_KEY_MASK         (0xFFFFFFFF << MMU_RTK1P2_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK1P3 register  ********/
#define MMU_RTK1P3_KEY_SHIFT        (0)
#define MMU_RTK1P3_KEY_MASK         (0xFFFFFFFF << MMU_RTK1P3_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK2P0 register  ********/
#define MMU_RTK2P0_KEY_SHIFT        (0)
#define MMU_RTK2P0_KEY_MASK         (0xFFFFFFFF << MMU_RTK2P0_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK2P1 register  ********/
#define MMU_RTK2P1_KEY_SHIFT        (0)
#define MMU_RTK2P1_KEY_MASK         (0xFFFFFFFF << MMU_RTK2P1_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK2P2 register  ********/
#define MMU_RTK2P2_KEY_SHIFT        (0)
#define MMU_RTK2P2_KEY_MASK         (0xFFFFFFFF << MMU_RTK2P2_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK2P3 register  ********/
#define MMU_RTK2P3_KEY_SHIFT        (0)
#define MMU_RTK2P3_KEY_MASK         (0xFFFFFFFF << MMU_RTK2P3_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK3P0 register  ********/
#define MMU_RTK3P0_KEY_SHIFT        (0)
#define MMU_RTK3P0_KEY_MASK         (0xFFFFFFFF << MMU_RTK3P0_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK3P1 register  ********/
#define MMU_RTK3P1_KEY_SHIFT        (0)
#define MMU_RTK3P1_KEY_MASK         (0xFFFFFFFF << MMU_RTK3P1_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK3P2 register  ********/
#define MMU_RTK3P2_KEY_SHIFT        (0)
#define MMU_RTK3P2_KEY_MASK         (0xFFFFFFFF << MMU_RTK3P2_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK3P3 register  ********/
#define MMU_RTK3P3_KEY_SHIFT        (0)
#define MMU_RTK3P3_KEY_MASK         (0xFFFFFFFF << MMU_RTK3P3_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK4P0 register  ********/
#define MMU_RTK4P0_KEY_SHIFT        (0)
#define MMU_RTK4P0_KEY_MASK         (0xFFFFFFFF << MMU_RTK4P0_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK4P1 register  ********/
#define MMU_RTK4P1_KEY_SHIFT        (0)
#define MMU_RTK4P1_KEY_MASK         (0xFFFFFFFF << MMU_RTK4P1_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK4P2 register  ********/
#define MMU_RTK4P2_KEY_SHIFT        (0)
#define MMU_RTK4P2_KEY_MASK         (0xFFFFFFFF << MMU_RTK4P2_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTK4P3 register  ********/
#define MMU_RTK4P3_KEY_SHIFT        (0)
#define MMU_RTK4P3_KEY_MASK         (0xFFFFFFFF << MMU_RTK4P3_KEY_SHIFT) /*
                                                                          * KEY
                                                                          */

/******** Bit definition for MMU_RTR1 register  ********/
#define MMU_RTR1_REND_SHIFT         (16)
#define MMU_RTR1_REND_MASK          (0x1FFF << MMU_RTR1_REND_SHIFT) /* REND */
#define MMU_RTR1_RBEG_SHIFT         (0)
#define MMU_RTR1_RBEG_MASK          (0x1FFF << MMU_RTR1_RBEG_SHIFT) /* RBEG */

/******** Bit definition for MMU_RTR2 register  ********/
#define MMU_RTR2_REND_SHIFT         (16)
#define MMU_RTR2_REND_MASK          (0x1FFF << MMU_RTR2_REND_SHIFT) /* REND */
#define MMU_RTR2_RBEG_SHIFT         (0)
#define MMU_RTR2_RBEG_MASK          (0x1FFF << MMU_RTR2_RBEG_SHIFT) /* RBEG */

/******** Bit definition for MMU_RTR3 register  ********/
#define MMU_RTR3_REND_SHIFT         (16)
#define MMU_RTR3_REND_MASK          (0x1FFF << MMU_RTR3_REND_SHIFT) /* REND */
#define MMU_RTR3_RBEG_SHIFT         (0)
#define MMU_RTR3_RBEG_MASK          (0x1FFF << MMU_RTR3_RBEG_SHIFT) /* RBEG */

/******** Bit definition for MMU_RTR4 register  ********/
#define MMU_RTR4_REND_SHIFT         (16)
#define MMU_RTR4_REND_MASK          (0x1FFF << MMU_RTR4_REND_SHIFT) /* REND */
#define MMU_RTR4_RBEG_SHIFT         (0)
#define MMU_RTR4_RBEG_MASK          (0x1FFF << MMU_RTR4_RBEG_SHIFT) /* RBEG */

/******** Bit definition for MMU_RTCRC register  ********/
#define MMU_RTCRC_CRC_SHIFT         (0)
#define MMU_RTCRC_CRC_MASK          (0xFFFFFFFF << MMU_RTCRC_CRC_SHIFT) /* CRC
                                                                         */

/******** Bit definition for MMU_ETH1ME register  ********/
#define MMU_ETH1ME_MID_SHIFT        (16)
#define MMU_ETH1ME_MID_MASK         (0x7 << MMU_ETH1ME_MID_SHIFT)   /* MID */
#define MMU_ETH1ME_UID_SHIFT        (8)
#define MMU_ETH1ME_UID_MASK         (0xFF << MMU_ETH1ME_UID_SHIFT)  /* UID */
#define MMU_ETH1ME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_ETH2ME register  ********/
#define MMU_ETH2ME_MID_SHIFT        (16)
#define MMU_ETH2ME_MID_MASK         (0x7 << MMU_ETH2ME_MID_SHIFT)   /* MID */
#define MMU_ETH2ME_UID_SHIFT        (8)
#define MMU_ETH2ME_UID_MASK         (0xFF << MMU_ETH2ME_UID_SHIFT)  /* UID */
#define MMU_ETH2ME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_USB1ME register  ********/
#define MMU_USB1ME_MID_SHIFT        (16)
#define MMU_USB1ME_MID_MASK         (0x7 << MMU_USB1ME_MID_SHIFT)   /* MID */
#define MMU_USB1ME_UID_SHIFT        (8)
#define MMU_USB1ME_UID_MASK         (0xFF << MMU_USB1ME_UID_SHIFT)  /* UID */
#define MMU_USB1ME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_USB2ME register  ********/
#define MMU_USB2ME_MID_SHIFT        (16)
#define MMU_USB2ME_MID_MASK         (0x7 << MMU_USB2ME_MID_SHIFT)   /* MID */
#define MMU_USB2ME_UID_SHIFT        (8)
#define MMU_USB2ME_UID_MASK         (0xFF << MMU_USB2ME_UID_SHIFT)  /* UID */
#define MMU_USB2ME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_SD1ME register  ********/
#define MMU_SD1ME_MID_SHIFT         (16)
#define MMU_SD1ME_MID_MASK          (0x7 << MMU_SD1ME_MID_SHIFT)    /* MID */
#define MMU_SD1ME_UID_SHIFT         (8)
#define MMU_SD1ME_UID_MASK          (0xFF << MMU_SD1ME_UID_SHIFT)   /* UID */
#define MMU_SD1ME_EN                (1 << 0)                        /* EN */

/******** Bit definition for MMU_SD2ME register  ********/
#define MMU_SD2ME_MID_SHIFT         (16)
#define MMU_SD2ME_MID_MASK          (0x7 << MMU_SD2ME_MID_SHIFT)    /* MID */
#define MMU_SD2ME_UID_SHIFT         (8)
#define MMU_SD2ME_UID_MASK          (0xFF << MMU_SD2ME_UID_SHIFT)   /* UID */
#define MMU_SD2ME_EN                (1 << 0)                        /* EN */

/******** Bit definition for MMU_DVP1ME register  ********/
#define MMU_DVP1ME_MID_SHIFT        (16)
#define MMU_DVP1ME_MID_MASK         (0x7 << MMU_DVP1ME_MID_SHIFT)   /* MID */
#define MMU_DVP1ME_UID_SHIFT        (8)
#define MMU_DVP1ME_UID_MASK         (0xFF << MMU_DVP1ME_UID_SHIFT)  /* UID */
#define MMU_DVP1ME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_DVP2ME register  ********/
#define MMU_DVP2ME_MID_SHIFT        (16)
#define MMU_DVP2ME_MID_MASK         (0x7 << MMU_DVP2ME_MID_SHIFT)   /* MID */
#define MMU_DVP2ME_UID_SHIFT        (8)
#define MMU_DVP2ME_UID_MASK         (0xFF << MMU_DVP2ME_UID_SHIFT)  /* UID */
#define MMU_DVP2ME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_DMA1ME register  ********/
#define MMU_DMA1ME_MID_SHIFT        (16)
#define MMU_DMA1ME_MID_MASK         (0x7 << MMU_DMA1ME_MID_SHIFT)   /* MID */
#define MMU_DMA1ME_UID_SHIFT        (8)
#define MMU_DMA1ME_UID_MASK         (0xFF << MMU_DMA1ME_UID_SHIFT)  /* UID */
#define MMU_DMA1ME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_DMA2ME register  ********/
#define MMU_DMA2ME_MID_SHIFT        (16)
#define MMU_DMA2ME_MID_MASK         (0x7 << MMU_DMA2ME_MID_SHIFT)   /* MID */
#define MMU_DMA2ME_UID_SHIFT        (8)
#define MMU_DMA2ME_UID_MASK         (0xFF << MMU_DMA2ME_UID_SHIFT)  /* UID */
#define MMU_DMA2ME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_DMA3ME register  ********/
#define MMU_DMA3ME_MID_SHIFT        (16)
#define MMU_DMA3ME_MID_MASK         (0x7 << MMU_DMA3ME_MID_SHIFT)   /* MID */
#define MMU_DMA3ME_UID_SHIFT        (8)
#define MMU_DMA3ME_UID_MASK         (0xFF << MMU_DMA3ME_UID_SHIFT)  /* UID */
#define MMU_DMA3ME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_MDMAME register  ********/
#define MMU_MDMAME_MID_SHIFT        (16)
#define MMU_MDMAME_MID_MASK         (0x7 << MMU_MDMAME_MID_SHIFT)   /* MID */
#define MMU_MDMAME_UID_SHIFT        (8)
#define MMU_MDMAME_UID_MASK         (0xFF << MMU_MDMAME_UID_SHIFT)  /* UID */
#define MMU_MDMAME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_JPEGME register  ********/
#define MMU_JPEGME_MID_SHIFT        (16)
#define MMU_JPEGME_MID_MASK         (0x7 << MMU_JPEGME_MID_SHIFT)   /* MID */
#define MMU_JPEGME_UID_SHIFT        (8)
#define MMU_JPEGME_UID_MASK         (0xFF << MMU_JPEGME_UID_SHIFT)  /* UID */
#define MMU_JPEGME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_LCDME register  ********/
#define MMU_LCDME_MID_SHIFT         (16)
#define MMU_LCDME_MID_MASK          (0x7 << MMU_LCDME_MID_SHIFT)    /* MID */
#define MMU_LCDME_UID_SHIFT         (8)
#define MMU_LCDME_UID_MASK          (0xFF << MMU_LCDME_UID_SHIFT)   /* UID */
#define MMU_LCDME_EN                (1 << 0)                        /* EN */

/******** Bit definition for MMU_GPUME register  ********/
#define MMU_GPUME_MID_SHIFT         (16)
#define MMU_GPUME_MID_MASK          (0x7 << MMU_GPUME_MID_SHIFT)    /* MID */
#define MMU_GPUME_UID_SHIFT         (8)
#define MMU_GPUME_UID_MASK          (0xFF << MMU_GPUME_UID_SHIFT)   /* UID */
#define MMU_GPUME_ME                (1 << 0)                        /* ME */

/******** Bit definition for MMU_SDPUME register  ********/
#define MMU_SDPUME_MID_SHIFT        (16)
#define MMU_SDPUME_MID_MASK         (0x7 << MMU_SDPUME_MID_SHIFT)   /* MID */
#define MMU_SDPUME_UID_SHIFT        (8)
#define MMU_SDPUME_UID_MASK         (0xFF << MMU_SDPUME_UID_SHIFT)  /* UID */
#define MMU_SDPUME_EN               (1 << 0)                        /* EN */

/******** Bit definition for MMU_XRD register  ********/
#define MMU_XRD_MID_SHIFT           (8)
#define MMU_XRD_MID_MASK            (0xF << MMU_XRD_MID_SHIFT)  /* MID */
#define MMU_XRD_UID_SHIFT           (0)
#define MMU_XRD_UID_MASK            (0xFF << MMU_XRD_UID_SHIFT) /* UID */

/******** Bit definition for MMU_XRAD register  ********/
#define MMU_XRAD_ADDR_SHIFT         (0)
#define MMU_XRAD_ADDR_MASK          (0xFFFFFFFF << MMU_XRAD_ADDR_SHIFT) /*
                                                                         * ADDR
                                                                         */

/******** Bit definition for MMU_X1WD register  ********/
#define MMU_X1WD_MID_SHIFT          (8)
#define MMU_X1WD_MID_MASK           (0xF << MMU_X1WD_MID_SHIFT)     /* MID */
#define MMU_X1WD_UID_SHIFT          (0)
#define MMU_X1WD_UID_MASK           (0xFF << MMU_X1WD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_X1RD register  ********/
#define MMU_X1RD_MID_SHIFT          (8)
#define MMU_X1RD_MID_MASK           (0xF << MMU_X1RD_MID_SHIFT)     /* MID */
#define MMU_X1RD_UID_SHIFT          (0)
#define MMU_X1RD_UID_MASK           (0xFF << MMU_X1RD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_X1WAD register  ********/
#define MMU_X1WAD_ADDR_SHIFT        (0)
#define MMU_X1WAD_ADDR_MASK         (0xFFFFFFFF << MMU_X1WAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_X1RAD register  ********/
#define MMU_X1RAD_ADDR_SHIFT        (0)
#define MMU_X1RAD_ADDR_MASK         (0xFFFFFFFF << MMU_X1RAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_X2WD register  ********/
#define MMU_X2WD_MID_SHIFT          (8)
#define MMU_X2WD_MID_MASK           (0xF << MMU_X2WD_MID_SHIFT)     /* MID */
#define MMU_X2WD_UID_SHIFT          (0)
#define MMU_X2WD_UID_MASK           (0xFF << MMU_X2WD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_X2RD register  ********/
#define MMU_X2RD_MID_SHIFT          (8)
#define MMU_X2RD_MID_MASK           (0xF << MMU_X2RD_MID_SHIFT)     /* MID */
#define MMU_X2RD_UID_SHIFT          (0)
#define MMU_X2RD_UID_MASK           (0xFF << MMU_X2RD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_X2WAD register  ********/
#define MMU_X2WAD_ADDR_SHIFT        (0)
#define MMU_X2WAD_ADDR_MASK         (0xFFFFFFFF << MMU_X2WAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_X2RAD register  ********/
#define MMU_X2RAD_ADDR_SHIFT        (0)
#define MMU_X2RAD_ADDR_MASK         (0xFFFFFFFF << MMU_X2RAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_X3WD register  ********/
#define MMU_X3WD_MID_SHIFT          (8)
#define MMU_X3WD_MID_MASK           (0xF << MMU_X3WD_MID_SHIFT)     /* MID */
#define MMU_X3WD_UID_SHIFT          (0)
#define MMU_X3WD_UID_MASK           (0xFF << MMU_X3WD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_X3RD register  ********/
#define MMU_X3RD_MID_SHIFT          (8)
#define MMU_X3RD_MID_MASK           (0xF << MMU_X3RD_MID_SHIFT)     /* MID */
#define MMU_X3RD_UID_SHIFT          (0)
#define MMU_X3RD_UID_MASK           (0xFF << MMU_X3RD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_X3WAD register  ********/
#define MMU_X3WAD_ADDR_SHIFT        (0)
#define MMU_X3WAD_ADDR_MASK         (0xFFFFFFFF << MMU_X3WAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_X3RAD register  ********/
#define MMU_X3RAD_ADDR_SHIFT        (0)
#define MMU_X3RAD_ADDR_MASK         (0xFFFFFFFF << MMU_X3RAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_H1WD register  ********/
#define MMU_H1WD_MID_SHIFT          (8)
#define MMU_H1WD_MID_MASK           (0xF << MMU_H1WD_MID_SHIFT)     /* MID */
#define MMU_H1WD_UID_SHIFT          (0)
#define MMU_H1WD_UID_MASK           (0xFF << MMU_H1WD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_H1RD register  ********/
#define MMU_H1RD_MID_SHIFT          (8)
#define MMU_H1RD_MID_MASK           (0xF << MMU_H1RD_MID_SHIFT)     /* MID */
#define MMU_H1RD_UID_SHIFT          (0)
#define MMU_H1RD_UID_MASK           (0xFF << MMU_H1RD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_H1WAD register  ********/
#define MMU_H1WAD_ADDDR_SHIFT       (0)
#define MMU_H1WAD_ADDDR_MASK        (0xFFFFFFFF << MMU_H1WAD_ADDDR_SHIFT) /*
                                                                           * ADDDR
                                                                           */

/******** Bit definition for MMU_H1RAD register  ********/
#define MMU_H1RAD_ADDR_SHIFT        (0)
#define MMU_H1RAD_ADDR_MASK         (0xFFFFFFFF << MMU_H1RAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_H2WD register  ********/
#define MMU_H2WD_MID_SHIFT          (8)
#define MMU_H2WD_MID_MASK           (0xF << MMU_H2WD_MID_SHIFT)     /* MID */
#define MMU_H2WD_UID_SHIFT          (0)
#define MMU_H2WD_UID_MASK           (0xFF << MMU_H2WD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_H2RD register  ********/
#define MMU_H2RD_MID_SHIFT          (8)
#define MMU_H2RD_MID_MASK           (0xF << MMU_H2RD_MID_SHIFT)     /* MID */
#define MMU_H2RD_UID_SHIFT          (0)
#define MMU_H2RD_UID_MASK           (0xFF << MMU_H2RD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_H2WAD register  ********/
#define MMU_H2WAD_ADDR_SHIFT        (0)
#define MMU_H2WAD_ADDR_MASK         (0xFFFFFFFF << MMU_H2WAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_H2RAD register  ********/
#define MMU_H2RAD_ADDR_SHIFT        (0)
#define MMU_H2RAD_ADDR_MASK         (0xFFFFFFFF << MMU_H2RAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_H3WD register  ********/
#define MMU_H3WD_MID_SHIFT          (8)
#define MMU_H3WD_MID_MASK           (0xF << MMU_H3WD_MID_SHIFT)     /* MID */
#define MMU_H3WD_UID_SHIFT          (0)
#define MMU_H3WD_UID_MASK           (0xFF << MMU_H3WD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_H3RD register  ********/
#define MMU_H3RD_ID_SHIFT           (8)
#define MMU_H3RD_ID_MASK            (0xF << MMU_H3RD_ID_SHIFT)      /* ID */
#define MMU_H3RD_UID_SHIFT          (0)
#define MMU_H3RD_UID_MASK           (0xFF << MMU_H3RD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_H3WAD register  ********/
#define MMU_H3WAD_ADDR_SHIFT        (0)
#define MMU_H3WAD_ADDR_MASK         (0xFFFFFFFF << MMU_H3WAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_H3RAD register  ********/
#define MMU_H3RAD_ADDR_SHIFT        (0)
#define MMU_H3RAD_ADDR_MASK         (0xFFFFFFFF << MMU_H3RAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_H4WD register  ********/
#define MMU_H4WD_ID_SHIFT           (8)
#define MMU_H4WD_ID_MASK            (0xF << MMU_H4WD_ID_SHIFT)      /* ID */
#define MMU_H4WD_UID_SHIFT          (0)
#define MMU_H4WD_UID_MASK           (0xFF << MMU_H4WD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_H4RD register  ********/
#define MMU_H4RD_MID_SHIFT          (8)
#define MMU_H4RD_MID_MASK           (0xF << MMU_H4RD_MID_SHIFT)     /* MID */
#define MMU_H4RD_UID_SHIFT          (0)
#define MMU_H4RD_UID_MASK           (0xFF << MMU_H4RD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_H4WAD register  ********/
#define MMU_H4WAD_ADDR_SHIFT        (0)
#define MMU_H4WAD_ADDR_MASK         (0xFFFFFFFF << MMU_H4WAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_H4RAD register  ********/
#define MMU_H4RAD_ADDR_SHIFT        (0)
#define MMU_H4RAD_ADDR_MASK         (0xFFFFFFFF << MMU_H4RAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_H5WD register  ********/
#define MMU_H5WD_MID_SHIFT          (8)
#define MMU_H5WD_MID_MASK           (0xF << MMU_H5WD_MID_SHIFT)     /* MID */
#define MMU_H5WD_UID_SHIFT          (0)
#define MMU_H5WD_UID_MASK           (0xFF << MMU_H5WD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_H5RD register  ********/
#define MMU_H5RD_MID_SHIFT          (8)
#define MMU_H5RD_MID_MASK           (0xF << MMU_H5RD_MID_SHIFT)     /* MID */
#define MMU_H5RD_UID_SHIFT          (0)
#define MMU_H5RD_UID_MASK           (0xFF << MMU_H5RD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_H5WAD register  ********/
#define MMU_H5WAD_ADDR_SHIFT        (0)
#define MMU_H5WAD_ADDR_MASK         (0xFFFFFFFF << MMU_H5WAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_H5RAD register  ********/
#define MMU_H5RAD_ADDR_SHIFT        (0)
#define MMU_H5RAD_ADDR_MASK         (0xFFFFFFFF << MMU_H5RAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_BKWD register  ********/
#define MMU_BKWD_MID_SHIFT          (8)
#define MMU_BKWD_MID_MASK           (0xF << MMU_BKWD_MID_SHIFT)     /* MID */
#define MMU_BKWD_UID_SHIFT          (0)
#define MMU_BKWD_UID_MASK           (0xFF << MMU_BKWD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_BKRD register  ********/
#define MMU_BKRD_MID_SHIFT          (8)
#define MMU_BKRD_MID_MASK           (0xF << MMU_BKRD_MID_SHIFT)     /* MID */
#define MMU_BKRD_UID_SHIFT          (0)
#define MMU_BKRD_UID_MASK           (0xFF << MMU_BKRD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_BKWAD register  ********/
#define MMU_BKWAD_ADDR_SHIFT        (0)
#define MMU_BKWAD_ADDR_MASK         (0xFFFFFFFF << MMU_BKWAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_BKRAD register  ********/
#define MMU_BKRAD_ADDR_SHIFT        (0)
#define MMU_BKRAD_ADDR_MASK         (0xFFFFFFFF << MMU_BKRAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_ITWD register  ********/
#define MMU_ITWD_MID_SHIFT          (8)
#define MMU_ITWD_MID_MASK           (0xF << MMU_ITWD_MID_SHIFT)     /* MID */
#define MMU_ITWD_UID_SHIFT          (0)
#define MMU_ITWD_UID_MASK           (0xFF << MMU_ITWD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_ITRD register  ********/
#define MMU_ITRD_MID_SHIFT          (8)
#define MMU_ITRD_MID_MASK           (0xF << MMU_ITRD_MID_SHIFT)     /* MID */
#define MMU_ITRD_UID_SHIFT          (0)
#define MMU_ITRD_UID_MASK           (0xFF << MMU_ITRD_UID_SHIFT)    /* UID */

/******** Bit definition for MMU_ITWAD register  ********/
#define MMU_ITWAD_ADDR_SHIFT        (0)
#define MMU_ITWAD_ADDR_MASK         (0xFFFFFFFF << MMU_ITWAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for MMU_ITRAD register  ********/
#define MMU_ITRAD_ADDR_SHIFT        (0)
#define MMU_ITRAD_ADDR_MASK         (0xFFFFFFFF << MMU_ITRAD_ADDR_SHIFT) /*
                                                                          * ADDR
                                                                          */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_MMU_H */
