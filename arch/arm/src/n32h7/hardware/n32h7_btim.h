/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_btim.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_BTIM_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_BTIM_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_BTIM_TIMx_CTRL1_OFFSET      0x0     /* TIMx_CTRL1 */
#define N32_BTIM_TIMx_CTRL2_OFFSET      0x4     /* TIMx_CTRL2 */
#define N32_BTIM_TIMx_STS_OFFSET        0x8     /* TIMx_STS */
#define N32_BTIM_TIMx_EVTGEN_OFFSET     0xC     /* TIMx_EVTGEN */
#define N32_BTIM_TIMx_DINTEN_OFFSET     0x14    /* TIMx_DINTEN */
#define N32_BTIM_TIMx_PSC_OFFSET        0x40    /* TIMx_PSC */
#define N32_BTIM_TIMx_AR_OFFSET         0x44    /* TIMx_AR */
#define N32_BTIM_TIMx_CNT_OFFSET        0x48    /* TIMx_CNT */

#define N32_BTIM1_TIMx_CTRL1            (N32_BTIM1_BASE + \
                                         N32_BTIM_TIMx_CTRL1_OFFSET)
#define N32_BTIM1_TIMx_CTRL2            (N32_BTIM1_BASE + \
                                         N32_BTIM_TIMx_CTRL2_OFFSET)
#define N32_BTIM1_TIMx_STS              (N32_BTIM1_BASE + \
                                         N32_BTIM_TIMx_STS_OFFSET)
#define N32_BTIM1_TIMx_EVTGEN           (N32_BTIM1_BASE + \
                                         N32_BTIM_TIMx_EVTGEN_OFFSET)
#define N32_BTIM1_TIMx_DINTEN           (N32_BTIM1_BASE + \
                                         N32_BTIM_TIMx_DINTEN_OFFSET)
#define N32_BTIM1_TIMx_PSC              (N32_BTIM1_BASE + \
                                         N32_BTIM_TIMx_PSC_OFFSET)
#define N32_BTIM1_TIMx_AR               (N32_BTIM1_BASE + \
                                         N32_BTIM_TIMx_AR_OFFSET)
#define N32_BTIM1_TIMx_CNT              (N32_BTIM1_BASE + \
                                         N32_BTIM_TIMx_CNT_OFFSET)

#define N32_BTIM2_TIMx_CTRL1            (N32_BTIM2_BASE + \
                                         N32_BTIM_TIMx_CTRL1_OFFSET)
#define N32_BTIM2_TIMx_CTRL2            (N32_BTIM2_BASE + \
                                         N32_BTIM_TIMx_CTRL2_OFFSET)
#define N32_BTIM2_TIMx_STS              (N32_BTIM2_BASE + \
                                         N32_BTIM_TIMx_STS_OFFSET)
#define N32_BTIM2_TIMx_EVTGEN           (N32_BTIM2_BASE + \
                                         N32_BTIM_TIMx_EVTGEN_OFFSET)
#define N32_BTIM2_TIMx_DINTEN           (N32_BTIM2_BASE + \
                                         N32_BTIM_TIMx_DINTEN_OFFSET)
#define N32_BTIM2_TIMx_PSC              (N32_BTIM2_BASE + \
                                         N32_BTIM_TIMx_PSC_OFFSET)
#define N32_BTIM2_TIMx_AR               (N32_BTIM2_BASE + \
                                         N32_BTIM_TIMx_AR_OFFSET)
#define N32_BTIM2_TIMx_CNT              (N32_BTIM2_BASE + \
                                         N32_BTIM_TIMx_CNT_OFFSET)

#define N32_BTIM3_TIMx_CTRL1            (N32_BTIM3_BASE + \
                                         N32_BTIM_TIMx_CTRL1_OFFSET)
#define N32_BTIM3_TIMx_CTRL2            (N32_BTIM3_BASE + \
                                         N32_BTIM_TIMx_CTRL2_OFFSET)
#define N32_BTIM3_TIMx_STS              (N32_BTIM3_BASE + \
                                         N32_BTIM_TIMx_STS_OFFSET)
#define N32_BTIM3_TIMx_EVTGEN           (N32_BTIM3_BASE + \
                                         N32_BTIM_TIMx_EVTGEN_OFFSET)
#define N32_BTIM3_TIMx_DINTEN           (N32_BTIM3_BASE + \
                                         N32_BTIM_TIMx_DINTEN_OFFSET)
#define N32_BTIM3_TIMx_PSC              (N32_BTIM3_BASE + \
                                         N32_BTIM_TIMx_PSC_OFFSET)
#define N32_BTIM3_TIMx_AR               (N32_BTIM3_BASE + \
                                         N32_BTIM_TIMx_AR_OFFSET)
#define N32_BTIM3_TIMx_CNT              (N32_BTIM3_BASE + \
                                         N32_BTIM_TIMx_CNT_OFFSET)

#define N32_BTIM4_TIMx_CTRL1            (N32_BTIM4_BASE + \
                                         N32_BTIM_TIMx_CTRL1_OFFSET)
#define N32_BTIM4_TIMx_CTRL2            (N32_BTIM4_BASE + \
                                         N32_BTIM_TIMx_CTRL2_OFFSET)
#define N32_BTIM4_TIMx_STS              (N32_BTIM4_BASE + \
                                         N32_BTIM_TIMx_STS_OFFSET)
#define N32_BTIM4_TIMx_EVTGEN           (N32_BTIM4_BASE + \
                                         N32_BTIM_TIMx_EVTGEN_OFFSET)
#define N32_BTIM4_TIMx_DINTEN           (N32_BTIM4_BASE + \
                                         N32_BTIM_TIMx_DINTEN_OFFSET)
#define N32_BTIM4_TIMx_PSC              (N32_BTIM4_BASE + \
                                         N32_BTIM_TIMx_PSC_OFFSET)
#define N32_BTIM4_TIMx_AR               (N32_BTIM4_BASE + \
                                         N32_BTIM_TIMx_AR_OFFSET)
#define N32_BTIM4_TIMx_CNT              (N32_BTIM4_BASE + \
                                         N32_BTIM_TIMx_CNT_OFFSET)

/******** Bit definition for TIMx_CTRL1 register  ********/
#define BTIM_TIMx_CTRL1_ARPEN           (1 << 9)    /* ARPEN */
#define BTIM_TIMx_CTRL1_ONEPM           (1 << 8)    /* ONEPM */
#define BTIM_TIMx_CTRL1_UPDIS           (1 << 5)    /* UPDIS */
#define BTIM_TIMx_CTRL1_UPRS            (1 << 4)    /* UPRS */
#define BTIM_TIMx_CTRL1_CNTEN           (1 << 0)    /* CNTEN */

/******** Bit definition for TIMx_CTRL2 register  ********/
#define BTIM_TIMx_CTRL2_MMSEL_SHIFT     (12)
#define BTIM_TIMx_CTRL2_MMSEL_MASK      (0xF << BTIM_TIMx_CTRL2_MMSEL_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * MMSEL
                                                                              */

/******** Bit definition for TIMx_STS register  ********/
#define BTIM_TIMx_STS_UDITF             (1 << 16) /* UDITF */

/******** Bit definition for TIMx_EVTGEN register  ********/
#define BTIM_TIMx_EVTGEN_UDGN           (1 << 8) /* UDGN */

/******** Bit definition for TIMx_DINTEN register  ********/
#define BTIM_TIMx_DINTEN_UDEN           (1 << 19)   /* UDEN */
#define BTIM_TIMx_DINTEN_UIEN           (1 << 16)   /* UIEN */

/******** Bit definition for TIMx_PSC register  ********/
#define BTIM_TIMx_PSC_PSC_SHIFT         (0)
#define BTIM_TIMx_PSC_PSC_MASK          (0xFFFF << BTIM_TIMx_PSC_PSC_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * PSC
                                                                             */

/******** Bit definition for TIMx_AR register  ********/
#define BTIM_TIMx_AR_AR_SHIFT           (0)
#define BTIM_TIMx_AR_AR_MASK            (0xFFFFFFFF << BTIM_TIMx_AR_AR_SHIFT) /*
                                                                               *
                                                                               *
                                                                               *
                                                                               *
                                                                               * AR
                                                                               */

/******** Bit definition for TIMx_CNT register  ********/
#define BTIM_TIMx_CNT_CNT_SHIFT         (0)
#define BTIM_TIMx_CNT_CNT_MASK          (0xFFFFFFFF << \
                                         BTIM_TIMx_CNT_CNT_SHIFT)      /* CNT
                                                                        */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_BTIM_H */
