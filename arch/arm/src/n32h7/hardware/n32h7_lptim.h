/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_lptim.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_LPTIM_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_LPTIM_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_LPTIM_INTSTS_OFFSET     0x0     /* LPTIM Interrupt and Status
                                             * Register */
#define N32_LPTIM_INTCLR_OFFSET     0x4     /* LPTIM Interrupt Clear Register
                                             */
#define N32_LPTIM_INTEN_OFFSET      0x8     /* LPTIM Interrupt Enable Register
                                             */
#define N32_LPTIM_CFG_OFFSET        0xC     /* LPTIM Configuration Register */
#define N32_LPTIM_CTRL_OFFSET       0x10    /* LPTIM Control Register */
#define N32_LPTIM_CMP_OFFSET        0x14    /* LPTIM Compare Register */
#define N32_LPTIM_ARR_OFFSET        0x18    /* LPTIM Auto-Reload Register */
#define N32_LPTIM_CNT_OFFSET        0x1C    /* LPTIM Coutnter Register */
#define N32_LPTIM_OPT_OFFSET        0x20    /* LPTIM Option Register */

#define N32_LPTIM1_INTSTS           (N32_LPTIM1_BASE + \
                                     N32_LPTIM_INTSTS_OFFSET)
#define N32_LPTIM1_INTCLR           (N32_LPTIM1_BASE + \
                                     N32_LPTIM_INTCLR_OFFSET)
#define N32_LPTIM1_INTEN            (N32_LPTIM1_BASE + N32_LPTIM_INTEN_OFFSET)
#define N32_LPTIM1_CFG              (N32_LPTIM1_BASE + N32_LPTIM_CFG_OFFSET)
#define N32_LPTIM1_CTRL             (N32_LPTIM1_BASE + N32_LPTIM_CTRL_OFFSET)
#define N32_LPTIM1_CMP              (N32_LPTIM1_BASE + N32_LPTIM_CMP_OFFSET)
#define N32_LPTIM1_ARR              (N32_LPTIM1_BASE + N32_LPTIM_ARR_OFFSET)
#define N32_LPTIM1_CNT              (N32_LPTIM1_BASE + N32_LPTIM_CNT_OFFSET)
#define N32_LPTIM1_OPT              (N32_LPTIM1_BASE + N32_LPTIM_OPT_OFFSET)

#define N32_LPTIM2_INTSTS           (N32_LPTIM2_BASE + \
                                     N32_LPTIM_INTSTS_OFFSET)
#define N32_LPTIM2_INTCLR           (N32_LPTIM2_BASE + \
                                     N32_LPTIM_INTCLR_OFFSET)
#define N32_LPTIM2_INTEN            (N32_LPTIM2_BASE + N32_LPTIM_INTEN_OFFSET)
#define N32_LPTIM2_CFG              (N32_LPTIM2_BASE + N32_LPTIM_CFG_OFFSET)
#define N32_LPTIM2_CTRL             (N32_LPTIM2_BASE + N32_LPTIM_CTRL_OFFSET)
#define N32_LPTIM2_CMP              (N32_LPTIM2_BASE + N32_LPTIM_CMP_OFFSET)
#define N32_LPTIM2_ARR              (N32_LPTIM2_BASE + N32_LPTIM_ARR_OFFSET)
#define N32_LPTIM2_CNT              (N32_LPTIM2_BASE + N32_LPTIM_CNT_OFFSET)
#define N32_LPTIM2_OPT              (N32_LPTIM2_BASE + N32_LPTIM_OPT_OFFSET)

#define N32_LPTIM3_INTSTS           (N32_LPTIM3_BASE + \
                                     N32_LPTIM_INTSTS_OFFSET)
#define N32_LPTIM3_INTCLR           (N32_LPTIM3_BASE + \
                                     N32_LPTIM_INTCLR_OFFSET)
#define N32_LPTIM3_INTEN            (N32_LPTIM3_BASE + N32_LPTIM_INTEN_OFFSET)
#define N32_LPTIM3_CFG              (N32_LPTIM3_BASE + N32_LPTIM_CFG_OFFSET)
#define N32_LPTIM3_CTRL             (N32_LPTIM3_BASE + N32_LPTIM_CTRL_OFFSET)
#define N32_LPTIM3_CMP              (N32_LPTIM3_BASE + N32_LPTIM_CMP_OFFSET)
#define N32_LPTIM3_ARR              (N32_LPTIM3_BASE + N32_LPTIM_ARR_OFFSET)
#define N32_LPTIM3_CNT              (N32_LPTIM3_BASE + N32_LPTIM_CNT_OFFSET)
#define N32_LPTIM3_OPT              (N32_LPTIM3_BASE + N32_LPTIM_OPT_OFFSET)

#define N32_LPTIM4_INTSTS           (N32_LPTIM4_BASE + \
                                     N32_LPTIM_INTSTS_OFFSET)
#define N32_LPTIM4_INTCLR           (N32_LPTIM4_BASE + \
                                     N32_LPTIM_INTCLR_OFFSET)
#define N32_LPTIM4_INTEN            (N32_LPTIM4_BASE + N32_LPTIM_INTEN_OFFSET)
#define N32_LPTIM4_CFG              (N32_LPTIM4_BASE + N32_LPTIM_CFG_OFFSET)
#define N32_LPTIM4_CTRL             (N32_LPTIM4_BASE + N32_LPTIM_CTRL_OFFSET)
#define N32_LPTIM4_CMP              (N32_LPTIM4_BASE + N32_LPTIM_CMP_OFFSET)
#define N32_LPTIM4_ARR              (N32_LPTIM4_BASE + N32_LPTIM_ARR_OFFSET)
#define N32_LPTIM4_CNT              (N32_LPTIM4_BASE + N32_LPTIM_CNT_OFFSET)
#define N32_LPTIM4_OPT              (N32_LPTIM4_BASE + N32_LPTIM_OPT_OFFSET)

#define N32_LPTIM5_INTSTS           (N32_LPTIM5_BASE + \
                                     N32_LPTIM_INTSTS_OFFSET)
#define N32_LPTIM5_INTCLR           (N32_LPTIM5_BASE + \
                                     N32_LPTIM_INTCLR_OFFSET)
#define N32_LPTIM5_INTEN            (N32_LPTIM5_BASE + N32_LPTIM_INTEN_OFFSET)
#define N32_LPTIM5_CFG              (N32_LPTIM5_BASE + N32_LPTIM_CFG_OFFSET)
#define N32_LPTIM5_CTRL             (N32_LPTIM5_BASE + N32_LPTIM_CTRL_OFFSET)
#define N32_LPTIM5_CMP              (N32_LPTIM5_BASE + N32_LPTIM_CMP_OFFSET)
#define N32_LPTIM5_ARR              (N32_LPTIM5_BASE + N32_LPTIM_ARR_OFFSET)
#define N32_LPTIM5_CNT              (N32_LPTIM5_BASE + N32_LPTIM_CNT_OFFSET)
#define N32_LPTIM5_OPT              (N32_LPTIM5_BASE + N32_LPTIM_OPT_OFFSET)

/******** Bit definition for LPTIM_INTSTS register  ********/
#define LPTIM_INTSTS_CMPM           (1 << 0)    /* Compare match */
#define LPTIM_INTSTS_ARRM           (1 << 1)    /* Auto-reload match */
#define LPTIM_INTSTS_EXTRIG         (1 << 2)    /* External trigger valid
                                                 * event */
#define LPTIM_INTSTS_CMPUPD         (1 << 3)    /* Compare value updated to
                                                 * register */
#define LPTIM_INTSTS_ARRUPD         (1 << 4)    /* Auto-reload value updated
                                                 * to register */
#define LPTIM_INTSTS_UP             (1 << 5)    /* Change counter direction up
                                                 */
#define LPTIM_INTSTS_DOWN           (1 << 6)    /* Change counter direction
                                                 * down */

/******** Bit definition for LPTIM_INTCLR register  ********/
#define LPTIM_INTCLR_CMPMCF         (1 << 0)    /* Compare match clear flag */
#define LPTIM_INTCLR_ARRMCF         (1 << 1)    /* Auto-reload match clear
                                                 * flag */
#define LPTIM_INTCLR_EXTRIGCF       (1 << 2)    /* External trigger valid edge
                                                 * clear flag */
#define LPTIM_INTCLR_CMPUPDCF       (1 << 3)    /* Compare value updated to
                                                 * register clear flag */
#define LPTIM_INTCLR_ARRUPDCF       (1 << 4)    /* Auto-reload value updated
                                                 * to register clear flag */
#define LPTIM_INTCLR_UPCF           (1 << 5)    /* Change counter direction up
                                                 * clear flag */
#define LPTIM_INTCLR_DOWNCF         (1 << 6)    /* Change counter direction
                                                 * down clear flag */

/******** Bit definition for LPTIM_INTEN register  ********/
#define LPTIM_INTEN_CMPMIE          (1 << 0)    /* Compare match interrupt
                                                 * enable bit */
#define LPTIM_INTEN_ARRMIE          (1 << 1)    /* Auto-reload match interrupt
                                                 * enable bit */
#define LPTIM_INTEN_EXTRIGIE        (1 << 2)    /* External trigger valid edge
                                                 * interrupt enable bit */
#define LPTIM_INTEN_CMPUPDIE        (1 << 3)    /* Compare value updated to
                                                 * register interrupt enable
                                                 * bit */
#define LPTIM_INTEN_ARRUPDIE        (1 << 4)    /* Auto-reload value updated
                                                 * to register interrupt
                                                 * enable bit */
#define LPTIM_INTEN_UPIE            (1 << 5)    /* Change counter direction up
                                                 * interrupt enable bit */
#define LPTIM_INTEN_DOWNIE          (1 << 6)    /* Change counter direction
                                                 * down interrupt enable bit
                                                 */

/******** Bit definition for LPTIM_CFG register  ********/
#define LPTIM_CFG_CLKSEL            (1 << 0)                            /*
                                                                         * Clock
                                                                         * selctor
                                                                         */
#define LPTIM_CFG_CLKPOL_SHIFT      (1)
#define LPTIM_CFG_CLKPOL_MASK       (0x3 << LPTIM_CFG_CLKPOL_SHIFT)     /*
                                                                         * Clock
                                                                         * Polarity
                                                                         */
#define LPTIM_CFG_CLKFLT_SHIFT      (3)
#define LPTIM_CFG_CLKFLT_MASK       (0x3 << LPTIM_CFG_CLKFLT_SHIFT)     /*
                                                                         * Ditital
                                                                         * filter
                                                                         * external
                                                                         * clock
                                                                         * input
                                                                         * configuration
                                                                         */
#define LPTIM_CFG_TRIGFLT_SHIFT     (6)
#define LPTIM_CFG_TRIGFLT_MASK      (0x3 << LPTIM_CFG_TRIGFLT_SHIFT)    /*
                                                                         * Configure
                                                                         * the
                                                                         * data
                                                                         * filter
                                                                         * trigger
                                                                         * bit
                                                                         */
#define LPTIM_CFG_CLKPRE_SHIFT      (9)
#define LPTIM_CFG_CLKPRE_MASK       (0x7 << LPTIM_CFG_CLKPRE_SHIFT)     /*
                                                                         * Clock
                                                                         * division
                                                                         * factor
                                                                         * bit
                                                                         */
#define LPTIM_CFG_TRGSEL_SHIFT      (13)
#define LPTIM_CFG_TRGSEL_MASK       (0xF << LPTIM_CFG_TRGSEL_SHIFT)     /*
                                                                         * Tigger
                                                                         * selctor
                                                                         */
#define LPTIM_CFG_TRGEN_SHIFT       (17)
#define LPTIM_CFG_TRGEN_MASK        (0x3 << LPTIM_CFG_TRGEN_SHIFT)      /*
                                                                         * Trigger
                                                                         * enable
                                                                         * and
                                                                         * polatiry
                                                                         * bit
                                                                         */
#define LPTIM_CFG_TIMOUTEN          (1 << 19)                           /*
                                                                         * Timeout
                                                                         * enable
                                                                         */
#define LPTIM_CFG_WAVE              (1 << 20)                           /*
                                                                         * Waveform
                                                                         * shape
                                                                         */
#define LPTIM_CFG_WAVEPOL           (1 << 21)                           /*
                                                                         * Waveform
                                                                         * shape
                                                                         * polarity
                                                                         */
#define LPTIM_CFG_RELOAD            (1 << 22)                           /*
                                                                         * Register
                                                                         * update
                                                                         * mode
                                                                         */
#define LPTIM_CFG_CNTMEN            (1 << 23)                           /*
                                                                         * Counter
                                                                         * mode
                                                                         * enabled
                                                                         */
#define LPTIM_CFG_ENC               (1 << 24)                           /*
                                                                         * Encoder
                                                                         * mode
                                                                         * enable
                                                                         */
#define LPTIM_CFG_NENC              (1 << 25)                           /*
                                                                         * Non-orthgonal
                                                                         * mode
                                                                         * enable
                                                                         */

/******** Bit definition for LPTIM_CTRL register  ********/
#define LPTIM_CTRL_LPTIMEN          (1 << 0)    /* LPTIM enable */
#define LPTIM_CTRL_SNGMST           (1 << 1)    /* LPTIM start in Single pulse
                                                 * mode */
#define LPTIM_CTRL_TSTCM            (1 << 2)    /* Timer start in Continuous
                                                 * mode */

/******** Bit definition for LPTIM_CMP register  ********/
#define LPTIM_CMP_CMPVAL_SHIFT      (0)
#define LPTIM_CMP_CMPVAL_MASK       (0xFFFF << LPTIM_CMP_CMPVAL_SHIFT) /*
                                                                        * Compare
                                                                        * value
                                                                        */

/******** Bit definition for LPTIM_ARR register  ********/
#define LPTIM_ARR_ARRVAL_SHIFT      (0)
#define LPTIM_ARR_ARRVAL_MASK       (0xFFFF << LPTIM_ARR_ARRVAL_SHIFT) /* Auto
                                                                        * reload
                                                                        * value
                                                                        */

/******** Bit definition for LPTIM_CNT register  ********/
#define LPTIM_CNT_CNTVAL_SHIFT      (0)
#define LPTIM_CNT_CNTVAL_MASK       (0xFFFF << LPTIM_CNT_CNTVAL_SHIFT) /*
                                                                        * Counter
                                                                        * value
                                                                        */

/******** Bit definition for LPTIM_OPT register  ********/
#define LPTIM_OPT_OPT1_SHIFT        (0)
#define LPTIM_OPT_OPT1_MASK         (0x7 << LPTIM_OPT_OPT1_SHIFT)   /* LPTIM
                                                                     * Input1
                                                                     * Connection
                                                                     * selection
                                                                     * bit */
#define LPTIM_OPT_OPT2_SHIFT        (3)
#define LPTIM_OPT_OPT2_MASK         (0x7 << LPTIM_OPT_OPT2_SHIFT)   /* LPTIM
                                                                     * Input2
                                                                     * Connection
                                                                     * selection
                                                                     * bit */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_LPTIM_H */
