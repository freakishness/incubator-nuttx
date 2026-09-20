/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_fmac.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_FMAC_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_FMAC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_FMAC_X1BUFCFG_OFFSET 0x0 /* FMAC X1 Buffer Configuration Register */
#define N32_FMAC_X2BUFCFG_OFFSET 0x4 /* FMAC X2 Buffer Configuration Register */
#define N32_FMAC_YBUFCFG_OFFSET 0x8 /* FMAC Y Buffer Configuration Register */
#define N32_FMAC_PARAMCFG_OFFSET 0xC /* FMAC Parameter Configuration Register */
#define N32_FMAC_CTRL_OFFSET 0x10 /* FMAC Control Register */
#define N32_FMAC_STS_OFFSET 0x14 /* FMAC Status Register */
#define N32_FMAC_WDAT_OFFSET 0x18 /* FMAC Write Data Register */
#define N32_FMAC_RDAT_OFFSET 0x1C /* FMAC Read Data Register */

#define N32_FMAC_X1BUFCFG (N32_FMAC_BASE + N32_FMAC_X1BUFCFG_OFFSET)
#define N32_FMAC_X2BUFCFG (N32_FMAC_BASE + N32_FMAC_X2BUFCFG_OFFSET)
#define N32_FMAC_YBUFCFG (N32_FMAC_BASE + N32_FMAC_YBUFCFG_OFFSET)
#define N32_FMAC_PARAMCFG (N32_FMAC_BASE + N32_FMAC_PARAMCFG_OFFSET)
#define N32_FMAC_CTRL (N32_FMAC_BASE + N32_FMAC_CTRL_OFFSET)
#define N32_FMAC_STS (N32_FMAC_BASE + N32_FMAC_STS_OFFSET)
#define N32_FMAC_WDAT (N32_FMAC_BASE + N32_FMAC_WDAT_OFFSET)
#define N32_FMAC_RDAT (N32_FMAC_BASE + N32_FMAC_RDAT_OFFSET)

/******** Bit definition for FMAC_X1BUFCFG register  ********/
#define FMAC_X1BUFCFG_X1BASE_SHIFT (0)
#define FMAC_X1BUFCFG_X1BASE_MASK (0xFF << FMAC_X1BUFCFG_X1BASE_SHIFT) /* X1 buffer base address */
#define FMAC_X1BUFCFG_X1BUFSIZE_SHIFT (8)
#define FMAC_X1BUFCFG_X1BUFSIZE_MASK (0xFF << FMAC_X1BUFCFG_X1BUFSIZE_SHIFT) /* X1 buffer size */
#define FMAC_X1BUFCFG_X1BUFWM_SHIFT (24)
#define FMAC_X1BUFCFG_X1BUFWM_MASK (0x3 << FMAC_X1BUFCFG_X1BUFWM_SHIFT) /* X1 buffer watermark size */

/******** Bit definition for FMAC_X2BUFCFG register  ********/
#define FMAC_X2BUFCFG_X2BASE_SHIFT (0)
#define FMAC_X2BUFCFG_X2BASE_MASK (0xFF << FMAC_X2BUFCFG_X2BASE_SHIFT) /* X2 buffer base address */
#define FMAC_X2BUFCFG_X2BUFSIZE_SHIFT (8)
#define FMAC_X2BUFCFG_X2BUFSIZE_MASK (0xFF << FMAC_X2BUFCFG_X2BUFSIZE_SHIFT) /* X2 buffer size */

/******** Bit definition for FMAC_YBUFCFG register  ********/
#define FMAC_YBUFCFG_YBASE_SHIFT (0)
#define FMAC_YBUFCFG_YBASE_MASK (0xFF << FMAC_YBUFCFG_YBASE_SHIFT) /* Y buffer base address */
#define FMAC_YBUFCFG_YBUFSIZE_SHIFT (8)
#define FMAC_YBUFCFG_YBUFSIZE_MASK (0xFF << FMAC_YBUFCFG_YBUFSIZE_SHIFT) /* Y buffer size */
#define FMAC_YBUFCFG_YBUFWM_SHIFT (24)
#define FMAC_YBUFCFG_YBUFWM_MASK (0x3 << FMAC_YBUFCFG_YBUFWM_SHIFT) /* Y buffer watermark size */

/******** Bit definition for FMAC_PARAMCFG register  ********/
#define FMAC_PARAMCFG_P_SHIFT (0)
#define FMAC_PARAMCFG_P_MASK (0xFF << FMAC_PARAMCFG_P_SHIFT) /* Input parameter P */
#define FMAC_PARAMCFG_Q_SHIFT (8)
#define FMAC_PARAMCFG_Q_MASK (0xFF << FMAC_PARAMCFG_Q_SHIFT) /* Input parameter Q */
#define FMAC_PARAMCFG_R_SHIFT (16)
#define FMAC_PARAMCFG_R_MASK (0xFF << FMAC_PARAMCFG_R_SHIFT) /* Input parameter R */
#define FMAC_PARAMCFG_FUNC_SHIFT (24)
#define FMAC_PARAMCFG_FUNC_MASK (0x7F << FMAC_PARAMCFG_FUNC_SHIFT) /* Function */
#define FMAC_PARAMCFG_START (1 << 31) /* Enable execution */

/******** Bit definition for FMAC_CTRL register  ********/
#define FMAC_CTRL_RINTEN (1 << 0) /* Read interrupt enable */
#define FMAC_CTRL_WINTEN (1 << 1) /* Write interrupt enable */
#define FMAC_CTRL_OVINTEN (1 << 2) /* Overflow error interrupt enable */
#define FMAC_CTRL_UNINTEN (1 << 3) /* Underflow error interrupt enable */
#define FMAC_CTRL_SATINTEN (1 << 4) /* Saturation error interrupt enable */
#define FMAC_CTRL_DMAREN (1 << 8) /* Enable DMA read channel request */
#define FMAC_CTRL_DMAWEN (1 << 9) /* Enable DMA write channel request */
#define FMAC_CTRL_LIMITEN (1 << 15) /* Clipping enable */
#define FMAC_CTRL_RESET (1 << 16) /* Reset FMAC */

/******** Bit definition for FMAC_STS register  ********/
#define FMAC_STS_YBUFEF (1 << 0) /* Y buffer empty flag */
#define FMAC_STS_X1BUFFF (1 << 1) /* X1 buffer full flag */
#define FMAC_STS_OVF (1 << 8) /* Overflow error flag */
#define FMAC_STS_UNF (1 << 9) /* Underflow error flag */
#define FMAC_STS_SATF (1 << 10) /* Saturation error flag */

/******** Bit definition for FMAC_WDAT register  ********/
#define FMAC_WDAT_WDAT_SHIFT (0)
#define FMAC_WDAT_WDAT_MASK (0xFFFF << FMAC_WDAT_WDAT_SHIFT) /* Write data */

/******** Bit definition for FMAC_RDAT register  ********/
#define FMAC_RDAT_RDAT_SHIFT (0)
#define FMAC_RDAT_RDAT_MASK (0xFFFF << FMAC_RDAT_RDAT_SHIFT) /* Read data */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_FMAC_H */
