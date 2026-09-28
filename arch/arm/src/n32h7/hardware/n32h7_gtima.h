/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_gtima.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_GTIMA_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_GTIMA_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_GTIMA_TIMx_CTRL1_OFFSET         0x0     /* TIMx_CTRL1 */
#define N32_GTIMA_TIMx_CTRL2_OFFSET         0x4     /* TIMx_CTRL2 */
#define N32_GTIMA_TIMx_STS_OFFSET           0x8     /* TIMx_STS */
#define N32_GTIMA_TIMx_EVTGEN_OFFSET        0xC     /* TIMx_EVTGEN */
#define N32_GTIMA_TIMx_SMCTRL_OFFSET        0x10    /* TIMx_SMCTRL */
#define N32_GTIMA_TIMx_DINTEN_OFFSET        0x14    /* TIMx_DINTEN */
#define N32_GTIMA_TIMx_CCMOD1_OFFSET        0x18    /* TIMx_CCMOD1 */
#define N32_GTIMA_TIMx_CCMOD2_OFFSET        0x1C    /* TIMx_CCMOD2 */
#define N32_GTIMA_TIMx_CCEN_OFFSET          0x24    /* TIMx_CCEN */
#define N32_GTIMA_TIMx_CCDAT1_OFFSET        0x28    /* TIMx_CCDAT1 */
#define N32_GTIMA_TIMx_CCDAT2_OFFSET        0x2C    /* TIMx_CCDAT2 */
#define N32_GTIMA_TIMx_CCDAT3_OFFSET        0x30    /* TIMx_CCDAT3 */
#define N32_GTIMA_TIMx_CCDAT4_OFFSET        0x34    /* TIMx_CCDAT4 */
#define N32_GTIMA_TIMx_PSC_OFFSET           0x40    /* TIMx_PSC */
#define N32_GTIMA_TIMx_AR_OFFSET            0x44    /* TIMx_AR */
#define N32_GTIMA_TIMx_CNT_OFFSET           0x48    /* TIMx_CNT */
#define N32_GTIMA_TIMx_C1FILT_OFFSET        0x64    /* TIMx_C1FILT */
#define N32_GTIMA_TIMx_C2FILT_OFFSET        0x68    /* TIMx_C2FILT */
#define N32_GTIMA_TIMx_C3FILT_OFFSET        0x6C    /* TIMx_C3FILT */
#define N32_GTIMA_TIMx_C4FILT_OFFSET        0x70    /* TIMx_C4FILT */
#define N32_GTIMA_TIMx_FILTO_OFFSET         0x74    /* TIMx_FILTO */
#define N32_GTIMA_TIMx_INSEL_OFFSET         0x78    /* TIMx_INSEL */
#define N32_GTIMA_TIMx_DCTRL_OFFSET         0x94    /* TIMx_DCTRL */
#define N32_GTIMA_TIMx_DADDR_OFFSET         0x98    /* TIMx_DADDR */

#define N32_GTIMA1_TIMx_CTRL1               (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_CTRL1_OFFSET)
#define N32_GTIMA1_TIMx_CTRL2               (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_CTRL2_OFFSET)
#define N32_GTIMA1_TIMx_STS                 (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_STS_OFFSET)
#define N32_GTIMA1_TIMx_EVTGEN              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_EVTGEN_OFFSET)
#define N32_GTIMA1_TIMx_SMCTRL              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_SMCTRL_OFFSET)
#define N32_GTIMA1_TIMx_DINTEN              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_DINTEN_OFFSET)
#define N32_GTIMA1_TIMx_CCMOD1              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_CCMOD1_OFFSET)
#define N32_GTIMA1_TIMx_CCMOD2              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_CCMOD2_OFFSET)
#define N32_GTIMA1_TIMx_CCEN                (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_CCEN_OFFSET)
#define N32_GTIMA1_TIMx_CCDAT1              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_CCDAT1_OFFSET)
#define N32_GTIMA1_TIMx_CCDAT2              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_CCDAT2_OFFSET)
#define N32_GTIMA1_TIMx_CCDAT3              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_CCDAT3_OFFSET)
#define N32_GTIMA1_TIMx_CCDAT4              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_CCDAT4_OFFSET)
#define N32_GTIMA1_TIMx_PSC                 (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_PSC_OFFSET)
#define N32_GTIMA1_TIMx_AR                  (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_AR_OFFSET)
#define N32_GTIMA1_TIMx_CNT                 (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_CNT_OFFSET)
#define N32_GTIMA1_TIMx_C1FILT              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_C1FILT_OFFSET)
#define N32_GTIMA1_TIMx_C2FILT              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_C2FILT_OFFSET)
#define N32_GTIMA1_TIMx_C3FILT              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_C3FILT_OFFSET)
#define N32_GTIMA1_TIMx_C4FILT              (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_C4FILT_OFFSET)
#define N32_GTIMA1_TIMx_FILTO               (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_FILTO_OFFSET)
#define N32_GTIMA1_TIMx_INSEL               (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_INSEL_OFFSET)
#define N32_GTIMA1_TIMx_DCTRL               (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_DCTRL_OFFSET)
#define N32_GTIMA1_TIMx_DADDR               (N32_GTIMA1_BASE + \
                                             N32_GTIMA_TIMx_DADDR_OFFSET)

#define N32_GTIMA2_TIMx_CTRL1               (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_CTRL1_OFFSET)
#define N32_GTIMA2_TIMx_CTRL2               (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_CTRL2_OFFSET)
#define N32_GTIMA2_TIMx_STS                 (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_STS_OFFSET)
#define N32_GTIMA2_TIMx_EVTGEN              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_EVTGEN_OFFSET)
#define N32_GTIMA2_TIMx_SMCTRL              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_SMCTRL_OFFSET)
#define N32_GTIMA2_TIMx_DINTEN              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_DINTEN_OFFSET)
#define N32_GTIMA2_TIMx_CCMOD1              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_CCMOD1_OFFSET)
#define N32_GTIMA2_TIMx_CCMOD2              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_CCMOD2_OFFSET)
#define N32_GTIMA2_TIMx_CCEN                (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_CCEN_OFFSET)
#define N32_GTIMA2_TIMx_CCDAT1              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_CCDAT1_OFFSET)
#define N32_GTIMA2_TIMx_CCDAT2              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_CCDAT2_OFFSET)
#define N32_GTIMA2_TIMx_CCDAT3              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_CCDAT3_OFFSET)
#define N32_GTIMA2_TIMx_CCDAT4              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_CCDAT4_OFFSET)
#define N32_GTIMA2_TIMx_PSC                 (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_PSC_OFFSET)
#define N32_GTIMA2_TIMx_AR                  (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_AR_OFFSET)
#define N32_GTIMA2_TIMx_CNT                 (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_CNT_OFFSET)
#define N32_GTIMA2_TIMx_C1FILT              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_C1FILT_OFFSET)
#define N32_GTIMA2_TIMx_C2FILT              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_C2FILT_OFFSET)
#define N32_GTIMA2_TIMx_C3FILT              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_C3FILT_OFFSET)
#define N32_GTIMA2_TIMx_C4FILT              (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_C4FILT_OFFSET)
#define N32_GTIMA2_TIMx_FILTO               (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_FILTO_OFFSET)
#define N32_GTIMA2_TIMx_INSEL               (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_INSEL_OFFSET)
#define N32_GTIMA2_TIMx_DCTRL               (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_DCTRL_OFFSET)
#define N32_GTIMA2_TIMx_DADDR               (N32_GTIMA2_BASE + \
                                             N32_GTIMA_TIMx_DADDR_OFFSET)

#define N32_GTIMA3_TIMx_CTRL1               (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_CTRL1_OFFSET)
#define N32_GTIMA3_TIMx_CTRL2               (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_CTRL2_OFFSET)
#define N32_GTIMA3_TIMx_STS                 (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_STS_OFFSET)
#define N32_GTIMA3_TIMx_EVTGEN              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_EVTGEN_OFFSET)
#define N32_GTIMA3_TIMx_SMCTRL              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_SMCTRL_OFFSET)
#define N32_GTIMA3_TIMx_DINTEN              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_DINTEN_OFFSET)
#define N32_GTIMA3_TIMx_CCMOD1              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_CCMOD1_OFFSET)
#define N32_GTIMA3_TIMx_CCMOD2              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_CCMOD2_OFFSET)
#define N32_GTIMA3_TIMx_CCEN                (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_CCEN_OFFSET)
#define N32_GTIMA3_TIMx_CCDAT1              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_CCDAT1_OFFSET)
#define N32_GTIMA3_TIMx_CCDAT2              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_CCDAT2_OFFSET)
#define N32_GTIMA3_TIMx_CCDAT3              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_CCDAT3_OFFSET)
#define N32_GTIMA3_TIMx_CCDAT4              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_CCDAT4_OFFSET)
#define N32_GTIMA3_TIMx_PSC                 (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_PSC_OFFSET)
#define N32_GTIMA3_TIMx_AR                  (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_AR_OFFSET)
#define N32_GTIMA3_TIMx_CNT                 (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_CNT_OFFSET)
#define N32_GTIMA3_TIMx_C1FILT              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_C1FILT_OFFSET)
#define N32_GTIMA3_TIMx_C2FILT              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_C2FILT_OFFSET)
#define N32_GTIMA3_TIMx_C3FILT              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_C3FILT_OFFSET)
#define N32_GTIMA3_TIMx_C4FILT              (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_C4FILT_OFFSET)
#define N32_GTIMA3_TIMx_FILTO               (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_FILTO_OFFSET)
#define N32_GTIMA3_TIMx_INSEL               (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_INSEL_OFFSET)
#define N32_GTIMA3_TIMx_DCTRL               (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_DCTRL_OFFSET)
#define N32_GTIMA3_TIMx_DADDR               (N32_GTIMA3_BASE + \
                                             N32_GTIMA_TIMx_DADDR_OFFSET)

#define N32_GTIMA4_TIMx_CTRL1               (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_CTRL1_OFFSET)
#define N32_GTIMA4_TIMx_CTRL2               (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_CTRL2_OFFSET)
#define N32_GTIMA4_TIMx_STS                 (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_STS_OFFSET)
#define N32_GTIMA4_TIMx_EVTGEN              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_EVTGEN_OFFSET)
#define N32_GTIMA4_TIMx_SMCTRL              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_SMCTRL_OFFSET)
#define N32_GTIMA4_TIMx_DINTEN              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_DINTEN_OFFSET)
#define N32_GTIMA4_TIMx_CCMOD1              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_CCMOD1_OFFSET)
#define N32_GTIMA4_TIMx_CCMOD2              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_CCMOD2_OFFSET)
#define N32_GTIMA4_TIMx_CCEN                (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_CCEN_OFFSET)
#define N32_GTIMA4_TIMx_CCDAT1              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_CCDAT1_OFFSET)
#define N32_GTIMA4_TIMx_CCDAT2              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_CCDAT2_OFFSET)
#define N32_GTIMA4_TIMx_CCDAT3              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_CCDAT3_OFFSET)
#define N32_GTIMA4_TIMx_CCDAT4              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_CCDAT4_OFFSET)
#define N32_GTIMA4_TIMx_PSC                 (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_PSC_OFFSET)
#define N32_GTIMA4_TIMx_AR                  (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_AR_OFFSET)
#define N32_GTIMA4_TIMx_CNT                 (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_CNT_OFFSET)
#define N32_GTIMA4_TIMx_C1FILT              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_C1FILT_OFFSET)
#define N32_GTIMA4_TIMx_C2FILT              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_C2FILT_OFFSET)
#define N32_GTIMA4_TIMx_C3FILT              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_C3FILT_OFFSET)
#define N32_GTIMA4_TIMx_C4FILT              (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_C4FILT_OFFSET)
#define N32_GTIMA4_TIMx_FILTO               (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_FILTO_OFFSET)
#define N32_GTIMA4_TIMx_INSEL               (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_INSEL_OFFSET)
#define N32_GTIMA4_TIMx_DCTRL               (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_DCTRL_OFFSET)
#define N32_GTIMA4_TIMx_DADDR               (N32_GTIMA4_BASE + \
                                             N32_GTIMA_TIMx_DADDR_OFFSET)

#define N32_GTIMA5_TIMx_CTRL1               (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_CTRL1_OFFSET)
#define N32_GTIMA5_TIMx_CTRL2               (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_CTRL2_OFFSET)
#define N32_GTIMA5_TIMx_STS                 (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_STS_OFFSET)
#define N32_GTIMA5_TIMx_EVTGEN              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_EVTGEN_OFFSET)
#define N32_GTIMA5_TIMx_SMCTRL              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_SMCTRL_OFFSET)
#define N32_GTIMA5_TIMx_DINTEN              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_DINTEN_OFFSET)
#define N32_GTIMA5_TIMx_CCMOD1              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_CCMOD1_OFFSET)
#define N32_GTIMA5_TIMx_CCMOD2              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_CCMOD2_OFFSET)
#define N32_GTIMA5_TIMx_CCEN                (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_CCEN_OFFSET)
#define N32_GTIMA5_TIMx_CCDAT1              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_CCDAT1_OFFSET)
#define N32_GTIMA5_TIMx_CCDAT2              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_CCDAT2_OFFSET)
#define N32_GTIMA5_TIMx_CCDAT3              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_CCDAT3_OFFSET)
#define N32_GTIMA5_TIMx_CCDAT4              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_CCDAT4_OFFSET)
#define N32_GTIMA5_TIMx_PSC                 (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_PSC_OFFSET)
#define N32_GTIMA5_TIMx_AR                  (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_AR_OFFSET)
#define N32_GTIMA5_TIMx_CNT                 (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_CNT_OFFSET)
#define N32_GTIMA5_TIMx_C1FILT              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_C1FILT_OFFSET)
#define N32_GTIMA5_TIMx_C2FILT              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_C2FILT_OFFSET)
#define N32_GTIMA5_TIMx_C3FILT              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_C3FILT_OFFSET)
#define N32_GTIMA5_TIMx_C4FILT              (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_C4FILT_OFFSET)
#define N32_GTIMA5_TIMx_FILTO               (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_FILTO_OFFSET)
#define N32_GTIMA5_TIMx_INSEL               (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_INSEL_OFFSET)
#define N32_GTIMA5_TIMx_DCTRL               (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_DCTRL_OFFSET)
#define N32_GTIMA5_TIMx_DADDR               (N32_GTIMA5_BASE + \
                                             N32_GTIMA_TIMx_DADDR_OFFSET)

#define N32_GTIMA6_TIMx_CTRL1               (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_CTRL1_OFFSET)
#define N32_GTIMA6_TIMx_CTRL2               (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_CTRL2_OFFSET)
#define N32_GTIMA6_TIMx_STS                 (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_STS_OFFSET)
#define N32_GTIMA6_TIMx_EVTGEN              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_EVTGEN_OFFSET)
#define N32_GTIMA6_TIMx_SMCTRL              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_SMCTRL_OFFSET)
#define N32_GTIMA6_TIMx_DINTEN              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_DINTEN_OFFSET)
#define N32_GTIMA6_TIMx_CCMOD1              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_CCMOD1_OFFSET)
#define N32_GTIMA6_TIMx_CCMOD2              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_CCMOD2_OFFSET)
#define N32_GTIMA6_TIMx_CCEN                (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_CCEN_OFFSET)
#define N32_GTIMA6_TIMx_CCDAT1              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_CCDAT1_OFFSET)
#define N32_GTIMA6_TIMx_CCDAT2              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_CCDAT2_OFFSET)
#define N32_GTIMA6_TIMx_CCDAT3              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_CCDAT3_OFFSET)
#define N32_GTIMA6_TIMx_CCDAT4              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_CCDAT4_OFFSET)
#define N32_GTIMA6_TIMx_PSC                 (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_PSC_OFFSET)
#define N32_GTIMA6_TIMx_AR                  (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_AR_OFFSET)
#define N32_GTIMA6_TIMx_CNT                 (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_CNT_OFFSET)
#define N32_GTIMA6_TIMx_C1FILT              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_C1FILT_OFFSET)
#define N32_GTIMA6_TIMx_C2FILT              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_C2FILT_OFFSET)
#define N32_GTIMA6_TIMx_C3FILT              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_C3FILT_OFFSET)
#define N32_GTIMA6_TIMx_C4FILT              (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_C4FILT_OFFSET)
#define N32_GTIMA6_TIMx_FILTO               (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_FILTO_OFFSET)
#define N32_GTIMA6_TIMx_INSEL               (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_INSEL_OFFSET)
#define N32_GTIMA6_TIMx_DCTRL               (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_DCTRL_OFFSET)
#define N32_GTIMA6_TIMx_DADDR               (N32_GTIMA6_BASE + \
                                             N32_GTIMA_TIMx_DADDR_OFFSET)

#define N32_GTIMA7_TIMx_CTRL1               (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_CTRL1_OFFSET)
#define N32_GTIMA7_TIMx_CTRL2               (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_CTRL2_OFFSET)
#define N32_GTIMA7_TIMx_STS                 (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_STS_OFFSET)
#define N32_GTIMA7_TIMx_EVTGEN              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_EVTGEN_OFFSET)
#define N32_GTIMA7_TIMx_SMCTRL              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_SMCTRL_OFFSET)
#define N32_GTIMA7_TIMx_DINTEN              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_DINTEN_OFFSET)
#define N32_GTIMA7_TIMx_CCMOD1              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_CCMOD1_OFFSET)
#define N32_GTIMA7_TIMx_CCMOD2              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_CCMOD2_OFFSET)
#define N32_GTIMA7_TIMx_CCEN                (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_CCEN_OFFSET)
#define N32_GTIMA7_TIMx_CCDAT1              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_CCDAT1_OFFSET)
#define N32_GTIMA7_TIMx_CCDAT2              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_CCDAT2_OFFSET)
#define N32_GTIMA7_TIMx_CCDAT3              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_CCDAT3_OFFSET)
#define N32_GTIMA7_TIMx_CCDAT4              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_CCDAT4_OFFSET)
#define N32_GTIMA7_TIMx_PSC                 (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_PSC_OFFSET)
#define N32_GTIMA7_TIMx_AR                  (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_AR_OFFSET)
#define N32_GTIMA7_TIMx_CNT                 (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_CNT_OFFSET)
#define N32_GTIMA7_TIMx_C1FILT              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_C1FILT_OFFSET)
#define N32_GTIMA7_TIMx_C2FILT              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_C2FILT_OFFSET)
#define N32_GTIMA7_TIMx_C3FILT              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_C3FILT_OFFSET)
#define N32_GTIMA7_TIMx_C4FILT              (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_C4FILT_OFFSET)
#define N32_GTIMA7_TIMx_FILTO               (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_FILTO_OFFSET)
#define N32_GTIMA7_TIMx_INSEL               (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_INSEL_OFFSET)
#define N32_GTIMA7_TIMx_DCTRL               (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_DCTRL_OFFSET)
#define N32_GTIMA7_TIMx_DADDR               (N32_GTIMA7_BASE + \
                                             N32_GTIMA_TIMx_DADDR_OFFSET)

/******** Bit definition for TIMx_CTRL1 register  ********/
#define GTIMA_TIMx_CTRL1_C4SEL              (1 << 19)   /* C4SEL */
#define GTIMA_TIMx_CTRL1_C3SEL              (1 << 18)   /* C3SEL */
#define GTIMA_TIMx_CTRL1_C2SEL              (1 << 17)   /* C2SEL */
#define GTIMA_TIMx_CTRL1_C1SEL              (1 << 16)   /* C1SEL */
#define GTIMA_TIMx_CTRL1_CLRSEL             (1 << 13)   /* CLRSEL */
#define GTIMA_TIMx_CTRL1_ARPEN              (1 << 9)    /* ARPEN */
#define GTIMA_TIMx_CTRL1_ONEPM              (1 << 8)    /* ONEPM */
#define GTIMA_TIMx_CTRL1_CLKD_SHIFT         (6)
#define GTIMA_TIMx_CTRL1_CLKD_MASK          (0x3 << \
                                             GTIMA_TIMx_CTRL1_CLKD_SHIFT)   /*
                                                                             * CLKD
                                                                             */
#define GTIMA_TIMx_CTRL1_UPDIS              (1 << 5)                        /*
                                                                             * UPDIS
                                                                             */
#define GTIMA_TIMx_CTRL1_UPRS               (1 << 4)                        /*
                                                                             * UPRS
                                                                             */
#define GTIMA_TIMx_CTRL1_CAMSEL_SHIFT       (2)
#define GTIMA_TIMx_CTRL1_CAMSEL_MASK        (0x3 << \
                                             GTIMA_TIMx_CTRL1_CAMSEL_SHIFT) /*
                                                                             * CAMSEL
                                                                             */
#define GTIMA_TIMx_CTRL1_DIR                (1 << 1)                        /*
                                                                             * DIR
                                                                             */
#define GTIMA_TIMx_CTRL1_CNTEN              (1 << 0)                        /*
                                                                             * CNTEN
                                                                             */

/******** Bit definition for TIMx_CTRL2 register  ********/
#define GTIMA_TIMx_CTRL2_TI1SEL             (1 << 19)   /* TI1SEL */
#define GTIMA_TIMx_CTRL2_CCDSEL             (1 << 17)   /* CCDSEL */
#define GTIMA_TIMx_CTRL2_MMSEL_SHIFT        (12)
#define GTIMA_TIMx_CTRL2_MMSEL_MASK         (0xF << \
                                             GTIMA_TIMx_CTRL2_MMSEL_SHIFT) /*
                                                                            * MMSEL
                                                                            */

/******** Bit definition for TIMx_STS register  ********/
#define GTIMA_TIMx_STS_TITF                 (1 << 18)   /* TITF */
#define GTIMA_TIMx_STS_UDITF                (1 << 16)   /* UDITF */
#define GTIMA_TIMx_STS_CC4OCF               (1 << 11)   /* CC4OCF */
#define GTIMA_TIMx_STS_CC3OCF               (1 << 10)   /* CC3OCF */
#define GTIMA_TIMx_STS_CC2OCF               (1 << 9)    /* CC2OCF */
#define GTIMA_TIMx_STS_CC1OCF               (1 << 8)    /* CC1OCF */
#define GTIMA_TIMx_STS_CC4ITF               (1 << 3)    /* CC4ITF */
#define GTIMA_TIMx_STS_CC3ITF               (1 << 2)    /* CC3ITF */
#define GTIMA_TIMx_STS_CC2ITF               (1 << 1)    /* CC2ITF */
#define GTIMA_TIMx_STS_CC1ITF               (1 << 0)    /* CC1ITF */

/******** Bit definition for TIMx_EVTGEN register  ********/
#define GTIMA_TIMx_EVTGEN_TGN               (1 << 10)   /* TGN */
#define GTIMA_TIMx_EVTGEN_UDGN              (1 << 8)    /* UDGN */
#define GTIMA_TIMx_EVTGEN_CC4GN             (1 << 3)    /* CC4GN */
#define GTIMA_TIMx_EVTGEN_CC3GN             (1 << 2)    /* CC3GN */
#define GTIMA_TIMx_EVTGEN_CC2GN             (1 << 1)    /* CC2GN */
#define GTIMA_TIMx_EVTGEN_CC1GN             (1 << 0)    /* CC1GN */

/******** Bit definition for TIMx_SMCTRL register  ********/
#define GTIMA_TIMx_SMCTRL_OCREFCLRF_SHIFT   (20)
#define GTIMA_TIMx_SMCTRL_OCREFCLRF_MASK    (0xF <<                             \
                                             GTIMA_TIMx_SMCTRL_OCREFCLRF_SHIFT) \
                                                        /* OCREFCLRF */
#define GTIMA_TIMx_SMCTRL_OCREFCLRP         (1 << 19)   /* OCREFCLRP */
#define GTIMA_TIMx_SMCTRL_MSMD              (1 << 16)   /* MSMD */
#define GTIMA_TIMx_SMCTRL_EXTF_SHIFT        (12)
#define GTIMA_TIMx_SMCTRL_EXTF_MASK         (0xF << \
                                             GTIMA_TIMx_SMCTRL_EXTF_SHIFT)  /*
                                                                             * EXTF
                                                                             */
#define GTIMA_TIMx_SMCTRL_EXTP              (1 << 11)                       /*
                                                                             * EXTP
                                                                             */
#define GTIMA_TIMx_SMCTRL_EXCEN             (1 << 10)                       /*
                                                                             * EXCEN
                                                                             */
#define GTIMA_TIMx_SMCTRL_EXTPS_SHIFT       (8)
#define GTIMA_TIMx_SMCTRL_EXTPS_MASK        (0x3 << \
                                             GTIMA_TIMx_SMCTRL_EXTPS_SHIFT) /*
                                                                             *
                                                                             * EXTPS
                                                                             */
#define GTIMA_TIMx_SMCTRL_SMSEL_SHIFT       (4)
#define GTIMA_TIMx_SMCTRL_SMSEL_MASK        (0xF << \
                                             GTIMA_TIMx_SMCTRL_SMSEL_SHIFT) /*
                                                                             *
                                                                             * SMSEL
                                                                             */
#define GTIMA_TIMx_SMCTRL_TSEL_SHIFT        (0)
#define GTIMA_TIMx_SMCTRL_TSEL_MASK         (0x7 << \
                                             GTIMA_TIMx_SMCTRL_TSEL_SHIFT) /*
                                                                            * TSEL
                                                                            */

/******** Bit definition for TIMx_DINTEN register  ********/
#define GTIMA_TIMx_DINTEN_TDEN              (1 << 21)   /* TDEN */
#define GTIMA_TIMx_DINTEN_UDEN              (1 << 19)   /* UDEN */
#define GTIMA_TIMx_DINTEN_TIEN              (1 << 17)   /* TIEN */
#define GTIMA_TIMx_DINTEN_UIEN              (1 << 16)   /* UIEN */
#define GTIMA_TIMx_DINTEN_CC4DEN            (1 << 11)   /* CC4DEN */
#define GTIMA_TIMx_DINTEN_CC3DEN            (1 << 10)   /* CC3DEN */
#define GTIMA_TIMx_DINTEN_CC2DEN            (1 << 9)    /* CC2DEN */
#define GTIMA_TIMx_DINTEN_CC1DEN            (1 << 8)    /* CC1DEN */
#define GTIMA_TIMx_DINTEN_CC4IEN            (1 << 3)    /* CC4IEN */
#define GTIMA_TIMx_DINTEN_CC3IEN            (1 << 2)    /* CC3IEN */
#define GTIMA_TIMx_DINTEN_CC2IEN            (1 << 1)    /* CC2IEN */
#define GTIMA_TIMx_DINTEN_CC1IEN            (1 << 0)    /* CC1IEN */

/******** Bit definition for TIMx_CCMOD1 register  ********/
#define GTIMA_TIMx_CCMOD1_OC2MD_SHIFT       (13)
#define GTIMA_TIMx_CCMOD1_OC2MD_MASK        (0x7 << \
                                             GTIMA_TIMx_CCMOD1_OC2MD_SHIFT) /*
                                                                             * OC2MD
                                                                             */
#define GTIMA_TIMx_CCMOD1_OC2CEN            (1 << 12)                       /*
                                                                             * OC2CEN
                                                                             */
#define GTIMA_TIMx_CCMOD1_OC2FEN            (1 << 11)                       /*
                                                                             * OC2FEN
                                                                             */
#define GTIMA_TIMx_CCMOD1_OC2PEN            (1 << 10)                       /*
                                                                             * OC2PEN
                                                                             */
#define GTIMA_TIMx_CCMOD1_CC2SEL_SHIFT      (8)
#define GTIMA_TIMx_CCMOD1_CC2SEL_MASK       (0x3 << \
                                             GTIMA_TIMx_CCMOD1_CC2SEL_SHIFT)  /*
                                                                               *
                                                                               * CC2SEL
                                                                               */
#define GTIMA_TIMx_CCMOD1_OC1MD_SHIFT       (5)
#define GTIMA_TIMx_CCMOD1_OC1MD_MASK        (0x7 << \
                                             GTIMA_TIMx_CCMOD1_OC1MD_SHIFT) /*
                                                                             * OC1MD
                                                                             */
#define GTIMA_TIMx_CCMOD1_OC1CEN            (1 << 4)                        /*
                                                                             * OC1CEN
                                                                             */
#define GTIMA_TIMx_CCMOD1_OC1FEN            (1 << 3)                        /*
                                                                             * OC1FEN
                                                                             */
#define GTIMA_TIMx_CCMOD1_OC1PEN            (1 << 2)                        /*
                                                                             * OC1PEN
                                                                             */
#define GTIMA_TIMx_CCMOD1_CC1SEL_SHIFT      (0)
#define GTIMA_TIMx_CCMOD1_CC1SEL_MASK       (0x3 << \
                                             GTIMA_TIMx_CCMOD1_CC1SEL_SHIFT)  /*
                                                                               *
                                                                               * CC1SEL
                                                                               */

/******** Bit definition for TIMx_CCMOD2 register  ********/
#define GTIMA_TIMx_CCMOD2_OC4MD_SHIFT       (13)
#define GTIMA_TIMx_CCMOD2_OC4MD_MASK        (0x7 << \
                                             GTIMA_TIMx_CCMOD2_OC4MD_SHIFT) /*
                                                                             * OC4MD
                                                                             */
#define GTIMA_TIMx_CCMOD2_OC4CEN            (1 << 12)                       /*
                                                                             * OC4CEN
                                                                             */
#define GTIMA_TIMx_CCMOD2_OC4FEN            (1 << 11)                       /*
                                                                             * OC4FEN
                                                                             */
#define GTIMA_TIMx_CCMOD2_OC4PEN            (1 << 10)                       /*
                                                                             * OC4PEN
                                                                             */
#define GTIMA_TIMx_CCMOD2_CC4SEL_SHIFT      (8)
#define GTIMA_TIMx_CCMOD2_CC4SEL_MASK       (0x3 << \
                                             GTIMA_TIMx_CCMOD2_CC4SEL_SHIFT)  /*
                                                                               *
                                                                               * CC4SEL
                                                                               */
#define GTIMA_TIMx_CCMOD2_OC3MD_SHIFT       (5)
#define GTIMA_TIMx_CCMOD2_OC3MD_MASK        (0x7 << \
                                             GTIMA_TIMx_CCMOD2_OC3MD_SHIFT) /*
                                                                             * OC3MD
                                                                             */
#define GTIMA_TIMx_CCMOD2_OC3CEN            (1 << 4)                        /*
                                                                             * OC3CEN
                                                                             */
#define GTIMA_TIMx_CCMOD2_OC3FEN            (1 << 3)                        /*
                                                                             * OC3FEN
                                                                             */
#define GTIMA_TIMx_CCMOD2_OC3PEN            (1 << 2)                        /*
                                                                             * OC3PEN
                                                                             */
#define GTIMA_TIMx_CCMOD2_CC3SEL_SHIFT      (0)
#define GTIMA_TIMx_CCMOD2_CC3SEL_MASK       (0x3 << \
                                             GTIMA_TIMx_CCMOD2_CC3SEL_SHIFT)  /*
                                                                               *
                                                                               * CC3SEL
                                                                               */

/******** Bit definition for TIMx_CCEN register  ********/
#define GTIMA_TIMx_CCEN_CC4P                (1 << 15)   /* CC4P */
#define GTIMA_TIMx_CCEN_CC4EN               (1 << 14)   /* CC4EN */
#define GTIMA_TIMx_CCEN_CC3P                (1 << 11)   /* CC3P */
#define GTIMA_TIMx_CCEN_CC3EN               (1 << 10)   /* CC3EN */
#define GTIMA_TIMx_CCEN_CC2P                (1 << 7)    /* CC2P */
#define GTIMA_TIMx_CCEN_CC2EN               (1 << 6)    /* CC2EN */
#define GTIMA_TIMx_CCEN_CC1P                (1 << 3)    /* CC1P */
#define GTIMA_TIMx_CCEN_CC1EN               (1 << 2)    /* CC1EN */

/******** Bit definition for TIMx_CCDAT1 register  ********/
#define GTIMA_TIMx_CCDAT1_CCDAT1_SHIFT      (0)
#define GTIMA_TIMx_CCDAT1_CCDAT1_MASK       (0xFFFF << \
                                             GTIMA_TIMx_CCDAT1_CCDAT1_SHIFT)     /*
                                                                                  *
                                                                                  * CCDAT1
                                                                                  */

/******** Bit definition for TIMx_CCDAT2 register  ********/
#define GTIMA_TIMx_CCDAT2_CCDAT2_SHIFT      (0)
#define GTIMA_TIMx_CCDAT2_CCDAT2_MASK       (0xFFFF << \
                                             GTIMA_TIMx_CCDAT2_CCDAT2_SHIFT)     /*
                                                                                  *
                                                                                  * CCDAT2
                                                                                  */

/******** Bit definition for TIMx_CCDAT3 register  ********/
#define GTIMA_TIMx_CCDAT3_CCDAT3_SHIFT      (0)
#define GTIMA_TIMx_CCDAT3_CCDAT3_MASK       (0xFFFF << \
                                             GTIMA_TIMx_CCDAT3_CCDAT3_SHIFT)     /*
                                                                                  *
                                                                                  * CCDAT3
                                                                                  */

/******** Bit definition for TIMx_CCDAT4 register  ********/
#define GTIMA_TIMx_CCDAT4_CCDAT4_SHIFT      (0)
#define GTIMA_TIMx_CCDAT4_CCDAT4_MASK       (0xFFFF << \
                                             GTIMA_TIMx_CCDAT4_CCDAT4_SHIFT)     /*
                                                                                  *
                                                                                  * CCDAT4
                                                                                  */

/******** Bit definition for TIMx_PSC register  ********/
#define GTIMA_TIMx_PSC_PSC_SHIFT            (0)
#define GTIMA_TIMx_PSC_PSC_MASK             (0xFFFF << \
                                             GTIMA_TIMx_PSC_PSC_SHIFT) /* PSC
                                                                        */

/******** Bit definition for TIMx_AR register  ********/
#define GTIMA_TIMx_AR_AR_SHIFT              (0)
#define GTIMA_TIMx_AR_AR_MASK               (0xFFFF << GTIMA_TIMx_AR_AR_SHIFT) /*
                                                                                *
                                                                                * AR
                                                                                */

/******** Bit definition for TIMx_CNT register  ********/
#define GTIMA_TIMx_CNT_CNT_SHIFT            (0)
#define GTIMA_TIMx_CNT_CNT_MASK             (0xFFFF << \
                                             GTIMA_TIMx_CNT_CNT_SHIFT) /* CNT
                                                                        */

/******** Bit definition for TIMx_C1FILT register  ********/
#define GTIMA_TIMx_C1FILT_THRESH_SHIFT      (24)
#define GTIMA_TIMx_C1FILT_THRESH_MASK       (0x3F << \
                                             GTIMA_TIMx_C1FILT_THRESH_SHIFT)   /*
                                                                                *
                                                                                * THRESH
                                                                                */
#define GTIMA_TIMx_C1FILT_WSIZE_SHIFT       (17)
#define GTIMA_TIMx_C1FILT_WSIZE_MASK        (0x3F << \
                                             GTIMA_TIMx_C1FILT_WSIZE_SHIFT) /*
                                                                             * WSIZE
                                                                             */
#define GTIMA_TIMx_C1FILT_FILTEN            (1 << 16)                       /*
                                                                             * FILTEN
                                                                             */
#define GTIMA_TIMx_C1FILT_SLIDFPSC__SHIFT   (0)
#define GTIMA_TIMx_C1FILT_SLIDFPSC__MASK    (0xFFFF <<                          \
                                             GTIMA_TIMx_C1FILT_SLIDFPSC__SHIFT) \
        /*
         * SLIDFPSC
         */

/******** Bit definition for TIMx_C2FILT register  ********/
#define GTIMA_TIMx_C2FILT_THRESH_SHIFT      (24)
#define GTIMA_TIMx_C2FILT_THRESH_MASK       (0x3F << \
                                             GTIMA_TIMx_C2FILT_THRESH_SHIFT)   /*
                                                                                *
                                                                                * THRESH
                                                                                */
#define GTIMA_TIMx_C2FILT_WSIZE_SHIFT       (17)
#define GTIMA_TIMx_C2FILT_WSIZE_MASK        (0x3F << \
                                             GTIMA_TIMx_C2FILT_WSIZE_SHIFT) /*
                                                                             * WSIZE
                                                                             */
#define GTIMA_TIMx_C2FILT_FILTEN            (1 << 16)                       /*
                                                                             * FILTEN
                                                                             */
#define GTIMA_TIMx_C2FILT_SLIDFPSC__SHIFT   (0)
#define GTIMA_TIMx_C2FILT_SLIDFPSC__MASK    (0xFFFF <<                          \
                                             GTIMA_TIMx_C2FILT_SLIDFPSC__SHIFT) \
        /*
         * SLIDFPSC
         */

/******** Bit definition for TIMx_C3FILT register  ********/
#define GTIMA_TIMx_C3FILT_THRESH_SHIFT      (24)
#define GTIMA_TIMx_C3FILT_THRESH_MASK       (0x3F << \
                                             GTIMA_TIMx_C3FILT_THRESH_SHIFT)   /*
                                                                                *
                                                                                * THRESH
                                                                                */
#define GTIMA_TIMx_C3FILT_WSIZE_SHIFT       (17)
#define GTIMA_TIMx_C3FILT_WSIZE_MASK        (0x3F << \
                                             GTIMA_TIMx_C3FILT_WSIZE_SHIFT) /*
                                                                             * WSIZE
                                                                             */
#define GTIMA_TIMx_C3FILT_FILTEN            (1 << 16)                       /*
                                                                             * FILTEN
                                                                             */
#define GTIMA_TIMx_C3FILT_SLIDFPSC__SHIFT   (0)
#define GTIMA_TIMx_C3FILT_SLIDFPSC__MASK    (0xFFFF <<                          \
                                             GTIMA_TIMx_C3FILT_SLIDFPSC__SHIFT) \
        /*
         * SLIDFPSC
         */

/******** Bit definition for TIMx_C4FILT register  ********/
#define GTIMA_TIMx_C4FILT_THRESH_SHIFT      (24)
#define GTIMA_TIMx_C4FILT_THRESH_MASK       (0x3F << \
                                             GTIMA_TIMx_C4FILT_THRESH_SHIFT)   /*
                                                                                *
                                                                                * THRESH
                                                                                */
#define GTIMA_TIMx_C4FILT_WSIZE_SHIFT       (17)
#define GTIMA_TIMx_C4FILT_WSIZE_MASK        (0x3F << \
                                             GTIMA_TIMx_C4FILT_WSIZE_SHIFT) /*
                                                                             * WSIZE
                                                                             */
#define GTIMA_TIMx_C4FILT_FILTEN            (1 << 16)                       /*
                                                                             * FILTEN
                                                                             */
#define GTIMA_TIMx_C4FILT_SLIDFPSC__SHIFT   (0)
#define GTIMA_TIMx_C4FILT_SLIDFPSC__MASK    (0xFFFF <<                          \
                                             GTIMA_TIMx_C4FILT_SLIDFPSC__SHIFT) \
        /*
         * SLIDFPSC
         */

/******** Bit definition for TIMx_FILTO register  ********/
#define GTIMA_TIMx_FILTO_C4FILTO            (1 << 3)    /* C4FILTO */
#define GTIMA_TIMx_FILTO_C3FILTO            (1 << 2)    /* C3FILTO */
#define GTIMA_TIMx_FILTO_C2FILTO            (1 << 1)    /* C2FILTO */
#define GTIMA_TIMx_FILTO_C1FILTO            (1 << 0)    /* C1FILTO */

/******** Bit definition for TIMx_INSEL register  ********/
#define GTIMA_TIMx_INSEL_CLRS_SHIFT         (24)
#define GTIMA_TIMx_INSEL_CLRS_MASK          (0xF << \
                                             GTIMA_TIMx_INSEL_CLRS_SHIFT) /*
                                                                           * CLRS
                                                                           */
#define GTIMA_TIMx_INSEL_ITRS_SHIFT         (20)
#define GTIMA_TIMx_INSEL_ITRS_MASK          (0xF << \
                                             GTIMA_TIMx_INSEL_ITRS_SHIFT) /*
                                                                           * ITRS
                                                                           */
#define GTIMA_TIMx_INSEL_ETRS_SHIFT         (16)
#define GTIMA_TIMx_INSEL_ETRS_MASK          (0xF << \
                                             GTIMA_TIMx_INSEL_ETRS_SHIFT) /*
                                                                           * ETRS
                                                                           */
#define GTIMA_TIMx_INSEL_TI4S_SHIFT         (12)
#define GTIMA_TIMx_INSEL_TI4S_MASK          (0xF << \
                                             GTIMA_TIMx_INSEL_TI4S_SHIFT) /*
                                                                           * TI4S
                                                                           */
#define GTIMA_TIMx_INSEL_TI3S_SHIFT         (8)
#define GTIMA_TIMx_INSEL_TI3S_MASK          (0xF << \
                                             GTIMA_TIMx_INSEL_TI3S_SHIFT) /*
                                                                           * TI3S
                                                                           */
#define GTIMA_TIMx_INSEL_TI2S_SHIFT         (4)
#define GTIMA_TIMx_INSEL_TI2S_MASK          (0xF << \
                                             GTIMA_TIMx_INSEL_TI2S_SHIFT) /*
                                                                           * TI2S
                                                                           */
#define GTIMA_TIMx_INSEL_TI1S_SHIFT         (0)
#define GTIMA_TIMx_INSEL_TI1S_MASK          (0xF << \
                                             GTIMA_TIMx_INSEL_TI1S_SHIFT) /*
                                                                           * TI1S
                                                                           */

/******** Bit definition for TIMx_DCTRL register  ********/
#define GTIMA_TIMx_DCTRL_DBADDR_SHIFT       (8)
#define GTIMA_TIMx_DCTRL_DBADDR_MASK        (0x3F << \
                                             GTIMA_TIMx_DCTRL_DBADDR_SHIFT)  /*
                                                                              *
                                                                              * DBADDR
                                                                              */
#define GTIMA_TIMx_DCTRL_DBLEN_SHIFT        (0)
#define GTIMA_TIMx_DCTRL_DBLEN_MASK         (0x3F << \
                                             GTIMA_TIMx_DCTRL_DBLEN_SHIFT) /*
                                                                            * DBLEN
                                                                            */

/******** Bit definition for TIMx_DADDR register  ********/
#define GTIMA_TIMx_DADDR_BURST_SHIFT        (0)
#define GTIMA_TIMx_DADDR_BURST_MASK         (0xFFFFFFFF << \
                                             GTIMA_TIMx_DADDR_BURST_SHIFT)       /*
                                                                                  *
                                                                                  * BURST
                                                                                  */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_GTIMA_H */
