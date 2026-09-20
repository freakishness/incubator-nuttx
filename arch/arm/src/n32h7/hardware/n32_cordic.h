/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_cordic.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_CORDIC_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_CORDIC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_CORDIC_CTRLSTS_OFFSET 0x0 /* CORDIC Control Status Register */
#define N32_CORDIC_WDAT_OFFSET 0x4 /* CORDIC Write Data Register */
#define N32_CORDIC_RDAT_OFFSET 0x8 /* CORDIC Read Data Register */

#define N32_CORDIC_CTRLSTS (N32_CORDIC_BASE + N32_CORDIC_CTRLSTS_OFFSET)
#define N32_CORDIC_WDAT (N32_CORDIC_BASE + N32_CORDIC_WDAT_OFFSET)
#define N32_CORDIC_RDAT (N32_CORDIC_BASE + N32_CORDIC_RDAT_OFFSET)

/******** Bit definition for CORDIC_CTRLSTS register  ********/
#define CORDIC_CTRLSTS_RRF (1 << 31) /* Result Ready Flag */
#define CORDIC_CTRLSTS_INOVF (1 << 30) /* Input Overflow Flag */
#define CORDIC_CTRLSTS_INOVINTEN (1 << 27) /* Input Overflow Interrupt Control Bit */
#define CORDIC_CTRLSTS_CODINLIMIT (1 << 26) /* Coordinate Output Limit Control */
#define CORDIC_CTRLSTS_PHASELIMIT (1 << 25) /* Phase Output Limit Control */
#define CORDIC_CTRLSTS_FLOATOUT (1 << 24) /* Floating-point Fixed-point Output Control */
#define CORDIC_CTRLSTS_FLOATIN (1 << 23) /* Floating-point Fixed-point Input Control. */
#define CORDIC_CTRLSTS_INSIZE (1 << 22) /* Input Data Width */
#define CORDIC_CTRLSTS_OUTSIZE (1 << 21) /* Output Data Width */
#define CORDIC_CTRLSTS_NUMWRITE (1 << 20) /* CORDIC_WDAT Register Parameter Count */
#define CORDIC_CTRLSTS_NUMREAD (1 << 19) /* Number of results that can be read from the CORDIC_RDAT register */
#define CORDIC_CTRLSTS_DMAWEN (1 << 18) /* DMA Write Request Enable */
#define CORDIC_CTRLSTS_DMAREN (1 << 17) /* DMA Read Request Enable */
#define CORDIC_CTRLSTS_INTEN (1 << 16) /* Interrupt Enable */
#define CORDIC_CTRLSTS_SCALE_SHIFT (8)
#define CORDIC_CTRLSTS_SCALE_MASK (0x7 << CORDIC_CTRLSTS_SCALE_SHIFT) /* Scaling Factor */
#define CORDIC_CTRLSTS_PRECISION_SHIFT (4)
#define CORDIC_CTRLSTS_PRECISION_MASK (0xF << CORDIC_CTRLSTS_PRECISION_SHIFT) /* Iteration Count */
#define CORDIC_CTRLSTS_FUNC_SHIFT (0)
#define CORDIC_CTRLSTS_FUNC_MASK (0xF << CORDIC_CTRLSTS_FUNC_SHIFT) /* Functions */

/******** Bit definition for CORDIC_WDAT register  ********/
#define CORDIC_WDAT_WDAT_SHIFT (0)
#define CORDIC_WDAT_WDAT_MASK (0xFFFFFFFF << CORDIC_WDAT_WDAT_SHIFT) /* Write Data */

/******** Bit definition for CORDIC_RDAT register  ********/
#define CORDIC_RDAT_RDAT_SHIFT (0)
#define CORDIC_RDAT_RDAT_MASK (0xFFFFFFFF << CORDIC_RDAT_RDAT_SHIFT) /* Read Data */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_CORDIC_H */
