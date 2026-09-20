/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_sdmmc.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SDMMC_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SDMMC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_SDMMC_CFG1_OFFSET 0x0 /* SDMMC Configuration Register1 */
#define N32_SDMMC_CFG2_OFFSET 0x4 /* SDMMC Configuration Register2 */
#define N32_SDMMC_CFG3_OFFSET 0x8 /* SDMMC Configuration Register3 */
#define N32_SDMMC_PV0CTRL_OFFSET 0xC /* SDMMC Configuration Register4 */
#define N32_SDMMC_PV1CTRL_OFFSET 0x10 /* SDMMC Configuration Register5 */
#define N32_SDMMC_PV2CTRL_OFFSET 0x14 /* SDMMC Configuration Register6 */
#define N32_SDMMC_PV3CTRL_OFFSET 0x18 /* SDMMC Configuration Register7 */
#define N32_SDMMC_DLYCTRL_OFFSET 0x20 /* SDMMC TX and RX Delay Control Register */

#define N32_SDMMC1_CFG1 (N32_SDMMC1_BASE + N32_SDMMC_CFG1_OFFSET)
#define N32_SDMMC1_CFG2 (N32_SDMMC1_BASE + N32_SDMMC_CFG2_OFFSET)
#define N32_SDMMC1_CFG3 (N32_SDMMC1_BASE + N32_SDMMC_CFG3_OFFSET)
#define N32_SDMMC1_PV0CTRL (N32_SDMMC1_BASE + N32_SDMMC_PV0CTRL_OFFSET)
#define N32_SDMMC1_PV1CTRL (N32_SDMMC1_BASE + N32_SDMMC_PV1CTRL_OFFSET)
#define N32_SDMMC1_PV2CTRL (N32_SDMMC1_BASE + N32_SDMMC_PV2CTRL_OFFSET)
#define N32_SDMMC1_PV3CTRL (N32_SDMMC1_BASE + N32_SDMMC_PV3CTRL_OFFSET)
#define N32_SDMMC1_DLYCTRL (N32_SDMMC1_BASE + N32_SDMMC_DLYCTRL_OFFSET)

#define N32_SDMMC2_CFG1 (N32_SDMMC2_BASE + N32_SDMMC_CFG1_OFFSET)
#define N32_SDMMC2_CFG2 (N32_SDMMC2_BASE + N32_SDMMC_CFG2_OFFSET)
#define N32_SDMMC2_CFG3 (N32_SDMMC2_BASE + N32_SDMMC_CFG3_OFFSET)
#define N32_SDMMC2_PV0CTRL (N32_SDMMC2_BASE + N32_SDMMC_PV0CTRL_OFFSET)
#define N32_SDMMC2_PV1CTRL (N32_SDMMC2_BASE + N32_SDMMC_PV1CTRL_OFFSET)
#define N32_SDMMC2_PV2CTRL (N32_SDMMC2_BASE + N32_SDMMC_PV2CTRL_OFFSET)
#define N32_SDMMC2_PV3CTRL (N32_SDMMC2_BASE + N32_SDMMC_PV3CTRL_OFFSET)
#define N32_SDMMC2_DLYCTRL (N32_SDMMC2_BASE + N32_SDMMC_DLYCTRL_OFFSET)

/******** Bit definition for SDMMC_CFG1 register  ********/
#define SDMMC_CFG1_MBL_SHIFT (22)
#define SDMMC_CFG1_MBL_MASK (0x3 << SDMMC_CFG1_MBL_SHIFT) /* MBL */
#define SDMMC_CFG1_BCLKF_SHIFT (14)
#define SDMMC_CFG1_BCLKF_MASK (0xFF << SDMMC_CFG1_BCLKF_SHIFT) /* BCLKF */
#define SDMMC_CFG1_TCLKU (1 << 13) /* TCLKU */
#define SDMMC_CFG1_TCNT_SHIFT (1)
#define SDMMC_CFG1_TCNT_MASK (0x3F << SDMMC_CFG1_TCNT_SHIFT) /* TCNT */
#define SDMMC_CFG1_WSGM (1 << 0) /* WSGM */

/******** Bit definition for SDMMC_CFG2 register  ********/
#define SDMMC_CFG2_SPIBMOD (1 << 19) /* SPIBMOD */
#define SDMMC_CFG2_SPIMOD (1 << 18) /* SPIMOD */
#define SDMMC_CFG2_DDR50 (1 << 14) /* DDR50 */
#define SDMMC_CFG2_SDR104 (1 << 13) /* SDR104 */
#define SDMMC_CFG2_SDR50 (1 << 12) /* SDR50 */
#define SDMMC_CFG2_STYP_SHIFT (10)
#define SDMMC_CFG2_STYP_MASK (0x3 << SDMMC_CFG2_STYP_SHIFT) /* STYP */
#define SDMMC_CFG2_ASYNCINT (1 << 9) /* ASYNCINT */
#define SDMMC_CFG2_VS33 (1 << 5) /* VS33 */
#define SDMMC_CFG2_SRS (1 << 4) /* SRS */
#define SDMMC_CFG2_SDMA (1 << 3) /* SDMA */
#define SDMMC_CFG2_HS (1 << 2) /* HS */
#define SDMMC_CFG2_ADMA2 (1 << 1) /* ADMA2 */
#define SDMMC_CFG2_EMBUS (1 << 0) /* EMBUS */

/******** Bit definition for SDMMC_CFG3 register  ********/
#define SDMMC_CFG3_UTFSDR50 (1 << 4) /* UTFSDR50 */

/******** Bit definition for SDMMC_PV0CTRL register  ********/
#define SDMMC_PV0CTRL_CLKFS_DS_SHIFT (13)
#define SDMMC_PV0CTRL_CLKFS_DS_MASK (0x3FF << SDMMC_PV0CTRL_CLKFS_DS_SHIFT) /* CLKFS_DS */
#define SDMMC_PV0CTRL_CLKFS_INIT_SHIFT (0)
#define SDMMC_PV0CTRL_CLKFS_INIT_MASK (0x3FF << SDMMC_PV0CTRL_CLKFS_INIT_SHIFT) /* CLKFS_INIT */

/******** Bit definition for SDMMC_PV1CTRL register  ********/
#define SDMMC_PV1CTRL_CLKFS_SDR12_SHIFT (13)
#define SDMMC_PV1CTRL_CLKFS_SDR12_MASK (0x3FF << SDMMC_PV1CTRL_CLKFS_SDR12_SHIFT) /* CLKFS_SDR12 */
#define SDMMC_PV1CTRL_CLKFS_HS_SHIFT (0)
#define SDMMC_PV1CTRL_CLKFS_HS_MASK (0x3FF << SDMMC_PV1CTRL_CLKFS_HS_SHIFT) /* CLKFS_HS */

/******** Bit definition for SDMMC_PV2CTRL register  ********/
#define SDMMC_PV2CTRL_CLKFS_SDR50_SHIFT (13)
#define SDMMC_PV2CTRL_CLKFS_SDR50_MASK (0x3FF << SDMMC_PV2CTRL_CLKFS_SDR50_SHIFT) /* CLKFS_SDR50 */
#define SDMMC_PV2CTRL_CLKFS_SDR25_SHIFT (0)
#define SDMMC_PV2CTRL_CLKFS_SDR25_MASK (0x3FF << SDMMC_PV2CTRL_CLKFS_SDR25_SHIFT) /* CLKFS_SDR25 */

/******** Bit definition for SDMMC_PV3CTRL register  ********/
#define SDMMC_PV3CTRL_CLKFS_SDR104_SHIFT (13)
#define SDMMC_PV3CTRL_CLKFS_SDR104_MASK (0x3FF << SDMMC_PV3CTRL_CLKFS_SDR104_SHIFT) /* CLKFS_SDR104 */
#define SDMMC_PV3CTRL_CLKFS_DDR50_SHIFT (0)
#define SDMMC_PV3CTRL_CLKFS_DDR50_MASK (0x3FF << SDMMC_PV3CTRL_CLKFS_DDR50_SHIFT) /* CLKFS_DDR50 */

/******** Bit definition for SDMMC_DLYCTRL register  ********/
#define SDMMC_DLYCTRL_OTDE (1 << 11) /* OTDE */
#define SDMMC_DLYCTRL_OTDS_SHIFT (7)
#define SDMMC_DLYCTRL_OTDS_MASK (0xF << SDMMC_DLYCTRL_OTDS_SHIFT) /* OTDS */
#define SDMMC_DLYCTRL_ITCW (1 << 6) /* ITCW */
#define SDMMC_DLYCTRL_ITDE (1 << 5) /* ITDE */
#define SDMMC_DLYCTRL_ITDS_SHIFT (0)
#define SDMMC_DLYCTRL_ITDS_MASK (0x1F << SDMMC_DLYCTRL_ITDS_SHIFT) /* ITDS */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SDMMC_H */
