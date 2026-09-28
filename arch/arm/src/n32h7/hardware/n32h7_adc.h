/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_adc.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32_ADC_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32_ADC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_ADC_STS_OFFSET              0x0     /* ADC status register */
#define N32_ADC_CTRL1_OFFSET            0x4     /* ADC control register 1 */
#define N32_ADC_CTRL2_OFFSET            0x8     /* ADC control register 2 */
#define N32_ADC_CTRL3_OFFSET            0xC     /* ADC control register 3 */
#define N32_ADC_SAMPT1_OFFSET           0x10    /* Sample time register 2 */
#define N32_ADC_SAMPT2_OFFSET           0x14    /* sample time register 2 */
#define N32_ADC_SAMPT3_OFFSET           0x18    /* sample time register 3 */
#define N32_ADC_DIFSEL_OFFSET                                                \
        0x1C                                    /* ADC Differential Mode
                                                 * Selection Register */
#define N32_ADC_AWDCTRL_OFFSET          0x20    /* ADC analog watch dog for
                                                 * timer */
#define N32_ADC_OFFSET1_OFFSET          0x24    /* ADC offset register 1 */
#define N32_ADC_OFFSET2_OFFSET          0x28    /* ADC offset register 2 */
#define N32_ADC_OFFSET3_OFFSET          0x2C    /* ADC offset register 3 */
#define N32_ADC_OFFSET4_OFFSET          0x30    /* ADC offset register 4 */
#define N32_ADC_AWD1HIGH_OFFSET                                              \
        0x34                                    /* ADC watchdog 1 high
                                                 * threshold register */
#define N32_ADC_AWD1LOW_OFFSET          0x38    /* ADC watchdog low threshold
                                                 * register */
#define N32_ADC_AWD2HIGH_OFFSET                                              \
        0x3C                                    /* ADC watchdog 2 high
                                                 * threshold register */
#define N32_ADC_AWD2LOW_OFFSET                                               \
        0x40                                    /* ADC watchdog 2 low
                                                 * threshold register */
#define N32_ADC_AWD3HIGH_OFFSET                                              \
        0x44                                    /* ADC watchdog 3 high
                                                 * threshold register */
#define N32_ADC_AWD3LOW_OFFSET                                               \
        0x48                                    /* ADC watchdog 3 low
                                                 * threshold register */
#define N32_ADC_AWD2EN_OFFSET           0x4C    /* ADC watchdog threshold flag
                                                 */
#define N32_ADC_AWD3EN_OFFSET           0x50    /* ADC watchdog threshold flag
                                                 */
#define N32_ADC_AWD2INTEN_OFFSET        0x54    /* ADC watchdog threshold flag
                                                 */
#define N32_ADC_AWD3INTEN_OFFSET        0x58    /* ADC watchdog threshold flag
                                                 */
#define N32_ADC_AWD2STS_OFFSET          0x5C    /* ADC watchdog threshold flag
                                                 */
#define N32_ADC_AWD3STS_OFFSET          0x60    /* ADC watchdog threshold flag
                                                 */
#define N32_ADC_RSEQ1_OFFSET            0x64    /* ADC regular sequence
                                                 * register 1 */
#define N32_ADC_RSEQ2_OFFSET            0x68    /* ADC regular sequence
                                                 * register 2 */
#define N32_ADC_RSEQ3_OFFSET            0x6C    /* ADC regular sequence
                                                 * register 3 */
#define N32_ADC_RSEQ4_OFFSET            0x70    /* ADC regular sequence
                                                 * register 4 */
#define N32_ADC_JSEQ_OFFSET             0x74    /* ADC injected sequence
                                                 * register */
#define N32_ADC_JDAT1_OFFSET            0x78    /* ADC injected data register
                                                 * x */
#define N32_ADC_JDAT2_OFFSET            0x7C    /* ADC injected data register
                                                 * x */
#define N32_ADC_JDAT3_OFFSET            0x80    /* ADC injected data register
                                                 * x */
#define N32_ADC_JDAT4_OFFSET            0x84    /* ADC injected data register
                                                 * x */
#define N32_ADC_DAT_OFFSET              0x88    /* ADC regular data register
                                                 */
#define N32_ADC_FIFOCFG_OFFSET          0x8C    /* ADC fifo config register */
#define N32_ADC_FIFOSTS_OFFSET          0x90    /* ADC fifo status register */
#define N32_ADC_DLYSMP_OFFSET           0x94    /* ADC delay config register
                                                 */
#define N32_ADC_OSCFG_OFFSET            0x98    /* ADC oversample register */
#define N32_ADC_INTLRCFG_OFFSET                                              \
        0x9C                                    /* ADC Internal Register
                                                 * Configuration Register */
#define N32_ADC_GCOMP_OFFSET            0xA0    /* ADC Gain compensation
                                                 * Register */
#define N32_ADC_PUCFG_OFFSET            0xA4    /* ADC Power up configuration
                                                 * Register */

#define N32_ADC1_STS                    (N32_ADC1_BASE + N32_ADC_STS_OFFSET)
#define N32_ADC1_CTRL1                  (N32_ADC1_BASE + N32_ADC_CTRL1_OFFSET)
#define N32_ADC1_CTRL2                  (N32_ADC1_BASE + N32_ADC_CTRL2_OFFSET)
#define N32_ADC1_CTRL3                  (N32_ADC1_BASE + N32_ADC_CTRL3_OFFSET)
#define N32_ADC1_SAMPT1                 (N32_ADC1_BASE + \
                                         N32_ADC_SAMPT1_OFFSET)
#define N32_ADC1_SAMPT2                 (N32_ADC1_BASE + \
                                         N32_ADC_SAMPT2_OFFSET)
#define N32_ADC1_SAMPT3                 (N32_ADC1_BASE + \
                                         N32_ADC_SAMPT3_OFFSET)
#define N32_ADC1_DIFSEL                 (N32_ADC1_BASE + \
                                         N32_ADC_DIFSEL_OFFSET)
#define N32_ADC1_AWDCTRL                (N32_ADC1_BASE + \
                                         N32_ADC_AWDCTRL_OFFSET)
#define N32_ADC1_OFFSET1                (N32_ADC1_BASE + \
                                         N32_ADC_OFFSET1_OFFSET)
#define N32_ADC1_OFFSET2                (N32_ADC1_BASE + \
                                         N32_ADC_OFFSET2_OFFSET)
#define N32_ADC1_OFFSET3                (N32_ADC1_BASE + \
                                         N32_ADC_OFFSET3_OFFSET)
#define N32_ADC1_OFFSET4                (N32_ADC1_BASE + \
                                         N32_ADC_OFFSET4_OFFSET)
#define N32_ADC1_AWD1HIGH               (N32_ADC1_BASE + \
                                         N32_ADC_AWD1HIGH_OFFSET)
#define N32_ADC1_AWD1LOW                (N32_ADC1_BASE + \
                                         N32_ADC_AWD1LOW_OFFSET)
#define N32_ADC1_AWD2HIGH               (N32_ADC1_BASE + \
                                         N32_ADC_AWD2HIGH_OFFSET)
#define N32_ADC1_AWD2LOW                (N32_ADC1_BASE + \
                                         N32_ADC_AWD2LOW_OFFSET)
#define N32_ADC1_AWD3HIGH               (N32_ADC1_BASE + \
                                         N32_ADC_AWD3HIGH_OFFSET)
#define N32_ADC1_AWD3LOW                (N32_ADC1_BASE + \
                                         N32_ADC_AWD3LOW_OFFSET)
#define N32_ADC1_AWD2EN                 (N32_ADC1_BASE + \
                                         N32_ADC_AWD2EN_OFFSET)
#define N32_ADC1_AWD3EN                 (N32_ADC1_BASE + \
                                         N32_ADC_AWD3EN_OFFSET)
#define N32_ADC1_AWD2INTEN              (N32_ADC1_BASE + \
                                         N32_ADC_AWD2INTEN_OFFSET)
#define N32_ADC1_AWD3INTEN              (N32_ADC1_BASE + \
                                         N32_ADC_AWD3INTEN_OFFSET)
#define N32_ADC1_AWD2STS                (N32_ADC1_BASE + \
                                         N32_ADC_AWD2STS_OFFSET)
#define N32_ADC1_AWD3STS                (N32_ADC1_BASE + \
                                         N32_ADC_AWD3STS_OFFSET)
#define N32_ADC1_RSEQ1                  (N32_ADC1_BASE + N32_ADC_RSEQ1_OFFSET)
#define N32_ADC1_RSEQ2                  (N32_ADC1_BASE + N32_ADC_RSEQ2_OFFSET)
#define N32_ADC1_RSEQ3                  (N32_ADC1_BASE + N32_ADC_RSEQ3_OFFSET)
#define N32_ADC1_RSEQ4                  (N32_ADC1_BASE + N32_ADC_RSEQ4_OFFSET)
#define N32_ADC1_JSEQ                   (N32_ADC1_BASE + N32_ADC_JSEQ_OFFSET)
#define N32_ADC1_JDAT1                  (N32_ADC1_BASE + N32_ADC_JDAT1_OFFSET)
#define N32_ADC1_JDAT2                  (N32_ADC1_BASE + N32_ADC_JDAT2_OFFSET)
#define N32_ADC1_JDAT3                  (N32_ADC1_BASE + N32_ADC_JDAT3_OFFSET)
#define N32_ADC1_JDAT4                  (N32_ADC1_BASE + N32_ADC_JDAT4_OFFSET)
#define N32_ADC1_DAT                    (N32_ADC1_BASE + N32_ADC_DAT_OFFSET)
#define N32_ADC1_FIFOCFG                (N32_ADC1_BASE + \
                                         N32_ADC_FIFOCFG_OFFSET)
#define N32_ADC1_FIFOSTS                (N32_ADC1_BASE + \
                                         N32_ADC_FIFOSTS_OFFSET)
#define N32_ADC1_DLYSMP                 (N32_ADC1_BASE + \
                                         N32_ADC_DLYSMP_OFFSET)
#define N32_ADC1_OSCFG                  (N32_ADC1_BASE + N32_ADC_OSCFG_OFFSET)
#define N32_ADC1_INTLRCFG               (N32_ADC1_BASE + \
                                         N32_ADC_INTLRCFG_OFFSET)
#define N32_ADC1_GCOMP                  (N32_ADC1_BASE + N32_ADC_GCOMP_OFFSET)
#define N32_ADC1_PUCFG                  (N32_ADC1_BASE + N32_ADC_PUCFG_OFFSET)

#define N32_ADC2_STS                    (N32_ADC2_BASE + N32_ADC_STS_OFFSET)
#define N32_ADC2_CTRL1                  (N32_ADC2_BASE + N32_ADC_CTRL1_OFFSET)
#define N32_ADC2_CTRL2                  (N32_ADC2_BASE + N32_ADC_CTRL2_OFFSET)
#define N32_ADC2_CTRL3                  (N32_ADC2_BASE + N32_ADC_CTRL3_OFFSET)
#define N32_ADC2_SAMPT1                 (N32_ADC2_BASE + \
                                         N32_ADC_SAMPT1_OFFSET)
#define N32_ADC2_SAMPT2                 (N32_ADC2_BASE + \
                                         N32_ADC_SAMPT2_OFFSET)
#define N32_ADC2_SAMPT3                 (N32_ADC2_BASE + \
                                         N32_ADC_SAMPT3_OFFSET)
#define N32_ADC2_DIFSEL                 (N32_ADC2_BASE + \
                                         N32_ADC_DIFSEL_OFFSET)
#define N32_ADC2_AWDCTRL                (N32_ADC2_BASE + \
                                         N32_ADC_AWDCTRL_OFFSET)
#define N32_ADC2_OFFSET1                (N32_ADC2_BASE + \
                                         N32_ADC_OFFSET1_OFFSET)
#define N32_ADC2_OFFSET2                (N32_ADC2_BASE + \
                                         N32_ADC_OFFSET2_OFFSET)
#define N32_ADC2_OFFSET3                (N32_ADC2_BASE + \
                                         N32_ADC_OFFSET3_OFFSET)
#define N32_ADC2_OFFSET4                (N32_ADC2_BASE + \
                                         N32_ADC_OFFSET4_OFFSET)
#define N32_ADC2_AWD1HIGH               (N32_ADC2_BASE + \
                                         N32_ADC_AWD1HIGH_OFFSET)
#define N32_ADC2_AWD1LOW                (N32_ADC2_BASE + \
                                         N32_ADC_AWD1LOW_OFFSET)
#define N32_ADC2_AWD2HIGH               (N32_ADC2_BASE + \
                                         N32_ADC_AWD2HIGH_OFFSET)
#define N32_ADC2_AWD2LOW                (N32_ADC2_BASE + \
                                         N32_ADC_AWD2LOW_OFFSET)
#define N32_ADC2_AWD3HIGH               (N32_ADC2_BASE + \
                                         N32_ADC_AWD3HIGH_OFFSET)
#define N32_ADC2_AWD3LOW                (N32_ADC2_BASE + \
                                         N32_ADC_AWD3LOW_OFFSET)
#define N32_ADC2_AWD2EN                 (N32_ADC2_BASE + \
                                         N32_ADC_AWD2EN_OFFSET)
#define N32_ADC2_AWD3EN                 (N32_ADC2_BASE + \
                                         N32_ADC_AWD3EN_OFFSET)
#define N32_ADC2_AWD2INTEN              (N32_ADC2_BASE + \
                                         N32_ADC_AWD2INTEN_OFFSET)
#define N32_ADC2_AWD3INTEN              (N32_ADC2_BASE + \
                                         N32_ADC_AWD3INTEN_OFFSET)
#define N32_ADC2_AWD2STS                (N32_ADC2_BASE + \
                                         N32_ADC_AWD2STS_OFFSET)
#define N32_ADC2_AWD3STS                (N32_ADC2_BASE + \
                                         N32_ADC_AWD3STS_OFFSET)
#define N32_ADC2_RSEQ1                  (N32_ADC2_BASE + N32_ADC_RSEQ1_OFFSET)
#define N32_ADC2_RSEQ2                  (N32_ADC2_BASE + N32_ADC_RSEQ2_OFFSET)
#define N32_ADC2_RSEQ3                  (N32_ADC2_BASE + N32_ADC_RSEQ3_OFFSET)
#define N32_ADC2_RSEQ4                  (N32_ADC2_BASE + N32_ADC_RSEQ4_OFFSET)
#define N32_ADC2_JSEQ                   (N32_ADC2_BASE + N32_ADC_JSEQ_OFFSET)
#define N32_ADC2_JDAT1                  (N32_ADC2_BASE + N32_ADC_JDAT1_OFFSET)
#define N32_ADC2_JDAT2                  (N32_ADC2_BASE + N32_ADC_JDAT2_OFFSET)
#define N32_ADC2_JDAT3                  (N32_ADC2_BASE + N32_ADC_JDAT3_OFFSET)
#define N32_ADC2_JDAT4                  (N32_ADC2_BASE + N32_ADC_JDAT4_OFFSET)
#define N32_ADC2_DAT                    (N32_ADC2_BASE + N32_ADC_DAT_OFFSET)
#define N32_ADC2_FIFOCFG                (N32_ADC2_BASE + \
                                         N32_ADC_FIFOCFG_OFFSET)
#define N32_ADC2_FIFOSTS                (N32_ADC2_BASE + \
                                         N32_ADC_FIFOSTS_OFFSET)
#define N32_ADC2_DLYSMP                 (N32_ADC2_BASE + \
                                         N32_ADC_DLYSMP_OFFSET)
#define N32_ADC2_OSCFG                  (N32_ADC2_BASE + N32_ADC_OSCFG_OFFSET)
#define N32_ADC2_INTLRCFG               (N32_ADC2_BASE + \
                                         N32_ADC_INTLRCFG_OFFSET)
#define N32_ADC2_GCOMP                  (N32_ADC2_BASE + N32_ADC_GCOMP_OFFSET)
#define N32_ADC2_PUCFG                  (N32_ADC2_BASE + N32_ADC_PUCFG_OFFSET)

#define N32_ADC3_STS                    (N32_ADC3_BASE + N32_ADC_STS_OFFSET)
#define N32_ADC3_CTRL1                  (N32_ADC3_BASE + N32_ADC_CTRL1_OFFSET)
#define N32_ADC3_CTRL2                  (N32_ADC3_BASE + N32_ADC_CTRL2_OFFSET)
#define N32_ADC3_CTRL3                  (N32_ADC3_BASE + N32_ADC_CTRL3_OFFSET)
#define N32_ADC3_SAMPT1                 (N32_ADC3_BASE + \
                                         N32_ADC_SAMPT1_OFFSET)
#define N32_ADC3_SAMPT2                 (N32_ADC3_BASE + \
                                         N32_ADC_SAMPT2_OFFSET)
#define N32_ADC3_SAMPT3                 (N32_ADC3_BASE + \
                                         N32_ADC_SAMPT3_OFFSET)
#define N32_ADC3_DIFSEL                 (N32_ADC3_BASE + \
                                         N32_ADC_DIFSEL_OFFSET)
#define N32_ADC3_AWDCTRL                (N32_ADC3_BASE + \
                                         N32_ADC_AWDCTRL_OFFSET)
#define N32_ADC3_OFFSET1                (N32_ADC3_BASE + \
                                         N32_ADC_OFFSET1_OFFSET)
#define N32_ADC3_OFFSET2                (N32_ADC3_BASE + \
                                         N32_ADC_OFFSET2_OFFSET)
#define N32_ADC3_OFFSET3                (N32_ADC3_BASE + \
                                         N32_ADC_OFFSET3_OFFSET)
#define N32_ADC3_OFFSET4                (N32_ADC3_BASE + \
                                         N32_ADC_OFFSET4_OFFSET)
#define N32_ADC3_AWD1HIGH               (N32_ADC3_BASE + \
                                         N32_ADC_AWD1HIGH_OFFSET)
#define N32_ADC3_AWD1LOW                (N32_ADC3_BASE + \
                                         N32_ADC_AWD1LOW_OFFSET)
#define N32_ADC3_AWD2HIGH               (N32_ADC3_BASE + \
                                         N32_ADC_AWD2HIGH_OFFSET)
#define N32_ADC3_AWD2LOW                (N32_ADC3_BASE + \
                                         N32_ADC_AWD2LOW_OFFSET)
#define N32_ADC3_AWD3HIGH               (N32_ADC3_BASE + \
                                         N32_ADC_AWD3HIGH_OFFSET)
#define N32_ADC3_AWD3LOW                (N32_ADC3_BASE + \
                                         N32_ADC_AWD3LOW_OFFSET)
#define N32_ADC3_AWD2EN                 (N32_ADC3_BASE + \
                                         N32_ADC_AWD2EN_OFFSET)
#define N32_ADC3_AWD3EN                 (N32_ADC3_BASE + \
                                         N32_ADC_AWD3EN_OFFSET)
#define N32_ADC3_AWD2INTEN              (N32_ADC3_BASE + \
                                         N32_ADC_AWD2INTEN_OFFSET)
#define N32_ADC3_AWD3INTEN              (N32_ADC3_BASE + \
                                         N32_ADC_AWD3INTEN_OFFSET)
#define N32_ADC3_AWD2STS                (N32_ADC3_BASE + \
                                         N32_ADC_AWD2STS_OFFSET)
#define N32_ADC3_AWD3STS                (N32_ADC3_BASE + \
                                         N32_ADC_AWD3STS_OFFSET)
#define N32_ADC3_RSEQ1                  (N32_ADC3_BASE + N32_ADC_RSEQ1_OFFSET)
#define N32_ADC3_RSEQ2                  (N32_ADC3_BASE + N32_ADC_RSEQ2_OFFSET)
#define N32_ADC3_RSEQ3                  (N32_ADC3_BASE + N32_ADC_RSEQ3_OFFSET)
#define N32_ADC3_RSEQ4                  (N32_ADC3_BASE + N32_ADC_RSEQ4_OFFSET)
#define N32_ADC3_JSEQ                   (N32_ADC3_BASE + N32_ADC_JSEQ_OFFSET)
#define N32_ADC3_JDAT1                  (N32_ADC3_BASE + N32_ADC_JDAT1_OFFSET)
#define N32_ADC3_JDAT2                  (N32_ADC3_BASE + N32_ADC_JDAT2_OFFSET)
#define N32_ADC3_JDAT3                  (N32_ADC3_BASE + N32_ADC_JDAT3_OFFSET)
#define N32_ADC3_JDAT4                  (N32_ADC3_BASE + N32_ADC_JDAT4_OFFSET)
#define N32_ADC3_DAT                    (N32_ADC3_BASE + N32_ADC_DAT_OFFSET)
#define N32_ADC3_FIFOCFG                (N32_ADC3_BASE + \
                                         N32_ADC_FIFOCFG_OFFSET)
#define N32_ADC3_FIFOSTS                (N32_ADC3_BASE + \
                                         N32_ADC_FIFOSTS_OFFSET)
#define N32_ADC3_DLYSMP                 (N32_ADC3_BASE + \
                                         N32_ADC_DLYSMP_OFFSET)
#define N32_ADC3_OSCFG                  (N32_ADC3_BASE + N32_ADC_OSCFG_OFFSET)
#define N32_ADC3_INTLRCFG               (N32_ADC3_BASE + \
                                         N32_ADC_INTLRCFG_OFFSET)
#define N32_ADC3_GCOMP                  (N32_ADC3_BASE + N32_ADC_GCOMP_OFFSET)
#define N32_ADC3_PUCFG                  (N32_ADC3_BASE + N32_ADC_PUCFG_OFFSET)

/******** Bit definition for ADC_STS register  ********/
#define ADC_STS_WEFLAG                  (1 << 17)   /* WEFLAG */
#define ADC_STS_REFLAG                  (1 << 16)   /* REFLAG */
#define ADC_STS_ROSOVFDSMU              (1 << 14)   /* ROSOVFDSMU */
#define ADC_STS_JOSOVF                  (1 << 13)   /* JOSOVF */
#define ADC_STS_ROSOVF                  (1 << 12)   /* ROSOVF */
#define ADC_STS_EOSAMP                  (1 << 11)   /* EOSAMP */
#define ADC_STS_PDRDY                   (1 << 9)    /* PDRDY */
#define ADC_STS_RDY                     (1 << 8)    /* RDY */
#define ADC_STS_AWDG1                   (1 << 6)    /* AWDG1 */
#define ADC_STS_STR                     (1 << 5)    /* STR */
#define ADC_STS_JENDCA                  (1 << 4)    /* JENDCA */
#define ADC_STS_JENDC                   (1 << 3)    /* JENDC */
#define ADC_STS_JSTR                    (1 << 2)    /* JSTR */
#define ADC_STS_ENDCA                   (1 << 1)    /* ENDCA */
#define ADC_STS_ENDC                    (1 << 0)    /* ENDC */

/******** Bit definition for ADC_CTRL1 register  ********/
#define ADC_CTRL1_WEIEN                 (1 << 30)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * WEIEN
                                                                             */
#define ADC_CTRL1_REIEN                 (1 << 29)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * REIEN
                                                                             */
#define ADC_CTRL1_EOSMPIEN              (1 << 28)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * EOSMPIEN
                                                                             */
#define ADC_CTRL1_PDRDYIEN              (1 << 27)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * PDRDYIEN
                                                                             */
#define ADC_CTRL1_RDYIEN                (1 << 26)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * RDYIEN
                                                                             */
#define ADC_CTRL1_DJCH                  (1 << 24)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DJCH
                                                                             */
#define ADC_CTRL1_DREGCH                (1 << 23)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DREGCH
                                                                             */
#define ADC_CTRL1_AWD1ERCH              (1 << 22)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * AWD1ERCH
                                                                             */
#define ADC_CTRL1_AWD1EJCH              (1 << 21)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * AWD1EJCH
                                                                             */
#define ADC_CTRL1_AWD1CH_SHIFT          (16)
#define ADC_CTRL1_AWD1CH_MASK           (0x1F << ADC_CTRL1_AWD1CH_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * AWD1CH
                                                                             */
#define ADC_CTRL1_MULTMODE_SHIFT        (11)
#define ADC_CTRL1_MULTMODE_MASK                                              \
        (0x1F << ADC_CTRL1_MULTMODE_SHIFT)                              /*
                                                                         * MULTMODE
                                                                         */
#define ADC_CTRL1_DCTU_SHIFT            (8)
#define ADC_CTRL1_DCTU_MASK             (0x7 << ADC_CTRL1_DCTU_SHIFT)   /*
                                                                         * DCTU
                                                                         */
#define ADC_CTRL1_AUTOJC                (1 << 7)                        /*
                                                                         * AUTOJC
                                                                         */
#define ADC_CTRL1_AWD1SGLEN             (1 << 6)                        /*
                                                                         * AWD1SGLEN
                                                                         */
#define ADC_CTRL1_AWD1IE                (1 << 5)                        /*
                                                                         * AWD1IE
                                                                         */
#define ADC_CTRL1_JENDCIEN              (1 << 4)                        /*
                                                                         * JENDCIEN
                                                                         */
#define ADC_CTRL1_JENDCAIEN             (1 << 3)                        /*
                                                                         * JENDCAIEN
                                                                         */
#define ADC_CTRL1_ENDCIEN               (1 << 2)                        /*
                                                                         * ENDCIEN
                                                                         */
#define ADC_CTRL1_ENDCAIEN              (1 << 1)                        /*
                                                                         * ENDCAIEN
                                                                         */
#define ADC_CTRL1_SCANMD                (1 << 0)                        /*
                                                                         * SCANMD
                                                                         */

/******** Bit definition for ADC_CTRL2 register  ********/
#define ADC_CTRL2_EXTPRSEL_SHIFT        (30)
#define ADC_CTRL2_EXTPRSEL_MASK                                              \
        (0x3 << ADC_CTRL2_EXTPRSEL_SHIFT)                                   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * EXTPRSEL
                                                                             */
#define ADC_CTRL2_EXTRSEL_SHIFT         (24)
#define ADC_CTRL2_EXTRSEL_MASK          (0x3F << ADC_CTRL2_EXTRSEL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * EXTRSEL
                                                                             */
#define ADC_CTRL2_TEMPEN                (1 << 23)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * TEMPEN
                                                                             */
#define ADC_CTRL2_SWSTRRCH              (1 << 22)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SWSTRRCH
                                                                             */
#define ADC_CTRL2_SWSTRJCH              (1 << 21)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SWSTRJCH
                                                                             */
#define ADC_CTRL2_EXTJSEL_SHIFT         (13)
#define ADC_CTRL2_EXTJSEL_MASK          (0x3F << ADC_CTRL2_EXTJSEL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * EXTJSEL
                                                                             */
#define ADC_CTRL2_ALIG                  (1 << 11)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * ALIG
                                                                             */
#define ADC_CTRL2_EXTPJSEL_SHIFT        (9)
#define ADC_CTRL2_EXTPJSEL_MASK                                              \
        (0x3 << ADC_CTRL2_EXTPJSEL_SHIFT)                               /*
                                                                         * EXTPJSEL
                                                                         */
#define ADC_CTRL2_DMAMD_SHIFT           (7)
#define ADC_CTRL2_DMAMD_MASK            (0x3 << ADC_CTRL2_DMAMD_SHIFT)  /*
                                                                         * DMAMD
                                                                         */
#define ADC_CTRL2_MDSMU                 (1 << 6)                        /*
                                                                         * MDSMU
                                                                         */
#define ADC_CTRL2_DMNGT_SHIFT           (4)
#define ADC_CTRL2_DMNGT_MASK            (0x3 << ADC_CTRL2_DMNGT_SHIFT)  /*
                                                                         * DMNGT
                                                                         */
#define ADC_CTRL2_ENCAL                 (1 << 2)                        /*
                                                                         * ENCAL
                                                                         */
#define ADC_CTRL2_CTU                   (1 << 1)                        /* CTU
                                                                         */
#define ADC_CTRL2_ON                    (1 << 0)                        /* ON
                                                                         */

/******** Bit definition for ADC_CTRL3 register  ********/
#define ADC_CTRL3_GCOMP_SATEN           (1 << 29)   /* GCOMP_SATEN */
#define ADC_CTRL3_GCOMPEN               (1 << 28)   /* GCOMPEN */
#define ADC_CTRL3_SWJSTOP               (1 << 27)   /* SWJSTOP */
#define ADC_CTRL3_SWRSTOP               (1 << 26)   /* SWRSTOP */
#define ADC_CTRL3_JSTART                (1 << 25)   /* JSTART */
#define ADC_CTRL3_RSTART                (1 << 24)   /* RSTART */
#define ADC_CTRL3_VBATMEN               (1 << 9)    /* VBATMEN */
#define ADC_CTRL3_VREFINTEN             (1 << 8)    /* VREFINTEN */
#define ADC_CTRL3_BPCAL                 (1 << 7)    /* BPCAL */
#define ADC_CTRL3_PDRDY                 (1 << 6)    /* PDRDY */
#define ADC_CTRL3_RDY                   (1 << 5)    /* RDY */
#define ADC_CTRL3_CKMOD                 (1 << 4)    /* CKMOD */
#define ADC_CTRL3_RES                   (1 << 1)    /* RES */

/******** Bit definition for ADC_SAMPT1 register  ********/
#define ADC_SAMPT1_SAMP7_SHIFT          (28)
#define ADC_SAMPT1_SAMP7_MASK           (0xF << ADC_SAMPT1_SAMP7_SHIFT) /*
                                                                         * SAMP7
                                                                         */
#define ADC_SAMPT1_SAMP6_SHIFT          (24)
#define ADC_SAMPT1_SAMP6_MASK           (0xF << ADC_SAMPT1_SAMP6_SHIFT) /*
                                                                         * SAMP6
                                                                         */
#define ADC_SAMPT1_SAMP5_SHIFT          (20)
#define ADC_SAMPT1_SAMP5_MASK           (0xF << ADC_SAMPT1_SAMP5_SHIFT) /*
                                                                         * SAMP5
                                                                         */
#define ADC_SAMPT1_SAMP4_SHIFT          (16)
#define ADC_SAMPT1_SAMP4_MASK           (0xF << ADC_SAMPT1_SAMP4_SHIFT) /*
                                                                         * SAMP4
                                                                         */
#define ADC_SAMPT1_SAMP3_SHIFT          (12)
#define ADC_SAMPT1_SAMP3_MASK           (0xF << ADC_SAMPT1_SAMP3_SHIFT) /*
                                                                         * SAMP3
                                                                         */
#define ADC_SAMPT1_SAMP2_SHIFT          (8)
#define ADC_SAMPT1_SAMP2_MASK           (0xF << ADC_SAMPT1_SAMP2_SHIFT) /*
                                                                         * SAMP2
                                                                         */
#define ADC_SAMPT1_SAMP1_SHIFT          (4)
#define ADC_SAMPT1_SAMP1_MASK           (0xF << ADC_SAMPT1_SAMP1_SHIFT) /*
                                                                         * SAMP1
                                                                         */
#define ADC_SAMPT1_SAMP0_SHIFT          (0)
#define ADC_SAMPT1_SAMP0_MASK           (0xF << ADC_SAMPT1_SAMP0_SHIFT) /*
                                                                         * SAMP0
                                                                         */

/******** Bit definition for ADC_SAMPT2 register  ********/
#define ADC_SAMPT2_SAMP15_SHIFT         (28)
#define ADC_SAMPT2_SAMP15_MASK          (0xF << ADC_SAMPT2_SAMP15_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP15
                                                                             */
#define ADC_SAMPT2_SAMP14_SHIFT         (24)
#define ADC_SAMPT2_SAMP14_MASK          (0xF << ADC_SAMPT2_SAMP14_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP14
                                                                             */
#define ADC_SAMPT2_SAMP13_SHIFT         (20)
#define ADC_SAMPT2_SAMP13_MASK          (0xF << ADC_SAMPT2_SAMP13_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP13
                                                                             */
#define ADC_SAMPT2_SAMP12_SHIFT         (16)
#define ADC_SAMPT2_SAMP12_MASK          (0xF << ADC_SAMPT2_SAMP12_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP12
                                                                             */
#define ADC_SAMPT2_SAMP11_SHIFT         (12)
#define ADC_SAMPT2_SAMP11_MASK          (0xF << ADC_SAMPT2_SAMP11_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP11
                                                                             */
#define ADC_SAMPT2_SAMP10_SHIFT         (8)
#define ADC_SAMPT2_SAMP10_MASK          (0xF << ADC_SAMPT2_SAMP10_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP10
                                                                             */
#define ADC_SAMPT2_SAMP9_SHIFT          (4)
#define ADC_SAMPT2_SAMP9_MASK           (0xF << ADC_SAMPT2_SAMP9_SHIFT)     /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP9
                                                                             */
#define ADC_SAMPT2_SAMP8_SHIFT          (0)
#define ADC_SAMPT2_SAMP8_MASK           (0xF << ADC_SAMPT2_SAMP8_SHIFT)     /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP8
                                                                             */

/******** Bit definition for ADC_SAMPT3 register  ********/
#define ADC_SAMPT3_SAMP19_SHIFT         (12)
#define ADC_SAMPT3_SAMP19_MASK          (0xF << ADC_SAMPT3_SAMP19_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP19
                                                                             */
#define ADC_SAMPT3_SAMP18_SHIFT         (8)
#define ADC_SAMPT3_SAMP18_MASK          (0xF << ADC_SAMPT3_SAMP18_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP18
                                                                             */
#define ADC_SAMPT3_SAMP17_SHIFT         (4)
#define ADC_SAMPT3_SAMP17_MASK          (0xF << ADC_SAMPT3_SAMP17_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP17
                                                                             */
#define ADC_SAMPT3_SAMP16_SHIFT         (0)
#define ADC_SAMPT3_SAMP16_MASK          (0xF << ADC_SAMPT3_SAMP16_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * SAMP16
                                                                             */

/******** Bit definition for ADC_DIFSEL register  ********/
#define ADC_DIFSEL_DIFSEL_SHIFT         (0)
#define ADC_DIFSEL_DIFSEL_MASK                                               \
        (0xFFFFF << ADC_DIFSEL_DIFSEL_SHIFT) /* DIFSEL */

/******** Bit definition for ADC_AWDCTRL register  ********/
#define ADC_AWDCTRL_AWD3TIMEN           (1 << 2)    /* AWD3TIMEN */
#define ADC_AWDCTRL_AWD2TIMEN           (1 << 1)    /* AWD2TIMEN */
#define ADC_AWDCTRL_AWD1TIMEN           (1 << 0)    /* AWD1TIMEN */

/******** Bit definition for ADC_OFFSET1 register  ********/
#define ADC_OFFSET1_OFFSCH1EN           (1 << 31) /* OFFSCH1EN */
#define ADC_OFFSET1_OFFSCH1CH_SHIFT     (26)
#define ADC_OFFSET1_OFFSCH1CH_MASK                                           \
        (0x1F << ADC_OFFSET1_OFFSCH1CH_SHIFT)       /* OFFSCH1CH */
#define ADC_OFFSET1_OFFSCH1SATEN        (1 << 25)   /* OFFSCH1SATEN */
#define ADC_OFFSET1_OFFSCH1DIR          (1 << 24)   /* OFFSCH1DIR */
#define ADC_OFFSET1_OFFSCH1DAT_SHIFT    (0)
#define ADC_OFFSET1_OFFSCH1DAT_MASK                                          \
        (0xFFF << ADC_OFFSET1_OFFSCH1DAT_SHIFT) /* OFFSCH1DAT */

/******** Bit definition for ADC_OFFSET2 register  ********/
#define ADC_OFFSET2_OFFSCH2EN           (1 << 31) /* OFFSCH2EN */
#define ADC_OFFSET2_OFFSCH2CH_SHIFT     (26)
#define ADC_OFFSET2_OFFSCH2CH_MASK                                           \
        (0x1F << ADC_OFFSET2_OFFSCH2CH_SHIFT)       /* OFFSCH2CH */
#define ADC_OFFSET2_OFFSCH2SATEN        (1 << 25)   /* OFFSCH2SATEN */
#define ADC_OFFSET2_OFFSCH2DIR          (1 << 24)   /* OFFSCH2DIR */
#define ADC_OFFSET2_OFFSCH2DAT_SHIFT    (0)
#define ADC_OFFSET2_OFFSCH2DAT_MASK                                          \
        (0xFFF << ADC_OFFSET2_OFFSCH2DAT_SHIFT) /* OFFSCH2DAT */

/******** Bit definition for ADC_OFFSET3 register  ********/
#define ADC_OFFSET3_OFFSCH3EN           (1 << 31) /* OFFSCH3EN */
#define ADC_OFFSET3_OFFSCH3CH_SHIFT     (26)
#define ADC_OFFSET3_OFFSCH3CH_MASK                                           \
        (0x1F << ADC_OFFSET3_OFFSCH3CH_SHIFT)       /* OFFSCH3CH */
#define ADC_OFFSET3_OFFSCH3SATEN        (1 << 25)   /* OFFSCH3SATEN */
#define ADC_OFFSET3_OFFSCH3DIR          (1 << 24)   /* OFFSCH3DIR */
#define ADC_OFFSET3_OFFSCH3DAT_SHIFT    (0)
#define ADC_OFFSET3_OFFSCH3DAT_MASK                                          \
        (0xFFF << ADC_OFFSET3_OFFSCH3DAT_SHIFT) /* OFFSCH3DAT */

/******** Bit definition for ADC_OFFSET4 register  ********/
#define ADC_OFFSET4_OFFSCH4EN           (1 << 31) /* OFFSCH4EN */
#define ADC_OFFSET4_OFFSCH4CH_SHIFT     (26)
#define ADC_OFFSET4_OFFSCH4CH_MASK                                           \
        (0x1F << ADC_OFFSET4_OFFSCH4CH_SHIFT)       /* OFFSCH4CH */
#define ADC_OFFSET4_OFFSCH4SATEN        (1 << 25)   /* OFFSCH4SATEN */
#define ADC_OFFSET4_OFFSCH4DIR          (1 << 24)   /* OFFSCH4DIR */
#define ADC_OFFSET4_OFFSCH4DAT_SHIFT    (0)
#define ADC_OFFSET4_OFFSCH4DAT_MASK                                          \
        (0xFFF << ADC_OFFSET4_OFFSCH4DAT_SHIFT) /* OFFSCH4DAT */

/******** Bit definition for ADC_AWD1HIGH register  ********/
#define ADC_AWD1HIGH_HTH_SHIFT          (0)
#define ADC_AWD1HIGH_HTH_MASK           (0xFFF << ADC_AWD1HIGH_HTH_SHIFT) /*
                                                                           * HTH
                                                                           */

/******** Bit definition for ADC_AWD1LOW register  ********/
#define ADC_AWD1LOW_AWDFIL_SHIFT        (12)
#define ADC_AWD1LOW_AWDFIL_MASK         (0x7 << ADC_AWD1LOW_AWDFIL_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * AWDFIL
                                                                             */
#define ADC_AWD1LOW_LTH_SHIFT           (0)
#define ADC_AWD1LOW_LTH_MASK            (0xFFF << ADC_AWD1LOW_LTH_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * LTH
                                                                             */

/******** Bit definition for ADC_AWD2HIGH register  ********/
#define ADC_AWD2HIGH_HTH_SHIFT          (0)
#define ADC_AWD2HIGH_HTH_MASK           (0xFFF << ADC_AWD2HIGH_HTH_SHIFT) /*
                                                                           * HTH
                                                                           */

/******** Bit definition for ADC_AWD2LOW register  ********/
#define ADC_AWD2LOW_LTH_SHIFT           (0)
#define ADC_AWD2LOW_LTH_MASK            (0xFFF << ADC_AWD2LOW_LTH_SHIFT) /*
                                                                          * LTH
                                                                          */

/******** Bit definition for ADC_AWD3HIGH register  ********/
#define ADC_AWD3HIGH_HTH_SHIFT          (0)
#define ADC_AWD3HIGH_HTH_MASK           (0xFFF << ADC_AWD3HIGH_HTH_SHIFT) /*
                                                                           * HTH
                                                                           */

/******** Bit definition for ADC_AWD3LOW register  ********/
#define ADC_AWD3LOW_LTH_SHIFT           (0)
#define ADC_AWD3LOW_LTH_MASK            (0xFFF << ADC_AWD3LOW_LTH_SHIFT) /*
                                                                          * LTH
                                                                          */

/******** Bit definition for ADC_AWD2EN register  ********/
#define ADC_AWD2EN_AWD2EN_SHIFT         (0)
#define ADC_AWD2EN_AWD2EN_MASK                                               \
        (0xFFFFF << ADC_AWD2EN_AWD2EN_SHIFT) /* AWD2EN */

/******** Bit definition for ADC_AWD3EN register  ********/
#define ADC_AWD3EN_AWD3EN_SHIFT         (0)
#define ADC_AWD3EN_AWD3EN_MASK                                               \
        (0xFFFFF << ADC_AWD3EN_AWD3EN_SHIFT) /* AWD3EN */

/******** Bit definition for ADC_AWD2INTEN register  ********/
#define ADC_AWD2INTEN_AWD2INTEN_SHIFT   (0)
#define ADC_AWD2INTEN_AWD2INTEN_MASK                                         \
        (0xFFFFF << ADC_AWD2INTEN_AWD2INTEN_SHIFT) /* AWD2INTEN */

/******** Bit definition for ADC_AWD3INTEN register  ********/
#define ADC_AWD3INTEN_AWD3INTEN_SHIFT   (0)
#define ADC_AWD3INTEN_AWD3INTEN_MASK                                         \
        (0xFFFFF << ADC_AWD3INTEN_AWD3INTEN_SHIFT) /* AWD3INTEN */

/******** Bit definition for ADC_AWD2STS register  ********/
#define ADC_AWD2STS_AWD2FLAG_SHIFT      (0)
#define ADC_AWD2STS_AWD2FLAG_MASK                                            \
        (0xFFFFF << ADC_AWD2STS_AWD2FLAG_SHIFT) /* AWD2FLAG */

/******** Bit definition for ADC_AWD3STS register  ********/
#define ADC_AWD3STS_AWD3FLAG_SHIFT      (0)
#define ADC_AWD3STS_AWD3FLAG_MASK                                            \
        (0xFFFFF << ADC_AWD3STS_AWD3FLAG_SHIFT) /* AWD3FLAG */

/******** Bit definition for ADC_RSEQ1 register  ********/
#define ADC_RSEQ1_LEN_SHIFT             (10)
#define ADC_RSEQ1_LEN_MASK              (0x1F << ADC_RSEQ1_LEN_SHIFT)   /* LEN
                                                                         */
#define ADC_RSEQ1_SEQ20_SHIFT           (5)
#define ADC_RSEQ1_SEQ20_MASK            (0x1F << ADC_RSEQ1_SEQ20_SHIFT) /*
                                                                         * SEQ20
                                                                         */
#define ADC_RSEQ1_SEQ19_SHIFT           (0)
#define ADC_RSEQ1_SEQ19_MASK            (0x1F << ADC_RSEQ1_SEQ19_SHIFT) /*
                                                                         * SEQ19
                                                                         */

/******** Bit definition for ADC_RSEQ2 register  ********/
#define ADC_RSEQ2_SEQ18_SHIFT           (25)
#define ADC_RSEQ2_SEQ18_MASK            (0x1F << ADC_RSEQ2_SEQ18_SHIFT) /*
                                                                         * SEQ18
                                                                         */
#define ADC_RSEQ2_SEQ17_SHIFT           (20)
#define ADC_RSEQ2_SEQ17_MASK            (0x1F << ADC_RSEQ2_SEQ17_SHIFT) /*
                                                                         * SEQ17
                                                                         */
#define ADC_RSEQ2_SEQ16_SHIFT           (15)
#define ADC_RSEQ2_SEQ16_MASK            (0x1F << ADC_RSEQ2_SEQ16_SHIFT) /*
                                                                         * SEQ16
                                                                         */
#define ADC_RSEQ2_SEQ15_SHIFT           (10)
#define ADC_RSEQ2_SEQ15_MASK            (0x1F << ADC_RSEQ2_SEQ15_SHIFT) /*
                                                                         * SEQ15
                                                                         */
#define ADC_RSEQ2_SEQ14_SHIFT           (5)
#define ADC_RSEQ2_SEQ14_MASK            (0x1F << ADC_RSEQ2_SEQ14_SHIFT) /*
                                                                         * SEQ14
                                                                         */
#define ADC_RSEQ2_SEQ13_SHIFT           (0)
#define ADC_RSEQ2_SEQ13_MASK            (0x1F << ADC_RSEQ2_SEQ13_SHIFT) /*
                                                                         * SEQ13
                                                                         */

/******** Bit definition for ADC_RSEQ3 register  ********/
#define ADC_RSEQ3_SEQ12_SHIFT           (25)
#define ADC_RSEQ3_SEQ12_MASK            (0x1F << ADC_RSEQ3_SEQ12_SHIFT) /*
                                                                         * SEQ12
                                                                         */
#define ADC_RSEQ3_SEQ11_SHIFT           (20)
#define ADC_RSEQ3_SEQ11_MASK            (0x1F << ADC_RSEQ3_SEQ11_SHIFT) /*
                                                                         * SEQ11
                                                                         */
#define ADC_RSEQ3_SEQ10_SHIFT           (15)
#define ADC_RSEQ3_SEQ10_MASK            (0x1F << ADC_RSEQ3_SEQ10_SHIFT) /*
                                                                         * SEQ10
                                                                         */
#define ADC_RSEQ3_SEQ9_SHIFT            (10)
#define ADC_RSEQ3_SEQ9_MASK             (0x1F << ADC_RSEQ3_SEQ9_SHIFT)  /*
                                                                         * SEQ9
                                                                         */
#define ADC_RSEQ3_SEQ8_SHIFT            (5)
#define ADC_RSEQ3_SEQ8_MASK             (0x1F << ADC_RSEQ3_SEQ8_SHIFT)  /*
                                                                         * SEQ8
                                                                         */
#define ADC_RSEQ3_SEQ7_SHIFT            (0)
#define ADC_RSEQ3_SEQ7_MASK             (0x1F << ADC_RSEQ3_SEQ7_SHIFT)  /*
                                                                         * SEQ7
                                                                         */

/******** Bit definition for ADC_RSEQ4 register  ********/
#define ADC_RSEQ4_SEQ6_SHIFT            (25)
#define ADC_RSEQ4_SEQ6_MASK             (0x1F << ADC_RSEQ4_SEQ6_SHIFT)  /*
                                                                         * SEQ6
                                                                         */
#define ADC_RSEQ4_SEQ5_SHIFT            (20)
#define ADC_RSEQ4_SEQ5_MASK             (0x1F << ADC_RSEQ4_SEQ5_SHIFT)  /*
                                                                         * SEQ5
                                                                         */
#define ADC_RSEQ4_SEQ4_SHIFT            (15)
#define ADC_RSEQ4_SEQ4_MASK             (0x1F << ADC_RSEQ4_SEQ4_SHIFT)  /*
                                                                         * SEQ4
                                                                         */
#define ADC_RSEQ4_SEQ3_SHIFT            (10)
#define ADC_RSEQ4_SEQ3_MASK             (0x1F << ADC_RSEQ4_SEQ3_SHIFT)  /*
                                                                         * SEQ3
                                                                         */
#define ADC_RSEQ4_SEQ2_SHIFT            (5)
#define ADC_RSEQ4_SEQ2_MASK             (0x1F << ADC_RSEQ4_SEQ2_SHIFT)  /*
                                                                         * SEQ2
                                                                         */
#define ADC_RSEQ4_SEQ1_SHIFT            (0)
#define ADC_RSEQ4_SEQ1_MASK             (0x1F << ADC_RSEQ4_SEQ1_SHIFT)  /*
                                                                         * SEQ1
                                                                         */

/******** Bit definition for ADC_JSEQ register  ********/
#define ADC_JSEQ_JLEN_SHIFT             (25)
#define ADC_JSEQ_JLEN_MASK              (0x3 << ADC_JSEQ_JLEN_SHIFT)    /*
                                                                         * JLEN
                                                                         */
#define ADC_JSEQ_JSEQ4_SHIFT            (15)
#define ADC_JSEQ_JSEQ4_MASK             (0x1F << ADC_JSEQ_JSEQ4_SHIFT)  /*
                                                                         * JSEQ4
                                                                         */
#define ADC_JSEQ_JSEQ3_SHIFT            (10)
#define ADC_JSEQ_JSEQ3_MASK             (0x1F << ADC_JSEQ_JSEQ3_SHIFT)  /*
                                                                         * JSEQ3
                                                                         */
#define ADC_JSEQ_JSEQ2_SHIFT            (5)
#define ADC_JSEQ_JSEQ2_MASK             (0x1F << ADC_JSEQ_JSEQ2_SHIFT)  /*
                                                                         * JSEQ2
                                                                         */
#define ADC_JSEQ_JSEQ1_SHIFT            (0)
#define ADC_JSEQ_JSEQ1_MASK             (0x1F << ADC_JSEQ_JSEQ1_SHIFT)  /*
                                                                         * JSEQ1
                                                                         */

/******** Bit definition for ADC_JDAT1 register  ********/
#define ADC_JDAT1_JDAT_SHIFT            (0)
#define ADC_JDAT1_JDAT_MASK             (0xFFFF << ADC_JDAT1_JDAT_SHIFT) /*
                                                                          * JDAT
                                                                          */

/******** Bit definition for ADC_JDAT2 register  ********/
#define ADC_JDAT2_JDAT_SHIFT            (0)
#define ADC_JDAT2_JDAT_MASK             (0xFFFF << ADC_JDAT2_JDAT_SHIFT) /*
                                                                          * JDAT
                                                                          */

/******** Bit definition for ADC_JDAT3 register  ********/
#define ADC_JDAT3_JDAT_SHIFT            (0)
#define ADC_JDAT3_JDAT_MASK             (0xFFFF << ADC_JDAT3_JDAT_SHIFT) /*
                                                                          * JDAT
                                                                          */

/******** Bit definition for ADC_JDAT4 register  ********/
#define ADC_JDAT4_JDAT_SHIFT            (0)
#define ADC_JDAT4_JDAT_MASK             (0xFFFF << ADC_JDAT4_JDAT_SHIFT) /*
                                                                          * JDAT
                                                                          */

/******** Bit definition for ADC_DAT register  ********/
#define ADC_DAT_DAT2_SHIFT              (16)
#define ADC_DAT_DAT2_MASK               (0xFFFF << ADC_DAT_DAT2_SHIFT)  /*
                                                                         * DAT2
                                                                         */
#define ADC_DAT_DAT1_SHIFT              (0)
#define ADC_DAT_DAT1_MASK               (0xFFFF << ADC_DAT_DAT1_SHIFT)  /*
                                                                         * DAT1
                                                                         */

/******** Bit definition for ADC_FIFOCFG register  ********/
#define ADC_FIFOCFG_NEINTEN             (1 << 11)                       /*
                                                                         * NEINTEN
                                                                         */
#define ADC_FIFOCFG_CLR                 (1 << 10)                       /* CLR
                                                                         */
#define ADC_FIFOCFG_WL_SHIFT            (6)
#define ADC_FIFOCFG_WL_MASK             (0xF << ADC_FIFOCFG_WL_SHIFT)   /* WL
                                                                         */
#define ADC_FIFOCFG_EN                  (1 << 5)                        /* EN
                                                                         */
#define ADC_FIFOCFG_HFINTEN             (1 << 4)                        /*
                                                                         * HFINTEN
                                                                         */
#define ADC_FIFOCFG_EINTEN              (1 << 3)                        /*
                                                                         * EINTEN
                                                                         */
#define ADC_FIFOCFG_FINTEN              (1 << 2)                        /*
                                                                         * FINTEN
                                                                         */

/******** Bit definition for ADC_FIFOSTS register  ********/
#define ADC_FIFOSTS_NEFLAG              (1 << 11) /* NEFLAG */
#define ADC_FIFOSTS_DATCNT_SHIFT        (5)
#define ADC_FIFOSTS_DATCNT_MASK                                              \
        (0x1F << ADC_FIFOSTS_DATCNT_SHIFT)          /* DATCNT */
#define ADC_FIFOSTS_HFFLAG              (1 << 4)    /* HFFLAG */
#define ADC_FIFOSTS_EFLAG               (1 << 3)    /* EFLAG */
#define ADC_FIFOSTS_FFLAG               (1 << 2)    /* FFLAG */

/******** Bit definition for ADC_DLYSMP register  ********/
#define ADC_DLYSMP_INTLEADVAL_SHIFT     (28)
#define ADC_DLYSMP_INTLEADVAL_MASK                                           \
        (0xF << ADC_DLYSMP_INTLEADVAL_SHIFT)                                /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * INTLEADVAL
                                                                             */
#define ADC_DLYSMP_DLYVAL_SHIFT         (24)
#define ADC_DLYSMP_DLYVAL_MASK          (0xF << ADC_DLYSMP_DLYVAL_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DLYVAL
                                                                             */
#define ADC_DLYSMP_DLYSAMPEN            (1 << 23)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DLYSAMPEN
                                                                             */

/******** Bit definition for ADC_OSCFG register  ********/
#define ADC_OSCFG_OSAWD                 (1 << 24)                       /*
                                                                         * OSAWD
                                                                         */
#define ADC_OSCFG_OSRMD                 (1 << 23)                       /*
                                                                         * OSRMD
                                                                         */
#define ADC_OSCFG_OSRTRIG               (1 << 22)                       /*
                                                                         * OSRTRIG
                                                                         */
#define ADC_OSCFG_OSS_SHIFT             (18)
#define ADC_OSCFG_OSS_MASK              (0xF << ADC_OSCFG_OSS_SHIFT)    /* OSS
                                                                         */
#define ADC_OSCFG_OSR_SHIFT             (14)
#define ADC_OSCFG_OSR_MASK              (0xF << ADC_OSCFG_OSR_SHIFT)    /* OSR
                                                                         */
#define ADC_OSCFG_OSJE                  (1 << 13)                       /*
                                                                         * OSJE
                                                                         */
#define ADC_OSCFG_OSRE                  (1 << 12)                       /*
                                                                         * OSRE
                                                                         */

/******** Bit definition for ADC_INTLRCFG register  ********/
#define ADC_INTLRCFG_WEN                (1 << 31)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * WEN
                                                                             */
#define ADC_INTLRCFG_RWSTART            (1 << 30)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * START
                                                                             */
#define ADC_INTLRCFG_DONE               (1 << 29)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * DONE
                                                                             */
#define ADC_INTLRCFG_ADDR_SHIFT         (26)
#define ADC_INTLRCFG_ADDR_MASK          (0x7 << ADC_INTLRCFG_ADDR_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDR
                                                                             */
#define ADC_INTLRCFG_WDATA_SHIFT        (18)
#define ADC_INTLRCFG_WDATA_MASK         (0xFF << ADC_INTLRCFG_WDATA_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * WDATA
                                                                             */
#define ADC_INTLRCFG_RDATA_SHIFT        (10)
#define ADC_INTLRCFG_RDATA_MASK         (0xFF << ADC_INTLRCFG_RDATA_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             *
                                                                             * RDATA
                                                                             */

/******** Bit definition for ADC_GCOMP register  ********/
#define ADC_GCOMP_GCOMPDAT_SHIFT        (0)
#define ADC_GCOMP_GCOMPDAT_MASK                                              \
        (0x3FFF << ADC_GCOMP_GCOMPDAT_SHIFT) /* GCOMPDAT */

/******** Bit definition for ADC_PUCFG register  ********/
#define ADC_PUCFG_RSTCLK_TIMESEL_SHIFT  (8)
#define ADC_PUCFG_RSTCLK_TIMESEL_MASK                                        \
        (0x7 << ADC_PUCFG_RSTCLK_TIMESEL_SHIFT) /* RST_TIMESEL */
#define ADC_PUCFG_RST_TIMESEL_SHIFT     (4)
#define ADC_PUCFG_RST_TIMESEL_MASK                                           \
        (0x7 << ADC_PUCFG_RST_TIMESEL_SHIFT)        /* RST_TIMESEL */
#define ADC_PUCFG_SWCLKSTOP             (1 << 2)    /* SWCLKSTOP */
#define ADC_PUCFG_SWRSTEN               (1 << 1)    /* SWRSTEN */
#define ADC_PUCFG_RSTMD                 (1 << 0)    /* RSTMD */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32_ADC_H */
