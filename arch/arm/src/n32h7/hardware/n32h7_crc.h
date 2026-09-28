/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_crc.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_CRC_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_CRC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_CRC_DAT_OFFSET          0x0     /* CRC Data Register */
#define N32_CRC_IDAT_OFFSET         0x4     /* CRC Independent Data Register
                                             */
#define N32_CRC_CTRL_OFFSET         0x8     /* CRC Control Register */
#define N32_CRC_LRC_OFFSET          0xC     /* LRC Value Register */
#define N32_CRC_INIT_OFFSET         0x10    /* CRC Initial Value Register */
#define N32_CRC_POL_OFFSET          0x14    /* CRC Polynomial Register */
#define N32_CRC_INXORDAT_OFFSET     0x18    /* CRC Input XOR data Register */
#define N32_CRC_OUTXORDAT_OFFSET    0x1C    /* CRC Output XOR data Register */

#define N32_CRC_DAT                 (N32_CRC_BASE + N32_CRC_DAT_OFFSET)
#define N32_CRC_IDAT                (N32_CRC_BASE + N32_CRC_IDAT_OFFSET)
#define N32_CRC_CTRL                (N32_CRC_BASE + N32_CRC_CTRL_OFFSET)
#define N32_CRC_LRC                 (N32_CRC_BASE + N32_CRC_LRC_OFFSET)
#define N32_CRC_INIT                (N32_CRC_BASE + N32_CRC_INIT_OFFSET)
#define N32_CRC_POL                 (N32_CRC_BASE + N32_CRC_POL_OFFSET)
#define N32_CRC_INXORDAT            (N32_CRC_BASE + N32_CRC_INXORDAT_OFFSET)
#define N32_CRC_OUTXORDAT           (N32_CRC_BASE + N32_CRC_OUTXORDAT_OFFSET)

/******** Bit definition for CRC_DAT register  ********/
#define CRC_DAT_DAT_SHIFT           (0)
#define CRC_DAT_DAT_MASK            (0xFFFFFFFF << CRC_DAT_DAT_SHIFT) /* This
                                                                       * register
                                                                       * is
                                                                       * used
                                                                       * to
                                                                       * write
                                                                       * new
                                                                       * data
                                                                       * to
                                                                       * the
                                                                       * CRC
                                                                       * calculator
                                                                       */

/******** Bit definition for CRC_IDAT register  ********/
#define CRC_IDAT_IDAT_SHIFT         (0)
#define CRC_IDAT_IDAT_MASK          (0xFFFFFFFF << CRC_IDAT_IDAT_SHIFT) /*
                                                                         * General-purpose
                                                                         * 32-bit
                                                                         * data
                                                                         * register
                                                                         */

/******** Bit definition for CRC_CTRL register  ********/
#define CRC_CTRL_RESET              (1 << 0)                            /*
                                                                         * RESET
                                                                         * bit
                                                                         */
#define CRC_CTRL_BE_SHIFT           (1)
#define CRC_CTRL_BE_MASK            (0x3 << CRC_CTRL_BE_SHIFT)          /* CRC
                                                                         * byte
                                                                         * Endian
                                                                         */
#define CRC_CTRL_POLYSIZE_SHIFT     (3)
#define CRC_CTRL_POLYSIZE_MASK      (0x3 << CRC_CTRL_POLYSIZE_SHIFT)    /*
                                                                         * Polynomial
                                                                         * size
                                                                         */
#define CRC_CTRL_REVIN_SHIFT        (5)
#define CRC_CTRL_REVIN_MASK         (0x3 << CRC_CTRL_REVIN_SHIFT)       /*
                                                                         * Reverse
                                                                         * input
                                                                         * data
                                                                         */
#define CRC_CTRL_REVOUT             (1 << 7)                            /*
                                                                         * Reverse
                                                                         * output
                                                                         * data
                                                                         */

/******** Bit definition for CRC_LRC register  ********/
#define CRC_LRC_LRC_SHIFT           (0)
#define CRC_LRC_LRC_MASK            (0xFFFFFFFF << CRC_LRC_LRC_SHIFT) /* LRC
                                                                       * Value
                                                                       */

/******** Bit definition for CRC_INIT register  ********/
#define CRC_INIT_INIT_SHIFT         (0)
#define CRC_INIT_INIT_MASK          (0xFFFFFFFF << CRC_INIT_INIT_SHIFT) /*
                                                                         * Programmable
                                                                         * initial
                                                                         * CRC
                                                                         * value
                                                                         */

/******** Bit definition for CRC_POL register  ********/
#define CRC_POL_POL_SHIFT           (0)
#define CRC_POL_POL_MASK            (0xFFFFFFFF << CRC_POL_POL_SHIFT) /*
                                                                       * Programmable
                                                                       * polynomial
                                                                       */

/******** Bit definition for CRC_INXORDAT register  ********/
#define CRC_INXORDAT_INXOR_SHIFT    (0)
#define CRC_INXORDAT_INXOR_MASK     (0xFFFFFFFF << CRC_INXORDAT_INXOR_SHIFT) /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * This
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * register
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * is
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * used
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * to
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * set
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * CRC_DAT
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * XOR
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * calculation
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * value
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * before
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * CRC
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * calculation
                                                                              */

/******** Bit definition for CRC_OUTXORDAT register  ********/
#define CRC_OUTXORDAT_OUTXOR_SHIFT  (0)
#define CRC_OUTXORDAT_OUTXOR_MASK   (0xFFFFFFFF << CRC_OUTXORDAT_OUTXOR_SHIFT) /*
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * This
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * register
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * is
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * used
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * to
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * set
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * CRC_DAT
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * XOR
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * calculation
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * value
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * after
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * CRC
                                                                                *
                                                                                *
                                                                                *
                                                                                *
                                                                                * calculation
                                                                                */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_CRC_H */
