/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_dmamux2.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DMAMUX2_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DMAMUX2_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_DMAMUX2_CH0CTRL_OFFSET          0x0     /* nan */
#define N32_DMAMUX2_CH1CTRL_OFFSET          0x4     /* nan */
#define N32_DMAMUX2_CH2CTRL_OFFSET          0x8     /* nan */
#define N32_DMAMUX2_CH3CTRL_OFFSET          0xC     /* nan */
#define N32_DMAMUX2_CH4CTRL_OFFSET          0x10    /* nan */
#define N32_DMAMUX2_CH5CTRL_OFFSET          0x14    /* nan */
#define N32_DMAMUX2_CH6CTRL_OFFSET          0x18    /* nan */
#define N32_DMAMUX2_CH7CTRL_OFFSET          0x1C    /* nan */
#define N32_DMAMUX2_CH8CTRL_OFFSET          0x20    /* nan */
#define N32_DMAMUX2_CH9CTRL_OFFSET          0x24    /* nan */
#define N32_DMAMUX2_CH10CTRL_OFFSET         0x28    /* nan */
#define N32_DMAMUX2_CH11CTRL_OFFSET         0x2C    /* nan */
#define N32_DMAMUX2_CH12CTRL_OFFSET         0x30    /* nan */
#define N32_DMAMUX2_CH13CTRL_OFFSET         0x34    /* nan */
#define N32_DMAMUX2_CH14CTRL_OFFSET         0x38    /* nan */
#define N32_DMAMUX2_CH15CTRL_OFFSET         0x3C    /* nan */
#define N32_DMAMUX2_STS_OFFSET              0x80    /* nan */
#define N32_DMAMUX2_CLR_OFFSET              0x84    /* nan */
#define N32_DMAMUX2_CH0CFG_OFFSET           0x100   /* nan */
#define N32_DMAMUX2_CH1CFG_OFFSET           0x104   /* nan */
#define N32_DMAMUX2_CH2CFG_OFFSET           0x108   /* nan */
#define N32_DMAMUX2_CH3CFG_OFFSET           0x10C   /* nan */
#define N32_DMAMUX2_CH4CFG_OFFSET           0x110   /* nan */
#define N32_DMAMUX2_CH5CFG_OFFSET           0x114   /* nan */
#define N32_DMAMUX2_CH6CFG_OFFSET           0x118   /* nan */
#define N32_DMAMUX2_CH7CFG_OFFSET           0x11C   /* nan */
#define N32_DMAMUX2_CH8CFG_OFFSET           0x120   /* nan */
#define N32_DMAMUX2_CH9CFG_OFFSET           0x124   /* nan */
#define N32_DMAMUX2_CH10CFG_OFFSET          0x128   /* nan */
#define N32_DMAMUX2_CH11CFG_OFFSET          0x12C   /* nan */
#define N32_DMAMUX2_CH12CFG_OFFSET          0x130   /* nan */
#define N32_DMAMUX2_CH13CFG_OFFSET          0x134   /* nan */
#define N32_DMAMUX2_CH14CFG_OFFSET          0x138   /* nan */
#define N32_DMAMUX2_CH15CFG_OFFSET          0x13C   /* nan */
#define N32_DMAMUX2_RGSTS_OFFSET            0x180   /* nan */
#define N32_DMAMUX2_RGCLR_OFFSET            0x184   /* nan */

#define N32_DMAMUX2_CH0CTRL                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH0CTRL_OFFSET)
#define N32_DMAMUX2_CH1CTRL                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH1CTRL_OFFSET)
#define N32_DMAMUX2_CH2CTRL                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH2CTRL_OFFSET)
#define N32_DMAMUX2_CH3CTRL                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH3CTRL_OFFSET)
#define N32_DMAMUX2_CH4CTRL                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH4CTRL_OFFSET)
#define N32_DMAMUX2_CH5CTRL                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH5CTRL_OFFSET)
#define N32_DMAMUX2_CH6CTRL                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH6CTRL_OFFSET)
#define N32_DMAMUX2_CH7CTRL                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH7CTRL_OFFSET)
#define N32_DMAMUX2_CH8CTRL                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH8CTRL_OFFSET)
#define N32_DMAMUX2_CH9CTRL                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH9CTRL_OFFSET)
#define N32_DMAMUX2_CH10CTRL                (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH10CTRL_OFFSET)
#define N32_DMAMUX2_CH11CTRL                (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH11CTRL_OFFSET)
#define N32_DMAMUX2_CH12CTRL                (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH12CTRL_OFFSET)
#define N32_DMAMUX2_CH13CTRL                (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH13CTRL_OFFSET)
#define N32_DMAMUX2_CH14CTRL                (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH14CTRL_OFFSET)
#define N32_DMAMUX2_CH15CTRL                (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH15CTRL_OFFSET)
#define N32_DMAMUX2_STS                     (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_STS_OFFSET)
#define N32_DMAMUX2_CLR                     (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CLR_OFFSET)
#define N32_DMAMUX2_CH0CFG                  (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH0CFG_OFFSET)
#define N32_DMAMUX2_CH1CFG                  (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH1CFG_OFFSET)
#define N32_DMAMUX2_CH2CFG                  (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH2CFG_OFFSET)
#define N32_DMAMUX2_CH3CFG                  (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH3CFG_OFFSET)
#define N32_DMAMUX2_CH4CFG                  (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH4CFG_OFFSET)
#define N32_DMAMUX2_CH5CFG                  (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH5CFG_OFFSET)
#define N32_DMAMUX2_CH6CFG                  (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH6CFG_OFFSET)
#define N32_DMAMUX2_CH7CFG                  (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH7CFG_OFFSET)
#define N32_DMAMUX2_CH8CFG                  (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH8CFG_OFFSET)
#define N32_DMAMUX2_CH9CFG                  (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH9CFG_OFFSET)
#define N32_DMAMUX2_CH10CFG                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH10CFG_OFFSET)
#define N32_DMAMUX2_CH11CFG                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH11CFG_OFFSET)
#define N32_DMAMUX2_CH12CFG                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH12CFG_OFFSET)
#define N32_DMAMUX2_CH13CFG                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH13CFG_OFFSET)
#define N32_DMAMUX2_CH14CFG                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH14CFG_OFFSET)
#define N32_DMAMUX2_CH15CFG                 (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_CH15CFG_OFFSET)
#define N32_DMAMUX2_RGSTS                   (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_RGSTS_OFFSET)
#define N32_DMAMUX2_RGCLR                   (N32_DMAMUX2_BASE + \
                                             N32_DMAMUX2_RGCLR_OFFSET)

/******** Bit definition for DMAMUX2_CH0CTRL register  ********/
#define DMAMUX2_CH0CTRL_SYID_SHIFT          (24)
#define DMAMUX2_CH0CTRL_SYID_MASK           (0x7 << \
                                             DMAMUX2_CH0CTRL_SYID_SHIFT) /*
                                                                          * SYID
                                                                          */
#define DMAMUX2_CH0CTRL_NUMREQ_SHIFT        (19)
#define DMAMUX2_CH0CTRL_NUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH0CTRL_NUMREQ_SHIFT) /*
                                                                            * NUMREQ
                                                                            */
#define DMAMUX2_CH0CTRL_SYPOL_SHIFT         (17)
#define DMAMUX2_CH0CTRL_SYPOL_MASK          (0x3 << \
                                             DMAMUX2_CH0CTRL_SYPOL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH0CTRL_SYEN                (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH0CTRL_EVEGEN              (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH0CTRL_SOIEN               (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH0CTRL_REQID_SHIFT         (0)
#define DMAMUX2_CH0CTRL_REQID_MASK          (0xFF << \
                                             DMAMUX2_CH0CTRL_REQID_SHIFT) /*
                                                                           * REQID
                                                                           */

/******** Bit definition for DMAMUX2_CH1CTRL register  ********/
#define DMAMUX2_CH1CTRL_SYID_SHIFT          (24)
#define DMAMUX2_CH1CTRL_SYID_MASK           (0x7 << \
                                             DMAMUX2_CH1CTRL_SYID_SHIFT) /*
                                                                          * SYID
                                                                          */
#define DMAMUX2_CH1CTRL_NUMREQ_SHIFT        (19)
#define DMAMUX2_CH1CTRL_NUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH1CTRL_NUMREQ_SHIFT) /*
                                                                            * NUMREQ
                                                                            */
#define DMAMUX2_CH1CTRL_SYPOL_SHIFT         (17)
#define DMAMUX2_CH1CTRL_SYPOL_MASK          (0x3 << \
                                             DMAMUX2_CH1CTRL_SYPOL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH1CTRL_SYEN                (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH1CTRL_EVEGEN              (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH1CTRL_SOIEN               (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH1CTRL_REQID_SHIFT         (0)
#define DMAMUX2_CH1CTRL_REQID_MASK          (0xFF << \
                                             DMAMUX2_CH1CTRL_REQID_SHIFT) /*
                                                                           * REQID
                                                                           */

/******** Bit definition for DMAMUX2_CH2CTRL register  ********/
#define DMAMUX2_CH2CTRL_SYID_SHIFT          (24)
#define DMAMUX2_CH2CTRL_SYID_MASK           (0x7 << \
                                             DMAMUX2_CH2CTRL_SYID_SHIFT) /*
                                                                          * SYID
                                                                          */
#define DMAMUX2_CH2CTRL_NUMREQ_SHIFT        (19)
#define DMAMUX2_CH2CTRL_NUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH2CTRL_NUMREQ_SHIFT) /*
                                                                            * NUMREQ
                                                                            */
#define DMAMUX2_CH2CTRL_SYPOL_SHIFT         (17)
#define DMAMUX2_CH2CTRL_SYPOL_MASK          (0x3 << \
                                             DMAMUX2_CH2CTRL_SYPOL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH2CTRL_SYEN                (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH2CTRL_EVEGEN              (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH2CTRL_SOIEN               (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH2CTRL_REQID_SHIFT         (0)
#define DMAMUX2_CH2CTRL_REQID_MASK          (0xFF << \
                                             DMAMUX2_CH2CTRL_REQID_SHIFT) /*
                                                                           * REQID
                                                                           */

/******** Bit definition for DMAMUX2_CH3CTRL register  ********/
#define DMAMUX2_CH3CTRL_SYNC_ID_SHIFT       (24)
#define DMAMUX2_CH3CTRL_SYNC_ID_MASK        (0x7 << \
                                             DMAMUX2_CH3CTRL_SYNC_ID_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYNC_ID
                                                                             */
#define DMAMUX2_CH3CTRL_NBREQ_SHIFT         (19)
#define DMAMUX2_CH3CTRL_NBREQ_MASK          (0x1F << \
                                             DMAMUX2_CH3CTRL_NBREQ_SHIFT) /*
                                                                           * NBREQ
                                                                           */
#define DMAMUX2_CH3CTRL_SPOL_SHIFT          (17)
#define DMAMUX2_CH3CTRL_SPOL_MASK           (0x3 << \
                                             DMAMUX2_CH3CTRL_SPOL_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SPOL
                                                                             */
#define DMAMUX2_CH3CTRL_SE                  (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SE
                                                                             */
#define DMAMUX2_CH3CTRL_EGE                 (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EGE
                                                                             */
#define DMAMUX2_CH3CTRL_SOIE                (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIE
                                                                             */
#define DMAMUX2_CH3CTRL_DMAREQ_ID_SHIFT     (0)
#define DMAMUX2_CH3CTRL_DMAREQ_ID_MASK      (0xFF << \
                                             DMAMUX2_CH3CTRL_DMAREQ_ID_SHIFT)    /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * DMAREQ_ID
                                                                                  */

/******** Bit definition for DMAMUX2_CH4CTRL register  ********/
#define DMAMUX2_CH4CTRL_SYID_SHIFT          (24)
#define DMAMUX2_CH4CTRL_SYID_MASK           (0x7 << \
                                             DMAMUX2_CH4CTRL_SYID_SHIFT) /*
                                                                          * SYID
                                                                          */
#define DMAMUX2_CH4CTRL_NUMREQ_SHIFT        (19)
#define DMAMUX2_CH4CTRL_NUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH4CTRL_NUMREQ_SHIFT) /*
                                                                            * NUMREQ
                                                                            */
#define DMAMUX2_CH4CTRL_SYPOL_SHIFT         (17)
#define DMAMUX2_CH4CTRL_SYPOL_MASK          (0x3 << \
                                             DMAMUX2_CH4CTRL_SYPOL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH4CTRL_SYEN                (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH4CTRL_EVEGEN              (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH4CTRL_SOIEN               (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH4CTRL_REQID_SHIFT         (0)
#define DMAMUX2_CH4CTRL_REQID_MASK          (0xFF << \
                                             DMAMUX2_CH4CTRL_REQID_SHIFT) /*
                                                                           * REQID
                                                                           */

/******** Bit definition for DMAMUX2_CH5CTRL register  ********/
#define DMAMUX2_CH5CTRL_SYID_SHIFT          (24)
#define DMAMUX2_CH5CTRL_SYID_MASK           (0x7 << \
                                             DMAMUX2_CH5CTRL_SYID_SHIFT) /*
                                                                          * SYID
                                                                          */
#define DMAMUX2_CH5CTRL_NUMREQ_SHIFT        (19)
#define DMAMUX2_CH5CTRL_NUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH5CTRL_NUMREQ_SHIFT) /*
                                                                            * NUMREQ
                                                                            */
#define DMAMUX2_CH5CTRL_SYPOL_SHIFT         (17)
#define DMAMUX2_CH5CTRL_SYPOL_MASK          (0x3 << \
                                             DMAMUX2_CH5CTRL_SYPOL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH5CTRL_SYEN                (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH5CTRL_EVEGEN              (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH5CTRL_SOIEN               (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH5CTRL_REQID_SHIFT         (0)
#define DMAMUX2_CH5CTRL_REQID_MASK          (0xFF << \
                                             DMAMUX2_CH5CTRL_REQID_SHIFT) /*
                                                                           * REQID
                                                                           */

/******** Bit definition for DMAMUX2_CH6CTRL register  ********/
#define DMAMUX2_CH6CTRL_SYID_SHIFT          (24)
#define DMAMUX2_CH6CTRL_SYID_MASK           (0x7 << \
                                             DMAMUX2_CH6CTRL_SYID_SHIFT) /*
                                                                          * SYID
                                                                          */
#define DMAMUX2_CH6CTRL_NUMREQ_SHIFT        (19)
#define DMAMUX2_CH6CTRL_NUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH6CTRL_NUMREQ_SHIFT) /*
                                                                            * NUMREQ
                                                                            */
#define DMAMUX2_CH6CTRL_SYPOL_SHIFT         (17)
#define DMAMUX2_CH6CTRL_SYPOL_MASK          (0x3 << \
                                             DMAMUX2_CH6CTRL_SYPOL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH6CTRL_SYEN                (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH6CTRL_EVEGEN              (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH6CTRL_SOIEN               (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH6CTRL_REQID_SHIFT         (0)
#define DMAMUX2_CH6CTRL_REQID_MASK          (0xFF << \
                                             DMAMUX2_CH6CTRL_REQID_SHIFT) /*
                                                                           * REQID
                                                                           */

/******** Bit definition for DMAMUX2_CH7CTRL register  ********/
#define DMAMUX2_CH7CTRL_SYID_SHIFT          (24)
#define DMAMUX2_CH7CTRL_SYID_MASK           (0x7 << \
                                             DMAMUX2_CH7CTRL_SYID_SHIFT) /*
                                                                          * SYID
                                                                          */
#define DMAMUX2_CH7CTRL_NUMREQ_SHIFT        (19)
#define DMAMUX2_CH7CTRL_NUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH7CTRL_NUMREQ_SHIFT) /*
                                                                            * NUMREQ
                                                                            */
#define DMAMUX2_CH7CTRL_SYPOL_SHIFT         (17)
#define DMAMUX2_CH7CTRL_SYPOL_MASK          (0x3 << \
                                             DMAMUX2_CH7CTRL_SYPOL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH7CTRL_SYEN                (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH7CTRL_EVEGEN              (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH7CTRL_SOIEN               (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH7CTRL_REQID_SHIFT         (0)
#define DMAMUX2_CH7CTRL_REQID_MASK          (0xFF << \
                                             DMAMUX2_CH7CTRL_REQID_SHIFT) /*
                                                                           * REQID
                                                                           */

/******** Bit definition for DMAMUX2_CH8CTRL register  ********/
#define DMAMUX2_CH8CTRL_SYID_SHIFT          (24)
#define DMAMUX2_CH8CTRL_SYID_MASK           (0x7 << \
                                             DMAMUX2_CH8CTRL_SYID_SHIFT) /*
                                                                          * SYID
                                                                          */
#define DMAMUX2_CH8CTRL_NUMREQ_SHIFT        (19)
#define DMAMUX2_CH8CTRL_NUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH8CTRL_NUMREQ_SHIFT) /*
                                                                            * NUMREQ
                                                                            */
#define DMAMUX2_CH8CTRL_SYPOL_SHIFT         (17)
#define DMAMUX2_CH8CTRL_SYPOL_MASK          (0x3 << \
                                             DMAMUX2_CH8CTRL_SYPOL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH8CTRL_SYEN                (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH8CTRL_EVEGEN              (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH8CTRL_SOIEN               (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH8CTRL_REQID_SHIFT         (0)
#define DMAMUX2_CH8CTRL_REQID_MASK          (0xFF << \
                                             DMAMUX2_CH8CTRL_REQID_SHIFT) /*
                                                                           * REQID
                                                                           */

/******** Bit definition for DMAMUX2_CH9CTRL register  ********/
#define DMAMUX2_CH9CTRL_SYID_SHIFT          (24)
#define DMAMUX2_CH9CTRL_SYID_MASK           (0x7 << \
                                             DMAMUX2_CH9CTRL_SYID_SHIFT) /*
                                                                          * SYID
                                                                          */
#define DMAMUX2_CH9CTRL_NUMREQ_SHIFT        (19)
#define DMAMUX2_CH9CTRL_NUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH9CTRL_NUMREQ_SHIFT) /*
                                                                            * NUMREQ
                                                                            */
#define DMAMUX2_CH9CTRL_SYPOL_SHIFT         (17)
#define DMAMUX2_CH9CTRL_SYPOL_MASK          (0x3 << \
                                             DMAMUX2_CH9CTRL_SYPOL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH9CTRL_SYEN                (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH9CTRL_EVEGEN              (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH9CTRL_SOIEN               (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH9CTRL_REQID_SHIFT         (0)
#define DMAMUX2_CH9CTRL_REQID_MASK          (0xFF << \
                                             DMAMUX2_CH9CTRL_REQID_SHIFT) /*
                                                                           * REQID
                                                                           */

/******** Bit definition for DMAMUX2_CH10CTRL register  ********/
#define DMAMUX2_CH10CTRL_SYID_SHIFT         (24)
#define DMAMUX2_CH10CTRL_SYID_MASK          (0x7 << \
                                             DMAMUX2_CH10CTRL_SYID_SHIFT) /*
                                                                           * SYID
                                                                           */
#define DMAMUX2_CH10CTRL_NUMREQ_SHIFT       (19)
#define DMAMUX2_CH10CTRL_NUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH10CTRL_NUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * NUMREQ
                                                                              */
#define DMAMUX2_CH10CTRL_SYPOL_SHIFT        (17)
#define DMAMUX2_CH10CTRL_SYPOL_MASK         (0x3 << \
                                             DMAMUX2_CH10CTRL_SYPOL_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH10CTRL_SYEN               (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH10CTRL_EVEGEN             (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH10CTRL_SOIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH10CTRL_REQID_SHIFT        (0)
#define DMAMUX2_CH10CTRL_REQID_MASK         (0xFF << \
                                             DMAMUX2_CH10CTRL_REQID_SHIFT) /*
                                                                            * REQID
                                                                            */

/******** Bit definition for DMAMUX2_CH11CTRL register  ********/
#define DMAMUX2_CH11CTRL_SYID_SHIFT         (24)
#define DMAMUX2_CH11CTRL_SYID_MASK          (0x7 << \
                                             DMAMUX2_CH11CTRL_SYID_SHIFT) /*
                                                                           * SYID
                                                                           */
#define DMAMUX2_CH11CTRL_NUMREQ_SHIFT       (19)
#define DMAMUX2_CH11CTRL_NUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH11CTRL_NUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * NUMREQ
                                                                              */
#define DMAMUX2_CH11CTRL_SYPOL_SHIFT        (17)
#define DMAMUX2_CH11CTRL_SYPOL_MASK         (0x3 << \
                                             DMAMUX2_CH11CTRL_SYPOL_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH11CTRL_SYEN               (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH11CTRL_EVEGEN             (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH11CTRL_SOIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH11CTRL_REQID_SHIFT        (0)
#define DMAMUX2_CH11CTRL_REQID_MASK         (0xFF << \
                                             DMAMUX2_CH11CTRL_REQID_SHIFT) /*
                                                                            * REQID
                                                                            */

/******** Bit definition for DMAMUX2_CH12CTRL register  ********/
#define DMAMUX2_CH12CTRL_SYID_SHIFT         (24)
#define DMAMUX2_CH12CTRL_SYID_MASK          (0x7 << \
                                             DMAMUX2_CH12CTRL_SYID_SHIFT) /*
                                                                           * SYID
                                                                           */
#define DMAMUX2_CH12CTRL_NUMREQ_SHIFT       (19)
#define DMAMUX2_CH12CTRL_NUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH12CTRL_NUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * NUMREQ
                                                                              */
#define DMAMUX2_CH12CTRL_SYPOL_SHIFT        (17)
#define DMAMUX2_CH12CTRL_SYPOL_MASK         (0x3 << \
                                             DMAMUX2_CH12CTRL_SYPOL_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH12CTRL_SYEN               (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH12CTRL_EVEGEN             (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH12CTRL_SOIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH12CTRL_REQID_SHIFT        (0)
#define DMAMUX2_CH12CTRL_REQID_MASK         (0xFF << \
                                             DMAMUX2_CH12CTRL_REQID_SHIFT) /*
                                                                            * REQID
                                                                            */

/******** Bit definition for DMAMUX2_CH13CTRL register  ********/
#define DMAMUX2_CH13CTRL_SYID_SHIFT         (24)
#define DMAMUX2_CH13CTRL_SYID_MASK          (0x7 << \
                                             DMAMUX2_CH13CTRL_SYID_SHIFT) /*
                                                                           * SYID
                                                                           */
#define DMAMUX2_CH13CTRL_NUMREQ_SHIFT       (19)
#define DMAMUX2_CH13CTRL_NUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH13CTRL_NUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * NUMREQ
                                                                              */
#define DMAMUX2_CH13CTRL_SYPOL_SHIFT        (17)
#define DMAMUX2_CH13CTRL_SYPOL_MASK         (0x3 << \
                                             DMAMUX2_CH13CTRL_SYPOL_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH13CTRL_SYEN               (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH13CTRL_EVEGEN             (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH13CTRL_SOIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH13CTRL_REQID_SHIFT        (0)
#define DMAMUX2_CH13CTRL_REQID_MASK         (0xFF << \
                                             DMAMUX2_CH13CTRL_REQID_SHIFT) /*
                                                                            * REQID
                                                                            */

/******** Bit definition for DMAMUX2_CH14CTRL register  ********/
#define DMAMUX2_CH14CTRL_SYID_SHIFT         (24)
#define DMAMUX2_CH14CTRL_SYID_MASK          (0x7 << \
                                             DMAMUX2_CH14CTRL_SYID_SHIFT) /*
                                                                           * SYID
                                                                           */
#define DMAMUX2_CH14CTRL_NUMREQ_SHIFT       (19)
#define DMAMUX2_CH14CTRL_NUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH14CTRL_NUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * NUMREQ
                                                                              */
#define DMAMUX2_CH14CTRL_SYPOL_SHIFT        (17)
#define DMAMUX2_CH14CTRL_SYPOL_MASK         (0x3 << \
                                             DMAMUX2_CH14CTRL_SYPOL_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH14CTRL_SYEN               (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH14CTRL_EVEGEN             (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH14CTRL_SOIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH14CTRL_REQID_SHIFT        (0)
#define DMAMUX2_CH14CTRL_REQID_MASK         (0xFF << \
                                             DMAMUX2_CH14CTRL_REQID_SHIFT) /*
                                                                            * REQID
                                                                            */

/******** Bit definition for DMAMUX2_CH15CTRL register  ********/
#define DMAMUX2_CH15CTRL_SYID_SHIFT         (24)
#define DMAMUX2_CH15CTRL_SYID_MASK          (0x7 << \
                                             DMAMUX2_CH15CTRL_SYID_SHIFT) /*
                                                                           * SYID
                                                                           */
#define DMAMUX2_CH15CTRL_NUMREQ_SHIFT       (19)
#define DMAMUX2_CH15CTRL_NUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH15CTRL_NUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * NUMREQ
                                                                              */
#define DMAMUX2_CH15CTRL_SYPOL_SHIFT        (17)
#define DMAMUX2_CH15CTRL_SYPOL_MASK         (0x3 << \
                                             DMAMUX2_CH15CTRL_SYPOL_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYPOL
                                                                             */
#define DMAMUX2_CH15CTRL_SYEN               (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SYEN
                                                                             */
#define DMAMUX2_CH15CTRL_EVEGEN             (1 << 9)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EVEGEN
                                                                             */
#define DMAMUX2_CH15CTRL_SOIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * SOIEN
                                                                             */
#define DMAMUX2_CH15CTRL_REQID_SHIFT        (0)
#define DMAMUX2_CH15CTRL_REQID_MASK         (0xFF << \
                                             DMAMUX2_CH15CTRL_REQID_SHIFT) /*
                                                                            * REQID
                                                                            */

/******** Bit definition for DMAMUX2_STS register  ********/
#define DMAMUX2_STS_SOF15                   (1 << 15)   /* SOF15 */
#define DMAMUX2_STS_SOF14                   (1 << 14)   /* SOF14 */
#define DMAMUX2_STS_SOF13                   (1 << 13)   /* SOF13 */
#define DMAMUX2_STS_SOF12                   (1 << 12)   /* SOF12 */
#define DMAMUX2_STS_SOF11                   (1 << 11)   /* SOF11 */
#define DMAMUX2_STS_SOF10                   (1 << 10)   /* SOF10 */
#define DMAMUX2_STS_SOF9                    (1 << 9)    /* SOF9 */
#define DMAMUX2_STS_SOF8                    (1 << 8)    /* SOF8 */
#define DMAMUX2_STS_SOF7                    (1 << 7)    /* SOF7 */
#define DMAMUX2_STS_SOF6                    (1 << 6)    /* SOF6 */
#define DMAMUX2_STS_SOF5                    (1 << 5)    /* SOF5 */
#define DMAMUX2_STS_SOF4                    (1 << 4)    /* SOF4 */
#define DMAMUX2_STS_SOF3                    (1 << 3)    /* SOF3 */
#define DMAMUX2_STS_SOF2                    (1 << 2)    /* SOF2 */
#define DMAMUX2_STS_SOF1                    (1 << 1)    /* SOF1 */
#define DMAMUX2_STS_SOF0                    (1 << 0)    /* SOF0 */

/******** Bit definition for DMAMUX2_CLR register  ********/
#define DMAMUX2_CLR_CSOF15                  (1 << 15)   /* CSOF15 */
#define DMAMUX2_CLR_CSOF14                  (1 << 14)   /* CSOF14 */
#define DMAMUX2_CLR_CSOF13                  (1 << 13)   /* CSOF13 */
#define DMAMUX2_CLR_CSOF12                  (1 << 12)   /* CSOF12 */
#define DMAMUX2_CLR_CSOF11                  (1 << 11)   /* CSOF11 */
#define DMAMUX2_CLR_CSOF10                  (1 << 10)   /* CSOF10 */
#define DMAMUX2_CLR_CSOF9                   (1 << 9)    /* CSOF9 */
#define DMAMUX2_CLR_CSOF8                   (1 << 8)    /* CSOF8 */
#define DMAMUX2_CLR_CSOF7                   (1 << 7)    /* CSOF7 */
#define DMAMUX2_CLR_CSOF6                   (1 << 6)    /* CSOF6 */
#define DMAMUX2_CLR_CSOF5                   (1 << 5)    /* CSOF5 */
#define DMAMUX2_CLR_CSOF4                   (1 << 4)    /* CSOF4 */
#define DMAMUX2_CLR_CSOF3                   (1 << 3)    /* CSOF3 */
#define DMAMUX2_CLR_CSOF2                   (1 << 2)    /* CSOF2 */
#define DMAMUX2_CLR_CSOF1                   (1 << 1)    /* CSOF1 */
#define DMAMUX2_CLR_CSOF0                   (1 << 0)    /* CSOF0 */

/******** Bit definition for DMAMUX2_CH0CFG register  ********/
#define DMAMUX2_CH0CFG_GNUMREQ_SHIFT        (19)
#define DMAMUX2_CH0CFG_GNUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH0CFG_GNUMREQ_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GNUMREQ
                                                                                 */
#define DMAMUX2_CH0CFG_GPOL_SHIFT           (17)
#define DMAMUX2_CH0CFG_GPOL_MASK            (0x3 << DMAMUX2_CH0CFG_GPOL_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GPOL
                                                                                 */
#define DMAMUX2_CH0CFG_GEN                  (1 << 16)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GEN
                                                                                 */
#define DMAMUX2_CH0CFG_TOVIEN               (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TOVIEN
                                                                                 */
#define DMAMUX2_CH0CFG_SIGID_SHIFT          (0)
#define DMAMUX2_CH0CFG_SIGID_MASK           (0x3F << \
                                             DMAMUX2_CH0CFG_SIGID_SHIFT) /*
                                                                          * SIGID
                                                                          */

/******** Bit definition for DMAMUX2_CH1CFG register  ********/
#define DMAMUX2_CH1CFG_GNUMREQ_SHIFT        (19)
#define DMAMUX2_CH1CFG_GNUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH1CFG_GNUMREQ_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GNUMREQ
                                                                                 */
#define DMAMUX2_CH1CFG_GPOL_SHIFT           (17)
#define DMAMUX2_CH1CFG_GPOL_MASK            (0x3 << DMAMUX2_CH1CFG_GPOL_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GPOL
                                                                                 */
#define DMAMUX2_CH1CFG_GEN                  (1 << 16)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GEN
                                                                                 */
#define DMAMUX2_CH1CFG_TOVIEN               (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TOVIEN
                                                                                 */
#define DMAMUX2_CH1CFG_SIGID_SHIFT          (0)
#define DMAMUX2_CH1CFG_SIGID_MASK           (0x3F << \
                                             DMAMUX2_CH1CFG_SIGID_SHIFT) /*
                                                                          * SIGID
                                                                          */

/******** Bit definition for DMAMUX2_CH2CFG register  ********/
#define DMAMUX2_CH2CFG_GNUMREQ_SHIFT        (19)
#define DMAMUX2_CH2CFG_GNUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH2CFG_GNUMREQ_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GNUMREQ
                                                                                 */
#define DMAMUX2_CH2CFG_GPOL_SHIFT           (17)
#define DMAMUX2_CH2CFG_GPOL_MASK            (0x3 << DMAMUX2_CH2CFG_GPOL_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GPOL
                                                                                 */
#define DMAMUX2_CH2CFG_GEN                  (1 << 16)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GEN
                                                                                 */
#define DMAMUX2_CH2CFG_TOVIEN               (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TOVIEN
                                                                                 */
#define DMAMUX2_CH2CFG_SIGID_SHIFT          (0)
#define DMAMUX2_CH2CFG_SIGID_MASK           (0x3F << \
                                             DMAMUX2_CH2CFG_SIGID_SHIFT) /*
                                                                          * SIGID
                                                                          */

/******** Bit definition for DMAMUX2_CH3CFG register  ********/
#define DMAMUX2_CH3CFG_GNUMREQ_SHIFT        (19)
#define DMAMUX2_CH3CFG_GNUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH3CFG_GNUMREQ_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GNUMREQ
                                                                                 */
#define DMAMUX2_CH3CFG_GPOL_SHIFT           (17)
#define DMAMUX2_CH3CFG_GPOL_MASK            (0x3 << DMAMUX2_CH3CFG_GPOL_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GPOL
                                                                                 */
#define DMAMUX2_CH3CFG_GEN                  (1 << 16)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GEN
                                                                                 */
#define DMAMUX2_CH3CFG_TOVIEN               (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TOVIEN
                                                                                 */
#define DMAMUX2_CH3CFG_SIGID_SHIFT          (0)
#define DMAMUX2_CH3CFG_SIGID_MASK           (0x3F << \
                                             DMAMUX2_CH3CFG_SIGID_SHIFT) /*
                                                                          * SIGID
                                                                          */

/******** Bit definition for DMAMUX2_CH4CFG register  ********/
#define DMAMUX2_CH4CFG_GNUMREQ_SHIFT        (19)
#define DMAMUX2_CH4CFG_GNUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH4CFG_GNUMREQ_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GNUMREQ
                                                                                 */
#define DMAMUX2_CH4CFG_GPOL_SHIFT           (17)
#define DMAMUX2_CH4CFG_GPOL_MASK            (0x3 << DMAMUX2_CH4CFG_GPOL_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GPOL
                                                                                 */
#define DMAMUX2_CH4CFG_GEN                  (1 << 16)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GEN
                                                                                 */
#define DMAMUX2_CH4CFG_TOVIEN               (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TOVIEN
                                                                                 */
#define DMAMUX2_CH4CFG_SIGID_SHIFT          (0)
#define DMAMUX2_CH4CFG_SIGID_MASK           (0x3F << \
                                             DMAMUX2_CH4CFG_SIGID_SHIFT) /*
                                                                          * SIGID
                                                                          */

/******** Bit definition for DMAMUX2_CH5CFG register  ********/
#define DMAMUX2_CH5CFG_GNUMREQ_SHIFT        (19)
#define DMAMUX2_CH5CFG_GNUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH5CFG_GNUMREQ_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GNUMREQ
                                                                                 */
#define DMAMUX2_CH5CFG_GPOL_SHIFT           (17)
#define DMAMUX2_CH5CFG_GPOL_MASK            (0x3 << DMAMUX2_CH5CFG_GPOL_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GPOL
                                                                                 */
#define DMAMUX2_CH5CFG_GEN                  (1 << 16)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GEN
                                                                                 */
#define DMAMUX2_CH5CFG_TOVIEN               (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TOVIEN
                                                                                 */
#define DMAMUX2_CH5CFG_SIGID_SHIFT          (0)
#define DMAMUX2_CH5CFG_SIGID_MASK           (0x3F << \
                                             DMAMUX2_CH5CFG_SIGID_SHIFT) /*
                                                                          * SIGID
                                                                          */

/******** Bit definition for DMAMUX2_CH6CFG register  ********/
#define DMAMUX2_CH6CFG_GNUMREQ_SHIFT        (19)
#define DMAMUX2_CH6CFG_GNUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH6CFG_GNUMREQ_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GNUMREQ
                                                                                 */
#define DMAMUX2_CH6CFG_GPOL_SHIFT           (17)
#define DMAMUX2_CH6CFG_GPOL_MASK            (0x3 << DMAMUX2_CH6CFG_GPOL_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GPOL
                                                                                 */
#define DMAMUX2_CH6CFG_GEN                  (1 << 16)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GEN
                                                                                 */
#define DMAMUX2_CH6CFG_TOVIEN               (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TOVIEN
                                                                                 */
#define DMAMUX2_CH6CFG_SIGID_SHIFT          (0)
#define DMAMUX2_CH6CFG_SIGID_MASK           (0x3F << \
                                             DMAMUX2_CH6CFG_SIGID_SHIFT) /*
                                                                          * SIGID
                                                                          */

/******** Bit definition for DMAMUX2_CH7CFG register  ********/
#define DMAMUX2_CH7CFG_GNUMREQ_SHIFT        (19)
#define DMAMUX2_CH7CFG_GNUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH7CFG_GNUMREQ_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GNUMREQ
                                                                                 */
#define DMAMUX2_CH7CFG_GPOL_SHIFT           (17)
#define DMAMUX2_CH7CFG_GPOL_MASK            (0x3 << DMAMUX2_CH7CFG_GPOL_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GPOL
                                                                                 */
#define DMAMUX2_CH7CFG_GEN                  (1 << 16)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GEN
                                                                                 */
#define DMAMUX2_CH7CFG_TOVIEN               (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TOVIEN
                                                                                 */
#define DMAMUX2_CH7CFG_SIGID_SHIFT          (0)
#define DMAMUX2_CH7CFG_SIGID_MASK           (0x3F << \
                                             DMAMUX2_CH7CFG_SIGID_SHIFT) /*
                                                                          * SIGID
                                                                          */

/******** Bit definition for DMAMUX2_CH8CFG register  ********/
#define DMAMUX2_CH8CFG_GNUMREQ_SHIFT        (19)
#define DMAMUX2_CH8CFG_GNUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH8CFG_GNUMREQ_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GNUMREQ
                                                                                 */
#define DMAMUX2_CH8CFG_GPOL_SHIFT           (17)
#define DMAMUX2_CH8CFG_GPOL_MASK            (0x3 << DMAMUX2_CH8CFG_GPOL_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GPOL
                                                                                 */
#define DMAMUX2_CH8CFG_GEN                  (1 << 16)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GEN
                                                                                 */
#define DMAMUX2_CH8CFG_TOVIEN               (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TOVIEN
                                                                                 */
#define DMAMUX2_CH8CFG_SIGID_SHIFT          (0)
#define DMAMUX2_CH8CFG_SIGID_MASK           (0x3F << \
                                             DMAMUX2_CH8CFG_SIGID_SHIFT) /*
                                                                          * SIGID
                                                                          */

/******** Bit definition for DMAMUX2_CH9CFG register  ********/
#define DMAMUX2_CH9CFG_GNUMREQ_SHIFT        (19)
#define DMAMUX2_CH9CFG_GNUMREQ_MASK         (0x1F << \
                                             DMAMUX2_CH9CFG_GNUMREQ_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GNUMREQ
                                                                                 */
#define DMAMUX2_CH9CFG_GPOL_SHIFT           (17)
#define DMAMUX2_CH9CFG_GPOL_MASK            (0x3 << DMAMUX2_CH9CFG_GPOL_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GPOL
                                                                                 */
#define DMAMUX2_CH9CFG_GEN                  (1 << 16)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * GEN
                                                                                 */
#define DMAMUX2_CH9CFG_TOVIEN               (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TOVIEN
                                                                                 */
#define DMAMUX2_CH9CFG_SIGID_SHIFT          (0)
#define DMAMUX2_CH9CFG_SIGID_MASK           (0x3F << \
                                             DMAMUX2_CH9CFG_SIGID_SHIFT) /*
                                                                          * SIGID
                                                                          */

/******** Bit definition for DMAMUX2_CH10CFG register  ********/
#define DMAMUX2_CH10CFG_GNUMREQ_SHIFT       (19)
#define DMAMUX2_CH10CFG_GNUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH10CFG_GNUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * GNUMREQ
                                                                              */
#define DMAMUX2_CH10CFG_GPOL_SHIFT          (17)
#define DMAMUX2_CH10CFG_GPOL_MASK           (0x3 << \
                                             DMAMUX2_CH10CFG_GPOL_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GPOL
                                                                             */
#define DMAMUX2_CH10CFG_GEN                 (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GEN
                                                                             */
#define DMAMUX2_CH10CFG_TOVIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * TOVIEN
                                                                             */
#define DMAMUX2_CH10CFG_SIGID_SHIFT         (0)
#define DMAMUX2_CH10CFG_SIGID_MASK          (0x3F << \
                                             DMAMUX2_CH10CFG_SIGID_SHIFT) /*
                                                                           * SIGID
                                                                           */

/******** Bit definition for DMAMUX2_CH11CFG register  ********/
#define DMAMUX2_CH11CFG_GNUMREQ_SHIFT       (19)
#define DMAMUX2_CH11CFG_GNUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH11CFG_GNUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * GNUMREQ
                                                                              */
#define DMAMUX2_CH11CFG_GPOL_SHIFT          (17)
#define DMAMUX2_CH11CFG_GPOL_MASK           (0x3 << \
                                             DMAMUX2_CH11CFG_GPOL_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GPOL
                                                                             */
#define DMAMUX2_CH11CFG_GEN                 (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GEN
                                                                             */
#define DMAMUX2_CH11CFG_TOVIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * TOVIEN
                                                                             */
#define DMAMUX2_CH11CFG_SIGID_SHIFT         (0)
#define DMAMUX2_CH11CFG_SIGID_MASK          (0x3F << \
                                             DMAMUX2_CH11CFG_SIGID_SHIFT) /*
                                                                           * SIGID
                                                                           */

/******** Bit definition for DMAMUX2_CH12CFG register  ********/
#define DMAMUX2_CH12CFG_GNUMREQ_SHIFT       (19)
#define DMAMUX2_CH12CFG_GNUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH12CFG_GNUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * GNUMREQ
                                                                              */
#define DMAMUX2_CH12CFG_GPOL_SHIFT          (17)
#define DMAMUX2_CH12CFG_GPOL_MASK           (0x3 << \
                                             DMAMUX2_CH12CFG_GPOL_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GPOL
                                                                             */
#define DMAMUX2_CH12CFG_GEN                 (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GEN
                                                                             */
#define DMAMUX2_CH12CFG_TOVIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * TOVIEN
                                                                             */
#define DMAMUX2_CH12CFG_SIGID_SHIFT         (0)
#define DMAMUX2_CH12CFG_SIGID_MASK          (0x3F << \
                                             DMAMUX2_CH12CFG_SIGID_SHIFT) /*
                                                                           * SIGID
                                                                           */

/******** Bit definition for DMAMUX2_CH13CFG register  ********/
#define DMAMUX2_CH13CFG_GNUMREQ_SHIFT       (19)
#define DMAMUX2_CH13CFG_GNUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH13CFG_GNUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * GNUMREQ
                                                                              */
#define DMAMUX2_CH13CFG_GPOL_SHIFT          (17)
#define DMAMUX2_CH13CFG_GPOL_MASK           (0x3 << \
                                             DMAMUX2_CH13CFG_GPOL_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GPOL
                                                                             */
#define DMAMUX2_CH13CFG_GEN                 (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GEN
                                                                             */
#define DMAMUX2_CH13CFG_TOVIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * TOVIEN
                                                                             */
#define DMAMUX2_CH13CFG_SIGID_SHIFT         (0)
#define DMAMUX2_CH13CFG_SIGID_MASK          (0x3F << \
                                             DMAMUX2_CH13CFG_SIGID_SHIFT) /*
                                                                           * SIGID
                                                                           */

/******** Bit definition for DMAMUX2_CH14CFG register  ********/
#define DMAMUX2_CH14CFG_GNUMREQ_SHIFT       (19)
#define DMAMUX2_CH14CFG_GNUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH14CFG_GNUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * GNUMREQ
                                                                              */
#define DMAMUX2_CH14CFG_GPOL_SHIFT          (17)
#define DMAMUX2_CH14CFG_GPOL_MASK           (0x3 << \
                                             DMAMUX2_CH14CFG_GPOL_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GPOL
                                                                             */
#define DMAMUX2_CH14CFG_GEN                 (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GEN
                                                                             */
#define DMAMUX2_CH14CFG_TOVIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * TOVIEN
                                                                             */
#define DMAMUX2_CH14CFG_SIGID_SHIFT         (0)
#define DMAMUX2_CH14CFG_SIGID_MASK          (0x3F << \
                                             DMAMUX2_CH14CFG_SIGID_SHIFT) /*
                                                                           * SIGID
                                                                           */

/******** Bit definition for DMAMUX2_CH15CFG register  ********/
#define DMAMUX2_CH15CFG_GNUMREQ_SHIFT       (19)
#define DMAMUX2_CH15CFG_GNUMREQ_MASK        (0x1F << \
                                             DMAMUX2_CH15CFG_GNUMREQ_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * GNUMREQ
                                                                              */
#define DMAMUX2_CH15CFG_GPOL_SHIFT          (17)
#define DMAMUX2_CH15CFG_GPOL_MASK           (0x3 << \
                                             DMAMUX2_CH15CFG_GPOL_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GPOL
                                                                             */
#define DMAMUX2_CH15CFG_GEN                 (1 << 16)                       /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * GEN
                                                                             */
#define DMAMUX2_CH15CFG_TOVIEN              (1 << 8)                        /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * TOVIEN
                                                                             */
#define DMAMUX2_CH15CFG_SIGID_SHIFT         (0)
#define DMAMUX2_CH15CFG_SIGID_MASK          (0x3F << \
                                             DMAMUX2_CH15CFG_SIGID_SHIFT) /*
                                                                           * SIGID
                                                                           */

/******** Bit definition for DMAMUX2_RGSTS register  ********/
#define DMAMUX2_RGSTS_OF15                  (1 << 15)   /* OF15 */
#define DMAMUX2_RGSTS_OF14                  (1 << 14)   /* OF14 */
#define DMAMUX2_RGSTS_OF13                  (1 << 13)   /* OF13 */
#define DMAMUX2_RGSTS_OF12                  (1 << 12)   /* OF12 */
#define DMAMUX2_RGSTS_OF11                  (1 << 11)   /* OF11 */
#define DMAMUX2_RGSTS_OF10                  (1 << 10)   /* OF10 */
#define DMAMUX2_RGSTS_OF9                   (1 << 9)    /* OF9 */
#define DMAMUX2_RGSTS_OF8                   (1 << 8)    /* OF8 */
#define DMAMUX2_RGSTS_OF7                   (1 << 7)    /* OF7 */
#define DMAMUX2_RGSTS_OF6                   (1 << 6)    /* OF6 */
#define DMAMUX2_RGSTS_OF5                   (1 << 5)    /* OF5 */
#define DMAMUX2_RGSTS_OF4                   (1 << 4)    /* OF4 */
#define DMAMUX2_RGSTS_OF3                   (1 << 3)    /* OF3 */
#define DMAMUX2_RGSTS_OF2                   (1 << 2)    /* OF2 */
#define DMAMUX2_RGSTS_OF1                   (1 << 1)    /* OF1 */
#define DMAMUX2_RGSTS_OF0                   (1 << 0)    /* OF0 */

/******** Bit definition for DMAMUX2_RGCLR register  ********/
#define DMAMUX2_RGCLR_COF15                 (1 << 15)   /* COF15 */
#define DMAMUX2_RGCLR_COF14                 (1 << 14)   /* COF14 */
#define DMAMUX2_RGCLR_COF13                 (1 << 13)   /* COF13 */
#define DMAMUX2_RGCLR_COF12                 (1 << 12)   /* COF12 */
#define DMAMUX2_RGCLR_COF11                 (1 << 11)   /* COF11 */
#define DMAMUX2_RGCLR_COF10                 (1 << 10)   /* COF10 */
#define DMAMUX2_RGCLR_COF9                  (1 << 9)    /* COF9 */
#define DMAMUX2_RGCLR_COF8                  (1 << 8)    /* COF8 */
#define DMAMUX2_RGCLR_COF7                  (1 << 7)    /* COF7 */
#define DMAMUX2_RGCLR_COF6                  (1 << 6)    /* COF6 */
#define DMAMUX2_RGCLR_COF5                  (1 << 5)    /* COF5 */
#define DMAMUX2_RGCLR_COF4                  (1 << 4)    /* COF4 */
#define DMAMUX2_RGCLR_COF3                  (1 << 3)    /* COF3 */
#define DMAMUX2_RGCLR_COF2                  (1 << 2)    /* COF2 */
#define DMAMUX2_RGCLR_COF1                  (1 << 1)    /* COF1 */
#define DMAMUX2_RGCLR_COF0                  (1 << 0)    /* COF0 */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DMAMUX2_H */
