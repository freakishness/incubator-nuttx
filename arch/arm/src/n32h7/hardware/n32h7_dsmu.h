/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_dsmu.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DSMU_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DSMU_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_DSMU_CH0CFG1_OFFSET             0x0     /* DSMU channel 0
                                                     * configure register1 */
#define N32_DSMU_CH0CFG2_OFFSET             0x4     /* DSMU channel 0
                                                     * configure register2 */
#define N32_DSMU_CH0AWDSCDET_OFFSET         0x8     /* DSMU channel 0
                                                     * short-circuit detector
                                                     * and analog watchdog
                                                     * register */
#define N32_DSMU_CH0AWDDAT_OFFSET           0xC     /* DSMU channel 0 watchdog
                                                     * filter data register */
#define N32_DSMU_CH0DATIN_OFFSET            0x10    /* DSMU channel 0 input
                                                     * data register */
#define N32_DSMU_CH1CFG1_OFFSET             0x20    /* DSMU channel 1
                                                     * configure register1 */
#define N32_DSMU_CH1CFG2_OFFSET             0x24    /* DSMU channel 1
                                                     * configure register2 */
#define N32_DSMU_CH1AWDSCDET_OFFSET         0x28    /* DSMU channel 1
                                                     * short-circuit detector
                                                     * and analog watchdog
                                                     * register */
#define N32_DSMU_CH1AWDDAT_OFFSET           0x2C    /* DSMU channel 1 watchdog
                                                     * filter data register */
#define N32_DSMU_CH1DATIN_OFFSET            0x30    /* DSMU channel 1 input
                                                     * data register */
#define N32_DSMU_CH2CFG1_OFFSET             0x40    /* DSMU channel 2
                                                     * configure register1 */
#define N32_DSMU_CH2CFG2_OFFSET             0x44    /* DSMU channel 2
                                                     * configure register2 */
#define N32_DSMU_CH2AWDSCDET_OFFSET         0x48    /* DSMU channel 2
                                                     * short-circuit detector
                                                     * and analog watchdog
                                                     * register */
#define N32_DSMU_CH2AWDDAT_OFFSET           0x4C    /* DSMU channel 2 watchdog
                                                     * filter data register */
#define N32_DSMU_CH2DATIN_OFFSET            0x50    /* DSMU channel 2 input
                                                     * data register */
#define N32_DSMU_CH3CFG1_OFFSET             0x60    /* DSMU channel 3
                                                     * configure register1 */
#define N32_DSMU_CH3CFG2_OFFSET             0x64    /* DSMU channel 3
                                                     * configure register2 */
#define N32_DSMU_CH3AWDSCDET_OFFSET         0x68    /* DSMU channel 3
                                                     * short-circuit detector
                                                     * and analog watchdog
                                                     * register */
#define N32_DSMU_CH3AWDDAT_OFFSET           0x6C    /* DSMU channel 3 watchdog
                                                     * filter data register */
#define N32_DSMU_CH3DATIN_OFFSET            0x70    /* DSMU channel 3 input
                                                     * data register */
#define N32_DSMU_CH4CFG1_OFFSET             0x80    /* DSMU channel 4
                                                     * configure register1 */
#define N32_DSMU_CH4CFG2_OFFSET             0x84    /* DSMU channel 4
                                                     * configure register2 */
#define N32_DSMU_CH4AWDSCDET_OFFSET         0x88    /* DSMU channel 4
                                                     * short-circuit detector
                                                     * and analog watchdog
                                                     * register */
#define N32_DSMU_CH4AWDDAT_OFFSET           0x8C    /* DSMU channel 4 watchdog
                                                     * filter data register */
#define N32_DSMU_CH4DATIN_OFFSET            0x90    /* DSMU channel 4 input
                                                     * data register */
#define N32_DSMU_CH5CFG1_OFFSET             0xA0    /* DSMU channel 5
                                                     * configure register1 */
#define N32_DSMU_CH5CFG2_OFFSET             0xA4    /* DSMU channel 5
                                                     * configure register2 */
#define N32_DSMU_CH5AWDSCDET_OFFSET         0xA8    /* DSMU channel 5
                                                     * short-circuit detector
                                                     * and analog watchdog
                                                     * register */
#define N32_DSMU_CH5AWDDAT_OFFSET           0xAC    /* DSMU channel 5 watchdog
                                                     * filter data register */
#define N32_DSMU_CH5DATIN_OFFSET            0xB0    /* DSMU channel 5 input
                                                     * data register */
#define N32_DSMU_CH6CFG1_OFFSET             0xC0    /* DSMU channel 6
                                                     * configure register1 */
#define N32_DSMU_CH6CFG2_OFFSET             0xC4    /* DSMU channel 6
                                                     * configure register2 */
#define N32_DSMU_CH6AWDSCDET_OFFSET         0xC8    /* DSMU channel 6
                                                     * short-circuit detector
                                                     * and analog watchdog
                                                     * register */
#define N32_DSMU_CH6AWDDAT_OFFSET           0xCC    /* DSMU channel 6 watchdog
                                                     * filter data register */
#define N32_DSMU_CH6DATIN_OFFSET            0xD0    /* DSMU channel 6 input
                                                     * data register */
#define N32_DSMU_CH7CFG1_OFFSET             0xE0    /* DSMU channel 7
                                                     * configure register1 */
#define N32_DSMU_CH7CFG2_OFFSET             0xE4    /* DSMU channel 7
                                                     * configure register2 */
#define N32_DSMU_CH7AWDSCDET_OFFSET         0xE8    /* DSMU channel 7
                                                     * short-circuit detector
                                                     * and analog watchdog
                                                     * register */
#define N32_DSMU_CH7AWDDAT_OFFSET           0xEC    /* DSMU channel 7 watchdog
                                                     * filter data register */
#define N32_DSMU_CH7DATIN_OFFSET            0xF0    /* DSMU channel 7 input
                                                     * data register */
#define N32_DSMU_FLT0CTRL1_OFFSET           0x100   /* DSMU filter 0 control
                                                     * register 1 */
#define N32_DSMU_FLT0CTRL2_OFFSET           0x104   /* DSMU filter 0 control
                                                     * register 2 */
#define N32_DSMU_FLT0STS_OFFSET             0x108   /* DSMU filter 0 status
                                                     * register */
#define N32_DSMU_FLT0INTCLR_OFFSET          0x10C   /* DSMU filter 0 interrupt
                                                     * flag clear register */
#define N32_DSMU_FLT0JCHG_OFFSET            0x110   /* DSMU filter 0 injected
                                                     * channel group selection
                                                     * register */
#define N32_DSMU_FLT0FCTRL_OFFSET           0x114   /* DSMU filter 0 function
                                                     * control register */
#define N32_DSMU_FLT0JDAT_OFFSET            0x118   /* DSMU filter 0 injected
                                                     * conversion data
                                                     * register */
#define N32_DSMU_FLT0RDAT_OFFSET            0x11C   /* DSMU filter 0 data
                                                     * register for the
                                                     * regular channel */
#define N32_DSMU_FLT0AWDHT_OFFSET           0x120   /* DSMU filter 0 analog
                                                     * watchdog high threshold
                                                     * register */
#define N32_DSMU_FLT0AWDLT_OFFSET           0x124   /* DSMU filter 0 analog
                                                     * watchdog low threshold
                                                     * register */
#define N32_DSMU_FLT0AWDSTS_OFFSET          0x128   /* DSMU filter 0 analog
                                                     * watchdog status
                                                     * register */
#define N32_DSMU_FLT0AWDCLR_OFFSET          0x12C   /* DSMU filter 0 analog
                                                     * watchdog clear flag
                                                     * register */
#define N32_DSMU_FLT0EXDETMAX_OFFSET        0x130   /* DSMU filter 0 extremes
                                                     * detector maximum
                                                     * register */
#define N32_DSMU_FLT0EXDETMIN_OFFSET        0x134   /* DSMU filter 0 extremes
                                                     * detector minimum
                                                     * register */
#define N32_DSMU_FLT0COVTIM_OFFSET          0x138   /* DSMU filter 0
                                                     * conversion timer
                                                     * register */
#define N32_DSMU_FLT1CTRL1_OFFSET           0x180   /* DSMU filter 1 control
                                                     * register 1 */
#define N32_DSMU_FLT1CTRL2_OFFSET           0x184   /* DSMU filter 1 control
                                                     * register 2 */
#define N32_DSMU_FLT1STS_OFFSET             0x188   /* DSMU filter 1 status
                                                     * register */
#define N32_DSMU_FLT1INTCLR_OFFSET          0x18C   /* DSMU filter 1 interrupt
                                                     * flag clear register */
#define N32_DSMU_FLT1JCHG_OFFSET            0x190   /* DSMU filter 1 injected
                                                     * channel group selection
                                                     * register */
#define N32_DSMU_FLT1FCTRL_OFFSET           0x194   /* DSMU filter 1 function
                                                     * control register */
#define N32_DSMU_FLT1JDAT_OFFSET            0x198   /* DSMU filter 1 injected
                                                     * conversion data
                                                     * register */
#define N32_DSMU_FLT1RDAT_OFFSET            0x19C   /* DSMU filter 1 data
                                                     * register for the
                                                     * regular channel */
#define N32_DSMU_FLT1AWDHT_OFFSET           0x1A0   /* DSMU filter 1 analog
                                                     * watchdog high threshold
                                                     * register */
#define N32_DSMU_FLT1AWDLT_OFFSET           0x1A4   /* DSMU filter 1 analog
                                                     * watchdog low threshold
                                                     * register */
#define N32_DSMU_FLT1AWDSTS_OFFSET          0x1A8   /* DSMU filter 1 analog
                                                     * watchdog status
                                                     * register */
#define N32_DSMU_FLT1AWDCLR_OFFSET          0x1AC   /* DSMU filter 1 analog
                                                     * watchdog clear flag
                                                     * register */
#define N32_DSMU_FLT1EXDETMAX_OFFSET        0x1B0   /* DSMU filter 1 extremes
                                                     * detector maximum
                                                     * register */
#define N32_DSMU_FLT1EXDETMIN_OFFSET        0x1B4   /* DSMU filter 1 extremes
                                                     * detector minimum
                                                     * register */
#define N32_DSMU_FLT1COVTIM_OFFSET          0x1B8   /* DSMU filter 1
                                                     * conversion timer
                                                     * register */
#define N32_DSMU_FLT2CTRL1_OFFSET           0x200   /* DSMU filter 2 control
                                                     * register 1 */
#define N32_DSMU_FLT2CTRL2_OFFSET           0x204   /* DSMU filter 2 control
                                                     * register 2 */
#define N32_DSMU_FLT2STS_OFFSET             0x208   /* DSMU filter 2 status
                                                     * register */
#define N32_DSMU_FLT2INTCLR_OFFSET          0x20C   /* DSMU filter 2 interrupt
                                                     * flag clear register */
#define N32_DSMU_FLT2JCHG_OFFSET            0x210   /* DSMU filter 2 injected
                                                     * channel group selection
                                                     * register */
#define N32_DSMU_FLT2FCTRL_OFFSET           0x214   /* DSMU filter 2 function
                                                     * control register */
#define N32_DSMU_FLT2JDAT_OFFSET            0x218   /* DSMU filter 2 injected
                                                     * conversion data
                                                     * register */
#define N32_DSMU_FLT2RDAT_OFFSET            0x21C   /* DSMU filter 2 data
                                                     * register for the
                                                     * regular channel */
#define N32_DSMU_FLT2AWDHT_OFFSET           0x220   /* DSMU filter 2 analog
                                                     * watchdog high threshold
                                                     * register */
#define N32_DSMU_FLT2AWDLT_OFFSET           0x224   /* DSMU filter 2 analog
                                                     * watchdog low threshold
                                                     * register */
#define N32_DSMU_FLT2AWDSTS_OFFSET          0x228   /* DSMU filter 2 analog
                                                     * watchdog status
                                                     * register */
#define N32_DSMU_FLT2AWDCLR_OFFSET          0x22C   /* DSMU filter 2 analog
                                                     * watchdog clear flag
                                                     * register */
#define N32_DSMU_FLT2EXDETMAX_OFFSET        0x230   /* DSMU filter 2 extremes
                                                     * detector maximum
                                                     * register */
#define N32_DSMU_FLT2EXDETMIN_OFFSET        0x234   /* DSMU filter 2 extremes
                                                     * detector minimum
                                                     * register */
#define N32_DSMU_FLT2COVTIM_OFFSET          0x238   /* DSMU filter 2
                                                     * conversion timer
                                                     * register */
#define N32_DSMU_FLT3CTRL1_OFFSET           0x280   /* DSMU filter 3 control
                                                     * register 1 */
#define N32_DSMU_FLT3CTRL2_OFFSET           0x284   /* DSMU filter 3 control
                                                     * register 2 */
#define N32_DSMU_FLT3STS_OFFSET             0x288   /* DSMU filter 3 status
                                                     * register */
#define N32_DSMU_FLT3INTCLR_OFFSET          0x28C   /* DSMU filter 3 interrupt
                                                     * flag clear register */
#define N32_DSMU_FLT3JCHG_OFFSET            0x290   /* DSMU filter 3 injected
                                                     * channel group selection
                                                     * register */
#define N32_DSMU_FLT3FCTRL_OFFSET           0x294   /* DSMU filter 3 function
                                                     * control register */
#define N32_DSMU_FLT3JDAT_OFFSET            0x298   /* DSMU filter 3 injected
                                                     * conversion data
                                                     * register */
#define N32_DSMU_FLT3RDAT_OFFSET            0x29C   /* DSMU filter 3 data
                                                     * register for the
                                                     * regular channel */
#define N32_DSMU_FLT3AWDHT_OFFSET           0x2A0   /* DSMU filter 3 analog
                                                     * watchdog high threshold
                                                     * register */
#define N32_DSMU_FLT3AWDLT_OFFSET           0x2A4   /* DSMU filter 3 analog
                                                     * watchdog low threshold
                                                     * register */
#define N32_DSMU_FLT3AWDSTS_OFFSET          0x2A8   /* DSMU filter 3 analog
                                                     * watchdog status
                                                     * register */
#define N32_DSMU_FLT3AWDCLR_OFFSET          0x2AC   /* DSMU filter 3 analog
                                                     * watchdog clear flag
                                                     * register */
#define N32_DSMU_FLT3EXDETMAX_OFFSET        0x2B0   /* DSMU filter 3 extremes
                                                     * detector maximum
                                                     * register */
#define N32_DSMU_FLT3EXDETMIN_OFFSET        0x2B4   /* DSMU filter 3 extremes
                                                     * detector minimum
                                                     * register */
#define N32_DSMU_FLT3COVTIM_OFFSET          0x2B8   /* DSMU filter 3
                                                     * conversion timer
                                                     * register */

#define N32_DSMU_CH0CFG1                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH0CFG1_OFFSET)
#define N32_DSMU_CH0CFG2                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH0CFG2_OFFSET)
#define N32_DSMU_CH0AWDSCDET                (N32_DSMU_BASE + \
                                             N32_DSMU_CH0AWDSCDET_OFFSET)
#define N32_DSMU_CH0AWDDAT                  (N32_DSMU_BASE + \
                                             N32_DSMU_CH0AWDDAT_OFFSET)
#define N32_DSMU_CH0DATIN                   (N32_DSMU_BASE + \
                                             N32_DSMU_CH0DATIN_OFFSET)
#define N32_DSMU_CH1CFG1                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH1CFG1_OFFSET)
#define N32_DSMU_CH1CFG2                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH1CFG2_OFFSET)
#define N32_DSMU_CH1AWDSCDET                (N32_DSMU_BASE + \
                                             N32_DSMU_CH1AWDSCDET_OFFSET)
#define N32_DSMU_CH1AWDDAT                  (N32_DSMU_BASE + \
                                             N32_DSMU_CH1AWDDAT_OFFSET)
#define N32_DSMU_CH1DATIN                   (N32_DSMU_BASE + \
                                             N32_DSMU_CH1DATIN_OFFSET)
#define N32_DSMU_CH2CFG1                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH2CFG1_OFFSET)
#define N32_DSMU_CH2CFG2                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH2CFG2_OFFSET)
#define N32_DSMU_CH2AWDSCDET                (N32_DSMU_BASE + \
                                             N32_DSMU_CH2AWDSCDET_OFFSET)
#define N32_DSMU_CH2AWDDAT                  (N32_DSMU_BASE + \
                                             N32_DSMU_CH2AWDDAT_OFFSET)
#define N32_DSMU_CH2DATIN                   (N32_DSMU_BASE + \
                                             N32_DSMU_CH2DATIN_OFFSET)
#define N32_DSMU_CH3CFG1                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH3CFG1_OFFSET)
#define N32_DSMU_CH3CFG2                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH3CFG2_OFFSET)
#define N32_DSMU_CH3AWDSCDET                (N32_DSMU_BASE + \
                                             N32_DSMU_CH3AWDSCDET_OFFSET)
#define N32_DSMU_CH3AWDDAT                  (N32_DSMU_BASE + \
                                             N32_DSMU_CH3AWDDAT_OFFSET)
#define N32_DSMU_CH3DATIN                   (N32_DSMU_BASE + \
                                             N32_DSMU_CH3DATIN_OFFSET)
#define N32_DSMU_CH4CFG1                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH4CFG1_OFFSET)
#define N32_DSMU_CH4CFG2                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH4CFG2_OFFSET)
#define N32_DSMU_CH4AWDSCDET                (N32_DSMU_BASE + \
                                             N32_DSMU_CH4AWDSCDET_OFFSET)
#define N32_DSMU_CH4AWDDAT                  (N32_DSMU_BASE + \
                                             N32_DSMU_CH4AWDDAT_OFFSET)
#define N32_DSMU_CH4DATIN                   (N32_DSMU_BASE + \
                                             N32_DSMU_CH4DATIN_OFFSET)
#define N32_DSMU_CH5CFG1                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH5CFG1_OFFSET)
#define N32_DSMU_CH5CFG2                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH5CFG2_OFFSET)
#define N32_DSMU_CH5AWDSCDET                (N32_DSMU_BASE + \
                                             N32_DSMU_CH5AWDSCDET_OFFSET)
#define N32_DSMU_CH5AWDDAT                  (N32_DSMU_BASE + \
                                             N32_DSMU_CH5AWDDAT_OFFSET)
#define N32_DSMU_CH5DATIN                   (N32_DSMU_BASE + \
                                             N32_DSMU_CH5DATIN_OFFSET)
#define N32_DSMU_CH6CFG1                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH6CFG1_OFFSET)
#define N32_DSMU_CH6CFG2                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH6CFG2_OFFSET)
#define N32_DSMU_CH6AWDSCDET                (N32_DSMU_BASE + \
                                             N32_DSMU_CH6AWDSCDET_OFFSET)
#define N32_DSMU_CH6AWDDAT                  (N32_DSMU_BASE + \
                                             N32_DSMU_CH6AWDDAT_OFFSET)
#define N32_DSMU_CH6DATIN                   (N32_DSMU_BASE + \
                                             N32_DSMU_CH6DATIN_OFFSET)
#define N32_DSMU_CH7CFG1                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH7CFG1_OFFSET)
#define N32_DSMU_CH7CFG2                    (N32_DSMU_BASE + \
                                             N32_DSMU_CH7CFG2_OFFSET)
#define N32_DSMU_CH7AWDSCDET                (N32_DSMU_BASE + \
                                             N32_DSMU_CH7AWDSCDET_OFFSET)
#define N32_DSMU_CH7AWDDAT                  (N32_DSMU_BASE + \
                                             N32_DSMU_CH7AWDDAT_OFFSET)
#define N32_DSMU_CH7DATIN                   (N32_DSMU_BASE + \
                                             N32_DSMU_CH7DATIN_OFFSET)
#define N32_DSMU_FLT0CTRL1                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0CTRL1_OFFSET)
#define N32_DSMU_FLT0CTRL2                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0CTRL2_OFFSET)
#define N32_DSMU_FLT0STS                    (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0STS_OFFSET)
#define N32_DSMU_FLT0INTCLR                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0INTCLR_OFFSET)
#define N32_DSMU_FLT0JCHG                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0JCHG_OFFSET)
#define N32_DSMU_FLT0FCTRL                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0FCTRL_OFFSET)
#define N32_DSMU_FLT0JDAT                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0JDAT_OFFSET)
#define N32_DSMU_FLT0RDAT                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0RDAT_OFFSET)
#define N32_DSMU_FLT0AWDHT                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0AWDHT_OFFSET)
#define N32_DSMU_FLT0AWDLT                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0AWDLT_OFFSET)
#define N32_DSMU_FLT0AWDSTS                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0AWDSTS_OFFSET)
#define N32_DSMU_FLT0AWDCLR                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0AWDCLR_OFFSET)
#define N32_DSMU_FLT0EXDETMAX               (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0EXDETMAX_OFFSET)
#define N32_DSMU_FLT0EXDETMIN               (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0EXDETMIN_OFFSET)
#define N32_DSMU_FLT0COVTIM                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT0COVTIM_OFFSET)
#define N32_DSMU_FLT1CTRL1                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1CTRL1_OFFSET)
#define N32_DSMU_FLT1CTRL2                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1CTRL2_OFFSET)
#define N32_DSMU_FLT1STS                    (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1STS_OFFSET)
#define N32_DSMU_FLT1INTCLR                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1INTCLR_OFFSET)
#define N32_DSMU_FLT1JCHG                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1JCHG_OFFSET)
#define N32_DSMU_FLT1FCTRL                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1FCTRL_OFFSET)
#define N32_DSMU_FLT1JDAT                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1JDAT_OFFSET)
#define N32_DSMU_FLT1RDAT                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1RDAT_OFFSET)
#define N32_DSMU_FLT1AWDHT                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1AWDHT_OFFSET)
#define N32_DSMU_FLT1AWDLT                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1AWDLT_OFFSET)
#define N32_DSMU_FLT1AWDSTS                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1AWDSTS_OFFSET)
#define N32_DSMU_FLT1AWDCLR                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1AWDCLR_OFFSET)
#define N32_DSMU_FLT1EXDETMAX               (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1EXDETMAX_OFFSET)
#define N32_DSMU_FLT1EXDETMIN               (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1EXDETMIN_OFFSET)
#define N32_DSMU_FLT1COVTIM                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT1COVTIM_OFFSET)
#define N32_DSMU_FLT2CTRL1                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2CTRL1_OFFSET)
#define N32_DSMU_FLT2CTRL2                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2CTRL2_OFFSET)
#define N32_DSMU_FLT2STS                    (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2STS_OFFSET)
#define N32_DSMU_FLT2INTCLR                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2INTCLR_OFFSET)
#define N32_DSMU_FLT2JCHG                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2JCHG_OFFSET)
#define N32_DSMU_FLT2FCTRL                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2FCTRL_OFFSET)
#define N32_DSMU_FLT2JDAT                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2JDAT_OFFSET)
#define N32_DSMU_FLT2RDAT                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2RDAT_OFFSET)
#define N32_DSMU_FLT2AWDHT                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2AWDHT_OFFSET)
#define N32_DSMU_FLT2AWDLT                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2AWDLT_OFFSET)
#define N32_DSMU_FLT2AWDSTS                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2AWDSTS_OFFSET)
#define N32_DSMU_FLT2AWDCLR                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2AWDCLR_OFFSET)
#define N32_DSMU_FLT2EXDETMAX               (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2EXDETMAX_OFFSET)
#define N32_DSMU_FLT2EXDETMIN               (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2EXDETMIN_OFFSET)
#define N32_DSMU_FLT2COVTIM                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT2COVTIM_OFFSET)
#define N32_DSMU_FLT3CTRL1                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3CTRL1_OFFSET)
#define N32_DSMU_FLT3CTRL2                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3CTRL2_OFFSET)
#define N32_DSMU_FLT3STS                    (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3STS_OFFSET)
#define N32_DSMU_FLT3INTCLR                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3INTCLR_OFFSET)
#define N32_DSMU_FLT3JCHG                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3JCHG_OFFSET)
#define N32_DSMU_FLT3FCTRL                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3FCTRL_OFFSET)
#define N32_DSMU_FLT3JDAT                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3JDAT_OFFSET)
#define N32_DSMU_FLT3RDAT                   (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3RDAT_OFFSET)
#define N32_DSMU_FLT3AWDHT                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3AWDHT_OFFSET)
#define N32_DSMU_FLT3AWDLT                  (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3AWDLT_OFFSET)
#define N32_DSMU_FLT3AWDSTS                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3AWDSTS_OFFSET)
#define N32_DSMU_FLT3AWDCLR                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3AWDCLR_OFFSET)
#define N32_DSMU_FLT3EXDETMAX               (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3EXDETMAX_OFFSET)
#define N32_DSMU_FLT3EXDETMIN               (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3EXDETMIN_OFFSET)
#define N32_DSMU_FLT3COVTIM                 (N32_DSMU_BASE + \
                                             N32_DSMU_FLT3COVTIM_OFFSET)

/******** Bit definition for DSMU_CH0CFG1 register  ********/
#define DSMU_CH0CFG1_SITP_SHIFT             (0)
#define DSMU_CH0CFG1_SITP_MASK              (0x3 << DSMU_CH0CFG1_SITP_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Serial
                                                                              *
                                                                              *
                                                                              *
                                                                              * interface
                                                                              *
                                                                              *
                                                                              *
                                                                              * type
                                                                              */
#define DSMU_CH0CFG1_SPICLKSEL_SHIFT        (2)
#define DSMU_CH0CFG1_SPICLKSEL_MASK         (0x3 << \
                                             DSMU_CH0CFG1_SPICLKSEL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SPI
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * source
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH0CFG1_SCDETEN                (1 << 5)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Short-circuit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH0CFG1_CLKABEN                (1 << 6)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * absence
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH0CFG1_CHEN                   (1 << 7)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 */
#define DSMU_CH0CFG1_CHINSEL                (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * inputs
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH0CFG1_DATMUX_SHIFT           (12)
#define DSMU_CH0CFG1_DATMUX_MASK            (0x3 << DSMU_CH0CFG1_DATMUX_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * multiplexer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH0CFG1_DATPACK_SHIFT          (14)
#define DSMU_CH0CFG1_DATPACK_MASK           (0x3 << \
                                             DSMU_CH0CFG1_DATPACK_SHIFT) /*
                                                                          * Data
                                                                          * packing
                                                                          * config
                                                                          * in
                                                                          * input
                                                                          * data
                                                                          * register
                                                                          */
#define DSMU_CH0CFG1_CLKOUTDIV_SHIFT        (16)
#define DSMU_CH0CFG1_CLKOUTDIV_MASK         (0xFF << \
                                             DSMU_CH0CFG1_CLKOUTDIV_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             * Output
                                                                             *
                                                                             *
                                                                             * serial
                                                                             *
                                                                             *
                                                                             * clock
                                                                             *
                                                                             *
                                                                             *
                                                                             * divider
                                                                             */
#define DSMU_CH0CFG1_CLKOUTSRC              (1 << 30)                       /*
                                                                             *
                                                                             *
                                                                             * Output
                                                                             *
                                                                             *
                                                                             * serial
                                                                             *
                                                                             *
                                                                             * clock
                                                                             *
                                                                             *
                                                                             *
                                                                             * source
                                                                             *
                                                                             *
                                                                             * selection
                                                                             */
#define DSMU_CH0CFG1_DSMUEN                 (1 << 31)                       /*
                                                                             *
                                                                             *
                                                                             * DSMU
                                                                             *
                                                                             *
                                                                             * interface
                                                                             *
                                                                             *
                                                                             *
                                                                             * global
                                                                             *
                                                                             *
                                                                             * enable
                                                                             */

/******** Bit definition for DSMU_CH0CFG2 register  ********/
#define DSMU_CH0CFG2_DATRBS_SHIFT           (3)
#define DSMU_CH0CFG2_DATRBS_MASK            (0x1F << \
                                             DSMU_CH0CFG2_DATRBS_SHIFT) /*
                                                                         * Data
                                                                         * right
                                                                         * bit-shift
                                                                         * value
                                                                         */
#define DSMU_CH0CFG2_CALOFFSET_SHIFT        (8)
#define DSMU_CH0CFG2_CALOFFSET_MASK         (0xFFFFFF << \
                                             DSMU_CH0CFG2_CALOFFSET_SHIFT)     /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * 24-bit
                                                                                *
                                                                                *
                                                                                *
                                                                                * calibration
                                                                                *
                                                                                *
                                                                                *
                                                                                * CALOFFSET
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                */

/******** Bit definition for DSMU_CH0AWDSCDET register  ********/
#define DSMU_CH0AWDSCDET_SCDETTH_SHIFT      (0)
#define DSMU_CH0AWDSCDET_SCDETTH_MASK       (0xFF << \
                                             DSMU_CH0AWDSCDET_SCDETTH_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * short-circuit
                                                                                *
                                                                                *
                                                                                *
                                                                                * detector
                                                                                *
                                                                                *
                                                                                *
                                                                                * threshold
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                *
                                                                                *
                                                                                *
                                                                                * for
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH0AWDSCDET_BKSCDET_SHIFT      (12)
#define DSMU_CH0AWDSCDET_BKSCDET_MASK       (0xF << \
                                             DSMU_CH0AWDSCDET_BKSCDET_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Break
                                                                               *
                                                                               *
                                                                               *
                                                                               * signal
                                                                               *
                                                                               *
                                                                               *
                                                                               * assignment
                                                                               *
                                                                               *
                                                                               *
                                                                               * for
                                                                               *
                                                                               *
                                                                               *
                                                                               * short-circuit
                                                                               *
                                                                               *
                                                                               *
                                                                               * detector
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */
#define DSMU_CH0AWDSCDET_AWDFOSR_SHIFT      (16)
#define DSMU_CH0AWDSCDET_AWDFOSR_MASK       (0x1F << \
                                             DSMU_CH0AWDSCDET_AWDFOSR_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Analog
                                                                                *
                                                                                *
                                                                                *
                                                                                * watchdog
                                                                                *
                                                                                *
                                                                                *
                                                                                * filter
                                                                                *
                                                                                *
                                                                                *
                                                                                * oversampling
                                                                                *
                                                                                *
                                                                                *
                                                                                * ratio
                                                                                *
                                                                                *
                                                                                *
                                                                                * (decimation
                                                                                *
                                                                                *
                                                                                *
                                                                                * rate)
                                                                                *
                                                                                *
                                                                                *
                                                                                * on
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH0AWDSCDET_AWDFORD_SHIFT      (22)
#define DSMU_CH0AWDSCDET_AWDFORD_MASK       (0x3 << \
                                             DSMU_CH0AWDSCDET_AWDFORD_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Analog
                                                                               *
                                                                               *
                                                                               *
                                                                               * watchdog
                                                                               *
                                                                               *
                                                                               *
                                                                               * Sinc
                                                                               *
                                                                               *
                                                                               *
                                                                               * filter
                                                                               *
                                                                               *
                                                                               *
                                                                               * order
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */

/******** Bit definition for DSMU_CH0AWDDAT register  ********/
#define DSMU_CH0AWDDAT_AWDDAT_SHIFT         (0)
#define DSMU_CH0AWDDAT_AWDDAT_MASK          (0xFFFF << \
                                             DSMU_CH0AWDDAT_AWDDAT_SHIFT)  /*
                                                                            * Input
                                                                            * channel
                                                                            * watchdog
                                                                            * data
                                                                            */

/******** Bit definition for DSMU_CH0DATIN register  ********/
#define DSMU_CH0DATIN_INDATAT0_SHIFT        (0)
#define DSMU_CH0DATIN_INDATAT0_MASK         (0xFFFF << \
                                             DSMU_CH0DATIN_INDATAT0_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */
#define DSMU_CH0DATIN_INDATAT1_SHIFT        (16)
#define DSMU_CH0DATIN_INDATAT1_MASK         (0xFFFF << \
                                             DSMU_CH0DATIN_INDATAT1_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              *
                                                                              *
                                                                              *
                                                                              * or
                                                                              *
                                                                              *
                                                                              *
                                                                              * following
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */

/******** Bit definition for DSMU_CH1CFG1 register  ********/
#define DSMU_CH1CFG1_SITP_SHIFT             (0)
#define DSMU_CH1CFG1_SITP_MASK              (0x3 << DSMU_CH1CFG1_SITP_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Serial
                                                                              *
                                                                              *
                                                                              *
                                                                              * interface
                                                                              *
                                                                              *
                                                                              *
                                                                              * type
                                                                              */
#define DSMU_CH1CFG1_SPICLKSEL_SHIFT        (2)
#define DSMU_CH1CFG1_SPICLKSEL_MASK         (0x3 << \
                                             DSMU_CH1CFG1_SPICLKSEL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SPI
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * source
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH1CFG1_SCDETEN                (1 << 5)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Short-circuit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH1CFG1_CLKABEN                (1 << 6)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * absence
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH1CFG1_CHEN                   (1 << 7)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 */
#define DSMU_CH1CFG1_CHINSEL                (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * inputs
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH1CFG1_DATMUX_SHIFT           (12)
#define DSMU_CH1CFG1_DATMUX_MASK            (0x3 << DSMU_CH1CFG1_DATMUX_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * multiplexer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH1CFG1_DATPACK_SHIFT          (14)
#define DSMU_CH1CFG1_DATPACK_MASK           (0x3 << \
                                             DSMU_CH1CFG1_DATPACK_SHIFT) /*
                                                                          * Data
                                                                          * packing
                                                                          * config
                                                                          * in
                                                                          * input
                                                                          * data
                                                                          * register
                                                                          */

/******** Bit definition for DSMU_CH1CFG2 register  ********/
#define DSMU_CH1CFG2_DATRBS_SHIFT           (3)
#define DSMU_CH1CFG2_DATRBS_MASK            (0x1F << \
                                             DSMU_CH1CFG2_DATRBS_SHIFT) /*
                                                                         * Data
                                                                         * right
                                                                         * bit-shift
                                                                         * value
                                                                         */
#define DSMU_CH1CFG2_CALOFFSET_SHIFT        (8)
#define DSMU_CH1CFG2_CALOFFSET_MASK         (0xFFFFFF << \
                                             DSMU_CH1CFG2_CALOFFSET_SHIFT)     /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * 24-bit
                                                                                *
                                                                                *
                                                                                *
                                                                                * calibration
                                                                                *
                                                                                *
                                                                                *
                                                                                * CALOFFSET
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                */

/******** Bit definition for DSMU_CH1AWDSCDET register  ********/
#define DSMU_CH1AWDSCDET_SCDETTH_SHIFT      (0)
#define DSMU_CH1AWDSCDET_SCDETTH_MASK       (0xFF << \
                                             DSMU_CH1AWDSCDET_SCDETTH_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * short-circuit
                                                                                *
                                                                                *
                                                                                *
                                                                                * detector
                                                                                *
                                                                                *
                                                                                *
                                                                                * threshold
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                *
                                                                                *
                                                                                *
                                                                                * for
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH1AWDSCDET_BKSCDET_SHIFT      (12)
#define DSMU_CH1AWDSCDET_BKSCDET_MASK       (0xF << \
                                             DSMU_CH1AWDSCDET_BKSCDET_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Break
                                                                               *
                                                                               *
                                                                               *
                                                                               * signal
                                                                               *
                                                                               *
                                                                               *
                                                                               * assignment
                                                                               *
                                                                               *
                                                                               *
                                                                               * for
                                                                               *
                                                                               *
                                                                               *
                                                                               * short-circuit
                                                                               *
                                                                               *
                                                                               *
                                                                               * detector
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */
#define DSMU_CH1AWDSCDET_AWDFOSR_SHIFT      (16)
#define DSMU_CH1AWDSCDET_AWDFOSR_MASK       (0x1F << \
                                             DSMU_CH1AWDSCDET_AWDFOSR_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Analog
                                                                                *
                                                                                *
                                                                                *
                                                                                * watchdog
                                                                                *
                                                                                *
                                                                                *
                                                                                * filter
                                                                                *
                                                                                *
                                                                                *
                                                                                * oversampling
                                                                                *
                                                                                *
                                                                                *
                                                                                * ratio
                                                                                *
                                                                                *
                                                                                *
                                                                                * (decimation
                                                                                *
                                                                                *
                                                                                *
                                                                                * rate)
                                                                                *
                                                                                *
                                                                                *
                                                                                * on
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH1AWDSCDET_AWDFORD_SHIFT      (22)
#define DSMU_CH1AWDSCDET_AWDFORD_MASK       (0x3 << \
                                             DSMU_CH1AWDSCDET_AWDFORD_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Analog
                                                                               *
                                                                               *
                                                                               *
                                                                               * watchdog
                                                                               *
                                                                               *
                                                                               *
                                                                               * Sinc
                                                                               *
                                                                               *
                                                                               *
                                                                               * filter
                                                                               *
                                                                               *
                                                                               *
                                                                               * order
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */

/******** Bit definition for DSMU_CH1AWDDAT register  ********/
#define DSMU_CH1AWDDAT_AWDDAT_SHIFT         (0)
#define DSMU_CH1AWDDAT_AWDDAT_MASK          (0xFFFF << \
                                             DSMU_CH1AWDDAT_AWDDAT_SHIFT)  /*
                                                                            * Input
                                                                            * channel
                                                                            * watchdog
                                                                            * data
                                                                            */

/******** Bit definition for DSMU_CH1DATIN register  ********/
#define DSMU_CH1DATIN_INDATAT0_SHIFT        (0)
#define DSMU_CH1DATIN_INDATAT0_MASK         (0xFFFF << \
                                             DSMU_CH1DATIN_INDATAT0_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */
#define DSMU_CH1DATIN_INDATAT1_SHIFT        (16)
#define DSMU_CH1DATIN_INDATAT1_MASK         (0xFFFF << \
                                             DSMU_CH1DATIN_INDATAT1_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              *
                                                                              *
                                                                              *
                                                                              * or
                                                                              *
                                                                              *
                                                                              *
                                                                              * following
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */

/******** Bit definition for DSMU_CH2CFG1 register  ********/
#define DSMU_CH2CFG1_SITP_SHIFT             (0)
#define DSMU_CH2CFG1_SITP_MASK              (0x3 << DSMU_CH2CFG1_SITP_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Serial
                                                                              *
                                                                              *
                                                                              *
                                                                              * interface
                                                                              *
                                                                              *
                                                                              *
                                                                              * type
                                                                              */
#define DSMU_CH2CFG1_SPICLKSEL_SHIFT        (2)
#define DSMU_CH2CFG1_SPICLKSEL_MASK         (0x3 << \
                                             DSMU_CH2CFG1_SPICLKSEL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SPI
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * source
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH2CFG1_SCDETEN                (1 << 5)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Short-circuit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH2CFG1_CLKABEN                (1 << 6)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * absence
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH2CFG1_CHEN                   (1 << 7)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 */
#define DSMU_CH2CFG1_CHINSEL                (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * inputs
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH2CFG1_DATMUX_SHIFT           (12)
#define DSMU_CH2CFG1_DATMUX_MASK            (0x3 << DSMU_CH2CFG1_DATMUX_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * multiplexer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH2CFG1_DATPACK_SHIFT          (14)
#define DSMU_CH2CFG1_DATPACK_MASK           (0x3 << \
                                             DSMU_CH2CFG1_DATPACK_SHIFT) /*
                                                                          * Data
                                                                          * packing
                                                                          * config
                                                                          * in
                                                                          * input
                                                                          * data
                                                                          * register
                                                                          */

/******** Bit definition for DSMU_CH2CFG2 register  ********/
#define DSMU_CH2CFG2_DATRBS_SHIFT           (3)
#define DSMU_CH2CFG2_DATRBS_MASK            (0x1F << \
                                             DSMU_CH2CFG2_DATRBS_SHIFT) /*
                                                                         * Data
                                                                         * right
                                                                         * bit-shift
                                                                         * value
                                                                         */
#define DSMU_CH2CFG2_CALOFFSET_SHIFT        (8)
#define DSMU_CH2CFG2_CALOFFSET_MASK         (0xFFFFFF << \
                                             DSMU_CH2CFG2_CALOFFSET_SHIFT)     /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * 24-bit
                                                                                *
                                                                                *
                                                                                *
                                                                                * calibration
                                                                                *
                                                                                *
                                                                                *
                                                                                * CALOFFSET
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                */

/******** Bit definition for DSMU_CH2AWDSCDET register  ********/
#define DSMU_CH2AWDSCDET_SCDETTH_SHIFT      (0)
#define DSMU_CH2AWDSCDET_SCDETTH_MASK       (0xFF << \
                                             DSMU_CH2AWDSCDET_SCDETTH_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * short-circuit
                                                                                *
                                                                                *
                                                                                *
                                                                                * detector
                                                                                *
                                                                                *
                                                                                *
                                                                                * threshold
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                *
                                                                                *
                                                                                *
                                                                                * for
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH2AWDSCDET_BKSCDET_SHIFT      (12)
#define DSMU_CH2AWDSCDET_BKSCDET_MASK       (0xF << \
                                             DSMU_CH2AWDSCDET_BKSCDET_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Break
                                                                               *
                                                                               *
                                                                               *
                                                                               * signal
                                                                               *
                                                                               *
                                                                               *
                                                                               * assignment
                                                                               *
                                                                               *
                                                                               *
                                                                               * for
                                                                               *
                                                                               *
                                                                               *
                                                                               * short-circuit
                                                                               *
                                                                               *
                                                                               *
                                                                               * detector
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */
#define DSMU_CH2AWDSCDET_AWDFOSR_SHIFT      (16)
#define DSMU_CH2AWDSCDET_AWDFOSR_MASK       (0x1F << \
                                             DSMU_CH2AWDSCDET_AWDFOSR_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Analog
                                                                                *
                                                                                *
                                                                                *
                                                                                * watchdog
                                                                                *
                                                                                *
                                                                                *
                                                                                * filter
                                                                                *
                                                                                *
                                                                                *
                                                                                * oversampling
                                                                                *
                                                                                *
                                                                                *
                                                                                * ratio
                                                                                *
                                                                                *
                                                                                *
                                                                                * (decimation
                                                                                *
                                                                                *
                                                                                *
                                                                                * rate)
                                                                                *
                                                                                *
                                                                                *
                                                                                * on
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH2AWDSCDET_AWDFORD_SHIFT      (22)
#define DSMU_CH2AWDSCDET_AWDFORD_MASK       (0x3 << \
                                             DSMU_CH2AWDSCDET_AWDFORD_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Analog
                                                                               *
                                                                               *
                                                                               *
                                                                               * watchdog
                                                                               *
                                                                               *
                                                                               *
                                                                               * Sinc
                                                                               *
                                                                               *
                                                                               *
                                                                               * filter
                                                                               *
                                                                               *
                                                                               *
                                                                               * order
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */

/******** Bit definition for DSMU_CH2AWDDAT register  ********/
#define DSMU_CH2AWDDAT_AWDDAT_SHIFT         (0)
#define DSMU_CH2AWDDAT_AWDDAT_MASK          (0xFFFF << \
                                             DSMU_CH2AWDDAT_AWDDAT_SHIFT)  /*
                                                                            * Input
                                                                            * channel
                                                                            * watchdog
                                                                            * data
                                                                            */

/******** Bit definition for DSMU_CH2DATIN register  ********/
#define DSMU_CH2DATIN_INDATAT0_SHIFT        (0)
#define DSMU_CH2DATIN_INDATAT0_MASK         (0xFFFF << \
                                             DSMU_CH2DATIN_INDATAT0_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */
#define DSMU_CH2DATIN_INDATAT1_SHIFT        (16)
#define DSMU_CH2DATIN_INDATAT1_MASK         (0xFFFF << \
                                             DSMU_CH2DATIN_INDATAT1_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              *
                                                                              *
                                                                              *
                                                                              * or
                                                                              *
                                                                              *
                                                                              *
                                                                              * following
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */

/******** Bit definition for DSMU_CH3CFG1 register  ********/
#define DSMU_CH3CFG1_SITP_SHIFT             (0)
#define DSMU_CH3CFG1_SITP_MASK              (0x3 << DSMU_CH3CFG1_SITP_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Serial
                                                                              *
                                                                              *
                                                                              *
                                                                              * interface
                                                                              *
                                                                              *
                                                                              *
                                                                              * type
                                                                              */
#define DSMU_CH3CFG1_SPICLKSEL_SHIFT        (2)
#define DSMU_CH3CFG1_SPICLKSEL_MASK         (0x3 << \
                                             DSMU_CH3CFG1_SPICLKSEL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SPI
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * source
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH3CFG1_SCDETEN                (1 << 5)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Short-circuit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH3CFG1_CLKABEN                (1 << 6)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * absence
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH3CFG1_CHEN                   (1 << 7)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 */
#define DSMU_CH3CFG1_CHINSEL                (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * inputs
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH3CFG1_DATMUX_SHIFT           (12)
#define DSMU_CH3CFG1_DATMUX_MASK            (0x3 << DSMU_CH3CFG1_DATMUX_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * multiplexer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH3CFG1_DATPACK_SHIFT          (14)
#define DSMU_CH3CFG1_DATPACK_MASK           (0x3 << \
                                             DSMU_CH3CFG1_DATPACK_SHIFT) /*
                                                                          * Data
                                                                          * packing
                                                                          * config
                                                                          * in
                                                                          * input
                                                                          * data
                                                                          * register
                                                                          */

/******** Bit definition for DSMU_CH3CFG2 register  ********/
#define DSMU_CH3CFG2_DATRBS_SHIFT           (3)
#define DSMU_CH3CFG2_DATRBS_MASK            (0x1F << \
                                             DSMU_CH3CFG2_DATRBS_SHIFT) /*
                                                                         * Data
                                                                         * right
                                                                         * bit-shift
                                                                         * value
                                                                         */
#define DSMU_CH3CFG2_CALOFFSET_SHIFT        (8)
#define DSMU_CH3CFG2_CALOFFSET_MASK         (0xFFFFFF << \
                                             DSMU_CH3CFG2_CALOFFSET_SHIFT)     /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * 24-bit
                                                                                *
                                                                                *
                                                                                *
                                                                                * calibration
                                                                                *
                                                                                *
                                                                                *
                                                                                * CALOFFSET
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                */

/******** Bit definition for DSMU_CH3AWDSCDET register  ********/
#define DSMU_CH3AWDSCDET_SCDETTH_SHIFT      (0)
#define DSMU_CH3AWDSCDET_SCDETTH_MASK       (0xFF << \
                                             DSMU_CH3AWDSCDET_SCDETTH_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * short-circuit
                                                                                *
                                                                                *
                                                                                *
                                                                                * detector
                                                                                *
                                                                                *
                                                                                *
                                                                                * threshold
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                *
                                                                                *
                                                                                *
                                                                                * for
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH3AWDSCDET_BKSCDET_SHIFT      (12)
#define DSMU_CH3AWDSCDET_BKSCDET_MASK       (0xF << \
                                             DSMU_CH3AWDSCDET_BKSCDET_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Break
                                                                               *
                                                                               *
                                                                               *
                                                                               * signal
                                                                               *
                                                                               *
                                                                               *
                                                                               * assignment
                                                                               *
                                                                               *
                                                                               *
                                                                               * for
                                                                               *
                                                                               *
                                                                               *
                                                                               * short-circuit
                                                                               *
                                                                               *
                                                                               *
                                                                               * detector
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */
#define DSMU_CH3AWDSCDET_AWDFOSR_SHIFT      (16)
#define DSMU_CH3AWDSCDET_AWDFOSR_MASK       (0x1F << \
                                             DSMU_CH3AWDSCDET_AWDFOSR_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Analog
                                                                                *
                                                                                *
                                                                                *
                                                                                * watchdog
                                                                                *
                                                                                *
                                                                                *
                                                                                * filter
                                                                                *
                                                                                *
                                                                                *
                                                                                * oversampling
                                                                                *
                                                                                *
                                                                                *
                                                                                * ratio
                                                                                *
                                                                                *
                                                                                *
                                                                                * (decimation
                                                                                *
                                                                                *
                                                                                *
                                                                                * rate)
                                                                                *
                                                                                *
                                                                                *
                                                                                * on
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH3AWDSCDET_AWDFORD_SHIFT      (22)
#define DSMU_CH3AWDSCDET_AWDFORD_MASK       (0x3 << \
                                             DSMU_CH3AWDSCDET_AWDFORD_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Analog
                                                                               *
                                                                               *
                                                                               *
                                                                               * watchdog
                                                                               *
                                                                               *
                                                                               *
                                                                               * Sinc
                                                                               *
                                                                               *
                                                                               *
                                                                               * filter
                                                                               *
                                                                               *
                                                                               *
                                                                               * order
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */

/******** Bit definition for DSMU_CH3AWDDAT register  ********/
#define DSMU_CH3AWDDAT_AWDDAT_SHIFT         (0)
#define DSMU_CH3AWDDAT_AWDDAT_MASK          (0xFFFF << \
                                             DSMU_CH3AWDDAT_AWDDAT_SHIFT)  /*
                                                                            * Input
                                                                            * channel
                                                                            * watchdog
                                                                            * data
                                                                            */

/******** Bit definition for DSMU_CH3DATIN register  ********/
#define DSMU_CH3DATIN_INDATAT0_SHIFT        (0)
#define DSMU_CH3DATIN_INDATAT0_MASK         (0xFFFF << \
                                             DSMU_CH3DATIN_INDATAT0_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */
#define DSMU_CH3DATIN_INDATAT1_SHIFT        (16)
#define DSMU_CH3DATIN_INDATAT1_MASK         (0xFFFF << \
                                             DSMU_CH3DATIN_INDATAT1_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              *
                                                                              *
                                                                              *
                                                                              * or
                                                                              *
                                                                              *
                                                                              *
                                                                              * following
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */

/******** Bit definition for DSMU_CH4CFG1 register  ********/
#define DSMU_CH4CFG1_SITP_SHIFT             (0)
#define DSMU_CH4CFG1_SITP_MASK              (0x3 << DSMU_CH4CFG1_SITP_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Serial
                                                                              *
                                                                              *
                                                                              *
                                                                              * interface
                                                                              *
                                                                              *
                                                                              *
                                                                              * type
                                                                              */
#define DSMU_CH4CFG1_SPICLKSEL_SHIFT        (2)
#define DSMU_CH4CFG1_SPICLKSEL_MASK         (0x3 << \
                                             DSMU_CH4CFG1_SPICLKSEL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SPI
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * source
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH4CFG1_SCDETEN                (1 << 5)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Short-circuit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH4CFG1_CLKABEN                (1 << 6)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * absence
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH4CFG1_CHEN                   (1 << 7)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 */
#define DSMU_CH4CFG1_CHINSEL                (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * inputs
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH4CFG1_DATMUX_SHIFT           (12)
#define DSMU_CH4CFG1_DATMUX_MASK            (0x3 << DSMU_CH4CFG1_DATMUX_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * multiplexer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH4CFG1_DATPACK_SHIFT          (14)
#define DSMU_CH4CFG1_DATPACK_MASK           (0x3 << \
                                             DSMU_CH4CFG1_DATPACK_SHIFT) /*
                                                                          * Data
                                                                          * packing
                                                                          * config
                                                                          * in
                                                                          * input
                                                                          * data
                                                                          * register
                                                                          */

/******** Bit definition for DSMU_CH4CFG2 register  ********/
#define DSMU_CH4CFG2_DATRBS_SHIFT           (3)
#define DSMU_CH4CFG2_DATRBS_MASK            (0x1F << \
                                             DSMU_CH4CFG2_DATRBS_SHIFT) /*
                                                                         * Data
                                                                         * right
                                                                         * bit-shift
                                                                         * value
                                                                         */
#define DSMU_CH4CFG2_CALOFFSET_SHIFT        (8)
#define DSMU_CH4CFG2_CALOFFSET_MASK         (0xFFFFFF << \
                                             DSMU_CH4CFG2_CALOFFSET_SHIFT)     /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * 24-bit
                                                                                *
                                                                                *
                                                                                *
                                                                                * calibration
                                                                                *
                                                                                *
                                                                                *
                                                                                * CALOFFSET
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                */

/******** Bit definition for DSMU_CH4AWDSCDET register  ********/
#define DSMU_CH4AWDSCDET_SCDETTH_SHIFT      (0)
#define DSMU_CH4AWDSCDET_SCDETTH_MASK       (0xFF << \
                                             DSMU_CH4AWDSCDET_SCDETTH_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * short-circuit
                                                                                *
                                                                                *
                                                                                *
                                                                                * detector
                                                                                *
                                                                                *
                                                                                *
                                                                                * threshold
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                *
                                                                                *
                                                                                *
                                                                                * for
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH4AWDSCDET_BKSCDET_SHIFT      (12)
#define DSMU_CH4AWDSCDET_BKSCDET_MASK       (0xF << \
                                             DSMU_CH4AWDSCDET_BKSCDET_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Break
                                                                               *
                                                                               *
                                                                               *
                                                                               * signal
                                                                               *
                                                                               *
                                                                               *
                                                                               * assignment
                                                                               *
                                                                               *
                                                                               *
                                                                               * for
                                                                               *
                                                                               *
                                                                               *
                                                                               * short-circuit
                                                                               *
                                                                               *
                                                                               *
                                                                               * detector
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */
#define DSMU_CH4AWDSCDET_AWDFOSR_SHIFT      (16)
#define DSMU_CH4AWDSCDET_AWDFOSR_MASK       (0x1F << \
                                             DSMU_CH4AWDSCDET_AWDFOSR_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Analog
                                                                                *
                                                                                *
                                                                                *
                                                                                * watchdog
                                                                                *
                                                                                *
                                                                                *
                                                                                * filter
                                                                                *
                                                                                *
                                                                                *
                                                                                * oversampling
                                                                                *
                                                                                *
                                                                                *
                                                                                * ratio
                                                                                *
                                                                                *
                                                                                *
                                                                                * (decimation
                                                                                *
                                                                                *
                                                                                *
                                                                                * rate)
                                                                                *
                                                                                *
                                                                                *
                                                                                * on
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH4AWDSCDET_AWDFORD_SHIFT      (22)
#define DSMU_CH4AWDSCDET_AWDFORD_MASK       (0x3 << \
                                             DSMU_CH4AWDSCDET_AWDFORD_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Analog
                                                                               *
                                                                               *
                                                                               *
                                                                               * watchdog
                                                                               *
                                                                               *
                                                                               *
                                                                               * Sinc
                                                                               *
                                                                               *
                                                                               *
                                                                               * filter
                                                                               *
                                                                               *
                                                                               *
                                                                               * order
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */

/******** Bit definition for DSMU_CH4AWDDAT register  ********/
#define DSMU_CH4AWDDAT_AWDDAT_SHIFT         (0)
#define DSMU_CH4AWDDAT_AWDDAT_MASK          (0xFFFF << \
                                             DSMU_CH4AWDDAT_AWDDAT_SHIFT)  /*
                                                                            * Input
                                                                            * channel
                                                                            * watchdog
                                                                            * data
                                                                            */

/******** Bit definition for DSMU_CH4DATIN register  ********/
#define DSMU_CH4DATIN_INDATAT0_SHIFT        (0)
#define DSMU_CH4DATIN_INDATAT0_MASK         (0xFFFF << \
                                             DSMU_CH4DATIN_INDATAT0_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */
#define DSMU_CH4DATIN_INDATAT1_SHIFT        (16)
#define DSMU_CH4DATIN_INDATAT1_MASK         (0xFFFF << \
                                             DSMU_CH4DATIN_INDATAT1_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              *
                                                                              *
                                                                              *
                                                                              * or
                                                                              *
                                                                              *
                                                                              *
                                                                              * following
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */

/******** Bit definition for DSMU_CH5CFG1 register  ********/
#define DSMU_CH5CFG1_SITP_SHIFT             (0)
#define DSMU_CH5CFG1_SITP_MASK              (0x3 << DSMU_CH5CFG1_SITP_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Serial
                                                                              *
                                                                              *
                                                                              *
                                                                              * interface
                                                                              *
                                                                              *
                                                                              *
                                                                              * type
                                                                              */
#define DSMU_CH5CFG1_SPICLKSEL_SHIFT        (2)
#define DSMU_CH5CFG1_SPICLKSEL_MASK         (0x3 << \
                                             DSMU_CH5CFG1_SPICLKSEL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SPI
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * source
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH5CFG1_SCDETEN                (1 << 5)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Short-circuit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH5CFG1_CLKABEN                (1 << 6)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * absence
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH5CFG1_CHEN                   (1 << 7)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 */
#define DSMU_CH5CFG1_CHINSEL                (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * inputs
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH5CFG1_DATMUX_SHIFT           (12)
#define DSMU_CH5CFG1_DATMUX_MASK            (0x3 << DSMU_CH5CFG1_DATMUX_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * multiplexer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH5CFG1_DATPACK_SHIFT          (14)
#define DSMU_CH5CFG1_DATPACK_MASK           (0x3 << \
                                             DSMU_CH5CFG1_DATPACK_SHIFT) /*
                                                                          * Data
                                                                          * packing
                                                                          * config
                                                                          * in
                                                                          * input
                                                                          * data
                                                                          * register
                                                                          */

/******** Bit definition for DSMU_CH5CFG2 register  ********/
#define DSMU_CH5CFG2_DATRBS_SHIFT           (3)
#define DSMU_CH5CFG2_DATRBS_MASK            (0x1F << \
                                             DSMU_CH5CFG2_DATRBS_SHIFT) /*
                                                                         * Data
                                                                         * right
                                                                         * bit-shift
                                                                         * value
                                                                         */
#define DSMU_CH5CFG2_CALOFFSET_SHIFT        (8)
#define DSMU_CH5CFG2_CALOFFSET_MASK         (0xFFFFFF << \
                                             DSMU_CH5CFG2_CALOFFSET_SHIFT)     /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * 24-bit
                                                                                *
                                                                                *
                                                                                *
                                                                                * calibration
                                                                                *
                                                                                *
                                                                                *
                                                                                * CALOFFSET
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                */

/******** Bit definition for DSMU_CH5AWDSCDET register  ********/
#define DSMU_CH5AWDSCDET_SCDETTH_SHIFT      (0)
#define DSMU_CH5AWDSCDET_SCDETTH_MASK       (0xFF << \
                                             DSMU_CH5AWDSCDET_SCDETTH_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * short-circuit
                                                                                *
                                                                                *
                                                                                *
                                                                                * detector
                                                                                *
                                                                                *
                                                                                *
                                                                                * threshold
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                *
                                                                                *
                                                                                *
                                                                                * for
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH5AWDSCDET_BKSCDET_SHIFT      (12)
#define DSMU_CH5AWDSCDET_BKSCDET_MASK       (0xF << \
                                             DSMU_CH5AWDSCDET_BKSCDET_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Break
                                                                               *
                                                                               *
                                                                               *
                                                                               * signal
                                                                               *
                                                                               *
                                                                               *
                                                                               * assignment
                                                                               *
                                                                               *
                                                                               *
                                                                               * for
                                                                               *
                                                                               *
                                                                               *
                                                                               * short-circuit
                                                                               *
                                                                               *
                                                                               *
                                                                               * detector
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */
#define DSMU_CH5AWDSCDET_AWDFOSR_SHIFT      (16)
#define DSMU_CH5AWDSCDET_AWDFOSR_MASK       (0x1F << \
                                             DSMU_CH5AWDSCDET_AWDFOSR_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Analog
                                                                                *
                                                                                *
                                                                                *
                                                                                * watchdog
                                                                                *
                                                                                *
                                                                                *
                                                                                * filter
                                                                                *
                                                                                *
                                                                                *
                                                                                * oversampling
                                                                                *
                                                                                *
                                                                                *
                                                                                * ratio
                                                                                *
                                                                                *
                                                                                *
                                                                                * (decimation
                                                                                *
                                                                                *
                                                                                *
                                                                                * rate)
                                                                                *
                                                                                *
                                                                                *
                                                                                * on
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH5AWDSCDET_AWDFORD_SHIFT      (22)
#define DSMU_CH5AWDSCDET_AWDFORD_MASK       (0x3 << \
                                             DSMU_CH5AWDSCDET_AWDFORD_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Analog
                                                                               *
                                                                               *
                                                                               *
                                                                               * watchdog
                                                                               *
                                                                               *
                                                                               *
                                                                               * Sinc
                                                                               *
                                                                               *
                                                                               *
                                                                               * filter
                                                                               *
                                                                               *
                                                                               *
                                                                               * order
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */

/******** Bit definition for DSMU_CH5AWDDAT register  ********/
#define DSMU_CH5AWDDAT_AWDDAT_SHIFT         (0)
#define DSMU_CH5AWDDAT_AWDDAT_MASK          (0xFFFF << \
                                             DSMU_CH5AWDDAT_AWDDAT_SHIFT)  /*
                                                                            * Input
                                                                            * channel
                                                                            * watchdog
                                                                            * data
                                                                            */

/******** Bit definition for DSMU_CH5DATIN register  ********/
#define DSMU_CH5DATIN_INDATAT0_SHIFT        (0)
#define DSMU_CH5DATIN_INDATAT0_MASK         (0xFFFF << \
                                             DSMU_CH5DATIN_INDATAT0_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */
#define DSMU_CH5DATIN_INDATAT1_SHIFT        (16)
#define DSMU_CH5DATIN_INDATAT1_MASK         (0xFFFF << \
                                             DSMU_CH5DATIN_INDATAT1_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              *
                                                                              *
                                                                              *
                                                                              * or
                                                                              *
                                                                              *
                                                                              *
                                                                              * following
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */

/******** Bit definition for DSMU_CH6CFG1 register  ********/
#define DSMU_CH6CFG1_SITP_SHIFT             (0)
#define DSMU_CH6CFG1_SITP_MASK              (0x3 << DSMU_CH6CFG1_SITP_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Serial
                                                                              *
                                                                              *
                                                                              *
                                                                              * interface
                                                                              *
                                                                              *
                                                                              *
                                                                              * type
                                                                              */
#define DSMU_CH6CFG1_SPICLKSEL_SHIFT        (2)
#define DSMU_CH6CFG1_SPICLKSEL_MASK         (0x3 << \
                                             DSMU_CH6CFG1_SPICLKSEL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SPI
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * source
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH6CFG1_SCDETEN                (1 << 5)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Short-circuit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH6CFG1_CLKABEN                (1 << 6)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * absence
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH6CFG1_CHEN                   (1 << 7)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 */
#define DSMU_CH6CFG1_CHINSEL                (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * inputs
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH6CFG1_DATMUX_SHIFT           (12)
#define DSMU_CH6CFG1_DATMUX_MASK            (0x3 << DSMU_CH6CFG1_DATMUX_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * multiplexer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH6CFG1_DATPACK_SHIFT          (14)
#define DSMU_CH6CFG1_DATPACK_MASK           (0x3 << \
                                             DSMU_CH6CFG1_DATPACK_SHIFT) /*
                                                                          * Data
                                                                          * packing
                                                                          * config
                                                                          * in
                                                                          * input
                                                                          * data
                                                                          * register
                                                                          */

/******** Bit definition for DSMU_CH6CFG2 register  ********/
#define DSMU_CH6CFG2_DATRBS_SHIFT           (3)
#define DSMU_CH6CFG2_DATRBS_MASK            (0x1F << \
                                             DSMU_CH6CFG2_DATRBS_SHIFT) /*
                                                                         * Data
                                                                         * right
                                                                         * bit-shift
                                                                         * value
                                                                         */
#define DSMU_CH6CFG2_CALOFFSET_SHIFT        (8)
#define DSMU_CH6CFG2_CALOFFSET_MASK         (0xFFFFFF << \
                                             DSMU_CH6CFG2_CALOFFSET_SHIFT)     /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * 24-bit
                                                                                *
                                                                                *
                                                                                *
                                                                                * calibration
                                                                                *
                                                                                *
                                                                                *
                                                                                * CALOFFSET
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                */

/******** Bit definition for DSMU_CH6AWDSCDET register  ********/
#define DSMU_CH6AWDSCDET_SCDETTH_SHIFT      (0)
#define DSMU_CH6AWDSCDET_SCDETTH_MASK       (0xFF << \
                                             DSMU_CH6AWDSCDET_SCDETTH_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * short-circuit
                                                                                *
                                                                                *
                                                                                *
                                                                                * detector
                                                                                *
                                                                                *
                                                                                *
                                                                                * threshold
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                *
                                                                                *
                                                                                *
                                                                                * for
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH6AWDSCDET_BKSCDET_SHIFT      (12)
#define DSMU_CH6AWDSCDET_BKSCDET_MASK       (0xF << \
                                             DSMU_CH6AWDSCDET_BKSCDET_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Break
                                                                               *
                                                                               *
                                                                               *
                                                                               * signal
                                                                               *
                                                                               *
                                                                               *
                                                                               * assignment
                                                                               *
                                                                               *
                                                                               *
                                                                               * for
                                                                               *
                                                                               *
                                                                               *
                                                                               * short-circuit
                                                                               *
                                                                               *
                                                                               *
                                                                               * detector
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */
#define DSMU_CH6AWDSCDET_AWDFOSR_SHIFT      (16)
#define DSMU_CH6AWDSCDET_AWDFOSR_MASK       (0x1F << \
                                             DSMU_CH6AWDSCDET_AWDFOSR_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Analog
                                                                                *
                                                                                *
                                                                                *
                                                                                * watchdog
                                                                                *
                                                                                *
                                                                                *
                                                                                * filter
                                                                                *
                                                                                *
                                                                                *
                                                                                * oversampling
                                                                                *
                                                                                *
                                                                                *
                                                                                * ratio
                                                                                *
                                                                                *
                                                                                *
                                                                                * (decimation
                                                                                *
                                                                                *
                                                                                *
                                                                                * rate)
                                                                                *
                                                                                *
                                                                                *
                                                                                * on
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH6AWDSCDET_AWDFORD_SHIFT      (22)
#define DSMU_CH6AWDSCDET_AWDFORD_MASK       (0x3 << \
                                             DSMU_CH6AWDSCDET_AWDFORD_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Analog
                                                                               *
                                                                               *
                                                                               *
                                                                               * watchdog
                                                                               *
                                                                               *
                                                                               *
                                                                               * Sinc
                                                                               *
                                                                               *
                                                                               *
                                                                               * filter
                                                                               *
                                                                               *
                                                                               *
                                                                               * order
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */

/******** Bit definition for DSMU_CH6AWDDAT register  ********/
#define DSMU_CH6AWDDAT_AWDDAT_SHIFT         (0)
#define DSMU_CH6AWDDAT_AWDDAT_MASK          (0xFFFF << \
                                             DSMU_CH6AWDDAT_AWDDAT_SHIFT)  /*
                                                                            * Input
                                                                            * channel
                                                                            * watchdog
                                                                            * data
                                                                            */

/******** Bit definition for DSMU_CH6DATIN register  ********/
#define DSMU_CH6DATIN_INDATAT0_SHIFT        (0)
#define DSMU_CH6DATIN_INDATAT0_MASK         (0xFFFF << \
                                             DSMU_CH6DATIN_INDATAT0_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */
#define DSMU_CH6DATIN_INDATAT1_SHIFT        (16)
#define DSMU_CH6DATIN_INDATAT1_MASK         (0xFFFF << \
                                             DSMU_CH6DATIN_INDATAT1_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              *
                                                                              *
                                                                              *
                                                                              * or
                                                                              *
                                                                              *
                                                                              *
                                                                              * following
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */

/******** Bit definition for DSMU_CH7CFG1 register  ********/
#define DSMU_CH7CFG1_SITP_SHIFT             (0)
#define DSMU_CH7CFG1_SITP_MASK              (0x3 << DSMU_CH7CFG1_SITP_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Serial
                                                                              *
                                                                              *
                                                                              *
                                                                              * interface
                                                                              *
                                                                              *
                                                                              *
                                                                              * type
                                                                              */
#define DSMU_CH7CFG1_SPICLKSEL_SHIFT        (2)
#define DSMU_CH7CFG1_SPICLKSEL_MASK         (0x3 << \
                                             DSMU_CH7CFG1_SPICLKSEL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SPI
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * source
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH7CFG1_SCDETEN                (1 << 5)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Short-circuit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH7CFG1_CLKABEN                (1 << 6)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Clock
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * absence
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * detector
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH7CFG1_CHEN                   (1 << 7)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 */
#define DSMU_CH7CFG1_CHINSEL                (1 << 8)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * inputs
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */
#define DSMU_CH7CFG1_DATMUX_SHIFT           (12)
#define DSMU_CH7CFG1_DATMUX_MASK            (0x3 << DSMU_CH7CFG1_DATMUX_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * multiplexer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * current
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_CH7CFG1_DATPACK_SHIFT          (14)
#define DSMU_CH7CFG1_DATPACK_MASK           (0x3 << \
                                             DSMU_CH7CFG1_DATPACK_SHIFT) /*
                                                                          * Data
                                                                          * packing
                                                                          * config
                                                                          * in
                                                                          * input
                                                                          * data
                                                                          * register
                                                                          */

/******** Bit definition for DSMU_CH7CFG2 register  ********/
#define DSMU_CH7CFG2_DATRBS_SHIFT           (3)
#define DSMU_CH7CFG2_DATRBS_MASK            (0x1F << \
                                             DSMU_CH7CFG2_DATRBS_SHIFT) /*
                                                                         * Data
                                                                         * right
                                                                         * bit-shift
                                                                         * value
                                                                         */
#define DSMU_CH7CFG2_CALOFFSET_SHIFT        (8)
#define DSMU_CH7CFG2_CALOFFSET_MASK         (0xFFFFFF << \
                                             DSMU_CH7CFG2_CALOFFSET_SHIFT)     /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * 24-bit
                                                                                *
                                                                                *
                                                                                *
                                                                                * calibration
                                                                                *
                                                                                *
                                                                                *
                                                                                * CALOFFSET
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                */

/******** Bit definition for DSMU_CH7AWDSCDET register  ********/
#define DSMU_CH7AWDSCDET_SCDETTH_SHIFT      (0)
#define DSMU_CH7AWDSCDET_SCDETTH_MASK       (0xFF << \
                                             DSMU_CH7AWDSCDET_SCDETTH_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * short-circuit
                                                                                *
                                                                                *
                                                                                *
                                                                                * detector
                                                                                *
                                                                                *
                                                                                *
                                                                                * threshold
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                *
                                                                                *
                                                                                *
                                                                                * for
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH7AWDSCDET_BKSCDET_SHIFT      (12)
#define DSMU_CH7AWDSCDET_BKSCDET_MASK       (0xF << \
                                             DSMU_CH7AWDSCDET_BKSCDET_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Break
                                                                               *
                                                                               *
                                                                               *
                                                                               * signal
                                                                               *
                                                                               *
                                                                               *
                                                                               * assignment
                                                                               *
                                                                               *
                                                                               *
                                                                               * for
                                                                               *
                                                                               *
                                                                               *
                                                                               * short-circuit
                                                                               *
                                                                               *
                                                                               *
                                                                               * detector
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */
#define DSMU_CH7AWDSCDET_AWDFOSR_SHIFT      (16)
#define DSMU_CH7AWDSCDET_AWDFOSR_MASK       (0x1F << \
                                             DSMU_CH7AWDSCDET_AWDFOSR_SHIFT)   /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Analog
                                                                                *
                                                                                *
                                                                                *
                                                                                * watchdog
                                                                                *
                                                                                *
                                                                                *
                                                                                * filter
                                                                                *
                                                                                *
                                                                                *
                                                                                * oversampling
                                                                                *
                                                                                *
                                                                                *
                                                                                * ratio
                                                                                *
                                                                                *
                                                                                *
                                                                                * (decimation
                                                                                *
                                                                                *
                                                                                *
                                                                                * rate)
                                                                                *
                                                                                *
                                                                                *
                                                                                * on
                                                                                *
                                                                                *
                                                                                *
                                                                                * current
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                */
#define DSMU_CH7AWDSCDET_AWDFORD_SHIFT      (22)
#define DSMU_CH7AWDSCDET_AWDFORD_MASK       (0x3 << \
                                             DSMU_CH7AWDSCDET_AWDFORD_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * Analog
                                                                               *
                                                                               *
                                                                               *
                                                                               * watchdog
                                                                               *
                                                                               *
                                                                               *
                                                                               * Sinc
                                                                               *
                                                                               *
                                                                               *
                                                                               * filter
                                                                               *
                                                                               *
                                                                               *
                                                                               * order
                                                                               *
                                                                               *
                                                                               *
                                                                               * on
                                                                               *
                                                                               *
                                                                               *
                                                                               * current
                                                                               *
                                                                               *
                                                                               *
                                                                               * channel
                                                                               */

/******** Bit definition for DSMU_CH7AWDDAT register  ********/
#define DSMU_CH7AWDDAT_AWDDAT_SHIFT         (0)
#define DSMU_CH7AWDDAT_AWDDAT_MASK          (0xFFFF << \
                                             DSMU_CH7AWDDAT_AWDDAT_SHIFT)  /*
                                                                            * Input
                                                                            * channel
                                                                            * watchdog
                                                                            * data
                                                                            */

/******** Bit definition for DSMU_CH7DATIN register  ********/
#define DSMU_CH7DATIN_INDATAT0_SHIFT        (0)
#define DSMU_CH7DATIN_INDATAT0_MASK         (0xFFFF << \
                                             DSMU_CH7DATIN_INDATAT0_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */
#define DSMU_CH7DATIN_INDATAT1_SHIFT        (16)
#define DSMU_CH7DATIN_INDATAT1_MASK         (0xFFFF << \
                                             DSMU_CH7DATIN_INDATAT1_SHIFT)   /*
                                                                              *
                                                                              *
                                                                              *
                                                                              * Input
                                                                              *
                                                                              *
                                                                              *
                                                                              * data
                                                                              *
                                                                              *
                                                                              *
                                                                              * for
                                                                              *
                                                                              *
                                                                              *
                                                                              * current
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              *
                                                                              *
                                                                              *
                                                                              * or
                                                                              *
                                                                              *
                                                                              *
                                                                              * following
                                                                              *
                                                                              *
                                                                              *
                                                                              * channel
                                                                              */

/******** Bit definition for DSMU_FLT0CTRL1 register  ********/
#define DSMU_FLT0CTRL1_DFLTEN               (1 << 0)    /* DSMU filter enable
                                                         */
#define DSMU_FLT0CTRL1_JSWSTART             (1 << 1)    /* Start a conversion
                                                         * of the injected
                                                         * group of channels
                                                         */
#define DSMU_FLT0CTRL1_JSYNC                (1 << 3)    /* Launch an injected
                                                         * conversion
                                                         * synchronously with
                                                         * the DSMU_FLT0
                                                         * JSWSTART event */
#define DSMU_FLT0CTRL1_JSCAN                (1 << 4)    /* Injected scanning
                                                         * conversion mode */
#define DSMU_FLT0CTRL1_JDMAEN               (1 << 5)    /* DMA channel enabled
                                                         * to read data for
                                                         * the injected
                                                         * conversion */
#define DSMU_FLT0CTRL1_JEXTSEL_SHIFT        (8)
#define DSMU_FLT0CTRL1_JEXTSEL_MASK         (0x1F << \
                                             DSMU_FLT0CTRL1_JEXTSEL_SHIFT) /*
                                                                            * External
                                                                            * trigger
                                                                            * signal
                                                                            * selection
                                                                            * for
                                                                            * launching
                                                                            * injected
                                                                            * conversions
                                                                            */
#define DSMU_FLT0CTRL1_JEXTEN_SHIFT         (13)
#define DSMU_FLT0CTRL1_JEXTEN_MASK          (0x3 << \
                                             DSMU_FLT0CTRL1_JEXTEN_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * External
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * and
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * active
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * edge
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * injected
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT0CTRL1_RSWSTART             (1 << 17)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Software
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * of
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * a
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * the
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_FLT0CTRL1_RCONT                (1 << 18)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Continuous
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * mode
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * config
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT0CTRL1_RSYNC                (1 << 19)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Launch
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * synchronously
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * with
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSMU_FLT0
                                                                                 */
#define DSMU_FLT0CTRL1_RDMAEN               (1 << 21)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMA
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enabled
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * to
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * read
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * data
                                                                                 */
#define DSMU_FLT0CTRL1_RCH_SHIFT            (24)
#define DSMU_FLT0CTRL1_RCH_MASK             (0x7 << DSMU_FLT0CTRL1_RCH_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_FLT0CTRL1_FAST                 (1 << 29)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Fast
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * mode
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT0CTRL1_AWDFSEL              (1 << 30)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Analog
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * watchdog
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */

/******** Bit definition for DSMU_FLT0CTRL2 register  ********/
#define DSMU_FLT0CTRL2_JEOCIEN              (1 << 0)    /* Injected conversion
                                                         * end interrupt
                                                         * enable */
#define DSMU_FLT0CTRL2_REOCIEN              (1 << 1)    /* Regular conversion
                                                         * end interrupt
                                                         * enable */
#define DSMU_FLT0CTRL2_JOVRIEN              (1 << 2)    /* Injected data
                                                         * overrun interrupt
                                                         * enable */
#define DSMU_FLT0CTRL2_ROVRIEN              (1 << 3)    /* Regular data
                                                         * overrun interrupt
                                                         * enable */
#define DSMU_FLT0CTRL2_AWDIEN               (1 << 4)    /* Analog watchdog
                                                         * interrupt enable */
#define DSMU_FLT0CTRL2_SCDETIEN             (1 << 5)    /* Short-circuit
                                                         * detector interrupt
                                                         * enable */
#define DSMU_FLT0CTRL2_CLKABIEN             (1 << 6)    /* Clock absence
                                                         * interrupt enable */
#define DSMU_FLT0CTRL2_EXDETCH_SHIFT        (8)
#define DSMU_FLT0CTRL2_EXDETCH_MASK         (0xFF << \
                                             DSMU_FLT0CTRL2_EXDETCH_SHIFT) /*
                                                                            * Extremes
                                                                            * detector
                                                                            * channel
                                                                            * selection
                                                                            */
#define DSMU_FLT0CTRL2_AWDCH_SHIFT          (16)
#define DSMU_FLT0CTRL2_AWDCH_MASK           (0xFF << \
                                             DSMU_FLT0CTRL2_AWDCH_SHIFT) /*
                                                                          * AWDAnalog
                                                                          * watchdog
                                                                          * channel
                                                                          * selection
                                                                          */

/******** Bit definition for DSMU_FLT0STS register  ********/
#define DSMU_FLT0STS_JEOCF                  (1 << 0)    /* Injected conversion
                                                         * end event flag */
#define DSMU_FLT0STS_REOCF                  (1 << 1)    /* Regular conversion
                                                         * end event flag */
#define DSMU_FLT0STS_JOVRF                  (1 << 2)    /* Injected conversion
                                                         * overrun flag */
#define DSMU_FLT0STS_ROVRF                  (1 << 3)    /* Regular conversion
                                                         * overrun flag */
#define DSMU_FLT0STS_AWDF                   (1 << 4)    /* Analog watchdog
                                                         * event flag */
#define DSMU_FLT0STS_JCIP                   (1 << 13)   /* Injected conversion
                                                         * active status */
#define DSMU_FLT0STS_RCIP                   (1 << 14)   /* Regular conversion
                                                         * active status */
#define DSMU_FLT0STS_CLKABF_SHIFT           (16)
#define DSMU_FLT0STS_CLKABF_MASK            (0xFF << \
                                             DSMU_FLT0STS_CLKABF_SHIFT) /*
                                                                         * Clock
                                                                         * absence
                                                                         * event
                                                                         * flag
                                                                         */
#define DSMU_FLT0STS_SCDETF_SHIFT           (24)
#define DSMU_FLT0STS_SCDETF_MASK            (0xFF << \
                                             DSMU_FLT0STS_SCDETF_SHIFT) /*
                                                                         * short-circuit
                                                                         * event
                                                                         * flag
                                                                         */

/******** Bit definition for DSMU_FLT0INTCLR register  ********/
#define DSMU_FLT0INTCLR_CLRJOVRF            (1 << 2)    /* Clear the injected
                                                         * conversion overrun
                                                         * flag */
#define DSMU_FLT0INTCLR_CLRROVRF            (1 << 3)    /* Clear the regular
                                                         * conversion overrun
                                                         * flag */
#define DSMU_FLT0INTCLR_CLRCLKABF_SHIFT     (16)
#define DSMU_FLT0INTCLR_CLRCLKABF_MASK      (0xFF << \
                                             DSMU_FLT0INTCLR_CLRCLKABF_SHIFT)    /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * Clear
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * the
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * clock
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * absence
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * flag
                                                                                  */
#define DSMU_FLT0INTCLR_CLRSCDETF_SHIFT     (24)
#define DSMU_FLT0INTCLR_CLRSCDETF_MASK      (0xFF << \
                                             DSMU_FLT0INTCLR_CLRSCDETF_SHIFT)    /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * Clear
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * the
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * short-circuit
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * event
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * flag
                                                                                  */

/******** Bit definition for DSMU_FLT0JCHG register  ********/
#define DSMU_FLT0JCHG_JCHG_SHIFT            (0)
#define DSMU_FLT0JCHG_JCHG_MASK             (0xFF << DSMU_FLT0JCHG_JCHG_SHIFT) /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Injected
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                *
                                                                                *
                                                                                *
                                                                                * group
                                                                                *
                                                                                *
                                                                                *
                                                                                * selection
                                                                                */

/******** Bit definition for DSMU_FLT0FCTRL register  ********/
#define DSMU_FLT0FCTRL_IOSR_SHIFT           (0)
#define DSMU_FLT0FCTRL_IOSR_MASK            (0xFF << \
                                             DSMU_FLT0FCTRL_IOSR_SHIFT) /*
                                                                         * Integrator
                                                                         * oversampling
                                                                         * ratio
                                                                         * (averaging
                                                                         * length)
                                                                         */
#define DSMU_FLT0FCTRL_FOSR_SHIFT           (16)
#define DSMU_FLT0FCTRL_FOSR_MASK            (0x3FF << \
                                             DSMU_FLT0FCTRL_FOSR_SHIFT)         /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Sinc
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * filter
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * oversampling
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ratio
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * (decimation
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * rate)
                                                                                 */
#define DSMU_FLT0FCTRL_FORD_SHIFT           (29)
#define DSMU_FLT0FCTRL_FORD_MASK            (0x7 << DSMU_FLT0FCTRL_FORD_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Sinc
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * filter
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * order
                                                                                 */

/******** Bit definition for DSMU_FLT0JDAT register  ********/
#define DSMU_FLT0JDAT_JDATCH_SHIFT          (0)
#define DSMU_FLT0JDAT_JDATCH_MASK           (0x7 << \
                                             DSMU_FLT0JDAT_JDATCH_SHIFT) /*
                                                                          * Injected
                                                                          * channel
                                                                          * most
                                                                          * recently
                                                                          * converted
                                                                          */
#define DSMU_FLT0JDAT_JDAT_SHIFT            (8)
#define DSMU_FLT0JDAT_JDAT_MASK             (0xFFFFFF << \
                                             DSMU_FLT0JDAT_JDAT_SHIFT) /*
                                                                        * Injected
                                                                        * group
                                                                        * conversion
                                                                        * data
                                                                        */

/******** Bit definition for DSMU_FLT0RDAT register  ********/
#define DSMU_FLT0RDAT_RDATCH_SHIFT          (0)
#define DSMU_FLT0RDAT_RDATCH_MASK           (0x7 << \
                                             DSMU_FLT0RDAT_RDATCH_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             * Regular
                                                                             *
                                                                             *
                                                                             * channel
                                                                             *
                                                                             *
                                                                             *
                                                                             * most
                                                                             *
                                                                             *
                                                                             * recently
                                                                             *
                                                                             *
                                                                             *
                                                                             * converted
                                                                             */
#define DSMU_FLT0RDAT_RPEND                 (1 << 4)                        /*
                                                                             *
                                                                             *
                                                                             * Regular
                                                                             *
                                                                             *
                                                                             * channel
                                                                             *
                                                                             *
                                                                             *
                                                                             * pending
                                                                             *
                                                                             *
                                                                             * data
                                                                             */
#define DSMU_FLT0RDAT_RDAT_SHIFT            (8)
#define DSMU_FLT0RDAT_RDAT_MASK             (0xFFFFFF << \
                                             DSMU_FLT0RDAT_RDAT_SHIFT) /*
                                                                        * Regular
                                                                        * channel
                                                                        * conversion
                                                                        * data
                                                                        */

/******** Bit definition for DSMU_FLT0AWDHT register  ********/
#define DSMU_FLT0AWDHT_BKAWDHT_SHIFT        (0)
#define DSMU_FLT0AWDHT_BKAWDHT_MASK         (0xF << \
                                             DSMU_FLT0AWDHT_BKAWDHT_SHIFT) /*
                                                                            * Break
                                                                            * signal
                                                                            * assignment
                                                                            * to
                                                                            * analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            * event
                                                                            */
#define DSMU_FLT0AWDHT_AWDHT_SHIFT          (8)
#define DSMU_FLT0AWDHT_AWDHT_MASK           (0xFFFFFF << \
                                             DSMU_FLT0AWDHT_AWDHT_SHIFT)   /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            */

/******** Bit definition for DSMU_FLT0AWDLT register  ********/
#define DSMU_FLT0AWDLT_BKAWDLT_SHIFT        (0)
#define DSMU_FLT0AWDLT_BKAWDLT_MASK         (0xF << \
                                             DSMU_FLT0AWDLT_BKAWDLT_SHIFT) /*
                                                                            * Break
                                                                            * signal
                                                                            * assignment
                                                                            * to
                                                                            * analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * low
                                                                            * event
                                                                            */
#define DSMU_FLT0AWDLT_AWDLT_SHIFT          (8)
#define DSMU_FLT0AWDLT_AWDLT_MASK           (0xFFFFFF << \
                                             DSMU_FLT0AWDLT_AWDLT_SHIFT)   /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * low
                                                                            */

/******** Bit definition for DSMU_FLT0AWDSTS register  ********/
#define DSMU_FLT0AWDSTS_AWDLTF_SHIFT        (0)
#define DSMU_FLT0AWDSTS_AWDLTF_MASK         (0xFF << \
                                             DSMU_FLT0AWDSTS_AWDLTF_SHIFT) /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * low
                                                                            * flag
                                                                            */
#define DSMU_FLT0AWDSTS_AWDHTF_SHIFT        (8)
#define DSMU_FLT0AWDSTS_AWDHTF_MASK         (0xFF << \
                                             DSMU_FLT0AWDSTS_AWDHTF_SHIFT) /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            * flag
                                                                            */

/******** Bit definition for DSMU_FLT0AWDCLR register  ********/
#define DSMU_FLT0AWDCLR_CLRAWDLTF_SHIFT     (0)
#define DSMU_FLT0AWDCLR_CLRAWDLTF_MASK      (0xFF << \
                                             DSMU_FLT0AWDCLR_CLRAWDLTF_SHIFT)    /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * Clear
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * the
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * analog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * watchdog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * threshold
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * low
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * flag
                                                                                  */
#define DSMU_FLT0AWDCLR_CLRAWDHTF_SHIFT     (8)
#define DSMU_FLT0AWDCLR_CLRAWDHTF_MASK      (0xFF << \
                                             DSMU_FLT0AWDCLR_CLRAWDHTF_SHIFT)    /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * Clear
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * the
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * analog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * watchdog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * threshold
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * high
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * flag
                                                                                  */

/******** Bit definition for DSMU_FLT0EXDETMAX register  ********/
#define DSMU_FLT0EXDETMAX_EXDETMAXCH_SHIFT  (0)
#define DSMU_FLT0EXDETMAX_EXDETMAXCH_MASK   (0x7 <<                              \
                                             DSMU_FLT0EXDETMAX_EXDETMAXCH_SHIFT) \
        /*
         * Extremes
         * detector
         * maximum
         * data
         * channel
         */
#define DSMU_FLT0EXDETMAX_EXDETMAX_SHIFT    (8)
#define DSMU_FLT0EXDETMAX_EXDETMAX_MASK     (0xFFFFFF << \
                                             DSMU_FLT0EXDETMAX_EXDETMAX_SHIFT)         /*
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * Extremes
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * detector
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * maximum
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * value
                                                                                        */

/******** Bit definition for DSMU_FLT0EXDETMIN register  ********/
#define DSMU_FLT0EXDETMIN_EXDETMINCH_SHIFT  (0)
#define DSMU_FLT0EXDETMIN_EXDETMINCH_MASK   (0x7 <<                              \
                                             DSMU_FLT0EXDETMIN_EXDETMINCH_SHIFT) \
        /*
         * Extremes
         * detector
         * minimum
         * data
         * channel
         */
#define DSMU_FLT0EXDETMIN_EXDETMIN_SHIFT    (8)
#define DSMU_FLT0EXDETMIN_EXDETMIN_MASK     (0xFFFFFF << \
                                             DSMU_FLT0EXDETMIN_EXDETMIN_SHIFT)         /*
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * Extremes
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * detector
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * minimum
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * value
                                                                                        */

/******** Bit definition for DSMU_FLT0COVTIM register  ********/
#define DSMU_FLT0COVTIM_COVCNT_SHIFT        (4)
#define DSMU_FLT0COVTIM_COVCNT_MASK         (0xFFFFFFF << \
                                             DSMU_FLT0COVTIM_COVCNT_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * 28-bit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * timer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * counting
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * time
                                                                                 */

/******** Bit definition for DSMU_FLT1CTRL1 register  ********/
#define DSMU_FLT1CTRL1_DFLTEN               (1 << 0)    /* DSMU filter enable
                                                         */
#define DSMU_FLT1CTRL1_JSWSTART             (1 << 1)    /* Start a conversion
                                                         * of the injected
                                                         * group of channels
                                                         */
#define DSMU_FLT1CTRL1_JSYNC                (1 << 3)    /* Launch an injected
                                                         * conversion
                                                         * synchronously with
                                                         * the DSMU_FLT0
                                                         * JSWSTART event */
#define DSMU_FLT1CTRL1_JSCAN                (1 << 4)    /* Injected scanning
                                                         * conversion mode */
#define DSMU_FLT1CTRL1_JDMAEN               (1 << 5)    /* DMA channel enabled
                                                         * to read data for
                                                         * the injected
                                                         * conversion */
#define DSMU_FLT1CTRL1_JEXTSEL_SHIFT        (8)
#define DSMU_FLT1CTRL1_JEXTSEL_MASK         (0x1F << \
                                             DSMU_FLT1CTRL1_JEXTSEL_SHIFT) /*
                                                                            * External
                                                                            * trigger
                                                                            * signal
                                                                            * selection
                                                                            * for
                                                                            * launching
                                                                            * injected
                                                                            * conversions
                                                                            */
#define DSMU_FLT1CTRL1_JEXTEN_SHIFT         (13)
#define DSMU_FLT1CTRL1_JEXTEN_MASK          (0x3 << \
                                             DSMU_FLT1CTRL1_JEXTEN_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * External
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * and
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * active
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * edge
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * injected
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT1CTRL1_RSWSTART             (1 << 17)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Software
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * of
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * a
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * the
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_FLT1CTRL1_RCONT                (1 << 18)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Continuous
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * mode
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * config
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT1CTRL1_RSYNC                (1 << 19)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Launch
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * synchronously
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * with
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSMU_FLT0
                                                                                 */
#define DSMU_FLT1CTRL1_RDMAEN               (1 << 21)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMA
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enabled
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * to
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * read
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * data
                                                                                 */
#define DSMU_FLT1CTRL1_RCH_SHIFT            (24)
#define DSMU_FLT1CTRL1_RCH_MASK             (0x7 << DSMU_FLT1CTRL1_RCH_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_FLT1CTRL1_FAST                 (1 << 29)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Fast
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * mode
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT1CTRL1_AWDFSEL              (1 << 30)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Analog
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * watchdog
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */

/******** Bit definition for DSMU_FLT1CTRL2 register  ********/
#define DSMU_FLT1CTRL2_JEOCIEN              (1 << 0)    /* Injected conversion
                                                         * end interrupt
                                                         * enable */
#define DSMU_FLT1CTRL2_REOCIEN              (1 << 1)    /* Regular conversion
                                                         * end interrupt
                                                         * enable */
#define DSMU_FLT1CTRL2_JOVRIEN              (1 << 2)    /* Injected data
                                                         * overrun interrupt
                                                         * enable */
#define DSMU_FLT1CTRL2_ROVRIEN              (1 << 3)    /* Regular data
                                                         * overrun interrupt
                                                         * enable */
#define DSMU_FLT1CTRL2_AWDIEN               (1 << 4)    /* Analog watchdog
                                                         * interrupt enable */
#define DSMU_FLT1CTRL2_EXDETCH_SHIFT        (8)
#define DSMU_FLT1CTRL2_EXDETCH_MASK         (0xFF << \
                                             DSMU_FLT1CTRL2_EXDETCH_SHIFT) /*
                                                                            * Extremes
                                                                            * detector
                                                                            * channel
                                                                            * selection
                                                                            */
#define DSMU_FLT1CTRL2_AWDCH_SHIFT          (16)
#define DSMU_FLT1CTRL2_AWDCH_MASK           (0xFF << \
                                             DSMU_FLT1CTRL2_AWDCH_SHIFT) /*
                                                                          * AWDAnalog
                                                                          * watchdog
                                                                          * channel
                                                                          * selection
                                                                          */

/******** Bit definition for DSMU_FLT1STS register  ********/
#define DSMU_FLT1STS_JEOCF                  (1 << 0)    /* Injected conversion
                                                         * end event flag */
#define DSMU_FLT1STS_REOCF                  (1 << 1)    /* Regular conversion
                                                         * end event flag */
#define DSMU_FLT1STS_JOVRF                  (1 << 2)    /* Injected conversion
                                                         * overrun flag */
#define DSMU_FLT1STS_ROVRF                  (1 << 3)    /* Regular conversion
                                                         * overrun flag */
#define DSMU_FLT1STS_AWDF                   (1 << 4)    /* Analog watchdog
                                                         * event flag */
#define DSMU_FLT1STS_JCIP                   (1 << 13)   /* Injected conversion
                                                         * active status */
#define DSMU_FLT1STS_RCIP                   (1 << 14)   /* Regular conversion
                                                         * active status */

/******** Bit definition for DSMU_FLT1INTCLR register  ********/
#define DSMU_FLT1INTCLR_CLRJOVRF            (1 << 2)    /* Clear the injected
                                                         * conversion overrun
                                                         * flag */
#define DSMU_FLT1INTCLR_CLRROVRF            (1 << 3)    /* Clear the regular
                                                         * conversion overrun
                                                         * flag */

/******** Bit definition for DSMU_FLT1JCHG register  ********/
#define DSMU_FLT1JCHG_JCHG_SHIFT            (0)
#define DSMU_FLT1JCHG_JCHG_MASK             (0xFF << DSMU_FLT1JCHG_JCHG_SHIFT) /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Injected
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                *
                                                                                *
                                                                                *
                                                                                * group
                                                                                *
                                                                                *
                                                                                *
                                                                                * selection
                                                                                */

/******** Bit definition for DSMU_FLT1FCTRL register  ********/
#define DSMU_FLT1FCTRL_IOSR_SHIFT           (0)
#define DSMU_FLT1FCTRL_IOSR_MASK            (0xFF << \
                                             DSMU_FLT1FCTRL_IOSR_SHIFT) /*
                                                                         * Integrator
                                                                         * oversampling
                                                                         * ratio
                                                                         * (averaging
                                                                         * length)
                                                                         */
#define DSMU_FLT1FCTRL_FOSR_SHIFT           (16)
#define DSMU_FLT1FCTRL_FOSR_MASK            (0x3FF << \
                                             DSMU_FLT1FCTRL_FOSR_SHIFT)         /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Sinc
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * filter
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * oversampling
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ratio
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * (decimation
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * rate)
                                                                                 */
#define DSMU_FLT1FCTRL_FORD_SHIFT           (29)
#define DSMU_FLT1FCTRL_FORD_MASK            (0x7 << DSMU_FLT1FCTRL_FORD_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Sinc
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * filter
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * order
                                                                                 */

/******** Bit definition for DSMU_FLT1JDAT register  ********/
#define DSMU_FLT1JDAT_JDATCH_SHIFT          (0)
#define DSMU_FLT1JDAT_JDATCH_MASK           (0x7 << \
                                             DSMU_FLT1JDAT_JDATCH_SHIFT) /*
                                                                          * Injected
                                                                          * channel
                                                                          * most
                                                                          * recently
                                                                          * converted
                                                                          */
#define DSMU_FLT1JDAT_JDAT_SHIFT            (8)
#define DSMU_FLT1JDAT_JDAT_MASK             (0xFFFFFF << \
                                             DSMU_FLT1JDAT_JDAT_SHIFT) /*
                                                                        * Injected
                                                                        * group
                                                                        * conversion
                                                                        * data
                                                                        */

/******** Bit definition for DSMU_FLT1RDAT register  ********/
#define DSMU_FLT1RDAT_RDATCH_SHIFT          (0)
#define DSMU_FLT1RDAT_RDATCH_MASK           (0x7 << \
                                             DSMU_FLT1RDAT_RDATCH_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             * Regular
                                                                             *
                                                                             *
                                                                             * channel
                                                                             *
                                                                             *
                                                                             *
                                                                             * most
                                                                             *
                                                                             *
                                                                             * recently
                                                                             *
                                                                             *
                                                                             *
                                                                             * converted
                                                                             */
#define DSMU_FLT1RDAT_RPEND                 (1 << 4)                        /*
                                                                             *
                                                                             *
                                                                             * Regular
                                                                             *
                                                                             *
                                                                             * channel
                                                                             *
                                                                             *
                                                                             *
                                                                             * pending
                                                                             *
                                                                             *
                                                                             * data
                                                                             */
#define DSMU_FLT1RDAT_RDAT_SHIFT            (8)
#define DSMU_FLT1RDAT_RDAT_MASK             (0xFFFFFF << \
                                             DSMU_FLT1RDAT_RDAT_SHIFT) /*
                                                                        * Regular
                                                                        * channel
                                                                        * conversion
                                                                        * data
                                                                        */

/******** Bit definition for DSMU_FLT1AWDHT register  ********/
#define DSMU_FLT1AWDHT_BKAWDHT_SHIFT        (0)
#define DSMU_FLT1AWDHT_BKAWDHT_MASK         (0xF << \
                                             DSMU_FLT1AWDHT_BKAWDHT_SHIFT) /*
                                                                            * Break
                                                                            * signal
                                                                            * assignment
                                                                            * to
                                                                            * analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            * event
                                                                            */
#define DSMU_FLT1AWDHT_AWDHT_SHIFT          (8)
#define DSMU_FLT1AWDHT_AWDHT_MASK           (0xFFFFFF << \
                                             DSMU_FLT1AWDHT_AWDHT_SHIFT)   /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            */

/******** Bit definition for DSMU_FLT1AWDLT register  ********/
#define DSMU_FLT1AWDLT_BKAWDLT_SHIFT        (0)
#define DSMU_FLT1AWDLT_BKAWDLT_MASK         (0xF << \
                                             DSMU_FLT1AWDLT_BKAWDLT_SHIFT) /*
                                                                            * Break
                                                                            * signal
                                                                            * assignment
                                                                            * to
                                                                            * analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * low
                                                                            * event
                                                                            */
#define DSMU_FLT1AWDLT_AWDLT_SHIFT          (8)
#define DSMU_FLT1AWDLT_AWDLT_MASK           (0xFFFFFF << \
                                             DSMU_FLT1AWDLT_AWDLT_SHIFT)   /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * low
                                                                            */

/******** Bit definition for DSMU_FLT1AWDSTS register  ********/
#define DSMU_FLT1AWDSTS_AWDLTF_SHIFT        (0)
#define DSMU_FLT1AWDSTS_AWDLTF_MASK         (0xFF << \
                                             DSMU_FLT1AWDSTS_AWDLTF_SHIFT) /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * low
                                                                            * flag
                                                                            */
#define DSMU_FLT1AWDSTS_AWDHTF_SHIFT        (8)
#define DSMU_FLT1AWDSTS_AWDHTF_MASK         (0xFF << \
                                             DSMU_FLT1AWDSTS_AWDHTF_SHIFT) /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            * flag
                                                                            */

/******** Bit definition for DSMU_FLT1AWDCLR register  ********/
#define DSMU_FLT1AWDCLR_CLRAWDLTF_SHIFT     (0)
#define DSMU_FLT1AWDCLR_CLRAWDLTF_MASK      (0xFF << \
                                             DSMU_FLT1AWDCLR_CLRAWDLTF_SHIFT)    /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * Clear
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * the
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * analog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * watchdog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * threshold
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * low
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * flag
                                                                                  */
#define DSMU_FLT1AWDCLR_CLRAWDHTF_SHIFT     (8)
#define DSMU_FLT1AWDCLR_CLRAWDHTF_MASK      (0xFF << \
                                             DSMU_FLT1AWDCLR_CLRAWDHTF_SHIFT)    /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * Clear
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * the
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * analog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * watchdog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * threshold
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * high
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * flag
                                                                                  */

/******** Bit definition for DSMU_FLT1EXDETMAX register  ********/
#define DSMU_FLT1EXDETMAX_EXDETMAXCH_SHIFT  (0)
#define DSMU_FLT1EXDETMAX_EXDETMAXCH_MASK   (0x7 <<                              \
                                             DSMU_FLT1EXDETMAX_EXDETMAXCH_SHIFT) \
        /*
         * Extremes
         * detector
         * maximum
         * data
         * channel
         */
#define DSMU_FLT1EXDETMAX_EXDETMAX_SHIFT    (8)
#define DSMU_FLT1EXDETMAX_EXDETMAX_MASK     (0xFFFFFF << \
                                             DSMU_FLT1EXDETMAX_EXDETMAX_SHIFT)         /*
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * Extremes
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * detector
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * maximum
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * value
                                                                                        */

/******** Bit definition for DSMU_FLT1EXDETMIN register  ********/
#define DSMU_FLT1EXDETMIN_EXDETMINCH_SHIFT  (0)
#define DSMU_FLT1EXDETMIN_EXDETMINCH_MASK   (0x7 <<                              \
                                             DSMU_FLT1EXDETMIN_EXDETMINCH_SHIFT) \
        /*
         * Extremes
         * detector
         * minimum
         * data
         * channel
         */
#define DSMU_FLT1EXDETMIN_EXDETMIN_SHIFT    (8)
#define DSMU_FLT1EXDETMIN_EXDETMIN_MASK     (0xFFFFFF << \
                                             DSMU_FLT1EXDETMIN_EXDETMIN_SHIFT)         /*
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * Extremes
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * detector
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * minimum
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * value
                                                                                        */

/******** Bit definition for DSMU_FLT1COVTIM register  ********/
#define DSMU_FLT1COVTIM_COVCNT_SHIFT        (4)
#define DSMU_FLT1COVTIM_COVCNT_MASK         (0xFFFFFFF << \
                                             DSMU_FLT1COVTIM_COVCNT_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * 28-bit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * timer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * counting
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * time
                                                                                 */

/******** Bit definition for DSMU_FLT2CTRL1 register  ********/
#define DSMU_FLT2CTRL1_DFLTEN               (1 << 0)    /* DSMU filter enable
                                                         */
#define DSMU_FLT2CTRL1_JSWSTART             (1 << 1)    /* Start a conversion
                                                         * of the injected
                                                         * group of channels
                                                         */
#define DSMU_FLT2CTRL1_JSYNC                (1 << 3)    /* Launch an injected
                                                         * conversion
                                                         * synchronously with
                                                         * the DSMU_FLT0
                                                         * JSWSTART event */
#define DSMU_FLT2CTRL1_JSCAN                (1 << 4)    /* Injected scanning
                                                         * conversion mode */
#define DSMU_FLT2CTRL1_JDMAEN               (1 << 5)    /* DMA channel enabled
                                                         * to read data for
                                                         * the injected
                                                         * conversion */
#define DSMU_FLT2CTRL1_JEXTSEL_SHIFT        (8)
#define DSMU_FLT2CTRL1_JEXTSEL_MASK         (0x1F << \
                                             DSMU_FLT2CTRL1_JEXTSEL_SHIFT) /*
                                                                            * External
                                                                            * trigger
                                                                            * signal
                                                                            * selection
                                                                            * for
                                                                            * launching
                                                                            * injected
                                                                            * conversions
                                                                            */
#define DSMU_FLT2CTRL1_JEXTEN_SHIFT         (13)
#define DSMU_FLT2CTRL1_JEXTEN_MASK          (0x3 << \
                                             DSMU_FLT2CTRL1_JEXTEN_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * External
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * and
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * active
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * edge
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * injected
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT2CTRL1_RSWSTART             (1 << 17)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Software
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * of
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * a
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * the
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_FLT2CTRL1_RCONT                (1 << 18)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Continuous
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * mode
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * config
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT2CTRL1_RSYNC                (1 << 19)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Launch
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * synchronously
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * with
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSMU_FLT0
                                                                                 */
#define DSMU_FLT2CTRL1_RDMAEN               (1 << 21)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMA
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enabled
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * to
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * read
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * data
                                                                                 */
#define DSMU_FLT2CTRL1_RCH_SHIFT            (24)
#define DSMU_FLT2CTRL1_RCH_MASK             (0x7 << DSMU_FLT2CTRL1_RCH_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_FLT2CTRL1_FAST                 (1 << 29)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Fast
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * mode
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT2CTRL1_AWDFSEL              (1 << 30)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Analog
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * watchdog
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */

/******** Bit definition for DSMU_FLT2CTRL2 register  ********/
#define DSMU_FLT2CTRL2_JEOCIEN              (1 << 0)    /* Injected conversion
                                                         * end interrupt
                                                         * enable */
#define DSMU_FLT2CTRL2_REOCIEN              (1 << 1)    /* Regular conversion
                                                         * end interrupt
                                                         * enable */
#define DSMU_FLT2CTRL2_JOVRIEN              (1 << 2)    /* Injected data
                                                         * overrun interrupt
                                                         * enable */
#define DSMU_FLT2CTRL2_ROVRIEN              (1 << 3)    /* Regular data
                                                         * overrun interrupt
                                                         * enable */
#define DSMU_FLT2CTRL2_AWDIEN               (1 << 4)    /* Analog watchdog
                                                         * interrupt enable */
#define DSMU_FLT2CTRL2_EXDETCH_SHIFT        (8)
#define DSMU_FLT2CTRL2_EXDETCH_MASK         (0xFF << \
                                             DSMU_FLT2CTRL2_EXDETCH_SHIFT) /*
                                                                            * Extremes
                                                                            * detector
                                                                            * channel
                                                                            * selection
                                                                            */
#define DSMU_FLT2CTRL2_AWDCH_SHIFT          (16)
#define DSMU_FLT2CTRL2_AWDCH_MASK           (0xFF << \
                                             DSMU_FLT2CTRL2_AWDCH_SHIFT) /*
                                                                          * AWDAnalog
                                                                          * watchdog
                                                                          * channel
                                                                          * selection
                                                                          */

/******** Bit definition for DSMU_FLT2STS register  ********/
#define DSMU_FLT2STS_JEOCF                  (1 << 0)    /* Injected conversion
                                                         * end event flag */
#define DSMU_FLT2STS_REOCF                  (1 << 1)    /* Regular conversion
                                                         * end event flag */
#define DSMU_FLT2STS_JOVRF                  (1 << 2)    /* Injected conversion
                                                         * overrun flag */
#define DSMU_FLT2STS_ROVRF                  (1 << 3)    /* Regular conversion
                                                         * overrun flag */
#define DSMU_FLT2STS_AWDF                   (1 << 4)    /* Analog watchdog
                                                         * event flag */
#define DSMU_FLT2STS_JCIP                   (1 << 13)   /* Injected conversion
                                                         * active status */
#define DSMU_FLT2STS_RCIP                   (1 << 14)   /* Regular conversion
                                                         * active status */

/******** Bit definition for DSMU_FLT2INTCLR register  ********/
#define DSMU_FLT2INTCLR_CLRJOVRF            (1 << 2)    /* Clear the injected
                                                         * conversion overrun
                                                         * flag */
#define DSMU_FLT2INTCLR_CLRROVRF            (1 << 3)    /* Clear the regular
                                                         * conversion overrun
                                                         * flag */

/******** Bit definition for DSMU_FLT2JCHG register  ********/
#define DSMU_FLT2JCHG_JCHG_SHIFT            (0)
#define DSMU_FLT2JCHG_JCHG_MASK             (0xFF << DSMU_FLT2JCHG_JCHG_SHIFT) /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Injected
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                *
                                                                                *
                                                                                *
                                                                                * group
                                                                                *
                                                                                *
                                                                                *
                                                                                * selection
                                                                                */

/******** Bit definition for DSMU_FLT2FCTRL register  ********/
#define DSMU_FLT2FCTRL_IOSR_SHIFT           (0)
#define DSMU_FLT2FCTRL_IOSR_MASK            (0xFF << \
                                             DSMU_FLT2FCTRL_IOSR_SHIFT) /*
                                                                         * Integrator
                                                                         * oversampling
                                                                         * ratio
                                                                         * (averaging
                                                                         * length)
                                                                         */
#define DSMU_FLT2FCTRL_FOSR_SHIFT           (16)
#define DSMU_FLT2FCTRL_FOSR_MASK            (0x3FF << \
                                             DSMU_FLT2FCTRL_FOSR_SHIFT)         /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Sinc
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * filter
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * oversampling
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ratio
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * (decimation
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * rate)
                                                                                 */
#define DSMU_FLT2FCTRL_FORD_SHIFT           (29)
#define DSMU_FLT2FCTRL_FORD_MASK            (0x7 << DSMU_FLT2FCTRL_FORD_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Sinc
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * filter
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * order
                                                                                 */

/******** Bit definition for DSMU_FLT2JDAT register  ********/
#define DSMU_FLT2JDAT_JDATCH_SHIFT          (0)
#define DSMU_FLT2JDAT_JDATCH_MASK           (0x7 << \
                                             DSMU_FLT2JDAT_JDATCH_SHIFT) /*
                                                                          * Injected
                                                                          * channel
                                                                          * most
                                                                          * recently
                                                                          * converted
                                                                          */
#define DSMU_FLT2JDAT_JDAT_SHIFT            (8)
#define DSMU_FLT2JDAT_JDAT_MASK             (0xFFFFFF << \
                                             DSMU_FLT2JDAT_JDAT_SHIFT) /*
                                                                        * Injected
                                                                        * group
                                                                        * conversion
                                                                        * data
                                                                        */

/******** Bit definition for DSMU_FLT2RDAT register  ********/
#define DSMU_FLT2RDAT_RDATCH_SHIFT          (0)
#define DSMU_FLT2RDAT_RDATCH_MASK           (0x7 << \
                                             DSMU_FLT2RDAT_RDATCH_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             * Regular
                                                                             *
                                                                             *
                                                                             * channel
                                                                             *
                                                                             *
                                                                             *
                                                                             * most
                                                                             *
                                                                             *
                                                                             * recently
                                                                             *
                                                                             *
                                                                             *
                                                                             * converted
                                                                             */
#define DSMU_FLT2RDAT_RPEND                 (1 << 4)                        /*
                                                                             *
                                                                             *
                                                                             * Regular
                                                                             *
                                                                             *
                                                                             * channel
                                                                             *
                                                                             *
                                                                             *
                                                                             * pending
                                                                             *
                                                                             *
                                                                             * data
                                                                             */
#define DSMU_FLT2RDAT_RDAT_SHIFT            (8)
#define DSMU_FLT2RDAT_RDAT_MASK             (0xFFFFFF << \
                                             DSMU_FLT2RDAT_RDAT_SHIFT) /*
                                                                        * Regular
                                                                        * channel
                                                                        * conversion
                                                                        * data
                                                                        */

/******** Bit definition for DSMU_FLT2AWDHT register  ********/
#define DSMU_FLT2AWDHT_BKAWDHT_SHIFT        (0)
#define DSMU_FLT2AWDHT_BKAWDHT_MASK         (0xF << \
                                             DSMU_FLT2AWDHT_BKAWDHT_SHIFT) /*
                                                                            * Break
                                                                            * signal
                                                                            * assignment
                                                                            * to
                                                                            * analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            * event
                                                                            */
#define DSMU_FLT2AWDHT_AWDHT_SHIFT          (8)
#define DSMU_FLT2AWDHT_AWDHT_MASK           (0xFFFFFF << \
                                             DSMU_FLT2AWDHT_AWDHT_SHIFT)   /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            */

/******** Bit definition for DSMU_FLT2AWDLT register  ********/
#define DSMU_FLT2AWDLT_BKAWDHT_SHIFT        (0)
#define DSMU_FLT2AWDLT_BKAWDHT_MASK         (0xF << \
                                             DSMU_FLT2AWDLT_BKAWDHT_SHIFT) /*
                                                                            * Break
                                                                            * signal
                                                                            * assignment
                                                                            * to
                                                                            * analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            * event
                                                                            */
#define DSMU_FLT2AWDLT_AWDHT_SHIFT          (8)
#define DSMU_FLT2AWDLT_AWDHT_MASK           (0xFFFFFF << \
                                             DSMU_FLT2AWDLT_AWDHT_SHIFT)   /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            */

/******** Bit definition for DSMU_FLT2AWDSTS register  ********/
#define DSMU_FLT2AWDSTS_AWDLTF_SHIFT        (0)
#define DSMU_FLT2AWDSTS_AWDLTF_MASK         (0xFF << \
                                             DSMU_FLT2AWDSTS_AWDLTF_SHIFT) /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * low
                                                                            * flag
                                                                            */
#define DSMU_FLT2AWDSTS_AWDHTF_SHIFT        (8)
#define DSMU_FLT2AWDSTS_AWDHTF_MASK         (0xFF << \
                                             DSMU_FLT2AWDSTS_AWDHTF_SHIFT) /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            * flag
                                                                            */

/******** Bit definition for DSMU_FLT2AWDCLR register  ********/
#define DSMU_FLT2AWDCLR_CLRAWDLTF_SHIFT     (0)
#define DSMU_FLT2AWDCLR_CLRAWDLTF_MASK      (0xFF << \
                                             DSMU_FLT2AWDCLR_CLRAWDLTF_SHIFT)    /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * Clear
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * the
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * analog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * watchdog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * threshold
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * low
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * flag
                                                                                  */
#define DSMU_FLT2AWDCLR_CLRAWDHTF_SHIFT     (8)
#define DSMU_FLT2AWDCLR_CLRAWDHTF_MASK      (0xFF << \
                                             DSMU_FLT2AWDCLR_CLRAWDHTF_SHIFT)    /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * Clear
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * the
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * analog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * watchdog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * threshold
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * high
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * flag
                                                                                  */

/******** Bit definition for DSMU_FLT2EXDETMAX register  ********/
#define DSMU_FLT2EXDETMAX_EXDETMAXCH_SHIFT  (0)
#define DSMU_FLT2EXDETMAX_EXDETMAXCH_MASK   (0x7 <<                              \
                                             DSMU_FLT2EXDETMAX_EXDETMAXCH_SHIFT) \
        /*
         * Extremes
         * detector
         * maximum
         * data
         * channel
         */
#define DSMU_FLT2EXDETMAX_EXDETMAX_SHIFT    (8)
#define DSMU_FLT2EXDETMAX_EXDETMAX_MASK     (0xFFFFFF << \
                                             DSMU_FLT2EXDETMAX_EXDETMAX_SHIFT)         /*
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * Extremes
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * detector
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * maximum
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * value
                                                                                        */

/******** Bit definition for DSMU_FLT2EXDETMIN register  ********/
#define DSMU_FLT2EXDETMIN_EXDETMAXCH_SHIFT  (0)
#define DSMU_FLT2EXDETMIN_EXDETMAXCH_MASK   (0x7 <<                              \
                                             DSMU_FLT2EXDETMIN_EXDETMAXCH_SHIFT) \
        /*
         * Extremes
         * detector
         * maximum
         * data
         * channel
         */
#define DSMU_FLT2EXDETMIN_EXDETMAX_SHIFT    (8)
#define DSMU_FLT2EXDETMIN_EXDETMAX_MASK     (0xFFFFFF << \
                                             DSMU_FLT2EXDETMIN_EXDETMAX_SHIFT)         /*
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * Extremes
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * detector
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * maximum
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * value
                                                                                        */

/******** Bit definition for DSMU_FLT2COVTIM register  ********/
#define DSMU_FLT2COVTIM_COVCNT_SHIFT        (4)
#define DSMU_FLT2COVTIM_COVCNT_MASK         (0xFFFFFFF << \
                                             DSMU_FLT2COVTIM_COVCNT_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * 28-bit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * timer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * counting
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * time
                                                                                 */

/******** Bit definition for DSMU_FLT3CTRL1 register  ********/
#define DSMU_FLT3CTRL1_DFLTEN               (1 << 0)    /* DSMU filter enable
                                                         */
#define DSMU_FLT3CTRL1_JSWSTART             (1 << 1)    /* Start a conversion
                                                         * of the injected
                                                         * group of channels
                                                         */
#define DSMU_FLT3CTRL1_JSYNC                (1 << 3)    /* Launch an injected
                                                         * conversion
                                                         * synchronously with
                                                         * the DSMU_FLT0
                                                         * JSWSTART event */
#define DSMU_FLT3CTRL1_JSCAN                (1 << 4)    /* Injected scanning
                                                         * conversion mode */
#define DSMU_FLT3CTRL1_JDMAEN               (1 << 5)    /* DMA channel enabled
                                                         * to read data for
                                                         * the injected
                                                         * conversion */
#define DSMU_FLT3CTRL1_JEXTSEL_SHIFT        (8)
#define DSMU_FLT3CTRL1_JEXTSEL_MASK         (0x1F << \
                                             DSMU_FLT3CTRL1_JEXTSEL_SHIFT) /*
                                                                            * External
                                                                            * trigger
                                                                            * signal
                                                                            * selection
                                                                            * for
                                                                            * launching
                                                                            * injected
                                                                            * conversions
                                                                            */
#define DSMU_FLT3CTRL1_JEXTEN_SHIFT         (13)
#define DSMU_FLT3CTRL1_JEXTEN_MASK          (0x3 << \
                                             DSMU_FLT3CTRL1_JEXTEN_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * External
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enable
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * and
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * active
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * edge
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * injected
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT3CTRL1_RSWSTART             (1 << 17)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Software
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * trigger
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * of
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * a
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * on
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * the
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_FLT3CTRL1_RCONT                (1 << 18)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Continuous
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * mode
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * config
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT3CTRL1_RSYNC                (1 << 19)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Launch
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * synchronously
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * with
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DSMU_FLT0
                                                                                 */
#define DSMU_FLT3CTRL1_RDMAEN               (1 << 21)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMA
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * enabled
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * to
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * read
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * data
                                                                                 */
#define DSMU_FLT3CTRL1_RCH_SHIFT            (24)
#define DSMU_FLT3CTRL1_RCH_MASK             (0x7 << DSMU_FLT3CTRL1_RCH_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * channel
                                                                                 */
#define DSMU_FLT3CTRL1_FAST                 (1 << 29)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Fast
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * mode
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * for
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * regular
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversions
                                                                                 */
#define DSMU_FLT3CTRL1_AWDFSEL              (1 << 30)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Analog
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * watchdog
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * input
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * data
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * selection
                                                                                 */

/******** Bit definition for DSMU_FLT3CTRL2 register  ********/
#define DSMU_FLT3CTRL2_JEOCIEN              (1 << 0)    /* Injected conversion
                                                         * end interrupt
                                                         * enable */
#define DSMU_FLT3CTRL2_REOCIEN              (1 << 1)    /* Regular conversion
                                                         * end interrupt
                                                         * enable */
#define DSMU_FLT3CTRL2_JOVRIEN              (1 << 2)    /* Injected data
                                                         * overrun interrupt
                                                         * enable */
#define DSMU_FLT3CTRL2_ROVRIEN              (1 << 3)    /* Regular data
                                                         * overrun interrupt
                                                         * enable */
#define DSMU_FLT3CTRL2_AWDIEN               (1 << 4)    /* Analog watchdog
                                                         * interrupt enable */
#define DSMU_FLT3CTRL2_EXDETCH_SHIFT        (8)
#define DSMU_FLT3CTRL2_EXDETCH_MASK         (0xFF << \
                                             DSMU_FLT3CTRL2_EXDETCH_SHIFT) /*
                                                                            * Extremes
                                                                            * detector
                                                                            * channel
                                                                            * selection
                                                                            */
#define DSMU_FLT3CTRL2_AWDCH_SHIFT          (16)
#define DSMU_FLT3CTRL2_AWDCH_MASK           (0xFF << \
                                             DSMU_FLT3CTRL2_AWDCH_SHIFT) /*
                                                                          * AWDAnalog
                                                                          * watchdog
                                                                          * channel
                                                                          * selection
                                                                          */

/******** Bit definition for DSMU_FLT3STS register  ********/
#define DSMU_FLT3STS_JEOCF                  (1 << 0)    /* Injected conversion
                                                         * end event flag */
#define DSMU_FLT3STS_REOCF                  (1 << 1)    /* Regular conversion
                                                         * end event flag */
#define DSMU_FLT3STS_JOVRF                  (1 << 2)    /* Injected conversion
                                                         * overrun flag */
#define DSMU_FLT3STS_ROVRF                  (1 << 3)    /* Regular conversion
                                                         * overrun flag */
#define DSMU_FLT3STS_AWDF                   (1 << 4)    /* Analog watchdog
                                                         * event flag */
#define DSMU_FLT3STS_JCIP                   (1 << 13)   /* Injected conversion
                                                         * active status */
#define DSMU_FLT3STS_RCIP                   (1 << 14)   /* Regular conversion
                                                         * active status */

/******** Bit definition for DSMU_FLT3INTCLR register  ********/
#define DSMU_FLT3INTCLR_CLRJOVRF            (1 << 2)    /* Clear the injected
                                                         * conversion overrun
                                                         * flag */
#define DSMU_FLT3INTCLR_CLRROVRF            (1 << 3)    /* Clear the regular
                                                         * conversion overrun
                                                         * flag */

/******** Bit definition for DSMU_FLT3JCHG register  ********/
#define DSMU_FLT3JCHG_JCHG_SHIFT            (0)
#define DSMU_FLT3JCHG_JCHG_MASK             (0xFF << DSMU_FLT3JCHG_JCHG_SHIFT) /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * Injected
                                                                                *
                                                                                *
                                                                                *
                                                                                * channel
                                                                                *
                                                                                *
                                                                                *
                                                                                * group
                                                                                *
                                                                                *
                                                                                *
                                                                                * selection
                                                                                */

/******** Bit definition for DSMU_FLT3FCTRL register  ********/
#define DSMU_FLT3FCTRL_IOSR_SHIFT           (0)
#define DSMU_FLT3FCTRL_IOSR_MASK            (0xFF << \
                                             DSMU_FLT3FCTRL_IOSR_SHIFT) /*
                                                                         * Integrator
                                                                         * oversampling
                                                                         * ratio
                                                                         * (averaging
                                                                         * length)
                                                                         */
#define DSMU_FLT3FCTRL_FOSR_SHIFT           (16)
#define DSMU_FLT3FCTRL_FOSR_MASK            (0x3FF << \
                                             DSMU_FLT3FCTRL_FOSR_SHIFT)         /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Sinc
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * filter
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * oversampling
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ratio
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * (decimation
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * rate)
                                                                                 */
#define DSMU_FLT3FCTRL_FORD_SHIFT           (29)
#define DSMU_FLT3FCTRL_FORD_MASK            (0x7 << DSMU_FLT3FCTRL_FORD_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * Sinc
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * filter
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * order
                                                                                 */

/******** Bit definition for DSMU_FLT3JDAT register  ********/
#define DSMU_FLT3JDAT_JDATCH_SHIFT          (0)
#define DSMU_FLT3JDAT_JDATCH_MASK           (0x7 << \
                                             DSMU_FLT3JDAT_JDATCH_SHIFT) /*
                                                                          * Injected
                                                                          * channel
                                                                          * most
                                                                          * recently
                                                                          * converted
                                                                          */
#define DSMU_FLT3JDAT_JDAT_SHIFT            (8)
#define DSMU_FLT3JDAT_JDAT_MASK             (0xFFFFFF << \
                                             DSMU_FLT3JDAT_JDAT_SHIFT) /*
                                                                        * Injected
                                                                        * group
                                                                        * conversion
                                                                        * data
                                                                        */

/******** Bit definition for DSMU_FLT3RDAT register  ********/
#define DSMU_FLT3RDAT_RDATCH_SHIFT          (0)
#define DSMU_FLT3RDAT_RDATCH_MASK           (0x7 << \
                                             DSMU_FLT3RDAT_RDATCH_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             * Regular
                                                                             *
                                                                             *
                                                                             * channel
                                                                             *
                                                                             *
                                                                             *
                                                                             * most
                                                                             *
                                                                             *
                                                                             * recently
                                                                             *
                                                                             *
                                                                             *
                                                                             * converted
                                                                             */
#define DSMU_FLT3RDAT_RPEND                 (1 << 4)                        /*
                                                                             *
                                                                             *
                                                                             * Regular
                                                                             *
                                                                             *
                                                                             * channel
                                                                             *
                                                                             *
                                                                             *
                                                                             * pending
                                                                             *
                                                                             *
                                                                             * data
                                                                             */
#define DSMU_FLT3RDAT_RDAT_SHIFT            (8)
#define DSMU_FLT3RDAT_RDAT_MASK             (0xFFFFFF << \
                                             DSMU_FLT3RDAT_RDAT_SHIFT) /*
                                                                        * Regular
                                                                        * channel
                                                                        * conversion
                                                                        * data
                                                                        */

/******** Bit definition for DSMU_FLT3AWDHT register  ********/
#define DSMU_FLT3AWDHT_BKAWDHT_SHIFT        (0)
#define DSMU_FLT3AWDHT_BKAWDHT_MASK         (0xF << \
                                             DSMU_FLT3AWDHT_BKAWDHT_SHIFT) /*
                                                                            * Break
                                                                            * signal
                                                                            * assignment
                                                                            * to
                                                                            * analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            * event
                                                                            */
#define DSMU_FLT3AWDHT_AWDHT_SHIFT          (8)
#define DSMU_FLT3AWDHT_AWDHT_MASK           (0xFFFFFF << \
                                             DSMU_FLT3AWDHT_AWDHT_SHIFT)   /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            */

/******** Bit definition for DSMU_FLT3AWDLT register  ********/
#define DSMU_FLT3AWDLT_BKAWDHT_SHIFT        (0)
#define DSMU_FLT3AWDLT_BKAWDHT_MASK         (0xF << \
                                             DSMU_FLT3AWDLT_BKAWDHT_SHIFT) /*
                                                                            * Break
                                                                            * signal
                                                                            * assignment
                                                                            * to
                                                                            * analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            * event
                                                                            */
#define DSMU_FLT3AWDLT_AWDHT_SHIFT          (8)
#define DSMU_FLT3AWDLT_AWDHT_MASK           (0xFFFFFF << \
                                             DSMU_FLT3AWDLT_AWDHT_SHIFT)   /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            */

/******** Bit definition for DSMU_FLT3AWDSTS register  ********/
#define DSMU_FLT3AWDSTS_AWDLTF_SHIFT        (0)
#define DSMU_FLT3AWDSTS_AWDLTF_MASK         (0xFF << \
                                             DSMU_FLT3AWDSTS_AWDLTF_SHIFT) /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * low
                                                                            * flag
                                                                            */
#define DSMU_FLT3AWDSTS_AWDHTF_SHIFT        (8)
#define DSMU_FLT3AWDSTS_AWDHTF_MASK         (0xFF << \
                                             DSMU_FLT3AWDSTS_AWDHTF_SHIFT) /*
                                                                            * Analog
                                                                            * watchdog
                                                                            * threshold
                                                                            * high
                                                                            * flag
                                                                            */

/******** Bit definition for DSMU_FLT3AWDCLR register  ********/
#define DSMU_FLT3AWDCLR_CLRAWDLTF_SHIFT     (0)
#define DSMU_FLT3AWDCLR_CLRAWDLTF_MASK      (0xFF << \
                                             DSMU_FLT3AWDCLR_CLRAWDLTF_SHIFT)    /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * Clear
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * the
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * analog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * watchdog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * threshold
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * low
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * flag
                                                                                  */
#define DSMU_FLT3AWDCLR_CLRAWDHTF_SHIFT     (8)
#define DSMU_FLT3AWDCLR_CLRAWDHTF_MASK      (0xFF << \
                                             DSMU_FLT3AWDCLR_CLRAWDHTF_SHIFT)    /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * Clear
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * the
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * analog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * watchdog
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * threshold
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * high
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * flag
                                                                                  */

/******** Bit definition for DSMU_FLT3EXDETMAX register  ********/
#define DSMU_FLT3EXDETMAX_EXDETMAXCH_SHIFT  (0)
#define DSMU_FLT3EXDETMAX_EXDETMAXCH_MASK   (0x7 <<                              \
                                             DSMU_FLT3EXDETMAX_EXDETMAXCH_SHIFT) \
        /*
         * Extremes
         * detector
         * maximum
         * data
         * channel
         */
#define DSMU_FLT3EXDETMAX_EXDETMAX_SHIFT    (8)
#define DSMU_FLT3EXDETMAX_EXDETMAX_MASK     (0xFFFFFF << \
                                             DSMU_FLT3EXDETMAX_EXDETMAX_SHIFT)         /*
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * Extremes
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * detector
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * maximum
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * value
                                                                                        */

/******** Bit definition for DSMU_FLT3EXDETMIN register  ********/
#define DSMU_FLT3EXDETMIN_EXDETMAXCH_SHIFT  (0)
#define DSMU_FLT3EXDETMIN_EXDETMAXCH_MASK   (0x7 <<                              \
                                             DSMU_FLT3EXDETMIN_EXDETMAXCH_SHIFT) \
        /*
         * Extremes
         * detector
         * maximum
         * data
         * channel
         */
#define DSMU_FLT3EXDETMIN_EXDETMAX_SHIFT    (8)
#define DSMU_FLT3EXDETMIN_EXDETMAX_MASK     (0xFFFFFF << \
                                             DSMU_FLT3EXDETMIN_EXDETMAX_SHIFT)         /*
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * Extremes
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * detector
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * maximum
                                                                                        *
                                                                                        *
                                                                                        *
                                                                                        * value
                                                                                        */

/******** Bit definition for DSMU_FLT3COVTIM register  ********/
#define DSMU_FLT3COVTIM_COVCNT_SHIFT        (4)
#define DSMU_FLT3COVTIM_COVCNT_MASK         (0xFFFFFFF << \
                                             DSMU_FLT3COVTIM_COVCNT_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * 28-bit
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * timer
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * counting
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * conversion
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * time
                                                                                 */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DSMU_H */
