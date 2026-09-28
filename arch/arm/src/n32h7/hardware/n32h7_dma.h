/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_dma.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DMA_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DMA_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_DMA_CH0SA_OFFSET            0x0     /* DMA_CH0SA */
#define N32_DMA_CH0DA_OFFSET            0x8     /* DMA_CH0DA */
#define N32_DMA_CH0LLP_OFFSET           0x10    /* DMA_CH0LLP */
#define N32_DMA_CH0CTRL_L_OFFSET        0x18    /* DMA_CH0CTRL_L */
#define N32_DMA_CH0CTRL_H_OFFSET        0x1C    /* DMA_CH0CTRL_H */
#define N32_DMA_CH0CFG_L_OFFSET         0x40    /* DMA_CH0CFG_L */
#define N32_DMA_CH0CFG_H_OFFSET         0x44    /* DMA_CH0CFG_H */
#define N32_DMA_CH0SG_OFFSET            0x48    /* DMA_CH0SG */
#define N32_DMA_CH0DS_OFFSET            0x50    /* DMA_CH0DS */
#define N32_DMA_CH1SA_OFFSET            0x58    /* DMA_CH1SA */
#define N32_DMA_CH1DA_OFFSET            0x60    /* DMA_CH1DA */
#define N32_DMA_CH1LLP_OFFSET           0x68    /* DMA_CH1LLP */
#define N32_DMA_CH1CTRL_L_OFFSET        0x70    /* DMA_CH1CTRL_L */
#define N32_DMA_CH1CTRL_H_OFFSET        0x74    /* DMA_CH1CTRL_H */
#define N32_DMA_CH1CFG_L_OFFSET         0x98    /* DMA_CH1CFG_L */
#define N32_DMA_CH1CFG_H_OFFSET         0x9C    /* DMA_CH1CFG_H */
#define N32_DMA_CH1SG_OFFSET            0xA0    /* DMA_CH1SG */
#define N32_DMA_CH1DS_OFFSET            0xA8    /* DMA_CH1DS */
#define N32_DMA_CH2SA_OFFSET            0xB0    /* DMA_CH2SA */
#define N32_DMA_CH2DA_OFFSET            0xB8    /* DMA_CH2DA */
#define N32_DMA_CH2LLP_OFFSET           0xC0    /* DMA_CH2LLP */
#define N32_DMA_CH2CTRL_L_OFFSET        0xC8    /* DMA_CH2CTRL_L */
#define N32_DMA_CH2CTRL_H_OFFSET        0xCC    /* DMA_CH2CTRL_H */
#define N32_DMA_CH2CFG_L_OFFSET         0xF0    /* DMA_CH2CFG_L */
#define N32_DMA_CH2CFG_H_OFFSET         0xF4    /* DMA_CH2CFG_H */
#define N32_DMA_CH2SG_OFFSET            0xF8    /* DMA_CH2SG */
#define N32_DMA_CH2DS_OFFSET            0x100   /* DMA_CH2DS */
#define N32_DMA_CH3SA_OFFSET            0x108   /* DMA_CH3SA */
#define N32_DMA_CH3DA_OFFSET            0x110   /* DMA_CH3DA */
#define N32_DMA_CH3LLP_OFFSET           0x118   /* DMA_CH3LLP */
#define N32_DMA_CH3CTRL_L_OFFSET        0x120   /* DMA_CH3CTRL_L */
#define N32_DMA_CH3CTRL_H_OFFSET        0x124   /* DMA_CH3CTRL_H */
#define N32_DMA_CH3CFG_L_OFFSET         0x148   /* DMA_CH3CFG_L */
#define N32_DMA_CH3CFG_H_OFFSET         0x14C   /* DMA_CH3CFG_H */
#define N32_DMA_CH3SG_OFFSET            0x150   /* DMA_CH3SG */
#define N32_DMA_CH3DS_OFFSET            0x158   /* DMA_CH3DS */
#define N32_DMA_CH4SA_OFFSET            0x160   /* DMA_CH4SA */
#define N32_DMA_CH4DA_OFFSET            0x168   /* DMA_CH4DA */
#define N32_DMA_CH4LLP_OFFSET           0x170   /* DMA_CH4LLP */
#define N32_DMA_CH4CTRL_L_OFFSET        0x178   /* DMA_CH4CTRL_L */
#define N32_DMA_CH4CTRL_H_OFFSET        0x17C   /* DMA_CH4CTRL_H */
#define N32_DMA_CH4CFG_L_OFFSET         0x1A0   /* DMA_CH4CFG_L */
#define N32_DMA_CH4CFG_H_OFFSET         0x1A4   /* DMA_CH4CFG_H */
#define N32_DMA_CH4SG_OFFSET            0x1A8   /* DMA_CH4SG */
#define N32_DMA_CH4DS_OFFSET            0x1B0   /* DMA_CH4DS */
#define N32_DMA_CH5SA_OFFSET            0x1B8   /* DMA_CH5SA */
#define N32_DMA_CH5DA_OFFSET            0x1C0   /* DMA_CH5DA */
#define N32_DMA_CH5LLP_OFFSET           0x1C8   /* DMA_CH5LLP */
#define N32_DMA_CH5CTRL_L_OFFSET        0x1D0   /* DMA_CH5CTRL_L */
#define N32_DMA_CH5CTRL_H_OFFSET        0x1D4   /* DMA_CH5CTRL_H */
#define N32_DMA_CH5CFG_L_OFFSET         0x1F8   /* DMA_CH5CFG_L */
#define N32_DMA_CH5CFG_H_OFFSET         0x1FC   /* DMA_CH5CFG_H */
#define N32_DMA_CH5SG_OFFSET            0x200   /* DMA_CH5SG */
#define N32_DMA_CH5DS_OFFSET            0x208   /* DMA_CH5DS */
#define N32_DMA_CH6SA_OFFSET            0x210   /* DMA_CH6SA */
#define N32_DMA_CH6DA_OFFSET            0x218   /* DMA_CH6DA */
#define N32_DMA_CH6LLP_OFFSET           0x220   /* DMA_CH6LLP */
#define N32_DMA_CH6CTRL_L_OFFSET        0x228   /* DMA_CH6CTRL_L */
#define N32_DMA_CH6CTRL_H_OFFSET        0x22C   /* DMA_CH6CTRL_H */
#define N32_DMA_CH6CFG_L_OFFSET         0x250   /* DMA_CH6CFG_L */
#define N32_DMA_CH6CFG_H_OFFSET         0x254   /* DMA_CH6CFG_H */
#define N32_DMA_CH6SG_OFFSET            0x258   /* DMA_CH6SG */
#define N32_DMA_CH6DS_OFFSET            0x260   /* DMA_CH6DS */
#define N32_DMA_CH7SA_OFFSET            0x268   /* DMA_CH7SA */
#define N32_DMA_CH7DA_OFFSET            0x270   /* DMA_CH7DA */
#define N32_DMA_CH7LLP_OFFSET           0x278   /* DMA_CH7LLP */
#define N32_DMA_CH7CTRL_L_OFFSET        0x280   /* DMA_CH7CTRL_L */
#define N32_DMA_CH7CTRL_H_OFFSET        0x284   /* DMA_CH7CTRL_H */
#define N32_DMA_CH7CFG_L_OFFSET         0x2A8   /* DMA_CH7CFG_L */
#define N32_DMA_CH7CFG_H_OFFSET         0x2AC   /* DMA_CH7CFG_H */
#define N32_DMA_CH7SG_OFFSET            0x2B0   /* DMA_CH7SG */
#define N32_DMA_CH7DS_OFFSET            0x2B8   /* DMA_CH7DS */
#define N32_DMA_RAWTCINTSTS_OFFSET      0x2C0   /* DMA_RAWTCINTSTS */
#define N32_DMA_RAWBTCINTSTS_OFFSET     0x2C8   /* DMA_RAWBTCINTSTS */
#define N32_DMA_RAWSTCINTSTS_OFFSET     0x2D0   /* DMA_RAWSTCINTSTS */
#define N32_DMA_RAWDTCINTSTS_OFFSET     0x2D8   /* DMA_RAWDTCINTSTS */
#define N32_DMA_RAWERRINTSTS_OFFSET     0x2E0   /* DMA_RAWERRINTSTS */
#define N32_DMA_TCINTSTS_OFFSET         0x2E8   /* DMA_TCINTSTS */
#define N32_DMA_BTCINTSTS_OFFSET        0x2F0   /* DMA_BTCINTSTS */
#define N32_DMA_STCINTSTS_OFFSET        0x2F8   /* DMA_STCINTSTS */
#define N32_DMA_DTCINTSTS_OFFSET        0x300   /* DMA_DTCINTSTS */
#define N32_DMA_ERRINTSTS_OFFSET        0x308   /* DMA_ERRINTSTS */
#define N32_DMA_TCINTMSK_OFFSET         0x310   /* DMA_TCINTMSK */
#define N32_DMA_BTCINTMSK_OFFSET        0x318   /* DMA_BTCINTMSK */
#define N32_DMA_STCINTMSK_OFFSET        0x320   /* DMA_STCINTMSK */
#define N32_DMA_DTCINTMSK_OFFSET        0x328   /* DMA_DTCINTMSK */
#define N32_DMA_ERRINTMSK_OFFSET        0x330   /* DMA_ERRINTMSK */
#define N32_DMA_TCINTCLR_OFFSET         0x338   /* DMA_TCINTCLR */
#define N32_DMA_BTCINTCLR_OFFSET        0x340   /* DMA_BTCINTCLR */
#define N32_DMA_STCINTCLR_OFFSET        0x348   /* DMA_STCINTCLR */
#define N32_DMA_DTCINTCLR_OFFSET        0x350   /* DMA_DTCINTCLR */
#define N32_DMA_ERRINTCLR_OFFSET        0x358   /* DMA_ERRINTCLR */
#define N32_DMA_INTCBESTS_OFFSET        0x360   /* DMA_INTCBESTS */
#define N32_DMA_SRCSWTREQ_OFFSET        0x368   /* DMA_SRCSWTREQ */
#define N32_DMA_DSTSWTREQ_OFFSET        0x370   /* DMA_DSTSWTREQ */
#define N32_DMA_SRCSGTREQ_OFFSET        0x378   /* DMA_SRCSGTREQ */
#define N32_DMA_DSTSGTREQ_OFFSET        0x380   /* DMA_DSTSGTREQ */
#define N32_DMA_SRCLTREQ_OFFSET         0x388   /* DMA_SRCLTREQ */
#define N32_DMA_DSTLTREQ_OFFSET         0x390   /* DMA_DSTLTREQ */
#define N32_DMA_CFG_OFFSET              0x398   /* DMA_CFG */
#define N32_DMA_CHEN_OFFSET             0x3A0   /* DMA_CHEN */
#define N32_DMA_ID_OFFSET               0x3A8   /* DMA_ID */
#define N32_DMA_TEST_OFFSET             0x3B0   /* DMA_TEST */
#define N32_DMA_LPTIMEOUT_OFFSET        0x3B8   /* DMA_LPTIMEOUT */
#define N32_DMA_COMPID_L_OFFSET         0x3F8   /* DMA_COMPID_L */
#define N32_DMA_COMPID_H_OFFSET         0x3FC   /* DMA_COMPID_H */

#define N32_DMA1_CH0SA                  (N32_DMA1_BASE + N32_DMA_CH0SA_OFFSET)
#define N32_DMA1_CH0DA                  (N32_DMA1_BASE + N32_DMA_CH0DA_OFFSET)
#define N32_DMA1_CH0LLP                 (N32_DMA1_BASE + \
                                         N32_DMA_CH0LLP_OFFSET)
#define N32_DMA1_CH0CTRL_L              (N32_DMA1_BASE + \
                                         N32_DMA_CH0CTRL_L_OFFSET)
#define N32_DMA1_CH0CTRL_H              (N32_DMA1_BASE + \
                                         N32_DMA_CH0CTRL_H_OFFSET)
#define N32_DMA1_CH0CFG_L               (N32_DMA1_BASE + \
                                         N32_DMA_CH0CFG_L_OFFSET)
#define N32_DMA1_CH0CFG_H               (N32_DMA1_BASE + \
                                         N32_DMA_CH0CFG_H_OFFSET)
#define N32_DMA1_CH0SG                  (N32_DMA1_BASE + N32_DMA_CH0SG_OFFSET)
#define N32_DMA1_CH0DS                  (N32_DMA1_BASE + N32_DMA_CH0DS_OFFSET)
#define N32_DMA1_CH1SA                  (N32_DMA1_BASE + N32_DMA_CH1SA_OFFSET)
#define N32_DMA1_CH1DA                  (N32_DMA1_BASE + N32_DMA_CH1DA_OFFSET)
#define N32_DMA1_CH1LLP                 (N32_DMA1_BASE + \
                                         N32_DMA_CH1LLP_OFFSET)
#define N32_DMA1_CH1CTRL_L              (N32_DMA1_BASE + \
                                         N32_DMA_CH1CTRL_L_OFFSET)
#define N32_DMA1_CH1CTRL_H              (N32_DMA1_BASE + \
                                         N32_DMA_CH1CTRL_H_OFFSET)
#define N32_DMA1_CH1CFG_L               (N32_DMA1_BASE + \
                                         N32_DMA_CH1CFG_L_OFFSET)
#define N32_DMA1_CH1CFG_H               (N32_DMA1_BASE + \
                                         N32_DMA_CH1CFG_H_OFFSET)
#define N32_DMA1_CH1SG                  (N32_DMA1_BASE + N32_DMA_CH1SG_OFFSET)
#define N32_DMA1_CH1DS                  (N32_DMA1_BASE + N32_DMA_CH1DS_OFFSET)
#define N32_DMA1_CH2SA                  (N32_DMA1_BASE + N32_DMA_CH2SA_OFFSET)
#define N32_DMA1_CH2DA                  (N32_DMA1_BASE + N32_DMA_CH2DA_OFFSET)
#define N32_DMA1_CH2LLP                 (N32_DMA1_BASE + \
                                         N32_DMA_CH2LLP_OFFSET)
#define N32_DMA1_CH2CTRL_L              (N32_DMA1_BASE + \
                                         N32_DMA_CH2CTRL_L_OFFSET)
#define N32_DMA1_CH2CTRL_H              (N32_DMA1_BASE + \
                                         N32_DMA_CH2CTRL_H_OFFSET)
#define N32_DMA1_CH2CFG_L               (N32_DMA1_BASE + \
                                         N32_DMA_CH2CFG_L_OFFSET)
#define N32_DMA1_CH2CFG_H               (N32_DMA1_BASE + \
                                         N32_DMA_CH2CFG_H_OFFSET)
#define N32_DMA1_CH2SG                  (N32_DMA1_BASE + N32_DMA_CH2SG_OFFSET)
#define N32_DMA1_CH2DS                  (N32_DMA1_BASE + N32_DMA_CH2DS_OFFSET)
#define N32_DMA1_CH3SA                  (N32_DMA1_BASE + N32_DMA_CH3SA_OFFSET)
#define N32_DMA1_CH3DA                  (N32_DMA1_BASE + N32_DMA_CH3DA_OFFSET)
#define N32_DMA1_CH3LLP                 (N32_DMA1_BASE + \
                                         N32_DMA_CH3LLP_OFFSET)
#define N32_DMA1_CH3CTRL_L              (N32_DMA1_BASE + \
                                         N32_DMA_CH3CTRL_L_OFFSET)
#define N32_DMA1_CH3CTRL_H              (N32_DMA1_BASE + \
                                         N32_DMA_CH3CTRL_H_OFFSET)
#define N32_DMA1_CH3CFG_L               (N32_DMA1_BASE + \
                                         N32_DMA_CH3CFG_L_OFFSET)
#define N32_DMA1_CH3CFG_H               (N32_DMA1_BASE + \
                                         N32_DMA_CH3CFG_H_OFFSET)
#define N32_DMA1_CH3SG                  (N32_DMA1_BASE + N32_DMA_CH3SG_OFFSET)
#define N32_DMA1_CH3DS                  (N32_DMA1_BASE + N32_DMA_CH3DS_OFFSET)
#define N32_DMA1_CH4SA                  (N32_DMA1_BASE + N32_DMA_CH4SA_OFFSET)
#define N32_DMA1_CH4DA                  (N32_DMA1_BASE + N32_DMA_CH4DA_OFFSET)
#define N32_DMA1_CH4LLP                 (N32_DMA1_BASE + \
                                         N32_DMA_CH4LLP_OFFSET)
#define N32_DMA1_CH4CTRL_L              (N32_DMA1_BASE + \
                                         N32_DMA_CH4CTRL_L_OFFSET)
#define N32_DMA1_CH4CTRL_H              (N32_DMA1_BASE + \
                                         N32_DMA_CH4CTRL_H_OFFSET)
#define N32_DMA1_CH4CFG_L               (N32_DMA1_BASE + \
                                         N32_DMA_CH4CFG_L_OFFSET)
#define N32_DMA1_CH4CFG_H               (N32_DMA1_BASE + \
                                         N32_DMA_CH4CFG_H_OFFSET)
#define N32_DMA1_CH4SG                  (N32_DMA1_BASE + N32_DMA_CH4SG_OFFSET)
#define N32_DMA1_CH4DS                  (N32_DMA1_BASE + N32_DMA_CH4DS_OFFSET)
#define N32_DMA1_CH5SA                  (N32_DMA1_BASE + N32_DMA_CH5SA_OFFSET)
#define N32_DMA1_CH5DA                  (N32_DMA1_BASE + N32_DMA_CH5DA_OFFSET)
#define N32_DMA1_CH5LLP                 (N32_DMA1_BASE + \
                                         N32_DMA_CH5LLP_OFFSET)
#define N32_DMA1_CH5CTRL_L              (N32_DMA1_BASE + \
                                         N32_DMA_CH5CTRL_L_OFFSET)
#define N32_DMA1_CH5CTRL_H              (N32_DMA1_BASE + \
                                         N32_DMA_CH5CTRL_H_OFFSET)
#define N32_DMA1_CH5CFG_L               (N32_DMA1_BASE + \
                                         N32_DMA_CH5CFG_L_OFFSET)
#define N32_DMA1_CH5CFG_H               (N32_DMA1_BASE + \
                                         N32_DMA_CH5CFG_H_OFFSET)
#define N32_DMA1_CH5SG                  (N32_DMA1_BASE + N32_DMA_CH5SG_OFFSET)
#define N32_DMA1_CH5DS                  (N32_DMA1_BASE + N32_DMA_CH5DS_OFFSET)
#define N32_DMA1_CH6SA                  (N32_DMA1_BASE + N32_DMA_CH6SA_OFFSET)
#define N32_DMA1_CH6DA                  (N32_DMA1_BASE + N32_DMA_CH6DA_OFFSET)
#define N32_DMA1_CH6LLP                 (N32_DMA1_BASE + \
                                         N32_DMA_CH6LLP_OFFSET)
#define N32_DMA1_CH6CTRL_L              (N32_DMA1_BASE + \
                                         N32_DMA_CH6CTRL_L_OFFSET)
#define N32_DMA1_CH6CTRL_H              (N32_DMA1_BASE + \
                                         N32_DMA_CH6CTRL_H_OFFSET)
#define N32_DMA1_CH6CFG_L               (N32_DMA1_BASE + \
                                         N32_DMA_CH6CFG_L_OFFSET)
#define N32_DMA1_CH6CFG_H               (N32_DMA1_BASE + \
                                         N32_DMA_CH6CFG_H_OFFSET)
#define N32_DMA1_CH6SG                  (N32_DMA1_BASE + N32_DMA_CH6SG_OFFSET)
#define N32_DMA1_CH6DS                  (N32_DMA1_BASE + N32_DMA_CH6DS_OFFSET)
#define N32_DMA1_CH7SA                  (N32_DMA1_BASE + N32_DMA_CH7SA_OFFSET)
#define N32_DMA1_CH7DA                  (N32_DMA1_BASE + N32_DMA_CH7DA_OFFSET)
#define N32_DMA1_CH7LLP                 (N32_DMA1_BASE + \
                                         N32_DMA_CH7LLP_OFFSET)
#define N32_DMA1_CH7CTRL_L              (N32_DMA1_BASE + \
                                         N32_DMA_CH7CTRL_L_OFFSET)
#define N32_DMA1_CH7CTRL_H              (N32_DMA1_BASE + \
                                         N32_DMA_CH7CTRL_H_OFFSET)
#define N32_DMA1_CH7CFG_L               (N32_DMA1_BASE + \
                                         N32_DMA_CH7CFG_L_OFFSET)
#define N32_DMA1_CH7CFG_H               (N32_DMA1_BASE + \
                                         N32_DMA_CH7CFG_H_OFFSET)
#define N32_DMA1_CH7SG                  (N32_DMA1_BASE + N32_DMA_CH7SG_OFFSET)
#define N32_DMA1_CH7DS                  (N32_DMA1_BASE + N32_DMA_CH7DS_OFFSET)
#define N32_DMA1_RAWTCINTSTS            (N32_DMA1_BASE + \
                                         N32_DMA_RAWTCINTSTS_OFFSET)
#define N32_DMA1_RAWBTCINTSTS           (N32_DMA1_BASE + \
                                         N32_DMA_RAWBTCINTSTS_OFFSET)
#define N32_DMA1_RAWSTCINTSTS           (N32_DMA1_BASE + \
                                         N32_DMA_RAWSTCINTSTS_OFFSET)
#define N32_DMA1_RAWDTCINTSTS           (N32_DMA1_BASE + \
                                         N32_DMA_RAWDTCINTSTS_OFFSET)
#define N32_DMA1_RAWERRINTSTS           (N32_DMA1_BASE + \
                                         N32_DMA_RAWERRINTSTS_OFFSET)
#define N32_DMA1_TCINTSTS               (N32_DMA1_BASE + \
                                         N32_DMA_TCINTSTS_OFFSET)
#define N32_DMA1_BTCINTSTS              (N32_DMA1_BASE + \
                                         N32_DMA_BTCINTSTS_OFFSET)
#define N32_DMA1_STCINTSTS              (N32_DMA1_BASE + \
                                         N32_DMA_STCINTSTS_OFFSET)
#define N32_DMA1_DTCINTSTS              (N32_DMA1_BASE + \
                                         N32_DMA_DTCINTSTS_OFFSET)
#define N32_DMA1_ERRINTSTS              (N32_DMA1_BASE + \
                                         N32_DMA_ERRINTSTS_OFFSET)
#define N32_DMA1_TCINTMSK               (N32_DMA1_BASE + \
                                         N32_DMA_TCINTMSK_OFFSET)
#define N32_DMA1_BTCINTMSK              (N32_DMA1_BASE + \
                                         N32_DMA_BTCINTMSK_OFFSET)
#define N32_DMA1_STCINTMSK              (N32_DMA1_BASE + \
                                         N32_DMA_STCINTMSK_OFFSET)
#define N32_DMA1_DTCINTMSK              (N32_DMA1_BASE + \
                                         N32_DMA_DTCINTMSK_OFFSET)
#define N32_DMA1_ERRINTMSK              (N32_DMA1_BASE + \
                                         N32_DMA_ERRINTMSK_OFFSET)
#define N32_DMA1_TCINTCLR               (N32_DMA1_BASE + \
                                         N32_DMA_TCINTCLR_OFFSET)
#define N32_DMA1_BTCINTCLR              (N32_DMA1_BASE + \
                                         N32_DMA_BTCINTCLR_OFFSET)
#define N32_DMA1_STCINTCLR              (N32_DMA1_BASE + \
                                         N32_DMA_STCINTCLR_OFFSET)
#define N32_DMA1_DTCINTCLR              (N32_DMA1_BASE + \
                                         N32_DMA_DTCINTCLR_OFFSET)
#define N32_DMA1_ERRINTCLR              (N32_DMA1_BASE + \
                                         N32_DMA_ERRINTCLR_OFFSET)
#define N32_DMA1_INTCBESTS              (N32_DMA1_BASE + \
                                         N32_DMA_INTCBESTS_OFFSET)
#define N32_DMA1_SRCSWTREQ              (N32_DMA1_BASE + \
                                         N32_DMA_SRCSWTREQ_OFFSET)
#define N32_DMA1_DSTSWTREQ              (N32_DMA1_BASE + \
                                         N32_DMA_DSTSWTREQ_OFFSET)
#define N32_DMA1_SRCSGTREQ              (N32_DMA1_BASE + \
                                         N32_DMA_SRCSGTREQ_OFFSET)
#define N32_DMA1_DSTSGTREQ              (N32_DMA1_BASE + \
                                         N32_DMA_DSTSGTREQ_OFFSET)
#define N32_DMA1_SRCLTREQ               (N32_DMA1_BASE + \
                                         N32_DMA_SRCLTREQ_OFFSET)
#define N32_DMA1_DSTLTREQ               (N32_DMA1_BASE + \
                                         N32_DMA_DSTLTREQ_OFFSET)
#define N32_DMA1_CFG                    (N32_DMA1_BASE + N32_DMA_CFG_OFFSET)
#define N32_DMA1_CHEN                   (N32_DMA1_BASE + N32_DMA_CHEN_OFFSET)
#define N32_DMA1_ID                     (N32_DMA1_BASE + N32_DMA_ID_OFFSET)
#define N32_DMA1_TEST                   (N32_DMA1_BASE + N32_DMA_TEST_OFFSET)
#define N32_DMA1_LPTIMEOUT              (N32_DMA1_BASE + \
                                         N32_DMA_LPTIMEOUT_OFFSET)
#define N32_DMA1_COMPID_L               (N32_DMA1_BASE + \
                                         N32_DMA_COMPID_L_OFFSET)
#define N32_DMA1_COMPID_H               (N32_DMA1_BASE + \
                                         N32_DMA_COMPID_H_OFFSET)

#define N32_DMA2_CH0SA                  (N32_DMA2_BASE + N32_DMA_CH0SA_OFFSET)
#define N32_DMA2_CH0DA                  (N32_DMA2_BASE + N32_DMA_CH0DA_OFFSET)
#define N32_DMA2_CH0LLP                 (N32_DMA2_BASE + \
                                         N32_DMA_CH0LLP_OFFSET)
#define N32_DMA2_CH0CTRL_L              (N32_DMA2_BASE + \
                                         N32_DMA_CH0CTRL_L_OFFSET)
#define N32_DMA2_CH0CTRL_H              (N32_DMA2_BASE + \
                                         N32_DMA_CH0CTRL_H_OFFSET)
#define N32_DMA2_CH0CFG_L               (N32_DMA2_BASE + \
                                         N32_DMA_CH0CFG_L_OFFSET)
#define N32_DMA2_CH0CFG_H               (N32_DMA2_BASE + \
                                         N32_DMA_CH0CFG_H_OFFSET)
#define N32_DMA2_CH0SG                  (N32_DMA2_BASE + N32_DMA_CH0SG_OFFSET)
#define N32_DMA2_CH0DS                  (N32_DMA2_BASE + N32_DMA_CH0DS_OFFSET)
#define N32_DMA2_CH1SA                  (N32_DMA2_BASE + N32_DMA_CH1SA_OFFSET)
#define N32_DMA2_CH1DA                  (N32_DMA2_BASE + N32_DMA_CH1DA_OFFSET)
#define N32_DMA2_CH1LLP                 (N32_DMA2_BASE + \
                                         N32_DMA_CH1LLP_OFFSET)
#define N32_DMA2_CH1CTRL_L              (N32_DMA2_BASE + \
                                         N32_DMA_CH1CTRL_L_OFFSET)
#define N32_DMA2_CH1CTRL_H              (N32_DMA2_BASE + \
                                         N32_DMA_CH1CTRL_H_OFFSET)
#define N32_DMA2_CH1CFG_L               (N32_DMA2_BASE + \
                                         N32_DMA_CH1CFG_L_OFFSET)
#define N32_DMA2_CH1CFG_H               (N32_DMA2_BASE + \
                                         N32_DMA_CH1CFG_H_OFFSET)
#define N32_DMA2_CH1SG                  (N32_DMA2_BASE + N32_DMA_CH1SG_OFFSET)
#define N32_DMA2_CH1DS                  (N32_DMA2_BASE + N32_DMA_CH1DS_OFFSET)
#define N32_DMA2_CH2SA                  (N32_DMA2_BASE + N32_DMA_CH2SA_OFFSET)
#define N32_DMA2_CH2DA                  (N32_DMA2_BASE + N32_DMA_CH2DA_OFFSET)
#define N32_DMA2_CH2LLP                 (N32_DMA2_BASE + \
                                         N32_DMA_CH2LLP_OFFSET)
#define N32_DMA2_CH2CTRL_L              (N32_DMA2_BASE + \
                                         N32_DMA_CH2CTRL_L_OFFSET)
#define N32_DMA2_CH2CTRL_H              (N32_DMA2_BASE + \
                                         N32_DMA_CH2CTRL_H_OFFSET)
#define N32_DMA2_CH2CFG_L               (N32_DMA2_BASE + \
                                         N32_DMA_CH2CFG_L_OFFSET)
#define N32_DMA2_CH2CFG_H               (N32_DMA2_BASE + \
                                         N32_DMA_CH2CFG_H_OFFSET)
#define N32_DMA2_CH2SG                  (N32_DMA2_BASE + N32_DMA_CH2SG_OFFSET)
#define N32_DMA2_CH2DS                  (N32_DMA2_BASE + N32_DMA_CH2DS_OFFSET)
#define N32_DMA2_CH3SA                  (N32_DMA2_BASE + N32_DMA_CH3SA_OFFSET)
#define N32_DMA2_CH3DA                  (N32_DMA2_BASE + N32_DMA_CH3DA_OFFSET)
#define N32_DMA2_CH3LLP                 (N32_DMA2_BASE + \
                                         N32_DMA_CH3LLP_OFFSET)
#define N32_DMA2_CH3CTRL_L              (N32_DMA2_BASE + \
                                         N32_DMA_CH3CTRL_L_OFFSET)
#define N32_DMA2_CH3CTRL_H              (N32_DMA2_BASE + \
                                         N32_DMA_CH3CTRL_H_OFFSET)
#define N32_DMA2_CH3CFG_L               (N32_DMA2_BASE + \
                                         N32_DMA_CH3CFG_L_OFFSET)
#define N32_DMA2_CH3CFG_H               (N32_DMA2_BASE + \
                                         N32_DMA_CH3CFG_H_OFFSET)
#define N32_DMA2_CH3SG                  (N32_DMA2_BASE + N32_DMA_CH3SG_OFFSET)
#define N32_DMA2_CH3DS                  (N32_DMA2_BASE + N32_DMA_CH3DS_OFFSET)
#define N32_DMA2_CH4SA                  (N32_DMA2_BASE + N32_DMA_CH4SA_OFFSET)
#define N32_DMA2_CH4DA                  (N32_DMA2_BASE + N32_DMA_CH4DA_OFFSET)
#define N32_DMA2_CH4LLP                 (N32_DMA2_BASE + \
                                         N32_DMA_CH4LLP_OFFSET)
#define N32_DMA2_CH4CTRL_L              (N32_DMA2_BASE + \
                                         N32_DMA_CH4CTRL_L_OFFSET)
#define N32_DMA2_CH4CTRL_H              (N32_DMA2_BASE + \
                                         N32_DMA_CH4CTRL_H_OFFSET)
#define N32_DMA2_CH4CFG_L               (N32_DMA2_BASE + \
                                         N32_DMA_CH4CFG_L_OFFSET)
#define N32_DMA2_CH4CFG_H               (N32_DMA2_BASE + \
                                         N32_DMA_CH4CFG_H_OFFSET)
#define N32_DMA2_CH4SG                  (N32_DMA2_BASE + N32_DMA_CH4SG_OFFSET)
#define N32_DMA2_CH4DS                  (N32_DMA2_BASE + N32_DMA_CH4DS_OFFSET)
#define N32_DMA2_CH5SA                  (N32_DMA2_BASE + N32_DMA_CH5SA_OFFSET)
#define N32_DMA2_CH5DA                  (N32_DMA2_BASE + N32_DMA_CH5DA_OFFSET)
#define N32_DMA2_CH5LLP                 (N32_DMA2_BASE + \
                                         N32_DMA_CH5LLP_OFFSET)
#define N32_DMA2_CH5CTRL_L              (N32_DMA2_BASE + \
                                         N32_DMA_CH5CTRL_L_OFFSET)
#define N32_DMA2_CH5CTRL_H              (N32_DMA2_BASE + \
                                         N32_DMA_CH5CTRL_H_OFFSET)
#define N32_DMA2_CH5CFG_L               (N32_DMA2_BASE + \
                                         N32_DMA_CH5CFG_L_OFFSET)
#define N32_DMA2_CH5CFG_H               (N32_DMA2_BASE + \
                                         N32_DMA_CH5CFG_H_OFFSET)
#define N32_DMA2_CH5SG                  (N32_DMA2_BASE + N32_DMA_CH5SG_OFFSET)
#define N32_DMA2_CH5DS                  (N32_DMA2_BASE + N32_DMA_CH5DS_OFFSET)
#define N32_DMA2_CH6SA                  (N32_DMA2_BASE + N32_DMA_CH6SA_OFFSET)
#define N32_DMA2_CH6DA                  (N32_DMA2_BASE + N32_DMA_CH6DA_OFFSET)
#define N32_DMA2_CH6LLP                 (N32_DMA2_BASE + \
                                         N32_DMA_CH6LLP_OFFSET)
#define N32_DMA2_CH6CTRL_L              (N32_DMA2_BASE + \
                                         N32_DMA_CH6CTRL_L_OFFSET)
#define N32_DMA2_CH6CTRL_H              (N32_DMA2_BASE + \
                                         N32_DMA_CH6CTRL_H_OFFSET)
#define N32_DMA2_CH6CFG_L               (N32_DMA2_BASE + \
                                         N32_DMA_CH6CFG_L_OFFSET)
#define N32_DMA2_CH6CFG_H               (N32_DMA2_BASE + \
                                         N32_DMA_CH6CFG_H_OFFSET)
#define N32_DMA2_CH6SG                  (N32_DMA2_BASE + N32_DMA_CH6SG_OFFSET)
#define N32_DMA2_CH6DS                  (N32_DMA2_BASE + N32_DMA_CH6DS_OFFSET)
#define N32_DMA2_CH7SA                  (N32_DMA2_BASE + N32_DMA_CH7SA_OFFSET)
#define N32_DMA2_CH7DA                  (N32_DMA2_BASE + N32_DMA_CH7DA_OFFSET)
#define N32_DMA2_CH7LLP                 (N32_DMA2_BASE + \
                                         N32_DMA_CH7LLP_OFFSET)
#define N32_DMA2_CH7CTRL_L              (N32_DMA2_BASE + \
                                         N32_DMA_CH7CTRL_L_OFFSET)
#define N32_DMA2_CH7CTRL_H              (N32_DMA2_BASE + \
                                         N32_DMA_CH7CTRL_H_OFFSET)
#define N32_DMA2_CH7CFG_L               (N32_DMA2_BASE + \
                                         N32_DMA_CH7CFG_L_OFFSET)
#define N32_DMA2_CH7CFG_H               (N32_DMA2_BASE + \
                                         N32_DMA_CH7CFG_H_OFFSET)
#define N32_DMA2_CH7SG                  (N32_DMA2_BASE + N32_DMA_CH7SG_OFFSET)
#define N32_DMA2_CH7DS                  (N32_DMA2_BASE + N32_DMA_CH7DS_OFFSET)
#define N32_DMA2_RAWTCINTSTS            (N32_DMA2_BASE + \
                                         N32_DMA_RAWTCINTSTS_OFFSET)
#define N32_DMA2_RAWBTCINTSTS           (N32_DMA2_BASE + \
                                         N32_DMA_RAWBTCINTSTS_OFFSET)
#define N32_DMA2_RAWSTCINTSTS           (N32_DMA2_BASE + \
                                         N32_DMA_RAWSTCINTSTS_OFFSET)
#define N32_DMA2_RAWDTCINTSTS           (N32_DMA2_BASE + \
                                         N32_DMA_RAWDTCINTSTS_OFFSET)
#define N32_DMA2_RAWERRINTSTS           (N32_DMA2_BASE + \
                                         N32_DMA_RAWERRINTSTS_OFFSET)
#define N32_DMA2_TCINTSTS               (N32_DMA2_BASE + \
                                         N32_DMA_TCINTSTS_OFFSET)
#define N32_DMA2_BTCINTSTS              (N32_DMA2_BASE + \
                                         N32_DMA_BTCINTSTS_OFFSET)
#define N32_DMA2_STCINTSTS              (N32_DMA2_BASE + \
                                         N32_DMA_STCINTSTS_OFFSET)
#define N32_DMA2_DTCINTSTS              (N32_DMA2_BASE + \
                                         N32_DMA_DTCINTSTS_OFFSET)
#define N32_DMA2_ERRINTSTS              (N32_DMA2_BASE + \
                                         N32_DMA_ERRINTSTS_OFFSET)
#define N32_DMA2_TCINTMSK               (N32_DMA2_BASE + \
                                         N32_DMA_TCINTMSK_OFFSET)
#define N32_DMA2_BTCINTMSK              (N32_DMA2_BASE + \
                                         N32_DMA_BTCINTMSK_OFFSET)
#define N32_DMA2_STCINTMSK              (N32_DMA2_BASE + \
                                         N32_DMA_STCINTMSK_OFFSET)
#define N32_DMA2_DTCINTMSK              (N32_DMA2_BASE + \
                                         N32_DMA_DTCINTMSK_OFFSET)
#define N32_DMA2_ERRINTMSK              (N32_DMA2_BASE + \
                                         N32_DMA_ERRINTMSK_OFFSET)
#define N32_DMA2_TCINTCLR               (N32_DMA2_BASE + \
                                         N32_DMA_TCINTCLR_OFFSET)
#define N32_DMA2_BTCINTCLR              (N32_DMA2_BASE + \
                                         N32_DMA_BTCINTCLR_OFFSET)
#define N32_DMA2_STCINTCLR              (N32_DMA2_BASE + \
                                         N32_DMA_STCINTCLR_OFFSET)
#define N32_DMA2_DTCINTCLR              (N32_DMA2_BASE + \
                                         N32_DMA_DTCINTCLR_OFFSET)
#define N32_DMA2_ERRINTCLR              (N32_DMA2_BASE + \
                                         N32_DMA_ERRINTCLR_OFFSET)
#define N32_DMA2_INTCBESTS              (N32_DMA2_BASE + \
                                         N32_DMA_INTCBESTS_OFFSET)
#define N32_DMA2_SRCSWTREQ              (N32_DMA2_BASE + \
                                         N32_DMA_SRCSWTREQ_OFFSET)
#define N32_DMA2_DSTSWTREQ              (N32_DMA2_BASE + \
                                         N32_DMA_DSTSWTREQ_OFFSET)
#define N32_DMA2_SRCSGTREQ              (N32_DMA2_BASE + \
                                         N32_DMA_SRCSGTREQ_OFFSET)
#define N32_DMA2_DSTSGTREQ              (N32_DMA2_BASE + \
                                         N32_DMA_DSTSGTREQ_OFFSET)
#define N32_DMA2_SRCLTREQ               (N32_DMA2_BASE + \
                                         N32_DMA_SRCLTREQ_OFFSET)
#define N32_DMA2_DSTLTREQ               (N32_DMA2_BASE + \
                                         N32_DMA_DSTLTREQ_OFFSET)
#define N32_DMA2_CFG                    (N32_DMA2_BASE + N32_DMA_CFG_OFFSET)
#define N32_DMA2_CHEN                   (N32_DMA2_BASE + N32_DMA_CHEN_OFFSET)
#define N32_DMA2_ID                     (N32_DMA2_BASE + N32_DMA_ID_OFFSET)
#define N32_DMA2_TEST                   (N32_DMA2_BASE + N32_DMA_TEST_OFFSET)
#define N32_DMA2_LPTIMEOUT              (N32_DMA2_BASE + \
                                         N32_DMA_LPTIMEOUT_OFFSET)
#define N32_DMA2_COMPID_L               (N32_DMA2_BASE + \
                                         N32_DMA_COMPID_L_OFFSET)
#define N32_DMA2_COMPID_H               (N32_DMA2_BASE + \
                                         N32_DMA_COMPID_H_OFFSET)

#define N32_DMA3_CH0SA                  (N32_DMA3_BASE + N32_DMA_CH0SA_OFFSET)
#define N32_DMA3_CH0DA                  (N32_DMA3_BASE + N32_DMA_CH0DA_OFFSET)
#define N32_DMA3_CH0LLP                 (N32_DMA3_BASE + \
                                         N32_DMA_CH0LLP_OFFSET)
#define N32_DMA3_CH0CTRL_L              (N32_DMA3_BASE + \
                                         N32_DMA_CH0CTRL_L_OFFSET)
#define N32_DMA3_CH0CTRL_H              (N32_DMA3_BASE + \
                                         N32_DMA_CH0CTRL_H_OFFSET)
#define N32_DMA3_CH0CFG_L               (N32_DMA3_BASE + \
                                         N32_DMA_CH0CFG_L_OFFSET)
#define N32_DMA3_CH0CFG_H               (N32_DMA3_BASE + \
                                         N32_DMA_CH0CFG_H_OFFSET)
#define N32_DMA3_CH0SG                  (N32_DMA3_BASE + N32_DMA_CH0SG_OFFSET)
#define N32_DMA3_CH0DS                  (N32_DMA3_BASE + N32_DMA_CH0DS_OFFSET)
#define N32_DMA3_CH1SA                  (N32_DMA3_BASE + N32_DMA_CH1SA_OFFSET)
#define N32_DMA3_CH1DA                  (N32_DMA3_BASE + N32_DMA_CH1DA_OFFSET)
#define N32_DMA3_CH1LLP                 (N32_DMA3_BASE + \
                                         N32_DMA_CH1LLP_OFFSET)
#define N32_DMA3_CH1CTRL_L              (N32_DMA3_BASE + \
                                         N32_DMA_CH1CTRL_L_OFFSET)
#define N32_DMA3_CH1CTRL_H              (N32_DMA3_BASE + \
                                         N32_DMA_CH1CTRL_H_OFFSET)
#define N32_DMA3_CH1CFG_L               (N32_DMA3_BASE + \
                                         N32_DMA_CH1CFG_L_OFFSET)
#define N32_DMA3_CH1CFG_H               (N32_DMA3_BASE + \
                                         N32_DMA_CH1CFG_H_OFFSET)
#define N32_DMA3_CH1SG                  (N32_DMA3_BASE + N32_DMA_CH1SG_OFFSET)
#define N32_DMA3_CH1DS                  (N32_DMA3_BASE + N32_DMA_CH1DS_OFFSET)
#define N32_DMA3_CH2SA                  (N32_DMA3_BASE + N32_DMA_CH2SA_OFFSET)
#define N32_DMA3_CH2DA                  (N32_DMA3_BASE + N32_DMA_CH2DA_OFFSET)
#define N32_DMA3_CH2LLP                 (N32_DMA3_BASE + \
                                         N32_DMA_CH2LLP_OFFSET)
#define N32_DMA3_CH2CTRL_L              (N32_DMA3_BASE + \
                                         N32_DMA_CH2CTRL_L_OFFSET)
#define N32_DMA3_CH2CTRL_H              (N32_DMA3_BASE + \
                                         N32_DMA_CH2CTRL_H_OFFSET)
#define N32_DMA3_CH2CFG_L               (N32_DMA3_BASE + \
                                         N32_DMA_CH2CFG_L_OFFSET)
#define N32_DMA3_CH2CFG_H               (N32_DMA3_BASE + \
                                         N32_DMA_CH2CFG_H_OFFSET)
#define N32_DMA3_CH2SG                  (N32_DMA3_BASE + N32_DMA_CH2SG_OFFSET)
#define N32_DMA3_CH2DS                  (N32_DMA3_BASE + N32_DMA_CH2DS_OFFSET)
#define N32_DMA3_CH3SA                  (N32_DMA3_BASE + N32_DMA_CH3SA_OFFSET)
#define N32_DMA3_CH3DA                  (N32_DMA3_BASE + N32_DMA_CH3DA_OFFSET)
#define N32_DMA3_CH3LLP                 (N32_DMA3_BASE + \
                                         N32_DMA_CH3LLP_OFFSET)
#define N32_DMA3_CH3CTRL_L              (N32_DMA3_BASE + \
                                         N32_DMA_CH3CTRL_L_OFFSET)
#define N32_DMA3_CH3CTRL_H              (N32_DMA3_BASE + \
                                         N32_DMA_CH3CTRL_H_OFFSET)
#define N32_DMA3_CH3CFG_L               (N32_DMA3_BASE + \
                                         N32_DMA_CH3CFG_L_OFFSET)
#define N32_DMA3_CH3CFG_H               (N32_DMA3_BASE + \
                                         N32_DMA_CH3CFG_H_OFFSET)
#define N32_DMA3_CH3SG                  (N32_DMA3_BASE + N32_DMA_CH3SG_OFFSET)
#define N32_DMA3_CH3DS                  (N32_DMA3_BASE + N32_DMA_CH3DS_OFFSET)
#define N32_DMA3_CH4SA                  (N32_DMA3_BASE + N32_DMA_CH4SA_OFFSET)
#define N32_DMA3_CH4DA                  (N32_DMA3_BASE + N32_DMA_CH4DA_OFFSET)
#define N32_DMA3_CH4LLP                 (N32_DMA3_BASE + \
                                         N32_DMA_CH4LLP_OFFSET)
#define N32_DMA3_CH4CTRL_L              (N32_DMA3_BASE + \
                                         N32_DMA_CH4CTRL_L_OFFSET)
#define N32_DMA3_CH4CTRL_H              (N32_DMA3_BASE + \
                                         N32_DMA_CH4CTRL_H_OFFSET)
#define N32_DMA3_CH4CFG_L               (N32_DMA3_BASE + \
                                         N32_DMA_CH4CFG_L_OFFSET)
#define N32_DMA3_CH4CFG_H               (N32_DMA3_BASE + \
                                         N32_DMA_CH4CFG_H_OFFSET)
#define N32_DMA3_CH4SG                  (N32_DMA3_BASE + N32_DMA_CH4SG_OFFSET)
#define N32_DMA3_CH4DS                  (N32_DMA3_BASE + N32_DMA_CH4DS_OFFSET)
#define N32_DMA3_CH5SA                  (N32_DMA3_BASE + N32_DMA_CH5SA_OFFSET)
#define N32_DMA3_CH5DA                  (N32_DMA3_BASE + N32_DMA_CH5DA_OFFSET)
#define N32_DMA3_CH5LLP                 (N32_DMA3_BASE + \
                                         N32_DMA_CH5LLP_OFFSET)
#define N32_DMA3_CH5CTRL_L              (N32_DMA3_BASE + \
                                         N32_DMA_CH5CTRL_L_OFFSET)
#define N32_DMA3_CH5CTRL_H              (N32_DMA3_BASE + \
                                         N32_DMA_CH5CTRL_H_OFFSET)
#define N32_DMA3_CH5CFG_L               (N32_DMA3_BASE + \
                                         N32_DMA_CH5CFG_L_OFFSET)
#define N32_DMA3_CH5CFG_H               (N32_DMA3_BASE + \
                                         N32_DMA_CH5CFG_H_OFFSET)
#define N32_DMA3_CH5SG                  (N32_DMA3_BASE + N32_DMA_CH5SG_OFFSET)
#define N32_DMA3_CH5DS                  (N32_DMA3_BASE + N32_DMA_CH5DS_OFFSET)
#define N32_DMA3_CH6SA                  (N32_DMA3_BASE + N32_DMA_CH6SA_OFFSET)
#define N32_DMA3_CH6DA                  (N32_DMA3_BASE + N32_DMA_CH6DA_OFFSET)
#define N32_DMA3_CH6LLP                 (N32_DMA3_BASE + \
                                         N32_DMA_CH6LLP_OFFSET)
#define N32_DMA3_CH6CTRL_L              (N32_DMA3_BASE + \
                                         N32_DMA_CH6CTRL_L_OFFSET)
#define N32_DMA3_CH6CTRL_H              (N32_DMA3_BASE + \
                                         N32_DMA_CH6CTRL_H_OFFSET)
#define N32_DMA3_CH6CFG_L               (N32_DMA3_BASE + \
                                         N32_DMA_CH6CFG_L_OFFSET)
#define N32_DMA3_CH6CFG_H               (N32_DMA3_BASE + \
                                         N32_DMA_CH6CFG_H_OFFSET)
#define N32_DMA3_CH6SG                  (N32_DMA3_BASE + N32_DMA_CH6SG_OFFSET)
#define N32_DMA3_CH6DS                  (N32_DMA3_BASE + N32_DMA_CH6DS_OFFSET)
#define N32_DMA3_CH7SA                  (N32_DMA3_BASE + N32_DMA_CH7SA_OFFSET)
#define N32_DMA3_CH7DA                  (N32_DMA3_BASE + N32_DMA_CH7DA_OFFSET)
#define N32_DMA3_CH7LLP                 (N32_DMA3_BASE + \
                                         N32_DMA_CH7LLP_OFFSET)
#define N32_DMA3_CH7CTRL_L              (N32_DMA3_BASE + \
                                         N32_DMA_CH7CTRL_L_OFFSET)
#define N32_DMA3_CH7CTRL_H              (N32_DMA3_BASE + \
                                         N32_DMA_CH7CTRL_H_OFFSET)
#define N32_DMA3_CH7CFG_L               (N32_DMA3_BASE + \
                                         N32_DMA_CH7CFG_L_OFFSET)
#define N32_DMA3_CH7CFG_H               (N32_DMA3_BASE + \
                                         N32_DMA_CH7CFG_H_OFFSET)
#define N32_DMA3_CH7SG                  (N32_DMA3_BASE + N32_DMA_CH7SG_OFFSET)
#define N32_DMA3_CH7DS                  (N32_DMA3_BASE + N32_DMA_CH7DS_OFFSET)
#define N32_DMA3_RAWTCINTSTS            (N32_DMA3_BASE + \
                                         N32_DMA_RAWTCINTSTS_OFFSET)
#define N32_DMA3_RAWBTCINTSTS           (N32_DMA3_BASE + \
                                         N32_DMA_RAWBTCINTSTS_OFFSET)
#define N32_DMA3_RAWSTCINTSTS           (N32_DMA3_BASE + \
                                         N32_DMA_RAWSTCINTSTS_OFFSET)
#define N32_DMA3_RAWDTCINTSTS           (N32_DMA3_BASE + \
                                         N32_DMA_RAWDTCINTSTS_OFFSET)
#define N32_DMA3_RAWERRINTSTS           (N32_DMA3_BASE + \
                                         N32_DMA_RAWERRINTSTS_OFFSET)
#define N32_DMA3_TCINTSTS               (N32_DMA3_BASE + \
                                         N32_DMA_TCINTSTS_OFFSET)
#define N32_DMA3_BTCINTSTS              (N32_DMA3_BASE + \
                                         N32_DMA_BTCINTSTS_OFFSET)
#define N32_DMA3_STCINTSTS              (N32_DMA3_BASE + \
                                         N32_DMA_STCINTSTS_OFFSET)
#define N32_DMA3_DTCINTSTS              (N32_DMA3_BASE + \
                                         N32_DMA_DTCINTSTS_OFFSET)
#define N32_DMA3_ERRINTSTS              (N32_DMA3_BASE + \
                                         N32_DMA_ERRINTSTS_OFFSET)
#define N32_DMA3_TCINTMSK               (N32_DMA3_BASE + \
                                         N32_DMA_TCINTMSK_OFFSET)
#define N32_DMA3_BTCINTMSK              (N32_DMA3_BASE + \
                                         N32_DMA_BTCINTMSK_OFFSET)
#define N32_DMA3_STCINTMSK              (N32_DMA3_BASE + \
                                         N32_DMA_STCINTMSK_OFFSET)
#define N32_DMA3_DTCINTMSK              (N32_DMA3_BASE + \
                                         N32_DMA_DTCINTMSK_OFFSET)
#define N32_DMA3_ERRINTMSK              (N32_DMA3_BASE + \
                                         N32_DMA_ERRINTMSK_OFFSET)
#define N32_DMA3_TCINTCLR               (N32_DMA3_BASE + \
                                         N32_DMA_TCINTCLR_OFFSET)
#define N32_DMA3_BTCINTCLR              (N32_DMA3_BASE + \
                                         N32_DMA_BTCINTCLR_OFFSET)
#define N32_DMA3_STCINTCLR              (N32_DMA3_BASE + \
                                         N32_DMA_STCINTCLR_OFFSET)
#define N32_DMA3_DTCINTCLR              (N32_DMA3_BASE + \
                                         N32_DMA_DTCINTCLR_OFFSET)
#define N32_DMA3_ERRINTCLR              (N32_DMA3_BASE + \
                                         N32_DMA_ERRINTCLR_OFFSET)
#define N32_DMA3_INTCBESTS              (N32_DMA3_BASE + \
                                         N32_DMA_INTCBESTS_OFFSET)
#define N32_DMA3_SRCSWTREQ              (N32_DMA3_BASE + \
                                         N32_DMA_SRCSWTREQ_OFFSET)
#define N32_DMA3_DSTSWTREQ              (N32_DMA3_BASE + \
                                         N32_DMA_DSTSWTREQ_OFFSET)
#define N32_DMA3_SRCSGTREQ              (N32_DMA3_BASE + \
                                         N32_DMA_SRCSGTREQ_OFFSET)
#define N32_DMA3_DSTSGTREQ              (N32_DMA3_BASE + \
                                         N32_DMA_DSTSGTREQ_OFFSET)
#define N32_DMA3_SRCLTREQ               (N32_DMA3_BASE + \
                                         N32_DMA_SRCLTREQ_OFFSET)
#define N32_DMA3_DSTLTREQ               (N32_DMA3_BASE + \
                                         N32_DMA_DSTLTREQ_OFFSET)
#define N32_DMA3_CFG                    (N32_DMA3_BASE + N32_DMA_CFG_OFFSET)
#define N32_DMA3_CHEN                   (N32_DMA3_BASE + N32_DMA_CHEN_OFFSET)
#define N32_DMA3_ID                     (N32_DMA3_BASE + N32_DMA_ID_OFFSET)
#define N32_DMA3_TEST                   (N32_DMA3_BASE + N32_DMA_TEST_OFFSET)
#define N32_DMA3_LPTIMEOUT              (N32_DMA3_BASE + \
                                         N32_DMA_LPTIMEOUT_OFFSET)
#define N32_DMA3_COMPID_L               (N32_DMA3_BASE + \
                                         N32_DMA_COMPID_L_OFFSET)
#define N32_DMA3_COMPID_H               (N32_DMA3_BASE + \
                                         N32_DMA_COMPID_H_OFFSET)

/******** Bit definition for DMA_CH0SA register  ********/
#define DMA_CH0SA_ADDR_SHIFT            (0)
#define DMA_CH0SA_ADDR_MASK             (0xFFFFFFFF << DMA_CH0SA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH0DA register  ********/
#define DMA_CH0DA_ADDR_SHIFT            (0)
#define DMA_CH0DA_ADDR_MASK             (0xFFFFFFFF << DMA_CH0DA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH0LLP register  ********/
#define DMA_CH0LLP_LOC_SHIFT            (2)
#define DMA_CH0LLP_LOC_MASK             (0x3FFFFFFF << DMA_CH0LLP_LOC_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOC
                                                                                 */
#define DMA_CH0LLP_LMS_SHIFT            (0)
#define DMA_CH0LLP_LMS_MASK             (0x3 << DMA_CH0LLP_LMS_SHIFT)           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LMS
                                                                                 */

/******** Bit definition for DMA_CH0CTRL_L register  ********/
#define DMA_CH0CTRL_L_LLPSRCEN          (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPSRCEN
                                                                                 */
#define DMA_CH0CTRL_L_LLPDSTEN          (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPDSTEN
                                                                                 */
#define DMA_CH0CTRL_L_SMS_SHIFT         (25)
#define DMA_CH0CTRL_L_SMS_MASK          (0x3 << DMA_CH0CTRL_L_SMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SMS
                                                                                 */
#define DMA_CH0CTRL_L_DMS_SHIFT         (23)
#define DMA_CH0CTRL_L_DMS_MASK          (0x3 << DMA_CH0CTRL_L_DMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMS
                                                                                 */
#define DMA_CH0CTRL_L_TTFC_SHIFT        (20)
#define DMA_CH0CTRL_L_TTFC_MASK         (0x7 << DMA_CH0CTRL_L_TTFC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TTFC
                                                                                 */
#define DMA_CH0CTRL_L_DSTSCAEN          (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTSCAEN
                                                                                 */
#define DMA_CH0CTRL_L_SRCGATEN          (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCGATEN
                                                                                 */
#define DMA_CH0CTRL_L_SRCMSIZE_SHIFT    (14)
#define DMA_CH0CTRL_L_SRCMSIZE_MASK     (0x7 << DMA_CH0CTRL_L_SRCMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCMSIZE
                                                                                 */
#define DMA_CH0CTRL_L_DSTMSIZE_SHIFT    (11)
#define DMA_CH0CTRL_L_DSTMSIZE_MASK     (0x7 << DMA_CH0CTRL_L_DSTMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTMSIZE
                                                                                 */
#define DMA_CH0CTRL_L_SINC_SHIFT        (9)
#define DMA_CH0CTRL_L_SINC_MASK         (0x3 << DMA_CH0CTRL_L_SINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SINC
                                                                                 */
#define DMA_CH0CTRL_L_DINC_SHIFT        (7)
#define DMA_CH0CTRL_L_DINC_MASK         (0x3 << DMA_CH0CTRL_L_DINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DINC
                                                                                 */
#define DMA_CH0CTRL_L_STW_SHIFT         (4)
#define DMA_CH0CTRL_L_STW_MASK          (0x7 << DMA_CH0CTRL_L_STW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * STW
                                                                                 */
#define DMA_CH0CTRL_L_DTW_SHIFT         (1)
#define DMA_CH0CTRL_L_DTW_MASK          (0x7 << DMA_CH0CTRL_L_DTW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DTW
                                                                                 */
#define DMA_CH0CTRL_L_INTEN             (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTEN
                                                                                 */

/******** Bit definition for DMA_CH0CTRL_H register  ********/
#define DMA_CH0CTRL_H_DONE              (1 << 12)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DONE
                                                                             */
#define DMA_CH0CTRL_H_BTS_SHIFT         (0)
#define DMA_CH0CTRL_H_BTS_MASK          (0xFFF << DMA_CH0CTRL_H_BTS_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * BTS
                                                                             */

/******** Bit definition for DMA_CH0CFG_L register  ********/
#define DMA_CH0CFG_L_ADR                (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADR
                                                                                 */
#define DMA_CH0CFG_L_ASR                (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ASR
                                                                                 */
#define DMA_CH0CFG_L_MAMBABL_SHIFT      (20)
#define DMA_CH0CFG_L_MAMBABL_MASK       (0x3FF << DMA_CH0CFG_L_MAMBABL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MAMBABL
                                                                                 */
#define DMA_CH0CFG_L_SRCHSPOL           (1 << 19)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCHSPOL
                                                                                 */
#define DMA_CH0CFG_L_DSTHSPOL           (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTHSPOL
                                                                                 */
#define DMA_CH0CFG_L_LOCKB              (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKB
                                                                                 */
#define DMA_CH0CFG_L_LOCKCH             (1 << 16)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCH
                                                                                 */
#define DMA_CH0CFG_L_LOCKBL_SHIFT       (14)
#define DMA_CH0CFG_L_LOCKBL_MASK        (0x3 << DMA_CH0CFG_L_LOCKBL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKBL
                                                                                 */
#define DMA_CH0CFG_L_LOCKCHL_SHIFT      (12)
#define DMA_CH0CFG_L_LOCKCHL_MASK       (0x3 << DMA_CH0CFG_L_LOCKCHL_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCHL
                                                                                 */
#define DMA_CH0CFG_L_HSSELSRC           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELSRC
                                                                                 */
#define DMA_CH0CFG_L_HSSELDST           (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELDST
                                                                                 */
#define DMA_CH0CFG_L_FIFOEMPTY          (1 << 9)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FIFOEMPTY
                                                                                 */
#define DMA_CH0CFG_L_CHSUSP             (1 << 8)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHSUSP
                                                                                 */
#define DMA_CH0CFG_L_CHPRIOR_SHIFT      (5)
#define DMA_CH0CFG_L_CHPRIOR_MASK       (0x7 << DMA_CH0CFG_L_CHPRIOR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHPRIOR
                                                                                 */

/******** Bit definition for DMA_CH0CFG_H register  ********/
#define DMA_CH0CFG_H_DSTPER_SHIFT       (11)
#define DMA_CH0CFG_H_DSTPER_MASK        (0x7 << DMA_CH0CFG_H_DSTPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSTPER
                                                                             */
#define DMA_CH0CFG_H_SRCPER_SHIFT       (7)
#define DMA_CH0CFG_H_SRCPER_MASK        (0x7 << DMA_CH0CFG_H_SRCPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SRCPER
                                                                             */
#define DMA_CH0CFG_H_PROTCTL_SHIFT      (2)
#define DMA_CH0CFG_H_PROTCTL_MASK       (0x7 << DMA_CH0CFG_H_PROTCTL_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * PROTCTL
                                                                             */
#define DMA_CH0CFG_H_FIFOMS             (1 << 1)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FIFOMS
                                                                             */
#define DMA_CH0CFG_H_FCM                (1 << 0)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FCM
                                                                             */

/******** Bit definition for DMA_CH0SG register  ********/
#define DMA_CH0SG_SGC_SHIFT             (20)
#define DMA_CH0SG_SGC_MASK              (0x1FF << DMA_CH0SG_SGC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGC
                                                                             */
#define DMA_CH0SG_SGI_SHIFT             (0)
#define DMA_CH0SG_SGI_MASK              (0xFFFFF << DMA_CH0SG_SGI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGI
                                                                             */

/******** Bit definition for DMA_CH0DS register  ********/
#define DMA_CH0DS_DSC_SHIFT             (20)
#define DMA_CH0DS_DSC_MASK              (0x1FF << DMA_CH0DS_DSC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSC
                                                                             */
#define DMA_CH0DS_DSI_SHIFT             (0)
#define DMA_CH0DS_DSI_MASK              (0xFFFFF << DMA_CH0DS_DSI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSI
                                                                             */

/******** Bit definition for DMA_CH1SA register  ********/
#define DMA_CH1SA_ADDR_SHIFT            (0)
#define DMA_CH1SA_ADDR_MASK             (0xFFFFFFFF << DMA_CH1SA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH1DA register  ********/
#define DMA_CH1DA_ADDR_SHIFT            (0)
#define DMA_CH1DA_ADDR_MASK             (0xFFFFFFFF << DMA_CH1DA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH1LLP register  ********/
#define DMA_CH1LLP_LOC_SHIFT            (2)
#define DMA_CH1LLP_LOC_MASK             (0x3FFFFFFF << DMA_CH1LLP_LOC_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOC
                                                                                 */
#define DMA_CH1LLP_LMS_SHIFT            (0)
#define DMA_CH1LLP_LMS_MASK             (0x3 << DMA_CH1LLP_LMS_SHIFT)           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LMS
                                                                                 */

/******** Bit definition for DMA_CH1CTRL_L register  ********/
#define DMA_CH1CTRL_L_LLPSRCEN          (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPSRCEN
                                                                                 */
#define DMA_CH1CTRL_L_LLPDSTEN          (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPDSTEN
                                                                                 */
#define DMA_CH1CTRL_L_SMS_SHIFT         (25)
#define DMA_CH1CTRL_L_SMS_MASK          (0x3 << DMA_CH1CTRL_L_SMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SMS
                                                                                 */
#define DMA_CH1CTRL_L_DMS_SHIFT         (23)
#define DMA_CH1CTRL_L_DMS_MASK          (0x3 << DMA_CH1CTRL_L_DMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMS
                                                                                 */
#define DMA_CH1CTRL_L_TTFC_SHIFT        (20)
#define DMA_CH1CTRL_L_TTFC_MASK         (0x7 << DMA_CH1CTRL_L_TTFC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TTFC
                                                                                 */
#define DMA_CH1CTRL_L_DSTSCAEN          (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTSCAEN
                                                                                 */
#define DMA_CH1CTRL_L_SRCGATEN          (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCGATEN
                                                                                 */
#define DMA_CH1CTRL_L_SRCMSIZE_SHIFT    (14)
#define DMA_CH1CTRL_L_SRCMSIZE_MASK     (0x7 << DMA_CH1CTRL_L_SRCMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCMSIZE
                                                                                 */
#define DMA_CH1CTRL_L_DSTMSIZE_SHIFT    (11)
#define DMA_CH1CTRL_L_DSTMSIZE_MASK     (0x7 << DMA_CH1CTRL_L_DSTMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTMSIZE
                                                                                 */
#define DMA_CH1CTRL_L_SINC_SHIFT        (9)
#define DMA_CH1CTRL_L_SINC_MASK         (0x3 << DMA_CH1CTRL_L_SINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SINC
                                                                                 */
#define DMA_CH1CTRL_L_DINC_SHIFT        (7)
#define DMA_CH1CTRL_L_DINC_MASK         (0x3 << DMA_CH1CTRL_L_DINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DINC
                                                                                 */
#define DMA_CH1CTRL_L_STW_SHIFT         (4)
#define DMA_CH1CTRL_L_STW_MASK          (0x7 << DMA_CH1CTRL_L_STW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * STW
                                                                                 */
#define DMA_CH1CTRL_L_DTW_SHIFT         (1)
#define DMA_CH1CTRL_L_DTW_MASK          (0x7 << DMA_CH1CTRL_L_DTW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DTW
                                                                                 */
#define DMA_CH1CTRL_L_INTEN             (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTEN
                                                                                 */

/******** Bit definition for DMA_CH1CTRL_H register  ********/
#define DMA_CH1CTRL_H_DONE              (1 << 12)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DONE
                                                                             */
#define DMA_CH1CTRL_H_BTS_SHIFT         (0)
#define DMA_CH1CTRL_H_BTS_MASK          (0xFFF << DMA_CH1CTRL_H_BTS_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * BTS
                                                                             */

/******** Bit definition for DMA_CH1CFG_L register  ********/
#define DMA_CH1CFG_L_ADR                (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADR
                                                                                 */
#define DMA_CH1CFG_L_ASR                (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ASR
                                                                                 */
#define DMA_CH1CFG_L_MAMBABL_SHIFT      (20)
#define DMA_CH1CFG_L_MAMBABL_MASK       (0x3FF << DMA_CH1CFG_L_MAMBABL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MAMBABL
                                                                                 */
#define DMA_CH1CFG_L_SRCHSPOL           (1 << 19)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCHSPOL
                                                                                 */
#define DMA_CH1CFG_L_DSTHSPOL           (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTHSPOL
                                                                                 */
#define DMA_CH1CFG_L_LOCKB              (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKB
                                                                                 */
#define DMA_CH1CFG_L_LOCKCH             (1 << 16)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCH
                                                                                 */
#define DMA_CH1CFG_L_LOCKBL_SHIFT       (14)
#define DMA_CH1CFG_L_LOCKBL_MASK        (0x3 << DMA_CH1CFG_L_LOCKBL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKBL
                                                                                 */
#define DMA_CH1CFG_L_LOCKCHL_SHIFT      (12)
#define DMA_CH1CFG_L_LOCKCHL_MASK       (0x3 << DMA_CH1CFG_L_LOCKCHL_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCHL
                                                                                 */
#define DMA_CH1CFG_L_HSSELSRC           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELSRC
                                                                                 */
#define DMA_CH1CFG_L_HSSELDST           (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELDST
                                                                                 */
#define DMA_CH1CFG_L_FIFOEMPTY          (1 << 9)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FIFOEMPTY
                                                                                 */
#define DMA_CH1CFG_L_CHSUSP             (1 << 8)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHSUSP
                                                                                 */
#define DMA_CH1CFG_L_CHPRIOR_SHIFT      (5)
#define DMA_CH1CFG_L_CHPRIOR_MASK       (0x7 << DMA_CH1CFG_L_CHPRIOR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHPRIOR
                                                                                 */

/******** Bit definition for DMA_CH1CFG_H register  ********/
#define DMA_CH1CFG_H_DSTPER_SHIFT       (11)
#define DMA_CH1CFG_H_DSTPER_MASK        (0x7 << DMA_CH1CFG_H_DSTPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSTPER
                                                                             */
#define DMA_CH1CFG_H_SRCPER_SHIFT       (7)
#define DMA_CH1CFG_H_SRCPER_MASK        (0x7 << DMA_CH1CFG_H_SRCPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SRCPER
                                                                             */
#define DMA_CH1CFG_H_PROTCTL_SHIFT      (2)
#define DMA_CH1CFG_H_PROTCTL_MASK       (0x7 << DMA_CH1CFG_H_PROTCTL_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * PROTCTL
                                                                             */
#define DMA_CH1CFG_H_FIFOMS             (1 << 1)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FIFOMS
                                                                             */
#define DMA_CH1CFG_H_FCM                (1 << 0)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FCM
                                                                             */

/******** Bit definition for DMA_CH1SG register  ********/
#define DMA_CH1SG_SGC_SHIFT             (20)
#define DMA_CH1SG_SGC_MASK              (0x1FF << DMA_CH1SG_SGC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGC
                                                                             */
#define DMA_CH1SG_SGI_SHIFT             (0)
#define DMA_CH1SG_SGI_MASK              (0xFFFFF << DMA_CH1SG_SGI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGI
                                                                             */

/******** Bit definition for DMA_CH1DS register  ********/
#define DMA_CH1DS_DSC_SHIFT             (20)
#define DMA_CH1DS_DSC_MASK              (0x1FF << DMA_CH1DS_DSC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSC
                                                                             */
#define DMA_CH1DS_DSI_SHIFT             (0)
#define DMA_CH1DS_DSI_MASK              (0xFFFFF << DMA_CH1DS_DSI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSI
                                                                             */

/******** Bit definition for DMA_CH2SA register  ********/
#define DMA_CH2SA_ADDR_SHIFT            (0)
#define DMA_CH2SA_ADDR_MASK             (0xFFFFFFFF << DMA_CH2SA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH2DA register  ********/
#define DMA_CH2DA_ADDR_SHIFT            (0)
#define DMA_CH2DA_ADDR_MASK             (0xFFFFFFFF << DMA_CH2DA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH2LLP register  ********/
#define DMA_CH2LLP_LOC_SHIFT            (2)
#define DMA_CH2LLP_LOC_MASK             (0x3FFFFFFF << DMA_CH2LLP_LOC_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOC
                                                                                 */
#define DMA_CH2LLP_LMS_SHIFT            (0)
#define DMA_CH2LLP_LMS_MASK             (0x3 << DMA_CH2LLP_LMS_SHIFT)           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LMS
                                                                                 */

/******** Bit definition for DMA_CH2CTRL_L register  ********/
#define DMA_CH2CTRL_L_LLPSRCEN          (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPSRCEN
                                                                                 */
#define DMA_CH2CTRL_L_LLPDSTEN          (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPDSTEN
                                                                                 */
#define DMA_CH2CTRL_L_SMS_SHIFT         (25)
#define DMA_CH2CTRL_L_SMS_MASK          (0x3 << DMA_CH2CTRL_L_SMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SMS
                                                                                 */
#define DMA_CH2CTRL_L_DMS_SHIFT         (23)
#define DMA_CH2CTRL_L_DMS_MASK          (0x3 << DMA_CH2CTRL_L_DMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMS
                                                                                 */
#define DMA_CH2CTRL_L_TTFC_SHIFT        (20)
#define DMA_CH2CTRL_L_TTFC_MASK         (0x7 << DMA_CH2CTRL_L_TTFC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TTFC
                                                                                 */
#define DMA_CH2CTRL_L_DSTSCAEN          (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTSCAEN
                                                                                 */
#define DMA_CH2CTRL_L_SRCGATEN          (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCGATEN
                                                                                 */
#define DMA_CH2CTRL_L_SRCMSIZE_SHIFT    (14)
#define DMA_CH2CTRL_L_SRCMSIZE_MASK     (0x7 << DMA_CH2CTRL_L_SRCMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCMSIZE
                                                                                 */
#define DMA_CH2CTRL_L_DSTMSIZE_SHIFT    (11)
#define DMA_CH2CTRL_L_DSTMSIZE_MASK     (0x7 << DMA_CH2CTRL_L_DSTMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTMSIZE
                                                                                 */
#define DMA_CH2CTRL_L_SINC_SHIFT        (9)
#define DMA_CH2CTRL_L_SINC_MASK         (0x3 << DMA_CH2CTRL_L_SINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SINC
                                                                                 */
#define DMA_CH2CTRL_L_DINC_SHIFT        (7)
#define DMA_CH2CTRL_L_DINC_MASK         (0x3 << DMA_CH2CTRL_L_DINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DINC
                                                                                 */
#define DMA_CH2CTRL_L_STW_SHIFT         (4)
#define DMA_CH2CTRL_L_STW_MASK          (0x7 << DMA_CH2CTRL_L_STW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * STW
                                                                                 */
#define DMA_CH2CTRL_L_DTW_SHIFT         (1)
#define DMA_CH2CTRL_L_DTW_MASK          (0x7 << DMA_CH2CTRL_L_DTW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DTW
                                                                                 */
#define DMA_CH2CTRL_L_INTEN             (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTEN
                                                                                 */

/******** Bit definition for DMA_CH2CTRL_H register  ********/
#define DMA_CH2CTRL_H_DONE              (1 << 12)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DONE
                                                                             */
#define DMA_CH2CTRL_H_BTS_SHIFT         (0)
#define DMA_CH2CTRL_H_BTS_MASK          (0xFFF << DMA_CH2CTRL_H_BTS_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * BTS
                                                                             */

/******** Bit definition for DMA_CH2CFG_L register  ********/
#define DMA_CH2CFG_L_ADR                (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADR
                                                                                 */
#define DMA_CH2CFG_L_ASR                (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ASR
                                                                                 */
#define DMA_CH2CFG_L_MAMBABL_SHIFT      (20)
#define DMA_CH2CFG_L_MAMBABL_MASK       (0x3FF << DMA_CH2CFG_L_MAMBABL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MAMBABL
                                                                                 */
#define DMA_CH2CFG_L_SRCHSPOL           (1 << 19)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCHSPOL
                                                                                 */
#define DMA_CH2CFG_L_DSTHSPOL           (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTHSPOL
                                                                                 */
#define DMA_CH2CFG_L_LOCKB              (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKB
                                                                                 */
#define DMA_CH2CFG_L_LOCKCH             (1 << 16)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCH
                                                                                 */
#define DMA_CH2CFG_L_LOCKBL_SHIFT       (14)
#define DMA_CH2CFG_L_LOCKBL_MASK        (0x3 << DMA_CH2CFG_L_LOCKBL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKBL
                                                                                 */
#define DMA_CH2CFG_L_LOCKCHL_SHIFT      (12)
#define DMA_CH2CFG_L_LOCKCHL_MASK       (0x3 << DMA_CH2CFG_L_LOCKCHL_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCHL
                                                                                 */
#define DMA_CH2CFG_L_HSSELSRC           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELSRC
                                                                                 */
#define DMA_CH2CFG_L_HSSELDST           (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELDST
                                                                                 */
#define DMA_CH2CFG_L_FIFOEMPTY          (1 << 9)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FIFOEMPTY
                                                                                 */
#define DMA_CH2CFG_L_CHSUSP             (1 << 8)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHSUSP
                                                                                 */
#define DMA_CH2CFG_L_CHPRIOR_SHIFT      (5)
#define DMA_CH2CFG_L_CHPRIOR_MASK       (0x7 << DMA_CH2CFG_L_CHPRIOR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHPRIOR
                                                                                 */

/******** Bit definition for DMA_CH2CFG_H register  ********/
#define DMA_CH2CFG_H_DSTPER_SHIFT       (11)
#define DMA_CH2CFG_H_DSTPER_MASK        (0x7 << DMA_CH2CFG_H_DSTPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSTPER
                                                                             */
#define DMA_CH2CFG_H_SRCPER_SHIFT       (7)
#define DMA_CH2CFG_H_SRCPER_MASK        (0x7 << DMA_CH2CFG_H_SRCPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SRCPER
                                                                             */
#define DMA_CH2CFG_H_PROTCTL_SHIFT      (2)
#define DMA_CH2CFG_H_PROTCTL_MASK       (0x7 << DMA_CH2CFG_H_PROTCTL_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * PROTCTL
                                                                             */
#define DMA_CH2CFG_H_FIFOMS             (1 << 1)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FIFOMS
                                                                             */
#define DMA_CH2CFG_H_FCM                (1 << 0)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FCM
                                                                             */

/******** Bit definition for DMA_CH2SG register  ********/
#define DMA_CH2SG_SGC_SHIFT             (20)
#define DMA_CH2SG_SGC_MASK              (0x1FF << DMA_CH2SG_SGC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGC
                                                                             */
#define DMA_CH2SG_SGI_SHIFT             (0)
#define DMA_CH2SG_SGI_MASK              (0xFFFFF << DMA_CH2SG_SGI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGI
                                                                             */

/******** Bit definition for DMA_CH2DS register  ********/
#define DMA_CH2DS_DSC_SHIFT             (20)
#define DMA_CH2DS_DSC_MASK              (0x1FF << DMA_CH2DS_DSC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSC
                                                                             */
#define DMA_CH2DS_DSI_SHIFT             (0)
#define DMA_CH2DS_DSI_MASK              (0xFFFFF << DMA_CH2DS_DSI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSI
                                                                             */

/******** Bit definition for DMA_CH3SA register  ********/
#define DMA_CH3SA_ADDR_SHIFT            (0)
#define DMA_CH3SA_ADDR_MASK             (0xFFFFFFFF << DMA_CH3SA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH3DA register  ********/
#define DMA_CH3DA_ADDR_SHIFT            (0)
#define DMA_CH3DA_ADDR_MASK             (0xFFFFFFFF << DMA_CH3DA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH3LLP register  ********/
#define DMA_CH3LLP_LOC_SHIFT            (2)
#define DMA_CH3LLP_LOC_MASK             (0x3FFFFFFF << DMA_CH3LLP_LOC_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOC
                                                                                 */
#define DMA_CH3LLP_LMS_SHIFT            (0)
#define DMA_CH3LLP_LMS_MASK             (0x3 << DMA_CH3LLP_LMS_SHIFT)           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LMS
                                                                                 */

/******** Bit definition for DMA_CH3CTRL_L register  ********/
#define DMA_CH3CTRL_L_LLPSRCEN          (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPSRCEN
                                                                                 */
#define DMA_CH3CTRL_L_LLPDSTEN          (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPDSTEN
                                                                                 */
#define DMA_CH3CTRL_L_SMS_SHIFT         (25)
#define DMA_CH3CTRL_L_SMS_MASK          (0x3 << DMA_CH3CTRL_L_SMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SMS
                                                                                 */
#define DMA_CH3CTRL_L_DMS_SHIFT         (23)
#define DMA_CH3CTRL_L_DMS_MASK          (0x3 << DMA_CH3CTRL_L_DMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMS
                                                                                 */
#define DMA_CH3CTRL_L_TTFC_SHIFT        (20)
#define DMA_CH3CTRL_L_TTFC_MASK         (0x7 << DMA_CH3CTRL_L_TTFC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TTFC
                                                                                 */
#define DMA_CH3CTRL_L_DSTSCAEN          (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTSCAEN
                                                                                 */
#define DMA_CH3CTRL_L_SRCGATEN          (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCGATEN
                                                                                 */
#define DMA_CH3CTRL_L_SRCMSIZE_SHIFT    (14)
#define DMA_CH3CTRL_L_SRCMSIZE_MASK     (0x7 << DMA_CH3CTRL_L_SRCMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCMSIZE
                                                                                 */
#define DMA_CH3CTRL_L_DSTMSIZE_SHIFT    (11)
#define DMA_CH3CTRL_L_DSTMSIZE_MASK     (0x7 << DMA_CH3CTRL_L_DSTMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTMSIZE
                                                                                 */
#define DMA_CH3CTRL_L_SINC_SHIFT        (9)
#define DMA_CH3CTRL_L_SINC_MASK         (0x3 << DMA_CH3CTRL_L_SINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SINC
                                                                                 */
#define DMA_CH3CTRL_L_DINC_SHIFT        (7)
#define DMA_CH3CTRL_L_DINC_MASK         (0x3 << DMA_CH3CTRL_L_DINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DINC
                                                                                 */
#define DMA_CH3CTRL_L_STW_SHIFT         (4)
#define DMA_CH3CTRL_L_STW_MASK          (0x7 << DMA_CH3CTRL_L_STW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * STW
                                                                                 */
#define DMA_CH3CTRL_L_DTW_SHIFT         (1)
#define DMA_CH3CTRL_L_DTW_MASK          (0x7 << DMA_CH3CTRL_L_DTW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DTW
                                                                                 */
#define DMA_CH3CTRL_L_INTEN             (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTEN
                                                                                 */

/******** Bit definition for DMA_CH3CTRL_H register  ********/
#define DMA_CH3CTRL_H_DONE              (1 << 12)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DONE
                                                                             */
#define DMA_CH3CTRL_H_BTS_SHIFT         (0)
#define DMA_CH3CTRL_H_BTS_MASK          (0xFFF << DMA_CH3CTRL_H_BTS_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * BTS
                                                                             */

/******** Bit definition for DMA_CH3CFG_L register  ********/
#define DMA_CH3CFG_L_ADR                (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADR
                                                                                 */
#define DMA_CH3CFG_L_ASR                (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ASR
                                                                                 */
#define DMA_CH3CFG_L_MAMBABL_SHIFT      (20)
#define DMA_CH3CFG_L_MAMBABL_MASK       (0x3FF << DMA_CH3CFG_L_MAMBABL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MAMBABL
                                                                                 */
#define DMA_CH3CFG_L_SRCHSPOL           (1 << 19)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCHSPOL
                                                                                 */
#define DMA_CH3CFG_L_DSTHSPOL           (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTHSPOL
                                                                                 */
#define DMA_CH3CFG_L_LOCKB              (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKB
                                                                                 */
#define DMA_CH3CFG_L_LOCKCH             (1 << 16)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCH
                                                                                 */
#define DMA_CH3CFG_L_LOCKBL_SHIFT       (14)
#define DMA_CH3CFG_L_LOCKBL_MASK        (0x3 << DMA_CH3CFG_L_LOCKBL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKBL
                                                                                 */
#define DMA_CH3CFG_L_LOCKCHL_SHIFT      (12)
#define DMA_CH3CFG_L_LOCKCHL_MASK       (0x3 << DMA_CH3CFG_L_LOCKCHL_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCHL
                                                                                 */
#define DMA_CH3CFG_L_HSSELSRC           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELSRC
                                                                                 */
#define DMA_CH3CFG_L_HSSELDST           (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELDST
                                                                                 */
#define DMA_CH3CFG_L_FIFOEMPTY          (1 << 9)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FIFOEMPTY
                                                                                 */
#define DMA_CH3CFG_L_CHSUSP             (1 << 8)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHSUSP
                                                                                 */
#define DMA_CH3CFG_L_CHPRIOR_SHIFT      (5)
#define DMA_CH3CFG_L_CHPRIOR_MASK       (0x7 << DMA_CH3CFG_L_CHPRIOR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHPRIOR
                                                                                 */

/******** Bit definition for DMA_CH3CFG_H register  ********/
#define DMA_CH3CFG_H_DSTPER_SHIFT       (11)
#define DMA_CH3CFG_H_DSTPER_MASK        (0x7 << DMA_CH3CFG_H_DSTPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSTPER
                                                                             */
#define DMA_CH3CFG_H_SRCPER_SHIFT       (7)
#define DMA_CH3CFG_H_SRCPER_MASK        (0x7 << DMA_CH3CFG_H_SRCPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SRCPER
                                                                             */
#define DMA_CH3CFG_H_PROTCTL_SHIFT      (2)
#define DMA_CH3CFG_H_PROTCTL_MASK       (0x7 << DMA_CH3CFG_H_PROTCTL_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * PROTCTL
                                                                             */
#define DMA_CH3CFG_H_FIFOMS             (1 << 1)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FIFOMS
                                                                             */
#define DMA_CH3CFG_H_FCM                (1 << 0)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FCM
                                                                             */

/******** Bit definition for DMA_CH3SG register  ********/
#define DMA_CH3SG_SGC_SHIFT             (20)
#define DMA_CH3SG_SGC_MASK              (0x1FF << DMA_CH3SG_SGC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGC
                                                                             */
#define DMA_CH3SG_SGI_SHIFT             (0)
#define DMA_CH3SG_SGI_MASK              (0xFFFFF << DMA_CH3SG_SGI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGI
                                                                             */

/******** Bit definition for DMA_CH3DS register  ********/
#define DMA_CH3DS_DSC_SHIFT             (20)
#define DMA_CH3DS_DSC_MASK              (0x1FF << DMA_CH3DS_DSC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSC
                                                                             */
#define DMA_CH3DS_DSI_SHIFT             (0)
#define DMA_CH3DS_DSI_MASK              (0xFFFFF << DMA_CH3DS_DSI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSI
                                                                             */

/******** Bit definition for DMA_CH4SA register  ********/
#define DMA_CH4SA_ADDR_SHIFT            (0)
#define DMA_CH4SA_ADDR_MASK             (0xFFFFFFFF << DMA_CH4SA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH4DA register  ********/
#define DMA_CH4DA_ADDR_SHIFT            (0)
#define DMA_CH4DA_ADDR_MASK             (0xFFFFFFFF << DMA_CH4DA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH4LLP register  ********/
#define DMA_CH4LLP_LOC_SHIFT            (2)
#define DMA_CH4LLP_LOC_MASK             (0x3FFFFFFF << DMA_CH4LLP_LOC_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOC
                                                                                 */
#define DMA_CH4LLP_LMS_SHIFT            (0)
#define DMA_CH4LLP_LMS_MASK             (0x3 << DMA_CH4LLP_LMS_SHIFT)           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LMS
                                                                                 */

/******** Bit definition for DMA_CH4CTRL_L register  ********/
#define DMA_CH4CTRL_L_LLPSRCEN          (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPSRCEN
                                                                                 */
#define DMA_CH4CTRL_L_LLPDSTEN          (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPDSTEN
                                                                                 */
#define DMA_CH4CTRL_L_SMS_SHIFT         (25)
#define DMA_CH4CTRL_L_SMS_MASK          (0x3 << DMA_CH4CTRL_L_SMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SMS
                                                                                 */
#define DMA_CH4CTRL_L_DMS_SHIFT         (23)
#define DMA_CH4CTRL_L_DMS_MASK          (0x3 << DMA_CH4CTRL_L_DMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMS
                                                                                 */
#define DMA_CH4CTRL_L_TTFC_SHIFT        (20)
#define DMA_CH4CTRL_L_TTFC_MASK         (0x7 << DMA_CH4CTRL_L_TTFC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TTFC
                                                                                 */
#define DMA_CH4CTRL_L_DSTSCAEN          (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTSCAEN
                                                                                 */
#define DMA_CH4CTRL_L_SRCGATEN          (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCGATEN
                                                                                 */
#define DMA_CH4CTRL_L_SRCMSIZE_SHIFT    (14)
#define DMA_CH4CTRL_L_SRCMSIZE_MASK     (0x7 << DMA_CH4CTRL_L_SRCMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCMSIZE
                                                                                 */
#define DMA_CH4CTRL_L_DSTMSIZE_SHIFT    (11)
#define DMA_CH4CTRL_L_DSTMSIZE_MASK     (0x7 << DMA_CH4CTRL_L_DSTMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTMSIZE
                                                                                 */
#define DMA_CH4CTRL_L_SINC_SHIFT        (9)
#define DMA_CH4CTRL_L_SINC_MASK         (0x3 << DMA_CH4CTRL_L_SINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SINC
                                                                                 */
#define DMA_CH4CTRL_L_DINC_SHIFT        (7)
#define DMA_CH4CTRL_L_DINC_MASK         (0x3 << DMA_CH4CTRL_L_DINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DINC
                                                                                 */
#define DMA_CH4CTRL_L_STW_SHIFT         (4)
#define DMA_CH4CTRL_L_STW_MASK          (0x7 << DMA_CH4CTRL_L_STW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * STW
                                                                                 */
#define DMA_CH4CTRL_L_DTW_SHIFT         (1)
#define DMA_CH4CTRL_L_DTW_MASK          (0x7 << DMA_CH4CTRL_L_DTW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DTW
                                                                                 */
#define DMA_CH4CTRL_L_INTEN             (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTEN
                                                                                 */

/******** Bit definition for DMA_CH4CTRL_H register  ********/
#define DMA_CH4CTRL_H_DONE              (1 << 12)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DONE
                                                                             */
#define DMA_CH4CTRL_H_BTS_SHIFT         (0)
#define DMA_CH4CTRL_H_BTS_MASK          (0xFFF << DMA_CH4CTRL_H_BTS_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * BTS
                                                                             */

/******** Bit definition for DMA_CH4CFG_L register  ********/
#define DMA_CH4CFG_L_ADR                (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADR
                                                                                 */
#define DMA_CH4CFG_L_ASR                (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ASR
                                                                                 */
#define DMA_CH4CFG_L_MAMBABL_SHIFT      (20)
#define DMA_CH4CFG_L_MAMBABL_MASK       (0x3FF << DMA_CH4CFG_L_MAMBABL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MAMBABL
                                                                                 */
#define DMA_CH4CFG_L_SRCHSPOL           (1 << 19)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCHSPOL
                                                                                 */
#define DMA_CH4CFG_L_DSTHSPOL           (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTHSPOL
                                                                                 */
#define DMA_CH4CFG_L_LOCKB              (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKB
                                                                                 */
#define DMA_CH4CFG_L_LOCKCH             (1 << 16)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCH
                                                                                 */
#define DMA_CH4CFG_L_LOCKBL_SHIFT       (14)
#define DMA_CH4CFG_L_LOCKBL_MASK        (0x3 << DMA_CH4CFG_L_LOCKBL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKBL
                                                                                 */
#define DMA_CH4CFG_L_LOCKCHL_SHIFT      (12)
#define DMA_CH4CFG_L_LOCKCHL_MASK       (0x3 << DMA_CH4CFG_L_LOCKCHL_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCHL
                                                                                 */
#define DMA_CH4CFG_L_HSSELSRC           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELSRC
                                                                                 */
#define DMA_CH4CFG_L_HSSELDST           (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELDST
                                                                                 */
#define DMA_CH4CFG_L_FIFOEMPTY          (1 << 9)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FIFOEMPTY
                                                                                 */
#define DMA_CH4CFG_L_CHSUSP             (1 << 8)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHSUSP
                                                                                 */
#define DMA_CH4CFG_L_CHPRIOR_SHIFT      (5)
#define DMA_CH4CFG_L_CHPRIOR_MASK       (0x7 << DMA_CH4CFG_L_CHPRIOR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHPRIOR
                                                                                 */

/******** Bit definition for DMA_CH4CFG_H register  ********/
#define DMA_CH4CFG_H_DSTPER_SHIFT       (11)
#define DMA_CH4CFG_H_DSTPER_MASK        (0x7 << DMA_CH4CFG_H_DSTPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSTPER
                                                                             */
#define DMA_CH4CFG_H_SRCPER_SHIFT       (7)
#define DMA_CH4CFG_H_SRCPER_MASK        (0x7 << DMA_CH4CFG_H_SRCPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SRCPER
                                                                             */
#define DMA_CH4CFG_H_PROTCTL_SHIFT      (2)
#define DMA_CH4CFG_H_PROTCTL_MASK       (0x7 << DMA_CH4CFG_H_PROTCTL_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * PROTCTL
                                                                             */
#define DMA_CH4CFG_H_FIFOMS             (1 << 1)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FIFOMS
                                                                             */
#define DMA_CH4CFG_H_FCM                (1 << 0)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FCM
                                                                             */

/******** Bit definition for DMA_CH4SG register  ********/
#define DMA_CH4SG_SGC_SHIFT             (20)
#define DMA_CH4SG_SGC_MASK              (0x1FF << DMA_CH4SG_SGC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGC
                                                                             */
#define DMA_CH4SG_SGI_SHIFT             (0)
#define DMA_CH4SG_SGI_MASK              (0xFFFFF << DMA_CH4SG_SGI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGI
                                                                             */

/******** Bit definition for DMA_CH4DS register  ********/
#define DMA_CH4DS_DSC_SHIFT             (20)
#define DMA_CH4DS_DSC_MASK              (0x1FF << DMA_CH4DS_DSC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSC
                                                                             */
#define DMA_CH4DS_DSI_SHIFT             (0)
#define DMA_CH4DS_DSI_MASK              (0xFFFFF << DMA_CH4DS_DSI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSI
                                                                             */

/******** Bit definition for DMA_CH5SA register  ********/
#define DMA_CH5SA_ADDR_SHIFT            (0)
#define DMA_CH5SA_ADDR_MASK             (0xFFFFFFFF << DMA_CH5SA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH5DA register  ********/
#define DMA_CH5DA_ADDR_SHIFT            (0)
#define DMA_CH5DA_ADDR_MASK             (0xFFFFFFFF << DMA_CH5DA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH5LLP register  ********/
#define DMA_CH5LLP_LOC_SHIFT            (2)
#define DMA_CH5LLP_LOC_MASK             (0x3FFFFFFF << DMA_CH5LLP_LOC_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOC
                                                                                 */
#define DMA_CH5LLP_LMS_SHIFT            (0)
#define DMA_CH5LLP_LMS_MASK             (0x3 << DMA_CH5LLP_LMS_SHIFT)           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LMS
                                                                                 */

/******** Bit definition for DMA_CH5CTRL_L register  ********/
#define DMA_CH5CTRL_L_LLPSRCEN          (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPSRCEN
                                                                                 */
#define DMA_CH5CTRL_L_LLPDSTEN          (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPDSTEN
                                                                                 */
#define DMA_CH5CTRL_L_SMS_SHIFT         (25)
#define DMA_CH5CTRL_L_SMS_MASK          (0x3 << DMA_CH5CTRL_L_SMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SMS
                                                                                 */
#define DMA_CH5CTRL_L_DMS_SHIFT         (23)
#define DMA_CH5CTRL_L_DMS_MASK          (0x3 << DMA_CH5CTRL_L_DMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMS
                                                                                 */
#define DMA_CH5CTRL_L_TTFC_SHIFT        (20)
#define DMA_CH5CTRL_L_TTFC_MASK         (0x7 << DMA_CH5CTRL_L_TTFC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TTFC
                                                                                 */
#define DMA_CH5CTRL_L_DSTSCAEN          (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTSCAEN
                                                                                 */
#define DMA_CH5CTRL_L_SRCGATEN          (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCGATEN
                                                                                 */
#define DMA_CH5CTRL_L_SRCMSIZE_SHIFT    (14)
#define DMA_CH5CTRL_L_SRCMSIZE_MASK     (0x7 << DMA_CH5CTRL_L_SRCMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCMSIZE
                                                                                 */
#define DMA_CH5CTRL_L_DSTMSIZE_SHIFT    (11)
#define DMA_CH5CTRL_L_DSTMSIZE_MASK     (0x7 << DMA_CH5CTRL_L_DSTMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTMSIZE
                                                                                 */
#define DMA_CH5CTRL_L_SINC_SHIFT        (9)
#define DMA_CH5CTRL_L_SINC_MASK         (0x3 << DMA_CH5CTRL_L_SINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SINC
                                                                                 */
#define DMA_CH5CTRL_L_DINC_SHIFT        (7)
#define DMA_CH5CTRL_L_DINC_MASK         (0x3 << DMA_CH5CTRL_L_DINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DINC
                                                                                 */
#define DMA_CH5CTRL_L_STW_SHIFT         (4)
#define DMA_CH5CTRL_L_STW_MASK          (0x7 << DMA_CH5CTRL_L_STW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * STW
                                                                                 */
#define DMA_CH5CTRL_L_DTW_SHIFT         (1)
#define DMA_CH5CTRL_L_DTW_MASK          (0x7 << DMA_CH5CTRL_L_DTW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DTW
                                                                                 */
#define DMA_CH5CTRL_L_INTEN             (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTEN
                                                                                 */

/******** Bit definition for DMA_CH5CTRL_H register  ********/
#define DMA_CH5CTRL_H_DONE              (1 << 12)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DONE
                                                                             */
#define DMA_CH5CTRL_H_BTS_SHIFT         (0)
#define DMA_CH5CTRL_H_BTS_MASK          (0xFFF << DMA_CH5CTRL_H_BTS_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * BTS
                                                                             */

/******** Bit definition for DMA_CH5CFG_L register  ********/
#define DMA_CH5CFG_L_ADR                (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADR
                                                                                 */
#define DMA_CH5CFG_L_ASR                (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ASR
                                                                                 */
#define DMA_CH5CFG_L_MAMBABL_SHIFT      (20)
#define DMA_CH5CFG_L_MAMBABL_MASK       (0x3FF << DMA_CH5CFG_L_MAMBABL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MAMBABL
                                                                                 */
#define DMA_CH5CFG_L_SRCHSPOL           (1 << 19)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCHSPOL
                                                                                 */
#define DMA_CH5CFG_L_DSTHSPOL           (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTHSPOL
                                                                                 */
#define DMA_CH5CFG_L_LOCKB              (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKB
                                                                                 */
#define DMA_CH5CFG_L_LOCKCH             (1 << 16)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCH
                                                                                 */
#define DMA_CH5CFG_L_LOCKBL_SHIFT       (14)
#define DMA_CH5CFG_L_LOCKBL_MASK        (0x3 << DMA_CH5CFG_L_LOCKBL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKBL
                                                                                 */
#define DMA_CH5CFG_L_LOCKCHL_SHIFT      (12)
#define DMA_CH5CFG_L_LOCKCHL_MASK       (0x3 << DMA_CH5CFG_L_LOCKCHL_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCHL
                                                                                 */
#define DMA_CH5CFG_L_HSSELSRC           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELSRC
                                                                                 */
#define DMA_CH5CFG_L_HSSELDST           (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELDST
                                                                                 */
#define DMA_CH5CFG_L_FIFOEMPTY          (1 << 9)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FIFOEMPTY
                                                                                 */
#define DMA_CH5CFG_L_CHSUSP             (1 << 8)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHSUSP
                                                                                 */
#define DMA_CH5CFG_L_CHPRIOR_SHIFT      (5)
#define DMA_CH5CFG_L_CHPRIOR_MASK       (0x7 << DMA_CH5CFG_L_CHPRIOR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHPRIOR
                                                                                 */

/******** Bit definition for DMA_CH5CFG_H register  ********/
#define DMA_CH5CFG_H_DSTPER_SHIFT       (11)
#define DMA_CH5CFG_H_DSTPER_MASK        (0x7 << DMA_CH5CFG_H_DSTPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSTPER
                                                                             */
#define DMA_CH5CFG_H_SRCPER_SHIFT       (7)
#define DMA_CH5CFG_H_SRCPER_MASK        (0x7 << DMA_CH5CFG_H_SRCPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SRCPER
                                                                             */
#define DMA_CH5CFG_H_PROTCTL_SHIFT      (2)
#define DMA_CH5CFG_H_PROTCTL_MASK       (0x7 << DMA_CH5CFG_H_PROTCTL_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * PROTCTL
                                                                             */
#define DMA_CH5CFG_H_FIFOMS             (1 << 1)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FIFOMS
                                                                             */
#define DMA_CH5CFG_H_FCM                (1 << 0)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FCM
                                                                             */

/******** Bit definition for DMA_CH5SG register  ********/
#define DMA_CH5SG_SGC_SHIFT             (20)
#define DMA_CH5SG_SGC_MASK              (0x1FF << DMA_CH5SG_SGC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGC
                                                                             */
#define DMA_CH5SG_SGI_SHIFT             (0)
#define DMA_CH5SG_SGI_MASK              (0xFFFFF << DMA_CH5SG_SGI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGI
                                                                             */

/******** Bit definition for DMA_CH5DS register  ********/
#define DMA_CH5DS_DSC_SHIFT             (20)
#define DMA_CH5DS_DSC_MASK              (0x1FF << DMA_CH5DS_DSC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSC
                                                                             */
#define DMA_CH5DS_DSI_SHIFT             (0)
#define DMA_CH5DS_DSI_MASK              (0xFFFFF << DMA_CH5DS_DSI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSI
                                                                             */

/******** Bit definition for DMA_CH6SA register  ********/
#define DMA_CH6SA_ADDR_SHIFT            (0)
#define DMA_CH6SA_ADDR_MASK             (0xFFFFFFFF << DMA_CH6SA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH6DA register  ********/
#define DMA_CH6DA_ADDR_SHIFT            (0)
#define DMA_CH6DA_ADDR_MASK             (0xFFFFFFFF << DMA_CH6DA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH6LLP register  ********/
#define DMA_CH6LLP_LOC_SHIFT            (2)
#define DMA_CH6LLP_LOC_MASK             (0x3FFFFFFF << DMA_CH6LLP_LOC_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOC
                                                                                 */
#define DMA_CH6LLP_LMS_SHIFT            (0)
#define DMA_CH6LLP_LMS_MASK             (0x3 << DMA_CH6LLP_LMS_SHIFT)           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LMS
                                                                                 */

/******** Bit definition for DMA_CH6CTRL_L register  ********/
#define DMA_CH6CTRL_L_LLPSRCEN          (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPSRCEN
                                                                                 */
#define DMA_CH6CTRL_L_LLPDSTEN          (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPDSTEN
                                                                                 */
#define DMA_CH6CTRL_L_SMS_SHIFT         (25)
#define DMA_CH6CTRL_L_SMS_MASK          (0x3 << DMA_CH6CTRL_L_SMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SMS
                                                                                 */
#define DMA_CH6CTRL_L_DMS_SHIFT         (23)
#define DMA_CH6CTRL_L_DMS_MASK          (0x3 << DMA_CH6CTRL_L_DMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMS
                                                                                 */
#define DMA_CH6CTRL_L_TTFC_SHIFT        (20)
#define DMA_CH6CTRL_L_TTFC_MASK         (0x7 << DMA_CH6CTRL_L_TTFC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TTFC
                                                                                 */
#define DMA_CH6CTRL_L_DSTSCAEN          (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTSCAEN
                                                                                 */
#define DMA_CH6CTRL_L_SRCGATEN          (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCGATEN
                                                                                 */
#define DMA_CH6CTRL_L_SRCMSIZE_SHIFT    (14)
#define DMA_CH6CTRL_L_SRCMSIZE_MASK     (0x7 << DMA_CH6CTRL_L_SRCMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCMSIZE
                                                                                 */
#define DMA_CH6CTRL_L_DSTMSIZE_SHIFT    (11)
#define DMA_CH6CTRL_L_DSTMSIZE_MASK     (0x7 << DMA_CH6CTRL_L_DSTMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTMSIZE
                                                                                 */
#define DMA_CH6CTRL_L_SINC_SHIFT        (9)
#define DMA_CH6CTRL_L_SINC_MASK         (0x3 << DMA_CH6CTRL_L_SINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SINC
                                                                                 */
#define DMA_CH6CTRL_L_DINC_SHIFT        (7)
#define DMA_CH6CTRL_L_DINC_MASK         (0x3 << DMA_CH6CTRL_L_DINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DINC
                                                                                 */
#define DMA_CH6CTRL_L_STW_SHIFT         (4)
#define DMA_CH6CTRL_L_STW_MASK          (0x7 << DMA_CH6CTRL_L_STW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * STW
                                                                                 */
#define DMA_CH6CTRL_L_DTW_SHIFT         (1)
#define DMA_CH6CTRL_L_DTW_MASK          (0x7 << DMA_CH6CTRL_L_DTW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DTW
                                                                                 */
#define DMA_CH6CTRL_L_INTEN             (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTEN
                                                                                 */

/******** Bit definition for DMA_CH6CTRL_H register  ********/
#define DMA_CH6CTRL_H_DONE              (1 << 12)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DONE
                                                                             */
#define DMA_CH6CTRL_H_BTS_SHIFT         (0)
#define DMA_CH6CTRL_H_BTS_MASK          (0xFFF << DMA_CH6CTRL_H_BTS_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * BTS
                                                                             */

/******** Bit definition for DMA_CH6CFG_L register  ********/
#define DMA_CH6CFG_L_ADR                (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADR
                                                                                 */
#define DMA_CH6CFG_L_ASR                (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ASR
                                                                                 */
#define DMA_CH6CFG_L_MAMBABL_SHIFT      (20)
#define DMA_CH6CFG_L_MAMBABL_MASK       (0x3FF << DMA_CH6CFG_L_MAMBABL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MAMBABL
                                                                                 */
#define DMA_CH6CFG_L_SRCHSPOL           (1 << 19)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCHSPOL
                                                                                 */
#define DMA_CH6CFG_L_DSTHSPOL           (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTHSPOL
                                                                                 */
#define DMA_CH6CFG_L_LOCKB              (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKB
                                                                                 */
#define DMA_CH6CFG_L_LOCKCH             (1 << 16)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCH
                                                                                 */
#define DMA_CH6CFG_L_LOCKBL_SHIFT       (14)
#define DMA_CH6CFG_L_LOCKBL_MASK        (0x3 << DMA_CH6CFG_L_LOCKBL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKBL
                                                                                 */
#define DMA_CH6CFG_L_LOCKCHL_SHIFT      (12)
#define DMA_CH6CFG_L_LOCKCHL_MASK       (0x3 << DMA_CH6CFG_L_LOCKCHL_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCHL
                                                                                 */
#define DMA_CH6CFG_L_HSSELSRC           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELSRC
                                                                                 */
#define DMA_CH6CFG_L_HSSELDST           (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELDST
                                                                                 */
#define DMA_CH6CFG_L_FIFOEMPTY          (1 << 9)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FIFOEMPTY
                                                                                 */
#define DMA_CH6CFG_L_CHSUSP             (1 << 8)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHSUSP
                                                                                 */
#define DMA_CH6CFG_L_CHPRIOR_SHIFT      (5)
#define DMA_CH6CFG_L_CHPRIOR_MASK       (0x7 << DMA_CH6CFG_L_CHPRIOR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHPRIOR
                                                                                 */

/******** Bit definition for DMA_CH6CFG_H register  ********/
#define DMA_CH6CFG_H_DSTPER_SHIFT       (11)
#define DMA_CH6CFG_H_DSTPER_MASK        (0x7 << DMA_CH6CFG_H_DSTPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSTPER
                                                                             */
#define DMA_CH6CFG_H_SRCPER_SHIFT       (7)
#define DMA_CH6CFG_H_SRCPER_MASK        (0x7 << DMA_CH6CFG_H_SRCPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SRCPER
                                                                             */
#define DMA_CH6CFG_H_PROTCTL_SHIFT      (2)
#define DMA_CH6CFG_H_PROTCTL_MASK       (0x7 << DMA_CH6CFG_H_PROTCTL_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * PROTCTL
                                                                             */
#define DMA_CH6CFG_H_FIFOMS             (1 << 1)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FIFOMS
                                                                             */
#define DMA_CH6CFG_H_FCM                (1 << 0)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FCM
                                                                             */

/******** Bit definition for DMA_CH6SG register  ********/
#define DMA_CH6SG_SGC_SHIFT             (20)
#define DMA_CH6SG_SGC_MASK              (0x1FF << DMA_CH6SG_SGC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGC
                                                                             */
#define DMA_CH6SG_SGI_SHIFT             (0)
#define DMA_CH6SG_SGI_MASK              (0xFFFFF << DMA_CH6SG_SGI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGI
                                                                             */

/******** Bit definition for DMA_CH6DS register  ********/
#define DMA_CH6DS_DSC_SHIFT             (20)
#define DMA_CH6DS_DSC_MASK              (0x1FF << DMA_CH6DS_DSC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSC
                                                                             */
#define DMA_CH6DS_DSI_SHIFT             (0)
#define DMA_CH6DS_DSI_MASK              (0xFFFFF << DMA_CH6DS_DSI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSI
                                                                             */

/******** Bit definition for DMA_CH7SA register  ********/
#define DMA_CH7SA_ADDR_SHIFT            (0)
#define DMA_CH7SA_ADDR_MASK             (0xFFFFFFFF << DMA_CH7SA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH7DA register  ********/
#define DMA_CH7DA_ADDR_SHIFT            (0)
#define DMA_CH7DA_ADDR_MASK             (0xFFFFFFFF << DMA_CH7DA_ADDR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * ADDR
                                                                              */

/******** Bit definition for DMA_CH7LLP register  ********/
#define DMA_CH7LLP_LOC_SHIFT            (2)
#define DMA_CH7LLP_LOC_MASK             (0x3FFFFFFF << DMA_CH7LLP_LOC_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOC
                                                                                 */
#define DMA_CH7LLP_LMS_SHIFT            (0)
#define DMA_CH7LLP_LMS_MASK             (0x3 << DMA_CH7LLP_LMS_SHIFT)           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LMS
                                                                                 */

/******** Bit definition for DMA_CH7CTRL_L register  ********/
#define DMA_CH7CTRL_L_LLPSRCEN          (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPSRCEN
                                                                                 */
#define DMA_CH7CTRL_L_LLPDSTEN          (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LLPDSTEN
                                                                                 */
#define DMA_CH7CTRL_L_SMS_SHIFT         (25)
#define DMA_CH7CTRL_L_SMS_MASK          (0x3 << DMA_CH7CTRL_L_SMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SMS
                                                                                 */
#define DMA_CH7CTRL_L_DMS_SHIFT         (23)
#define DMA_CH7CTRL_L_DMS_MASK          (0x3 << DMA_CH7CTRL_L_DMS_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMS
                                                                                 */
#define DMA_CH7CTRL_L_TTFC_SHIFT        (20)
#define DMA_CH7CTRL_L_TTFC_MASK         (0x7 << DMA_CH7CTRL_L_TTFC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TTFC
                                                                                 */
#define DMA_CH7CTRL_L_DSTSCAEN          (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTSCAEN
                                                                                 */
#define DMA_CH7CTRL_L_SRCGATEN          (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCGATEN
                                                                                 */
#define DMA_CH7CTRL_L_SRCMSIZE_SHIFT    (14)
#define DMA_CH7CTRL_L_SRCMSIZE_MASK     (0x7 << DMA_CH7CTRL_L_SRCMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCMSIZE
                                                                                 */
#define DMA_CH7CTRL_L_DSTMSIZE_SHIFT    (11)
#define DMA_CH7CTRL_L_DSTMSIZE_MASK     (0x7 << DMA_CH7CTRL_L_DSTMSIZE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTMSIZE
                                                                                 */
#define DMA_CH7CTRL_L_SINC_SHIFT        (9)
#define DMA_CH7CTRL_L_SINC_MASK         (0x3 << DMA_CH7CTRL_L_SINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SINC
                                                                                 */
#define DMA_CH7CTRL_L_DINC_SHIFT        (7)
#define DMA_CH7CTRL_L_DINC_MASK         (0x3 << DMA_CH7CTRL_L_DINC_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DINC
                                                                                 */
#define DMA_CH7CTRL_L_STW_SHIFT         (4)
#define DMA_CH7CTRL_L_STW_MASK          (0x7 << DMA_CH7CTRL_L_STW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * STW
                                                                                 */
#define DMA_CH7CTRL_L_DTW_SHIFT         (1)
#define DMA_CH7CTRL_L_DTW_MASK          (0x7 << DMA_CH7CTRL_L_DTW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DTW
                                                                                 */
#define DMA_CH7CTRL_L_INTEN             (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTEN
                                                                                 */

/******** Bit definition for DMA_CH7CTRL_H register  ********/
#define DMA_CH7CTRL_H_DONE              (1 << 12)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DONE
                                                                             */
#define DMA_CH7CTRL_H_BTS_SHIFT         (0)
#define DMA_CH7CTRL_H_BTS_MASK          (0xFFF << DMA_CH7CTRL_H_BTS_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * BTS
                                                                             */

/******** Bit definition for DMA_CH7CFG_L register  ********/
#define DMA_CH7CFG_L_ADR                (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADR
                                                                                 */
#define DMA_CH7CFG_L_ASR                (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ASR
                                                                                 */
#define DMA_CH7CFG_L_MAMBABL_SHIFT      (20)
#define DMA_CH7CFG_L_MAMBABL_MASK       (0x3FF << DMA_CH7CFG_L_MAMBABL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MAMBABL
                                                                                 */
#define DMA_CH7CFG_L_SRCHSPOL           (1 << 19)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SRCHSPOL
                                                                                 */
#define DMA_CH7CFG_L_DSTHSPOL           (1 << 18)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSTHSPOL
                                                                                 */
#define DMA_CH7CFG_L_LOCKB              (1 << 17)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKB
                                                                                 */
#define DMA_CH7CFG_L_LOCKCH             (1 << 16)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCH
                                                                                 */
#define DMA_CH7CFG_L_LOCKBL_SHIFT       (14)
#define DMA_CH7CFG_L_LOCKBL_MASK        (0x3 << DMA_CH7CFG_L_LOCKBL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKBL
                                                                                 */
#define DMA_CH7CFG_L_LOCKCHL_SHIFT      (12)
#define DMA_CH7CFG_L_LOCKCHL_MASK       (0x3 << DMA_CH7CFG_L_LOCKCHL_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * LOCKCHL
                                                                                 */
#define DMA_CH7CFG_L_HSSELSRC           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELSRC
                                                                                 */
#define DMA_CH7CFG_L_HSSELDST           (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HSSELDST
                                                                                 */
#define DMA_CH7CFG_L_FIFOEMPTY          (1 << 9)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FIFOEMPTY
                                                                                 */
#define DMA_CH7CFG_L_CHSUSP             (1 << 8)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHSUSP
                                                                                 */
#define DMA_CH7CFG_L_CHPRIOR_SHIFT      (5)
#define DMA_CH7CFG_L_CHPRIOR_MASK       (0x7 << DMA_CH7CFG_L_CHPRIOR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CHPRIOR
                                                                                 */

/******** Bit definition for DMA_CH7CFG_H register  ********/
#define DMA_CH7CFG_H_DSTPER_SHIFT       (11)
#define DMA_CH7CFG_H_DSTPER_MASK        (0x7 << DMA_CH7CFG_H_DSTPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSTPER
                                                                             */
#define DMA_CH7CFG_H_SRCPER_SHIFT       (7)
#define DMA_CH7CFG_H_SRCPER_MASK        (0x7 << DMA_CH7CFG_H_SRCPER_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SRCPER
                                                                             */
#define DMA_CH7CFG_H_PROTCTL_SHIFT      (2)
#define DMA_CH7CFG_H_PROTCTL_MASK       (0x7 << DMA_CH7CFG_H_PROTCTL_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * PROTCTL
                                                                             */
#define DMA_CH7CFG_H_FIFOMS             (1 << 1)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FIFOMS
                                                                             */
#define DMA_CH7CFG_H_FCM                (1 << 0)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * FCM
                                                                             */

/******** Bit definition for DMA_CH7SG register  ********/
#define DMA_CH7SG_SGC_SHIFT             (20)
#define DMA_CH7SG_SGC_MASK              (0x1FF << DMA_CH7SG_SGC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGC
                                                                             */
#define DMA_CH7SG_SGI_SHIFT             (0)
#define DMA_CH7SG_SGI_MASK              (0xFFFFF << DMA_CH7SG_SGI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SGI
                                                                             */

/******** Bit definition for DMA_CH7DS register  ********/
#define DMA_CH7DS_DSC_SHIFT             (20)
#define DMA_CH7DS_DSC_MASK              (0x1FF << DMA_CH7DS_DSC_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSC
                                                                             */
#define DMA_CH7DS_DSI_SHIFT             (0)
#define DMA_CH7DS_DSI_MASK              (0xFFFFF << DMA_CH7DS_DSI_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSI
                                                                             */

/******** Bit definition for DMA_RAWTCINTSTS register  ********/
#define DMA_RAWTCINTSTS_CH7             (1 << 7)    /* CH7 */
#define DMA_RAWTCINTSTS_CH6             (1 << 6)    /* CH6 */
#define DMA_RAWTCINTSTS_CH5             (1 << 5)    /* CH5 */
#define DMA_RAWTCINTSTS_CH4             (1 << 4)    /* CH4 */
#define DMA_RAWTCINTSTS_CH3             (1 << 3)    /* CH3 */
#define DMA_RAWTCINTSTS_CH2             (1 << 2)    /* CH2 */
#define DMA_RAWTCINTSTS_CH1             (1 << 1)    /* CH1 */
#define DMA_RAWTCINTSTS_CH0             (1 << 0)    /* CH0 */

/******** Bit definition for DMA_RAWBTCINTSTS register  ********/
#define DMA_RAWBTCINTSTS_CH7            (1 << 7)    /* CH7 */
#define DMA_RAWBTCINTSTS_CH6            (1 << 6)    /* CH6 */
#define DMA_RAWBTCINTSTS_CH5            (1 << 5)    /* CH5 */
#define DMA_RAWBTCINTSTS_CH4            (1 << 4)    /* CH4 */
#define DMA_RAWBTCINTSTS_CH3            (1 << 3)    /* CH3 */
#define DMA_RAWBTCINTSTS_CH2            (1 << 2)    /* CH2 */
#define DMA_RAWBTCINTSTS_CH1            (1 << 1)    /* CH1 */
#define DMA_RAWBTCINTSTS_CH0            (1 << 0)    /* CH0 */

/******** Bit definition for DMA_RAWSTCINTSTS register  ********/
#define DMA_RAWSTCINTSTS_CH7            (1 << 7)    /* CH7 */
#define DMA_RAWSTCINTSTS_CH6            (1 << 6)    /* CH6 */
#define DMA_RAWSTCINTSTS_CH5            (1 << 5)    /* CH5 */
#define DMA_RAWSTCINTSTS_CH4            (1 << 4)    /* CH4 */
#define DMA_RAWSTCINTSTS_CH3            (1 << 3)    /* CH3 */
#define DMA_RAWSTCINTSTS_CH2            (1 << 2)    /* CH2 */
#define DMA_RAWSTCINTSTS_CH1            (1 << 1)    /* CH1 */
#define DMA_RAWSTCINTSTS_CH0            (1 << 0)    /* CH0 */

/******** Bit definition for DMA_RAWDTCINTSTS register  ********/
#define DMA_RAWDTCINTSTS_CH7            (1 << 7)    /* CH7 */
#define DMA_RAWDTCINTSTS_CH6            (1 << 6)    /* CH6 */
#define DMA_RAWDTCINTSTS_CH5            (1 << 5)    /* CH5 */
#define DMA_RAWDTCINTSTS_CH4            (1 << 4)    /* CH4 */
#define DMA_RAWDTCINTSTS_CH3            (1 << 3)    /* CH3 */
#define DMA_RAWDTCINTSTS_CH2            (1 << 2)    /* CH2 */
#define DMA_RAWDTCINTSTS_CH1            (1 << 1)    /* CH1 */
#define DMA_RAWDTCINTSTS_CH0            (1 << 0)    /* CH0 */

/******** Bit definition for DMA_RAWERRINTSTS register  ********/
#define DMA_RAWERRINTSTS_CH7            (1 << 7)    /* CH7 */
#define DMA_RAWERRINTSTS_CH6            (1 << 6)    /* CH6 */
#define DMA_RAWERRINTSTS_CH5            (1 << 5)    /* CH5 */
#define DMA_RAWERRINTSTS_CH4            (1 << 4)    /* CH4 */
#define DMA_RAWERRINTSTS_CH3            (1 << 3)    /* CH3 */
#define DMA_RAWERRINTSTS_CH2            (1 << 2)    /* CH2 */
#define DMA_RAWERRINTSTS_CH1            (1 << 1)    /* CH1 */
#define DMA_RAWERRINTSTS_CH0            (1 << 0)    /* CH0 */

/******** Bit definition for DMA_TCINTSTS register  ********/
#define DMA_TCINTSTS_CH7                (1 << 7)    /* CH7 */
#define DMA_TCINTSTS_CH6                (1 << 6)    /* CH6 */
#define DMA_TCINTSTS_CH5                (1 << 5)    /* CH5 */
#define DMA_TCINTSTS_CH4                (1 << 4)    /* CH4 */
#define DMA_TCINTSTS_CH3                (1 << 3)    /* CH3 */
#define DMA_TCINTSTS_CH2                (1 << 2)    /* CH2 */
#define DMA_TCINTSTS_CH1                (1 << 1)    /* CH1 */
#define DMA_TCINTSTS_CH0                (1 << 0)    /* CH0 */

/******** Bit definition for DMA_BTCINTSTS register  ********/
#define DMA_BTCINTSTS_CH7               (1 << 7)    /* CH7 */
#define DMA_BTCINTSTS_CH6               (1 << 6)    /* CH6 */
#define DMA_BTCINTSTS_CH5               (1 << 5)    /* CH5 */
#define DMA_BTCINTSTS_CH4               (1 << 4)    /* CH4 */
#define DMA_BTCINTSTS_CH3               (1 << 3)    /* CH3 */
#define DMA_BTCINTSTS_CH2               (1 << 2)    /* CH2 */
#define DMA_BTCINTSTS_CH1               (1 << 1)    /* CH1 */
#define DMA_BTCINTSTS_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_STCINTSTS register  ********/
#define DMA_STCINTSTS_CH7               (1 << 7)    /* CH7 */
#define DMA_STCINTSTS_CH6               (1 << 6)    /* CH6 */
#define DMA_STCINTSTS_CH5               (1 << 5)    /* CH5 */
#define DMA_STCINTSTS_CH4               (1 << 4)    /* CH4 */
#define DMA_STCINTSTS_CH3               (1 << 3)    /* CH3 */
#define DMA_STCINTSTS_CH2               (1 << 2)    /* CH2 */
#define DMA_STCINTSTS_CH1               (1 << 1)    /* CH1 */
#define DMA_STCINTSTS_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_DTCINTSTS register  ********/
#define DMA_DTCINTSTS_CH7               (1 << 7)    /* CH7 */
#define DMA_DTCINTSTS_CH6               (1 << 6)    /* CH6 */
#define DMA_DTCINTSTS_CH5               (1 << 5)    /* CH5 */
#define DMA_DTCINTSTS_CH4               (1 << 4)    /* CH4 */
#define DMA_DTCINTSTS_CH3               (1 << 3)    /* CH3 */
#define DMA_DTCINTSTS_CH2               (1 << 2)    /* CH2 */
#define DMA_DTCINTSTS_CH1               (1 << 1)    /* CH1 */
#define DMA_DTCINTSTS_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_ERRINTSTS register  ********/
#define DMA_ERRINTSTS_CH7               (1 << 7)    /* CH7 */
#define DMA_ERRINTSTS_CH6               (1 << 6)    /* CH6 */
#define DMA_ERRINTSTS_CH5               (1 << 5)    /* CH5 */
#define DMA_ERRINTSTS_CH4               (1 << 4)    /* CH4 */
#define DMA_ERRINTSTS_CH3               (1 << 3)    /* CH3 */
#define DMA_ERRINTSTS_CH2               (1 << 2)    /* CH2 */
#define DMA_ERRINTSTS_CH1               (1 << 1)    /* CH1 */
#define DMA_ERRINTSTS_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_TCINTMSK register  ********/
#define DMA_TCINTMSK_CH7WEN             (1 << 15)   /* CH7WEN */
#define DMA_TCINTMSK_CH6WEN             (1 << 14)   /* CH6WEN */
#define DMA_TCINTMSK_CH5WEN             (1 << 13)   /* CH5WEN */
#define DMA_TCINTMSK_CH4WEN             (1 << 12)   /* CH4WEN */
#define DMA_TCINTMSK_CH3WEN             (1 << 11)   /* CH3WEN */
#define DMA_TCINTMSK_CH2WEN             (1 << 10)   /* CH2WEN */
#define DMA_TCINTMSK_CH1WEN             (1 << 9)    /* CH1WEN */
#define DMA_TCINTMSK_CH0WEN             (1 << 8)    /* CH0WEN */
#define DMA_TCINTMSK_CH7                (1 << 7)    /* CH7 */
#define DMA_TCINTMSK_CH6                (1 << 6)    /* CH6 */
#define DMA_TCINTMSK_CH5                (1 << 5)    /* CH5 */
#define DMA_TCINTMSK_CH4                (1 << 4)    /* CH4 */
#define DMA_TCINTMSK_CH3                (1 << 3)    /* CH3 */
#define DMA_TCINTMSK_CH2                (1 << 2)    /* CH2 */
#define DMA_TCINTMSK_CH1                (1 << 1)    /* CH1 */
#define DMA_TCINTMSK_CH0                (1 << 0)    /* CH0 */

/******** Bit definition for DMA_BTCINTMSK register  ********/
#define DMA_BTCINTMSK_CH7WEN            (1 << 15)   /* CH7WEN */
#define DMA_BTCINTMSK_CH6WEN            (1 << 14)   /* CH6WEN */
#define DMA_BTCINTMSK_CH5WEN            (1 << 13)   /* CH5WEN */
#define DMA_BTCINTMSK_CH4WEN            (1 << 12)   /* CH4WEN */
#define DMA_BTCINTMSK_CH3WEN            (1 << 11)   /* CH3WEN */
#define DMA_BTCINTMSK_CH2WEN            (1 << 10)   /* CH2WEN */
#define DMA_BTCINTMSK_CH1WEN            (1 << 9)    /* CH1WEN */
#define DMA_BTCINTMSK_CH0WEN            (1 << 8)    /* CH0WEN */
#define DMA_BTCINTMSK_CH7               (1 << 7)    /* CH7 */
#define DMA_BTCINTMSK_CH6               (1 << 6)    /* CH6 */
#define DMA_BTCINTMSK_CH5               (1 << 5)    /* CH5 */
#define DMA_BTCINTMSK_CH4               (1 << 4)    /* CH4 */
#define DMA_BTCINTMSK_CH3               (1 << 3)    /* CH3 */
#define DMA_BTCINTMSK_CH2               (1 << 2)    /* CH2 */
#define DMA_BTCINTMSK_CH1               (1 << 1)    /* CH1 */
#define DMA_BTCINTMSK_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_STCINTMSK register  ********/
#define DMA_STCINTMSK_CH7WEN            (1 << 15)   /* CH7WEN */
#define DMA_STCINTMSK_CH6WEN            (1 << 14)   /* CH6WEN */
#define DMA_STCINTMSK_CH5WEN            (1 << 13)   /* CH5WEN */
#define DMA_STCINTMSK_CH4WEN            (1 << 12)   /* CH4WEN */
#define DMA_STCINTMSK_CH3WEN            (1 << 11)   /* CH3WEN */
#define DMA_STCINTMSK_CH2WEN            (1 << 10)   /* CH2WEN */
#define DMA_STCINTMSK_CH1WEN            (1 << 9)    /* CH1WEN */
#define DMA_STCINTMSK_CH0WEN            (1 << 8)    /* CH0WEN */
#define DMA_STCINTMSK_CH7               (1 << 7)    /* CH7 */
#define DMA_STCINTMSK_CH6               (1 << 6)    /* CH6 */
#define DMA_STCINTMSK_CH5               (1 << 5)    /* CH5 */
#define DMA_STCINTMSK_CH4               (1 << 4)    /* CH4 */
#define DMA_STCINTMSK_CH3               (1 << 3)    /* CH3 */
#define DMA_STCINTMSK_CH2               (1 << 2)    /* CH2 */
#define DMA_STCINTMSK_CH1               (1 << 1)    /* CH1 */
#define DMA_STCINTMSK_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_DTCINTMSK register  ********/
#define DMA_DTCINTMSK_CH7WEN            (1 << 15)   /* CH7WEN */
#define DMA_DTCINTMSK_CH6WEN            (1 << 14)   /* CH6WEN */
#define DMA_DTCINTMSK_CH5WEN            (1 << 13)   /* CH5WEN */
#define DMA_DTCINTMSK_CH4WEN            (1 << 12)   /* CH4WEN */
#define DMA_DTCINTMSK_CH3WEN            (1 << 11)   /* CH3WEN */
#define DMA_DTCINTMSK_CH2WEN            (1 << 10)   /* CH2WEN */
#define DMA_DTCINTMSK_CH1WEN            (1 << 9)    /* CH1WEN */
#define DMA_DTCINTMSK_CH0WEN            (1 << 8)    /* CH0WEN */
#define DMA_DTCINTMSK_CH7               (1 << 7)    /* CH7 */
#define DMA_DTCINTMSK_CH6               (1 << 6)    /* CH6 */
#define DMA_DTCINTMSK_CH5               (1 << 5)    /* CH5 */
#define DMA_DTCINTMSK_CH4               (1 << 4)    /* CH4 */
#define DMA_DTCINTMSK_CH3               (1 << 3)    /* CH3 */
#define DMA_DTCINTMSK_CH2               (1 << 2)    /* CH2 */
#define DMA_DTCINTMSK_CH1               (1 << 1)    /* CH1 */
#define DMA_DTCINTMSK_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_ERRINTMSK register  ********/
#define DMA_ERRINTMSK_CH7WEN            (1 << 15)   /* CH7WEN */
#define DMA_ERRINTMSK_CH6WEN            (1 << 14)   /* CH6WEN */
#define DMA_ERRINTMSK_CH5WEN            (1 << 13)   /* CH5WEN */
#define DMA_ERRINTMSK_CH4WEN            (1 << 12)   /* CH4WEN */
#define DMA_ERRINTMSK_CH3WEN            (1 << 11)   /* CH3WEN */
#define DMA_ERRINTMSK_CH2WEN            (1 << 10)   /* CH2WEN */
#define DMA_ERRINTMSK_CH1WEN            (1 << 9)    /* CH1WEN */
#define DMA_ERRINTMSK_CH0WEN            (1 << 8)    /* CH0WEN */
#define DMA_ERRINTMSK_CH7               (1 << 7)    /* CH7 */
#define DMA_ERRINTMSK_CH6               (1 << 6)    /* CH6 */
#define DMA_ERRINTMSK_CH5               (1 << 5)    /* CH5 */
#define DMA_ERRINTMSK_CH4               (1 << 4)    /* CH4 */
#define DMA_ERRINTMSK_CH3               (1 << 3)    /* CH3 */
#define DMA_ERRINTMSK_CH2               (1 << 2)    /* CH2 */
#define DMA_ERRINTMSK_CH1               (1 << 1)    /* CH1 */
#define DMA_ERRINTMSK_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_TCINTCLR register  ********/
#define DMA_TCINTCLR_CH7                (1 << 7)    /* CH7 */
#define DMA_TCINTCLR_CH6                (1 << 6)    /* CH6 */
#define DMA_TCINTCLR_CH5                (1 << 5)    /* CH5 */
#define DMA_TCINTCLR_CH4                (1 << 4)    /* CH4 */
#define DMA_TCINTCLR_CH3                (1 << 3)    /* CH3 */
#define DMA_TCINTCLR_CH2                (1 << 2)    /* CH2 */
#define DMA_TCINTCLR_CH1                (1 << 1)    /* CH1 */
#define DMA_TCINTCLR_CH0                (1 << 0)    /* CH0 */

/******** Bit definition for DMA_BTCINTCLR register  ********/
#define DMA_BTCINTCLR_CH7               (1 << 7)    /* CH7 */
#define DMA_BTCINTCLR_CH6               (1 << 6)    /* CH6 */
#define DMA_BTCINTCLR_CH5               (1 << 5)    /* CH5 */
#define DMA_BTCINTCLR_CH4               (1 << 4)    /* CH4 */
#define DMA_BTCINTCLR_CH3               (1 << 3)    /* CH3 */
#define DMA_BTCINTCLR_CH2               (1 << 2)    /* CH2 */
#define DMA_BTCINTCLR_CH1               (1 << 1)    /* CH1 */
#define DMA_BTCINTCLR_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_STCINTCLR register  ********/
#define DMA_STCINTCLR_CH7               (1 << 7)    /* CH7 */
#define DMA_STCINTCLR_CH6               (1 << 6)    /* CH6 */
#define DMA_STCINTCLR_CH5               (1 << 5)    /* CH5 */
#define DMA_STCINTCLR_CH4               (1 << 4)    /* CH4 */
#define DMA_STCINTCLR_CH3               (1 << 3)    /* CH3 */
#define DMA_STCINTCLR_CH2               (1 << 2)    /* CH2 */
#define DMA_STCINTCLR_CH1               (1 << 1)    /* CH1 */
#define DMA_STCINTCLR_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_DTCINTCLR register  ********/
#define DMA_DTCINTCLR_CH7               (1 << 7)    /* CH7 */
#define DMA_DTCINTCLR_CH6               (1 << 6)    /* CH6 */
#define DMA_DTCINTCLR_CH5               (1 << 5)    /* CH5 */
#define DMA_DTCINTCLR_CH4               (1 << 4)    /* CH4 */
#define DMA_DTCINTCLR_CH3               (1 << 3)    /* CH3 */
#define DMA_DTCINTCLR_CH2               (1 << 2)    /* CH2 */
#define DMA_DTCINTCLR_CH1               (1 << 1)    /* CH1 */
#define DMA_DTCINTCLR_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_ERRINTCLR register  ********/
#define DMA_ERRINTCLR_CH7               (1 << 7)    /* CH7 */
#define DMA_ERRINTCLR_CH6               (1 << 6)    /* CH6 */
#define DMA_ERRINTCLR_CH5               (1 << 5)    /* CH5 */
#define DMA_ERRINTCLR_CH4               (1 << 4)    /* CH4 */
#define DMA_ERRINTCLR_CH3               (1 << 3)    /* CH3 */
#define DMA_ERRINTCLR_CH2               (1 << 2)    /* CH2 */
#define DMA_ERRINTCLR_CH1               (1 << 1)    /* CH1 */
#define DMA_ERRINTCLR_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_INTCBESTS register  ********/
#define DMA_INTCBESTS_ERR               (1 << 4)    /* ERR */
#define DMA_INTCBESTS_DSTT              (1 << 3)    /* DSTT */
#define DMA_INTCBESTS_SRCT              (1 << 2)    /* SRCT */
#define DMA_INTCBESTS_BLOCK             (1 << 1)    /* BLOCK */
#define DMA_INTCBESTS_TFR               (1 << 0)    /* TFR */

/******** Bit definition for DMA_SRCSWTREQ register  ********/
#define DMA_SRCSWTREQ_CH7WEN            (1 << 15)   /* CH7WEN */
#define DMA_SRCSWTREQ_CH6WEN            (1 << 14)   /* CH6WEN */
#define DMA_SRCSWTREQ_CH5WEN            (1 << 13)   /* CH5WEN */
#define DMA_SRCSWTREQ_CH4WEN            (1 << 12)   /* CH4WEN */
#define DMA_SRCSWTREQ_CH3WEN            (1 << 11)   /* CH3WEN */
#define DMA_SRCSWTREQ_CH2WEN            (1 << 10)   /* CH2WEN */
#define DMA_SRCSWTREQ_CH1WEN            (1 << 9)    /* CH1WEN */
#define DMA_SRCSWTREQ_CH0WEN            (1 << 8)    /* CH0WEN */
#define DMA_SRCSWTREQ_CH7               (1 << 7)    /* CH7 */
#define DMA_SRCSWTREQ_CH6               (1 << 6)    /* CH6 */
#define DMA_SRCSWTREQ_CH5               (1 << 5)    /* CH5 */
#define DMA_SRCSWTREQ_CH4               (1 << 4)    /* CH4 */
#define DMA_SRCSWTREQ_CH3               (1 << 3)    /* CH3 */
#define DMA_SRCSWTREQ_CH2               (1 << 2)    /* CH2 */
#define DMA_SRCSWTREQ_CH1               (1 << 1)    /* CH1 */
#define DMA_SRCSWTREQ_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_DSTSWTREQ register  ********/
#define DMA_DSTSWTREQ_CH7WEN            (1 << 15)   /* CH7WEN */
#define DMA_DSTSWTREQ_CH6WEN            (1 << 14)   /* CH6WEN */
#define DMA_DSTSWTREQ_CH5WEN            (1 << 13)   /* CH5WEN */
#define DMA_DSTSWTREQ_CH4WEN            (1 << 12)   /* CH4WEN */
#define DMA_DSTSWTREQ_CH3WEN            (1 << 11)   /* CH3WEN */
#define DMA_DSTSWTREQ_CH2WEN            (1 << 10)   /* CH2WEN */
#define DMA_DSTSWTREQ_CH1WEN            (1 << 9)    /* CH1WEN */
#define DMA_DSTSWTREQ_CH0WEN            (1 << 8)    /* CH0WEN */
#define DMA_DSTSWTREQ_CH7               (1 << 7)    /* CH7 */
#define DMA_DSTSWTREQ_CH6               (1 << 6)    /* CH6 */
#define DMA_DSTSWTREQ_CH5               (1 << 5)    /* CH5 */
#define DMA_DSTSWTREQ_CH4               (1 << 4)    /* CH4 */
#define DMA_DSTSWTREQ_CH3               (1 << 3)    /* CH3 */
#define DMA_DSTSWTREQ_CH2               (1 << 2)    /* CH2 */
#define DMA_DSTSWTREQ_CH1               (1 << 1)    /* CH1 */
#define DMA_DSTSWTREQ_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_SRCSGTREQ register  ********/
#define DMA_SRCSGTREQ_CH7WEN            (1 << 15)   /* CH7WEN */
#define DMA_SRCSGTREQ_CH6WEN            (1 << 14)   /* CH6WEN */
#define DMA_SRCSGTREQ_CH5WEN            (1 << 13)   /* CH5WEN */
#define DMA_SRCSGTREQ_CH4WEN            (1 << 12)   /* CH4WEN */
#define DMA_SRCSGTREQ_CH3WEN            (1 << 11)   /* CH3WEN */
#define DMA_SRCSGTREQ_CH2WEN            (1 << 10)   /* CH2WEN */
#define DMA_SRCSGTREQ_CH1WEN            (1 << 9)    /* CH1WEN */
#define DMA_SRCSGTREQ_CH0WEN            (1 << 8)    /* CH0WEN */
#define DMA_SRCSGTREQ_CH7               (1 << 7)    /* CH7 */
#define DMA_SRCSGTREQ_CH6               (1 << 6)    /* CH6 */
#define DMA_SRCSGTREQ_CH5               (1 << 5)    /* CH5 */
#define DMA_SRCSGTREQ_CH4               (1 << 4)    /* CH4 */
#define DMA_SRCSGTREQ_CH3               (1 << 3)    /* CH3 */
#define DMA_SRCSGTREQ_CH2               (1 << 2)    /* CH2 */
#define DMA_SRCSGTREQ_CH1               (1 << 1)    /* CH1 */
#define DMA_SRCSGTREQ_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_DSTSGTREQ register  ********/
#define DMA_DSTSGTREQ_CH7WEN            (1 << 15)   /* CH7WEN */
#define DMA_DSTSGTREQ_CH6WEN            (1 << 14)   /* CH6WEN */
#define DMA_DSTSGTREQ_CH5WEN            (1 << 13)   /* CH5WEN */
#define DMA_DSTSGTREQ_CH4WEN            (1 << 12)   /* CH4WEN */
#define DMA_DSTSGTREQ_CH3WEN            (1 << 11)   /* CH3WEN */
#define DMA_DSTSGTREQ_CH2WEN            (1 << 10)   /* CH2WEN */
#define DMA_DSTSGTREQ_CH1WEN            (1 << 9)    /* CH1WEN */
#define DMA_DSTSGTREQ_CH0WEN            (1 << 8)    /* CH0WEN */
#define DMA_DSTSGTREQ_CH7               (1 << 7)    /* CH7 */
#define DMA_DSTSGTREQ_CH6               (1 << 6)    /* CH6 */
#define DMA_DSTSGTREQ_CH5               (1 << 5)    /* CH5 */
#define DMA_DSTSGTREQ_CH4               (1 << 4)    /* CH4 */
#define DMA_DSTSGTREQ_CH3               (1 << 3)    /* CH3 */
#define DMA_DSTSGTREQ_CH2               (1 << 2)    /* CH2 */
#define DMA_DSTSGTREQ_CH1               (1 << 1)    /* CH1 */
#define DMA_DSTSGTREQ_CH0               (1 << 0)    /* CH0 */

/******** Bit definition for DMA_SRCLTREQ register  ********/
#define DMA_SRCLTREQ_CH7WEN             (1 << 15)   /* CH7WEN */
#define DMA_SRCLTREQ_CH6WEN             (1 << 14)   /* CH6WEN */
#define DMA_SRCLTREQ_CH5WEN             (1 << 13)   /* CH5WEN */
#define DMA_SRCLTREQ_CH4WEN             (1 << 12)   /* CH4WEN */
#define DMA_SRCLTREQ_CH3WEN             (1 << 11)   /* CH3WEN */
#define DMA_SRCLTREQ_CH2WEN             (1 << 10)   /* CH2WEN */
#define DMA_SRCLTREQ_CH1WEN             (1 << 9)    /* CH1WEN */
#define DMA_SRCLTREQ_CH0WEN             (1 << 8)    /* CH0WEN */
#define DMA_SRCLTREQ_CH7                (1 << 7)    /* CH7 */
#define DMA_SRCLTREQ_CH6                (1 << 6)    /* CH6 */
#define DMA_SRCLTREQ_CH5                (1 << 5)    /* CH5 */
#define DMA_SRCLTREQ_CH4                (1 << 4)    /* CH4 */
#define DMA_SRCLTREQ_CH3                (1 << 3)    /* CH3 */
#define DMA_SRCLTREQ_CH2                (1 << 2)    /* CH2 */
#define DMA_SRCLTREQ_CH1                (1 << 1)    /* CH1 */
#define DMA_SRCLTREQ_CH0                (1 << 0)    /* CH0 */

/******** Bit definition for DMA_DSTLTREQ register  ********/
#define DMA_DSTLTREQ_CH7WEN             (1 << 15)   /* CH7WEN */
#define DMA_DSTLTREQ_CH6WEN             (1 << 14)   /* CH6WEN */
#define DMA_DSTLTREQ_CH5WEN             (1 << 13)   /* CH5WEN */
#define DMA_DSTLTREQ_CH4WEN             (1 << 12)   /* CH4WEN */
#define DMA_DSTLTREQ_CH3WEN             (1 << 11)   /* CH3WEN */
#define DMA_DSTLTREQ_CH2WEN             (1 << 10)   /* CH2WEN */
#define DMA_DSTLTREQ_CH1WEN             (1 << 9)    /* CH1WEN */
#define DMA_DSTLTREQ_CH0WEN             (1 << 8)    /* CH0WEN */
#define DMA_DSTLTREQ_CH7                (1 << 7)    /* CH7 */
#define DMA_DSTLTREQ_CH6                (1 << 6)    /* CH6 */
#define DMA_DSTLTREQ_CH5                (1 << 5)    /* CH5 */
#define DMA_DSTLTREQ_CH4                (1 << 4)    /* CH4 */
#define DMA_DSTLTREQ_CH3                (1 << 3)    /* CH3 */
#define DMA_DSTLTREQ_CH2                (1 << 2)    /* CH2 */
#define DMA_DSTLTREQ_CH1                (1 << 1)    /* CH1 */
#define DMA_DSTLTREQ_CH0                (1 << 0)    /* CH0 */

/******** Bit definition for DMA_CFG register  ********/
#define DMA_CFG_EN                      (1 << 0) /* EN */

/******** Bit definition for DMA_CHEN register  ********/
#define DMA_CHEN_CH7WEN                 (1 << 15)   /* CH7WEN */
#define DMA_CHEN_CH6WEN                 (1 << 14)   /* CH6WEN */
#define DMA_CHEN_CH5WEN                 (1 << 13)   /* CH5WEN */
#define DMA_CHEN_CH4WEN                 (1 << 12)   /* CH4WEN */
#define DMA_CHEN_CH3WEN                 (1 << 11)   /* CH3WEN */
#define DMA_CHEN_CH2WEN                 (1 << 10)   /* CH2WEN */
#define DMA_CHEN_CH1WEN                 (1 << 9)    /* CH1WEN */
#define DMA_CHEN_CH0WEN                 (1 << 8)    /* CH0WEN */
#define DMA_CHEN_CH7                    (1 << 7)    /* CH7 */
#define DMA_CHEN_CH6                    (1 << 6)    /* CH6 */
#define DMA_CHEN_CH5                    (1 << 5)    /* CH5 */
#define DMA_CHEN_CH4                    (1 << 4)    /* CH4 */
#define DMA_CHEN_CH3                    (1 << 3)    /* CH3 */
#define DMA_CHEN_CH2                    (1 << 2)    /* CH2 */
#define DMA_CHEN_CH1                    (1 << 1)    /* CH1 */
#define DMA_CHEN_CH0                    (1 << 0)    /* CH0 */

/******** Bit definition for DMA_ID register  ********/
#define DMA_ID_VALUE_SHIFT              (0)
#define DMA_ID_VALUE_MASK               (0xFFFFFFFF << DMA_ID_VALUE_SHIFT) /*
                                                                            * VALUE
                                                                            */

/******** Bit definition for DMA_TEST register  ********/
#define DMA_TEST_TMS                    (1 << 0) /* TMS */

/******** Bit definition for DMA_LPTIMEOUT register  ********/
#define DMA_LPTIMEOUT_VALUE_SHIFT       (0)
#define DMA_LPTIMEOUT_VALUE_MASK        (0xFF << DMA_LPTIMEOUT_VALUE_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * VALUE
                                                                             */

/******** Bit definition for DMA_COMPID_L register  ********/
#define DMA_COMPID_L_TYPE_SHIFT         (0)
#define DMA_COMPID_L_TYPE_MASK          (0xFFFFFFFF << \
                                         DMA_COMPID_L_TYPE_SHIFT)      /* TYPE
                                                                        */

/******** Bit definition for DMA_COMPID_H register  ********/
#define DMA_COMPID_H_VERSION_SHIFT      (0)
#define DMA_COMPID_H_VERSION_MASK       (0xFFFFFFFF << \
                                         DMA_COMPID_H_VERSION_SHIFT)         /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * VERSION
                                                                              */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DMA_H */
