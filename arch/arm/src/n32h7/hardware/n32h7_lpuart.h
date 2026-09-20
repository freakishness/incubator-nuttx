/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_lpuart.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_LPUART_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_LPUART_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_LPUART_STS_OFFSET 0x0 /* LPUART_STS */
#define N32_LPUART_INTEN_OFFSET 0x4 /* LPUART_INTEN */
#define N32_LPUART_CTRL_OFFSET 0x8 /* LPUART_CTRL */
#define N32_LPUART_BRCFG1_OFFSET 0xC /* LPUART_BRCFG1 */
#define N32_LPUART_TXDAT_OFFSET 0x10 /* LPUART_TXDAT */
#define N32_LPUART_BRCFG2_OFFSET 0x14 /* LPUART_BRCFG2 */
#define N32_LPUART_WUDAT1_OFFSET 0x18 /* LPUART_WUDAT1 */
#define N32_LPUART_WUDAT2_OFFSET 0x1C /* LPUART_WUDAT2 */
#define N32_LPUART_RXDAT_OFFSET 0x20 /* LPUART_RXDAT */

#define N32_LPUART1_STS (N32_LPUART1_BASE + N32_LPUART_STS_OFFSET)
#define N32_LPUART1_INTEN (N32_LPUART1_BASE + N32_LPUART_INTEN_OFFSET)
#define N32_LPUART1_CTRL (N32_LPUART1_BASE + N32_LPUART_CTRL_OFFSET)
#define N32_LPUART1_BRCFG1 (N32_LPUART1_BASE + N32_LPUART_BRCFG1_OFFSET)
#define N32_LPUART1_TXDAT (N32_LPUART1_BASE + N32_LPUART_TXDAT_OFFSET)
#define N32_LPUART1_BRCFG2 (N32_LPUART1_BASE + N32_LPUART_BRCFG2_OFFSET)
#define N32_LPUART1_WUDAT1 (N32_LPUART1_BASE + N32_LPUART_WUDAT1_OFFSET)
#define N32_LPUART1_WUDAT2 (N32_LPUART1_BASE + N32_LPUART_WUDAT2_OFFSET)
#define N32_LPUART1_RXDAT (N32_LPUART1_BASE + N32_LPUART_RXDAT_OFFSET)

#define N32_LPUART2_STS (N32_LPUART2_BASE + N32_LPUART_STS_OFFSET)
#define N32_LPUART2_INTEN (N32_LPUART2_BASE + N32_LPUART_INTEN_OFFSET)
#define N32_LPUART2_CTRL (N32_LPUART2_BASE + N32_LPUART_CTRL_OFFSET)
#define N32_LPUART2_BRCFG1 (N32_LPUART2_BASE + N32_LPUART_BRCFG1_OFFSET)
#define N32_LPUART2_TXDAT (N32_LPUART2_BASE + N32_LPUART_TXDAT_OFFSET)
#define N32_LPUART2_BRCFG2 (N32_LPUART2_BASE + N32_LPUART_BRCFG2_OFFSET)
#define N32_LPUART2_WUDAT1 (N32_LPUART2_BASE + N32_LPUART_WUDAT1_OFFSET)
#define N32_LPUART2_WUDAT2 (N32_LPUART2_BASE + N32_LPUART_WUDAT2_OFFSET)
#define N32_LPUART2_RXDAT (N32_LPUART2_BASE + N32_LPUART_RXDAT_OFFSET)

/******** Bit definition for LPUART_STS register  ********/
#define LPUART_STS_PCEF (1 << 0) /* PCEF */
#define LPUART_STS_TXCF (1 << 1) /* TXCF */
#define LPUART_STS_RXFOF (1 << 2) /* RXFOF */
#define LPUART_STS_RXFFF (1 << 3) /* RXFFF */
#define LPUART_STS_RXFHFF (1 << 4) /* RXFHFF */
#define LPUART_STS_RXFNEF (1 << 5) /* RXFNEF */
#define LPUART_STS_CTSF (1 << 6) /* CTSF */
#define LPUART_STS_WUF (1 << 7) /* WUF */
#define LPUART_STS_NEF (1 << 8) /* NEF */
#define LPUART_STS_TXFOF (1 << 9) /* TXFOF */
#define LPUART_STS_TXFFF (1 << 10) /* TXFFF */
#define LPUART_STS_TXFQFF (1 << 11) /* TXFQFF */
#define LPUART_STS_TXFHFF (1 << 12) /* TXFHFF */
#define LPUART_STS_TXFNEF (1 << 13) /* TXFNEF */
#define LPUART_STS_IDLEF (1 << 14) /* IDLEF */
#define LPUART_STS_FE (1 << 15) /* FE */
#define LPUART_STS_TXFEF (1 << 16) /* TXFEF */

/******** Bit definition for LPUART_INTEN register  ********/
#define LPUART_INTEN_PCEIEN (1 << 0) /* PCEIEN */
#define LPUART_INTEN_TXCIEN (1 << 1) /* TXCIEN */
#define LPUART_INTEN_RXFOIEN (1 << 2) /* RXFOIEN */
#define LPUART_INTEN_RXFFIEN (1 << 3) /* RXFFIEN */
#define LPUART_INTEN_RXFHFIEN (1 << 4) /* RXFHFIEN */
#define LPUART_INTEN_RXFNEIEN (1 << 5) /* RXFNEIEN */
#define LPUART_INTEN_WUIEN (1 << 6) /* WUIEN */
#define LPUART_INTEN_TXFOIEN (1 << 7) /* TXFOIEN */
#define LPUART_INTEN_TXFFIEN (1 << 8) /* TXFFIEN */
#define LPUART_INTEN_TXFQFIEN (1 << 9) /* TXFQFIEN */
#define LPUART_INTEN_TXFHFIEN (1 << 10) /* TXFHFIEN */
#define LPUART_INTEN_TXFNEIEN (1 << 11) /* TXFNEIEN */
#define LPUART_INTEN_IDLEFIEN (1 << 12) /* IDLEFIEN */
#define LPUART_INTEN_FEIEN (1 << 13) /* FEIEN */
#define LPUART_INTEN_TXFEIEN (1 << 14) /* TXFEIEN */

/******** Bit definition for LPUART_CTRL register  ********/
#define LPUART_CTRL_PEN (1 << 0) /* PEN */
#define LPUART_CTRL_TXEN (1 << 1) /* TXEN */
#define LPUART_CTRL_FRXF (1 << 2) /* FRXF */
#define LPUART_CTRL_PC (1 << 3) /* PC */
#define LPUART_CTRL_LB (1 << 4) /* LB */
#define LPUART_CTRL_DMATXEN (1 << 5) /* DMATXEN */
#define LPUART_CTRL_DMARXEN (1 << 6) /* DMARXEN */
#define LPUART_CTRL_WUSTPEN (1 << 7) /* WUSTPEN */
#define LPUART_CTRL_RTST_SHIFT (8)
#define LPUART_CTRL_RTST_MASK (0x3 << LPUART_CTRL_RTST_SHIFT) /* RTST */
#define LPUART_CTRL_CTSEN (1 << 10) /* CTSEN */
#define LPUART_CTRL_RTSEN (1 << 11) /* RTSEN */
#define LPUART_CTRL_WUS_SHIFT (12)
#define LPUART_CTRL_WUS_MASK (0xF << LPUART_CTRL_WUS_SHIFT) /* WUS */
#define LPUART_CTRL_SSM (1 << 16) /* SSM */
#define LPUART_CTRL_IDLEFEN (1 << 17) /* IDLEFEN */
#define LPUART_CTRL_FTXF (1 << 18) /* FTXF */
#define LPUART_CTRL_RXNUMWU_SHIFT (19)
#define LPUART_CTRL_RXNUMWU_MASK (0x1F << LPUART_CTRL_RXNUMWU_SHIFT) /* RXNUMWU */
#define LPUART_CTRL_RXEN (1 << 24) /* RXEN */

/******** Bit definition for LPUART_BRCFG1 register  ********/
#define LPUART_BRCFG1_BRP_SHIFT (0)
#define LPUART_BRCFG1_BRP_MASK (0xFFFF << LPUART_BRCFG1_BRP_SHIFT) /* BRP */

/******** Bit definition for LPUART_TXDAT register  ********/
#define LPUART_TXDAT_DAT_SHIFT (0)
#define LPUART_TXDAT_DAT_MASK (0xFF << LPUART_TXDAT_DAT_SHIFT) /* DAT */

/******** Bit definition for LPUART_BRCFG2 register  ********/
#define LPUART_BRCFG2_MC_SHIFT (0)
#define LPUART_BRCFG2_MC_MASK (0xFF << LPUART_BRCFG2_MC_SHIFT) /* MC */

/******** Bit definition for LPUART_WUDAT1 register  ********/
#define LPUART_WUDAT1_DAT_SHIFT (0)
#define LPUART_WUDAT1_DAT_MASK (0xFFFFFFFF << LPUART_WUDAT1_DAT_SHIFT) /* DAT */

/******** Bit definition for LPUART_WUDAT2 register  ********/
#define LPUART_WUDAT2_DAT_SHIFT (0)
#define LPUART_WUDAT2_DAT_MASK (0xFFFFFFFF << LPUART_WUDAT2_DAT_SHIFT) /* DAT */

/******** Bit definition for LPUART_RXDAT register  ********/
#define LPUART_RXDAT_DAT_SHIFT (0)
#define LPUART_RXDAT_DAT_MASK (0xFF << LPUART_RXDAT_DAT_SHIFT) /* DAT */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_LPUART_H */
