/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_dac.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DAC_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DAC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_DAC_DAC12_CTRL_OFFSET           0x0     /* DAC12_CTRL */
#define N32_DAC_DAC12_SOTTR_OFFSET          0x4     /* DAC12_SOTTR */
#define N32_DAC_DAC1_DATO_OFFSET            0x8     /* DAC1_DATO */
#define N32_DAC_DAC2_DATO_OFFSET            0xC     /* DAC2_DATO */
#define N32_DAC_DAC1_DR8_OFFSET             0x10    /* DAC1_DR8 */
#define N32_DAC_DAC1_DL12_OFFSET            0x14    /* DAC1_DL12 */
#define N32_DAC_DAC1_DR12_OFFSET            0x18    /* DAC1_DR12 */
#define N32_DAC_DAC2_DR8_OFFSET             0x1C    /* DAC2_DR8 */
#define N32_DAC_DAC2_DL12_OFFSET            0x20    /* DAC2_DL12 */
#define N32_DAC_DAC2_DR12_OFFSET            0x24    /* DAC2_DR12 */
#define N32_DAC_DAC12_DR8D_OFFSET           0x28    /* DAC12_DR8D */
#define N32_DAC_DAC12_DL12D_OFFSET          0x2C    /* DAC12_DL12D */
#define N32_DAC_DAC12_DR12D_OFFSET          0x30    /* DAC12_DR12D */
#define N32_DAC_DAC12_SELCTRL_OFFSET        0x38    /* DAC12_SELCTRL */
#define N32_DAC_DAC12_STS_OFFSET            0x3C    /* DAC12_STS */
#define N32_DAC_DAC12_GCTRL_OFFSET          0x40    /* DAC12_GCTRL */
#define N32_DAC_DAC12_STINC_OFFSET          0x44    /* DAC12_STINC */
#define N32_DAC_DAC12_STRST_OFFSET          0x48    /* DAC12_STRST */
#define N32_DAC_DAC12_CALC_OFFSET           0x5C    /* DAC12_CALC */

#define N32_DAC12_DAC12_CTRL                (N32_DAC12_BASE + \
                                             N32_DAC_DAC12_CTRL_OFFSET)
#define N32_DAC12_DAC12_SOTTR               (N32_DAC12_BASE + \
                                             N32_DAC_DAC12_SOTTR_OFFSET)
#define N32_DAC12_DAC1_DATO                 (N32_DAC12_BASE + \
                                             N32_DAC_DAC1_DATO_OFFSET)
#define N32_DAC12_DAC2_DATO                 (N32_DAC12_BASE + \
                                             N32_DAC_DAC2_DATO_OFFSET)
#define N32_DAC12_DAC1_DR8                  (N32_DAC12_BASE + \
                                             N32_DAC_DAC1_DR8_OFFSET)
#define N32_DAC12_DAC1_DL12                 (N32_DAC12_BASE + \
                                             N32_DAC_DAC1_DL12_OFFSET)
#define N32_DAC12_DAC1_DR12                 (N32_DAC12_BASE + \
                                             N32_DAC_DAC1_DR12_OFFSET)
#define N32_DAC12_DAC2_DR8                  (N32_DAC12_BASE + \
                                             N32_DAC_DAC2_DR8_OFFSET)
#define N32_DAC12_DAC2_DL12                 (N32_DAC12_BASE + \
                                             N32_DAC_DAC2_DL12_OFFSET)
#define N32_DAC12_DAC2_DR12                 (N32_DAC12_BASE + \
                                             N32_DAC_DAC2_DR12_OFFSET)
#define N32_DAC12_DAC12_DR8D                (N32_DAC12_BASE + \
                                             N32_DAC_DAC12_DR8D_OFFSET)
#define N32_DAC12_DAC12_DL12D               (N32_DAC12_BASE + \
                                             N32_DAC_DAC12_DL12D_OFFSET)
#define N32_DAC12_DAC12_DR12D               (N32_DAC12_BASE + \
                                             N32_DAC_DAC12_DR12D_OFFSET)
#define N32_DAC12_DAC12_SELCTRL             (N32_DAC12_BASE + \
                                             N32_DAC_DAC12_SELCTRL_OFFSET)
#define N32_DAC12_DAC12_STS                 (N32_DAC12_BASE + \
                                             N32_DAC_DAC12_STS_OFFSET)
#define N32_DAC12_DAC12_GCTRL               (N32_DAC12_BASE + \
                                             N32_DAC_DAC12_GCTRL_OFFSET)
#define N32_DAC12_DAC12_STINC               (N32_DAC12_BASE + \
                                             N32_DAC_DAC12_STINC_OFFSET)
#define N32_DAC12_DAC12_STRST               (N32_DAC12_BASE + \
                                             N32_DAC_DAC12_STRST_OFFSET)
#define N32_DAC12_DAC12_CALC                (N32_DAC12_BASE + \
                                             N32_DAC_DAC12_CALC_OFFSET)

#define N32_DAC34_DAC12_CTRL                (N32_DAC34_BASE + \
                                             N32_DAC_DAC12_CTRL_OFFSET)
#define N32_DAC34_DAC12_SOTTR               (N32_DAC34_BASE + \
                                             N32_DAC_DAC12_SOTTR_OFFSET)
#define N32_DAC34_DAC1_DATO                 (N32_DAC34_BASE + \
                                             N32_DAC_DAC1_DATO_OFFSET)
#define N32_DAC34_DAC2_DATO                 (N32_DAC34_BASE + \
                                             N32_DAC_DAC2_DATO_OFFSET)
#define N32_DAC34_DAC1_DR8                  (N32_DAC34_BASE + \
                                             N32_DAC_DAC1_DR8_OFFSET)
#define N32_DAC34_DAC1_DL12                 (N32_DAC34_BASE + \
                                             N32_DAC_DAC1_DL12_OFFSET)
#define N32_DAC34_DAC1_DR12                 (N32_DAC34_BASE + \
                                             N32_DAC_DAC1_DR12_OFFSET)
#define N32_DAC34_DAC2_DR8                  (N32_DAC34_BASE + \
                                             N32_DAC_DAC2_DR8_OFFSET)
#define N32_DAC34_DAC2_DL12                 (N32_DAC34_BASE + \
                                             N32_DAC_DAC2_DL12_OFFSET)
#define N32_DAC34_DAC2_DR12                 (N32_DAC34_BASE + \
                                             N32_DAC_DAC2_DR12_OFFSET)
#define N32_DAC34_DAC12_DR8D                (N32_DAC34_BASE + \
                                             N32_DAC_DAC12_DR8D_OFFSET)
#define N32_DAC34_DAC12_DL12D               (N32_DAC34_BASE + \
                                             N32_DAC_DAC12_DL12D_OFFSET)
#define N32_DAC34_DAC12_DR12D               (N32_DAC34_BASE + \
                                             N32_DAC_DAC12_DR12D_OFFSET)
#define N32_DAC34_DAC12_SELCTRL             (N32_DAC34_BASE + \
                                             N32_DAC_DAC12_SELCTRL_OFFSET)
#define N32_DAC34_DAC12_STS                 (N32_DAC34_BASE + \
                                             N32_DAC_DAC12_STS_OFFSET)
#define N32_DAC34_DAC12_GCTRL               (N32_DAC34_BASE + \
                                             N32_DAC_DAC12_GCTRL_OFFSET)
#define N32_DAC34_DAC12_STINC               (N32_DAC34_BASE + \
                                             N32_DAC_DAC12_STINC_OFFSET)
#define N32_DAC34_DAC12_STRST               (N32_DAC34_BASE + \
                                             N32_DAC_DAC12_STRST_OFFSET)
#define N32_DAC34_DAC12_CALC                (N32_DAC34_BASE + \
                                             N32_DAC_DAC12_CALC_OFFSET)

#define N32_DAC56_DAC12_CTRL                (N32_DAC56_BASE + \
                                             N32_DAC_DAC12_CTRL_OFFSET)
#define N32_DAC56_DAC12_SOTTR               (N32_DAC56_BASE + \
                                             N32_DAC_DAC12_SOTTR_OFFSET)
#define N32_DAC56_DAC1_DATO                 (N32_DAC56_BASE + \
                                             N32_DAC_DAC1_DATO_OFFSET)
#define N32_DAC56_DAC2_DATO                 (N32_DAC56_BASE + \
                                             N32_DAC_DAC2_DATO_OFFSET)
#define N32_DAC56_DAC1_DR8                  (N32_DAC56_BASE + \
                                             N32_DAC_DAC1_DR8_OFFSET)
#define N32_DAC56_DAC1_DL12                 (N32_DAC56_BASE + \
                                             N32_DAC_DAC1_DL12_OFFSET)
#define N32_DAC56_DAC1_DR12                 (N32_DAC56_BASE + \
                                             N32_DAC_DAC1_DR12_OFFSET)
#define N32_DAC56_DAC2_DR8                  (N32_DAC56_BASE + \
                                             N32_DAC_DAC2_DR8_OFFSET)
#define N32_DAC56_DAC2_DL12                 (N32_DAC56_BASE + \
                                             N32_DAC_DAC2_DL12_OFFSET)
#define N32_DAC56_DAC2_DR12                 (N32_DAC56_BASE + \
                                             N32_DAC_DAC2_DR12_OFFSET)
#define N32_DAC56_DAC12_DR8D                (N32_DAC56_BASE + \
                                             N32_DAC_DAC12_DR8D_OFFSET)
#define N32_DAC56_DAC12_DL12D               (N32_DAC56_BASE + \
                                             N32_DAC_DAC12_DL12D_OFFSET)
#define N32_DAC56_DAC12_DR12D               (N32_DAC56_BASE + \
                                             N32_DAC_DAC12_DR12D_OFFSET)
#define N32_DAC56_DAC12_SELCTRL             (N32_DAC56_BASE + \
                                             N32_DAC_DAC12_SELCTRL_OFFSET)
#define N32_DAC56_DAC12_STS                 (N32_DAC56_BASE + \
                                             N32_DAC_DAC12_STS_OFFSET)
#define N32_DAC56_DAC12_GCTRL               (N32_DAC56_BASE + \
                                             N32_DAC_DAC12_GCTRL_OFFSET)
#define N32_DAC56_DAC12_STINC               (N32_DAC56_BASE + \
                                             N32_DAC_DAC12_STINC_OFFSET)
#define N32_DAC56_DAC12_STRST               (N32_DAC56_BASE + \
                                             N32_DAC_DAC12_STRST_OFFSET)
#define N32_DAC56_DAC12_CALC                (N32_DAC56_BASE + \
                                             N32_DAC_DAC12_CALC_OFFSET)

/******** Bit definition for DAC12_CTRL register  ********/
#define DAC_DAC12_CTRL_TROVC2IEN            (1 << 30)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TROVC2IEN
                                                                                 */
#define DAC_DAC12_CTRL_EXOUT2EN             (1 << 29)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * EXOUT2EN
                                                                                 */
#define DAC_DAC12_CTRL_INOUT2EN             (1 << 28)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INOUT2EN
                                                                                 */
#define DAC_DAC12_CTRL_CAL2EN               (1 << 27)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CAL2EN
                                                                                 */
#define DAC_DAC12_CTRL_W2EN_SHIFT           (24)
#define DAC_DAC12_CTRL_W2EN_MASK            (0x7 << DAC_DAC12_CTRL_W2EN_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * W2EN
                                                                                 */
#define DAC_DAC12_CTRL_SINFORMAT2           (1 << 23)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SINFORMAT2
                                                                                 */
#define DAC_DAC12_CTRL_DMADOUBLE2           (1 << 22)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMADOUBLE2
                                                                                 */
#define DAC_DAC12_CTRL_HDB2EN               (1 << 21)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HDB2EN
                                                                                 */
#define DAC_DAC12_CTRL_DMAUDR2IEN           (1 << 20)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMAUDR2IEN
                                                                                 */
#define DAC_DAC12_CTRL_T2EN                 (1 << 19)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * T2EN
                                                                                 */
#define DAC_DAC12_CTRL_B2EN                 (1 << 18)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * B2EN
                                                                                 */
#define DAC_DAC12_CTRL_DMA2EN               (1 << 17)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMA2EN
                                                                                 */
#define DAC_DAC12_CTRL_DAC2EN               (1 << 16)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DAC2EN
                                                                                 */
#define DAC_DAC12_CTRL_TROVC1IEN            (1 << 14)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TROVC1IEN
                                                                                 */
#define DAC_DAC12_CTRL_EXOUT1EN             (1 << 13)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * EXOUT1EN
                                                                                 */
#define DAC_DAC12_CTRL_INOUT1EN             (1 << 12)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INOUT1EN
                                                                                 */
#define DAC_DAC12_CTRL_CAL1EN               (1 << 11)                           /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CAL1EN
                                                                                 */
#define DAC_DAC12_CTRL_W1EN_SHIFT           (8)
#define DAC_DAC12_CTRL_W1EN_MASK            (0x7 << DAC_DAC12_CTRL_W1EN_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * W1EN
                                                                                 */
#define DAC_DAC12_CTRL_SINFORMAT1           (1 << 7)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SINFORMAT1
                                                                                 */
#define DAC_DAC12_CTRL_DMADOUBLE1           (1 << 6)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMADOUBLE1
                                                                                 */
#define DAC_DAC12_CTRL_HDB1EN               (1 << 5)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HDB1EN
                                                                                 */
#define DAC_DAC12_CTRL_DMAUDR1IEN           (1 << 4)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMAUDR1IEN
                                                                                 */
#define DAC_DAC12_CTRL_T1EN                 (1 << 3)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * T1EN
                                                                                 */
#define DAC_DAC12_CTRL_B1EN                 (1 << 2)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * B1EN
                                                                                 */
#define DAC_DAC12_CTRL_DMA1EN               (1 << 1)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DMA1EN
                                                                                 */
#define DAC_DAC12_CTRL_DAC1EN               (1 << 0)                            /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DAC1EN
                                                                                 */

/******** Bit definition for DAC12_SOTTR register  ********/
#define DAC_DAC12_SOTTR_TRB2EN              (1 << 17)   /* TRB2EN */
#define DAC_DAC12_SOTTR_TRB1EN              (1 << 16)   /* TRB1EN */
#define DAC_DAC12_SOTTR_TR2EN               (1 << 1)    /* TR2EN */
#define DAC_DAC12_SOTTR_TR1EN               (1 << 0)    /* TR1EN */

/******** Bit definition for DAC1_DATO register  ********/
#define DAC_DAC1_DATO_DAC1DO_SHIFT          (0)
#define DAC_DAC1_DATO_DAC1DO_MASK           (0xFFF << \
                                             DAC_DAC1_DATO_DAC1DO_SHIFT) /*
                                                                          * DAC1DO
                                                                          */

/******** Bit definition for DAC2_DATO register  ********/
#define DAC_DAC2_DATO_DAC2DO_SHIFT          (0)
#define DAC_DAC2_DATO_DAC2DO_MASK           (0xFFF << \
                                             DAC_DAC2_DATO_DAC2DO_SHIFT) /*
                                                                          * DAC2DO
                                                                          */

/******** Bit definition for DAC1_DR8 register  ********/
#define DAC_DAC1_DR8_DAC1DB_SHIFT           (8)
#define DAC_DAC1_DR8_DAC1DB_MASK            (0xFF << \
                                             DAC_DAC1_DR8_DAC1DB_SHIFT)         /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DAC1DB
                                                                                 */
#define DAC_DAC1_DR8_DAC1D_SHIFT            (0)
#define DAC_DAC1_DR8_DAC1D_MASK             (0xFF << DAC_DAC1_DR8_DAC1D_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DAC1D
                                                                                 */

/******** Bit definition for DAC1_DL12 register  ********/
#define DAC_DAC1_DL12_DAC1DB_SHIFT          (20)
#define DAC_DAC1_DL12_DAC1DB_MASK           (0xFFF << \
                                             DAC_DAC1_DL12_DAC1DB_SHIFT) /*
                                                                          * DAC1DB
                                                                          */
#define DAC_DAC1_DL12_DAC1D_SHIFT           (4)
#define DAC_DAC1_DL12_DAC1D_MASK            (0xFFF << \
                                             DAC_DAC1_DL12_DAC1D_SHIFT) /*
                                                                         * DAC1D
                                                                         */

/******** Bit definition for DAC1_DR12 register  ********/
#define DAC_DAC1_DR12_DAC1DB_SHIFT          (16)
#define DAC_DAC1_DR12_DAC1DB_MASK           (0xFFF << \
                                             DAC_DAC1_DR12_DAC1DB_SHIFT) /*
                                                                          * DAC1DB
                                                                          */
#define DAC_DAC1_DR12_DAC1D_SHIFT           (0)
#define DAC_DAC1_DR12_DAC1D_MASK            (0xFFF << \
                                             DAC_DAC1_DR12_DAC1D_SHIFT) /*
                                                                         * DAC1D
                                                                         */

/******** Bit definition for DAC2_DR8 register  ********/
#define DAC_DAC2_DR8_DAC2DB_SHIFT           (8)
#define DAC_DAC2_DR8_DAC2DB_MASK            (0xFF << \
                                             DAC_DAC2_DR8_DAC2DB_SHIFT)         /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DAC2DB
                                                                                 */
#define DAC_DAC2_DR8_DAC2D_SHIFT            (0)
#define DAC_DAC2_DR8_DAC2D_MASK             (0xFF << DAC_DAC2_DR8_DAC2D_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * DAC2D
                                                                                 */

/******** Bit definition for DAC2_DL12 register  ********/
#define DAC_DAC2_DL12_DAC2DB_SHIFT          (20)
#define DAC_DAC2_DL12_DAC2DB_MASK           (0xFFF << \
                                             DAC_DAC2_DL12_DAC2DB_SHIFT) /*
                                                                          * DAC2DB
                                                                          */
#define DAC_DAC2_DL12_DAC2D_SHIFT           (4)
#define DAC_DAC2_DL12_DAC2D_MASK            (0xFFF << \
                                             DAC_DAC2_DL12_DAC2D_SHIFT) /*
                                                                         * DAC2D
                                                                         */

/******** Bit definition for DAC2_DR12 register  ********/
#define DAC_DAC2_DR12_DAC2DB_SHIFT          (16)
#define DAC_DAC2_DR12_DAC2DB_MASK           (0xFFF << \
                                             DAC_DAC2_DR12_DAC2DB_SHIFT) /*
                                                                          * DAC2DB
                                                                          */
#define DAC_DAC2_DR12_DAC2D_SHIFT           (0)
#define DAC_DAC2_DR12_DAC2D_MASK            (0xFFF << \
                                             DAC_DAC2_DR12_DAC2D_SHIFT) /*
                                                                         * DAC2D
                                                                         */

/******** Bit definition for DAC12_DR8D register  ********/
#define DAC_DAC12_DR8D_DAC2D_SHIFT          (8)
#define DAC_DAC12_DR8D_DAC2D_MASK           (0xFF << \
                                             DAC_DAC12_DR8D_DAC2D_SHIFT) /*
                                                                          * DAC2D
                                                                          */
#define DAC_DAC12_DR8D_DAC1D_SHIFT          (0)
#define DAC_DAC12_DR8D_DAC1D_MASK           (0xFF << \
                                             DAC_DAC12_DR8D_DAC1D_SHIFT) /*
                                                                          * DAC1D
                                                                          */

/******** Bit definition for DAC12_DL12D register  ********/
#define DAC_DAC12_DL12D_DAC2D_SHIFT         (20)
#define DAC_DAC12_DL12D_DAC2D_MASK          (0xFFF << \
                                             DAC_DAC12_DL12D_DAC2D_SHIFT) /*
                                                                           * DAC2D
                                                                           */
#define DAC_DAC12_DL12D_DAC1D_SHIFT         (4)
#define DAC_DAC12_DL12D_DAC1D_MASK          (0xFFF << \
                                             DAC_DAC12_DL12D_DAC1D_SHIFT) /*
                                                                           * DAC1D
                                                                           */

/******** Bit definition for DAC12_DR12D register  ********/
#define DAC_DAC12_DR12D_DAC2D_SHIFT         (16)
#define DAC_DAC12_DR12D_DAC2D_MASK          (0xFFF << \
                                             DAC_DAC12_DR12D_DAC2D_SHIFT) /*
                                                                           * DAC2D
                                                                           */
#define DAC_DAC12_DR12D_DAC1D_SHIFT         (0)
#define DAC_DAC12_DR12D_DAC1D_MASK          (0xFFF << \
                                             DAC_DAC12_DR12D_DAC1D_SHIFT) /*
                                                                           * DAC1D
                                                                           */

/******** Bit definition for DAC12_SELCTRL register  ********/
#define DAC_DAC12_SELCTRL_T2SEL_SHIFT       (27)
#define DAC_DAC12_SELCTRL_T2SEL_MASK        (0x1F << \
                                             DAC_DAC12_SELCTRL_T2SEL_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * T2SEL
                                                                              */
#define DAC_DAC12_SELCTRL_MA2SEL_SHIFT      (22)
#define DAC_DAC12_SELCTRL_MA2SEL_MASK       (0xF << \
                                             DAC_DAC12_SELCTRL_MA2SEL_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               *
                                                                               * MA2SEL
                                                                               */
#define DAC_DAC12_SELCTRL_STINCSEL2_SHIFT   (17)
#define DAC_DAC12_SELCTRL_STINCSEL2_MASK    (0x1F <<                            \
                                             DAC_DAC12_SELCTRL_STINCSEL2_SHIFT) \
        /*
         * STINCSEL2
         */
#define DAC_DAC12_SELCTRL_T1SEL_SHIFT       (11)
#define DAC_DAC12_SELCTRL_T1SEL_MASK        (0x1F << \
                                             DAC_DAC12_SELCTRL_T1SEL_SHIFT)  /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * T1SEL
                                                                              */
#define DAC_DAC12_SELCTRL_MA1SEL_SHIFT      (6)
#define DAC_DAC12_SELCTRL_MA1SEL_MASK       (0xF << \
                                             DAC_DAC12_SELCTRL_MA1SEL_SHIFT)  /*
                                                                               *
                                                                               *
                                                                               *
                                                                               *
                                                                               * MA1SEL
                                                                               */
#define DAC_DAC12_SELCTRL_STINCSEL1_SHIFT   (1)
#define DAC_DAC12_SELCTRL_STINCSEL1_MASK    (0x1F <<                            \
                                             DAC_DAC12_SELCTRL_STINCSEL1_SHIFT) \
        /*
         * STINCSEL1
         */

/******** Bit definition for DAC12_STS register  ********/
#define DAC_DAC12_STS_TROVCFLAG2            (1 << 19)   /* TROVCFLAG2 */
#define DAC_DAC12_STS_DORSTAT2              (1 << 18)   /* DORSTAT2 */
#define DAC_DAC12_STS_CALFLAG2              (1 << 17)   /* CALFLAG2 */
#define DAC_DAC12_STS_DMAUDR2               (1 << 16)   /* DMAUDR2 */
#define DAC_DAC12_STS_TROVCFLAG1            (1 << 3)    /* TROVCFLAG1 */
#define DAC_DAC12_STS_DORSTAT1              (1 << 2)    /* DORSTAT1 */
#define DAC_DAC12_STS_CALFLAG1              (1 << 1)    /* CALFLAG1 */
#define DAC_DAC12_STS_DMAUDR1               (1 << 0)    /* DMAUDR1 */

/******** Bit definition for DAC12_GCTRL register  ********/
#define DAC_DAC12_GCTRL_PCS_SHIFT           (16)
#define DAC_DAC12_GCTRL_PCS_MASK            (0xFF << \
                                             DAC_DAC12_GCTRL_PCS_SHIFT) /* PCS
                                                                         */
#define DAC_DAC12_GCTRL_HFSEL_SHIFT         (1)
#define DAC_DAC12_GCTRL_HFSEL_MASK          (0x3 << \
                                             DAC_DAC12_GCTRL_HFSEL_SHIFT) /*
                                                                           * HFSEL
                                                                           */

/******** Bit definition for DAC12_STINC register  ********/
#define DAC_DAC12_STINC_STINCDATA2_SHIFT    (16)
#define DAC_DAC12_STINC_STINCDATA2_MASK     (0xFFF << \
                                             DAC_DAC12_STINC_STINCDATA2_SHIFT)      /*
                                                                                     *
                                                                                     *
                                                                                     *
                                                                                     *
                                                                                     * STINCDATA2
                                                                                     */
#define DAC_DAC12_STINC_STINCDATA1_SHIFT    (0)
#define DAC_DAC12_STINC_STINCDATA1_MASK     (0xFFF << \
                                             DAC_DAC12_STINC_STINCDATA1_SHIFT)      /*
                                                                                     *
                                                                                     *
                                                                                     *
                                                                                     *
                                                                                     * STINCDATA1
                                                                                     */

/******** Bit definition for DAC12_STRST register  ********/
#define DAC_DAC12_STRST_STRSTDATA2_SHIFT    (16)
#define DAC_DAC12_STRST_STRSTDATA2_MASK     (0xFFF << \
                                             DAC_DAC12_STRST_STRSTDATA2_SHIFT)      /*
                                                                                     *
                                                                                     *
                                                                                     *
                                                                                     *
                                                                                     * STRSTDATA2
                                                                                     */
#define DAC_DAC12_STRST_STRSTDATA1_SHIFT    (0)
#define DAC_DAC12_STRST_STRSTDATA1_MASK     (0xFFF << \
                                             DAC_DAC12_STRST_STRSTDATA1_SHIFT)      /*
                                                                                     *
                                                                                     *
                                                                                     *
                                                                                     *
                                                                                     * STRSTDATA1
                                                                                     */

/******** Bit definition for DAC12_CALC register  ********/
#define DAC_DAC12_CALC_OTRIM2_SHIFT         (16)
#define DAC_DAC12_CALC_OTRIM2_MASK          (0x1F << \
                                             DAC_DAC12_CALC_OTRIM2_SHIFT) /*
                                                                           * OTRIM2
                                                                           */
#define DAC_DAC12_CALC_OTRIM1_SHIFT         (0)
#define DAC_DAC12_CALC_OTRIM1_MASK          (0x1F << \
                                             DAC_DAC12_CALC_OTRIM1_SHIFT) /*
                                                                           * OTRIM1
                                                                           */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DAC_H */
