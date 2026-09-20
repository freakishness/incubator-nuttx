/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_gpv.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_GPV_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_GPV_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_GPV_FERID4_OFFSET 0x1FD0 /* Periph ID 4 */
#define N32_GPV_FERID5_OFFSET 0x1FD4 /* Periph ID 5 */
#define N32_GPV_FERID6_OFFSET 0x1FD8 /* Periph ID 6 */
#define N32_GPV_FERID7_OFFSET 0x1FDC /* Periph ID 7 */
#define N32_GPV_FERID0_OFFSET 0x1FE0 /* Periph ID 0 */
#define N32_GPV_FERID1_OFFSET 0x1FE4 /* Periph ID 1 */
#define N32_GPV_FERID2_OFFSET 0x1FE8 /* Periph ID 2 */
#define N32_GPV_FERID3_OFFSET 0x1FEC /* Periph ID 3 */
#define N32_GPV_COMID0_OFFSET 0x1FF0 /* Comp ID 0 */
#define N32_GPV_COMID1_OFFSET 0x1FF4 /* Comp ID 1 */
#define N32_GPV_COMID2_OFFSET 0x1FF8 /* Comp ID 2 */
#define N32_GPV_COMID3_OFFSET 0x1FFC /* Comp ID 3 */
#define N32_GPV_AXIROM_IFMOD_OFFSET 0x2008 /* AXI ROM issuing functionality modification register */
#define N32_GPV_AXISRAM1_IFMOD_OFFSET 0x3008 /* AXISRAM1 issuing functionality modification register */
#define N32_GPV_AXISRAM2_IFMOD_OFFSET 0x4008 /* AXISRAM2 issuing functionality modification register */
#define N32_GPV_XSPI1_IFMOD_OFFSET 0x5008 /* XSPI1 issuing functionality modification register */
#define N32_GPV_XSPI2_IFMOD_OFFSET 0x6008 /* XSPI2 issuing functionality modification register */
#define N32_GPV_FEMC_IFMOD_OFFSET 0x7008 /* FEMC issuing functionality modification register */
#define N32_GPV_SDRAM_IFMOD_OFFSET 0x8008 /* SDRAM issuing functionality modification register */
#define N32_GPV_AHBP6_IFMOD_OFFSET 0x9008 /* AHBP6 issuing functionality modification register */
#define N32_GPV_AHBP7_IFMOD_OFFSET 0xA008 /* AHBP7 issuing functionality modification register */
#define N32_GPV_AHBP8_IFMOD_OFFSET 0xB008 /* AHBP8 issuing functionality modification register */
#define N32_GPV_M7AXIM_RQOS_OFFSET 0x42100 /* CM7 AXIM read QoS */
#define N32_GPV_M7AXIM_WQOS_OFFSET 0x42104 /* CM7 AXIM write QoS */
#define N32_GPV_M7AXIM_IFMOD_OFFSET 0x42108 /* CM7 AXIM Issuing functionality modification register */
#define N32_GPV_MDMA_RQOS_OFFSET 0x43100 /* MDMA read QoS */
#define N32_GPV_MDMA_WQOS_OFFSET 0x43104 /* MDMA write QoS */
#define N32_GPV_MDMA_IFMOD_OFFSET 0x43108 /* MDMA Issuing functionality modification register */
#define N32_GPV_GPU_RQOS_OFFSET 0x44100 /* GPU read QoS */
#define N32_GPV_GPU_WQOS_OFFSET 0x44104 /* GPU write QoS */
#define N32_GPV_GPU_IFMOD_OFFSET 0x44108 /* GPU Issuing functionality modification register */
#define N32_GPV_LCDC_RQOS_OFFSET 0x45100 /* LCDC read QoS */
#define N32_GPV_LCDC_WQOS_OFFSET 0x45104 /* LCDC write QoS */
#define N32_GPV_LCDC_IFMOD_OFFSET 0x45108 /* LCDC Issuing functionality modification register */
#define N32_GPV_JPEGSD_RQOS_OFFSET 0x46100 /* JPEG SGDMA read QoS */
#define N32_GPV_JPEGSD_WQOS_OFFSET 0x46104 /* JPEG SGDMA write QoS */
#define N32_GPV_JPEGSD_IFMOD_OFFSET 0x46108 /* JPEG SGDMA Issuing functionality modification register */
#define N32_GPV_JPEGM_RQOS_OFFSET 0x47100 /* JPEG MEM read QoS */
#define N32_GPV_JPEGM_WQOS_OFFSET 0x47104 /* JPEG MEM write QoS */
#define N32_GPV_JPEGM_IFMOD_OFFSET 0x47108 /* JPEG MEM issuing functionality modification register */
#define N32_GPV_SDMMC1_RWINCR_OFFSET 0x48028 /* SDMMC1 read write INCR register */
#define N32_GPV_SDMMC1_RQOS_OFFSET 0x48100 /* SDMMC1 read QoS */
#define N32_GPV_SDMMC1_WQOS_OFFSET 0x48104 /* SDMMC1 write QoS */
#define N32_GPV_SDMMC1_IFMOD_OFFSET 0x48108 /* SDMMC1 issuing functionality modification register */
#define N32_GPV_DVP1_RWINCR_OFFSET 0x49028 /* DVP1 read write INCR register */
#define N32_GPV_DVP1_RQOS_OFFSET 0x49100 /* DVP1 read QoS */
#define N32_GPV_DVP1_WQOS_OFFSET 0x49104 /* DVP1 write QoS */
#define N32_GPV_DVP1_IFMOD_OFFSET 0x49108 /* DVP1 issuing functionality modification register */
#define N32_GPV_DVP2_RWINCR_OFFSET 0x4A028 /* DVP2 read write INCR register */
#define N32_GPV_DVP2_RQOS_OFFSET 0x4A100 /* DVP2 read QoS */
#define N32_GPV_DVP2_WQOS_OFFSET 0x4A104 /* DVP2 write QoS */
#define N32_GPV_DVP2_IFMOD_OFFSET 0x4A108 /* DVP2 Issuing functionality modification register */
#define N32_GPV_AHB4IB_BM_OFFSET 0x4B024 /* AHB4 IB bypass merge register */
#define N32_GPV_AHB4IB_RWINCR_OFFSET 0x4B028 /* AHB4 IB Read write INCR register */
#define N32_GPV_AHB4IB_RQOS_OFFSET 0x4B100 /* AHB4 IB read QoS */
#define N32_GPV_AHB4IB_WQOS_OFFSET 0x4B104 /* AHB4 IB write QoS */
#define N32_GPV_AHB4IB_IFMOD_OFFSET 0x4B108 /* AHB4 IB Issuing functionality modification register */

#define N32_GPV_FERID4 (N32_GPV_BASE + N32_GPV_FERID4_OFFSET)
#define N32_GPV_FERID5 (N32_GPV_BASE + N32_GPV_FERID5_OFFSET)
#define N32_GPV_FERID6 (N32_GPV_BASE + N32_GPV_FERID6_OFFSET)
#define N32_GPV_FERID7 (N32_GPV_BASE + N32_GPV_FERID7_OFFSET)
#define N32_GPV_FERID0 (N32_GPV_BASE + N32_GPV_FERID0_OFFSET)
#define N32_GPV_FERID1 (N32_GPV_BASE + N32_GPV_FERID1_OFFSET)
#define N32_GPV_FERID2 (N32_GPV_BASE + N32_GPV_FERID2_OFFSET)
#define N32_GPV_FERID3 (N32_GPV_BASE + N32_GPV_FERID3_OFFSET)
#define N32_GPV_COMID0 (N32_GPV_BASE + N32_GPV_COMID0_OFFSET)
#define N32_GPV_COMID1 (N32_GPV_BASE + N32_GPV_COMID1_OFFSET)
#define N32_GPV_COMID2 (N32_GPV_BASE + N32_GPV_COMID2_OFFSET)
#define N32_GPV_COMID3 (N32_GPV_BASE + N32_GPV_COMID3_OFFSET)
#define N32_GPV_AXIROM_IFMOD (N32_GPV_BASE + N32_GPV_AXIROM_IFMOD_OFFSET)
#define N32_GPV_AXISRAM1_IFMOD (N32_GPV_BASE + N32_GPV_AXISRAM1_IFMOD_OFFSET)
#define N32_GPV_AXISRAM2_IFMOD (N32_GPV_BASE + N32_GPV_AXISRAM2_IFMOD_OFFSET)
#define N32_GPV_XSPI1_IFMOD (N32_GPV_BASE + N32_GPV_XSPI1_IFMOD_OFFSET)
#define N32_GPV_XSPI2_IFMOD (N32_GPV_BASE + N32_GPV_XSPI2_IFMOD_OFFSET)
#define N32_GPV_FEMC_IFMOD (N32_GPV_BASE + N32_GPV_FEMC_IFMOD_OFFSET)
#define N32_GPV_SDRAM_IFMOD (N32_GPV_BASE + N32_GPV_SDRAM_IFMOD_OFFSET)
#define N32_GPV_AHBP6_IFMOD (N32_GPV_BASE + N32_GPV_AHBP6_IFMOD_OFFSET)
#define N32_GPV_AHBP7_IFMOD (N32_GPV_BASE + N32_GPV_AHBP7_IFMOD_OFFSET)
#define N32_GPV_AHBP8_IFMOD (N32_GPV_BASE + N32_GPV_AHBP8_IFMOD_OFFSET)
#define N32_GPV_M7AXIM_RQOS (N32_GPV_BASE + N32_GPV_M7AXIM_RQOS_OFFSET)
#define N32_GPV_M7AXIM_WQOS (N32_GPV_BASE + N32_GPV_M7AXIM_WQOS_OFFSET)
#define N32_GPV_M7AXIM_IFMOD (N32_GPV_BASE + N32_GPV_M7AXIM_IFMOD_OFFSET)
#define N32_GPV_MDMA_RQOS (N32_GPV_BASE + N32_GPV_MDMA_RQOS_OFFSET)
#define N32_GPV_MDMA_WQOS (N32_GPV_BASE + N32_GPV_MDMA_WQOS_OFFSET)
#define N32_GPV_MDMA_IFMOD (N32_GPV_BASE + N32_GPV_MDMA_IFMOD_OFFSET)
#define N32_GPV_GPU_RQOS (N32_GPV_BASE + N32_GPV_GPU_RQOS_OFFSET)
#define N32_GPV_GPU_WQOS (N32_GPV_BASE + N32_GPV_GPU_WQOS_OFFSET)
#define N32_GPV_GPU_IFMOD (N32_GPV_BASE + N32_GPV_GPU_IFMOD_OFFSET)
#define N32_GPV_LCDC_RQOS (N32_GPV_BASE + N32_GPV_LCDC_RQOS_OFFSET)
#define N32_GPV_LCDC_WQOS (N32_GPV_BASE + N32_GPV_LCDC_WQOS_OFFSET)
#define N32_GPV_LCDC_IFMOD (N32_GPV_BASE + N32_GPV_LCDC_IFMOD_OFFSET)
#define N32_GPV_JPEGSD_RQOS (N32_GPV_BASE + N32_GPV_JPEGSD_RQOS_OFFSET)
#define N32_GPV_JPEGSD_WQOS (N32_GPV_BASE + N32_GPV_JPEGSD_WQOS_OFFSET)
#define N32_GPV_JPEGSD_IFMOD (N32_GPV_BASE + N32_GPV_JPEGSD_IFMOD_OFFSET)
#define N32_GPV_JPEGM_RQOS (N32_GPV_BASE + N32_GPV_JPEGM_RQOS_OFFSET)
#define N32_GPV_JPEGM_WQOS (N32_GPV_BASE + N32_GPV_JPEGM_WQOS_OFFSET)
#define N32_GPV_JPEGM_IFMOD (N32_GPV_BASE + N32_GPV_JPEGM_IFMOD_OFFSET)
#define N32_GPV_SDMMC1_RWINCR (N32_GPV_BASE + N32_GPV_SDMMC1_RWINCR_OFFSET)
#define N32_GPV_SDMMC1_RQOS (N32_GPV_BASE + N32_GPV_SDMMC1_RQOS_OFFSET)
#define N32_GPV_SDMMC1_WQOS (N32_GPV_BASE + N32_GPV_SDMMC1_WQOS_OFFSET)
#define N32_GPV_SDMMC1_IFMOD (N32_GPV_BASE + N32_GPV_SDMMC1_IFMOD_OFFSET)
#define N32_GPV_DVP1_RWINCR (N32_GPV_BASE + N32_GPV_DVP1_RWINCR_OFFSET)
#define N32_GPV_DVP1_RQOS (N32_GPV_BASE + N32_GPV_DVP1_RQOS_OFFSET)
#define N32_GPV_DVP1_WQOS (N32_GPV_BASE + N32_GPV_DVP1_WQOS_OFFSET)
#define N32_GPV_DVP1_IFMOD (N32_GPV_BASE + N32_GPV_DVP1_IFMOD_OFFSET)
#define N32_GPV_DVP2_RWINCR (N32_GPV_BASE + N32_GPV_DVP2_RWINCR_OFFSET)
#define N32_GPV_DVP2_RQOS (N32_GPV_BASE + N32_GPV_DVP2_RQOS_OFFSET)
#define N32_GPV_DVP2_WQOS (N32_GPV_BASE + N32_GPV_DVP2_WQOS_OFFSET)
#define N32_GPV_DVP2_IFMOD (N32_GPV_BASE + N32_GPV_DVP2_IFMOD_OFFSET)
#define N32_GPV_AHB4IB_BM (N32_GPV_BASE + N32_GPV_AHB4IB_BM_OFFSET)
#define N32_GPV_AHB4IB_RWINCR (N32_GPV_BASE + N32_GPV_AHB4IB_RWINCR_OFFSET)
#define N32_GPV_AHB4IB_RQOS (N32_GPV_BASE + N32_GPV_AHB4IB_RQOS_OFFSET)
#define N32_GPV_AHB4IB_WQOS (N32_GPV_BASE + N32_GPV_AHB4IB_WQOS_OFFSET)
#define N32_GPV_AHB4IB_IFMOD (N32_GPV_BASE + N32_GPV_AHB4IB_IFMOD_OFFSET)

/******** Bit definition for GPV_FERID4 register  ********/
#define GPV_FERID4__4KBCOT_SHIFT (4)
#define GPV_FERID4__4KBCOT_MASK (0xF << GPV_FERID4__4KBCOT_SHIFT) /* 4KBCOT */
#define GPV_FERID4_J106CC_SHIFT (0)
#define GPV_FERID4_J106CC_MASK (0xF << GPV_FERID4_J106CC_SHIFT) /* J106CC */

/******** Bit definition for GPV_FERID5 register  ********/
#define GPV_FERID5_FERID5_SHIFT (0)
#define GPV_FERID5_FERID5_MASK (0xFF << GPV_FERID5_FERID5_SHIFT) /* FERID5 */

/******** Bit definition for GPV_FERID6 register  ********/
#define GPV_FERID6_FERID6_SHIFT (0)
#define GPV_FERID6_FERID6_MASK (0xFF << GPV_FERID6_FERID6_SHIFT) /* FERID6 */

/******** Bit definition for GPV_FERID7 register  ********/
#define GPV_FERID7_FERID7_SHIFT (0)
#define GPV_FERID7_FERID7_MASK (0xFF << GPV_FERID7_FERID7_SHIFT) /* FERID7 */

/******** Bit definition for GPV_FERID0 register  ********/
#define GPV_FERID0_PNUML_SHIFT (0)
#define GPV_FERID0_PNUML_MASK (0xFF << GPV_FERID0_PNUML_SHIFT) /* PNUML */

/******** Bit definition for GPV_FERID1 register  ********/
#define GPV_FERID1_J106IDL_SHIFT (4)
#define GPV_FERID1_J106IDL_MASK (0xF << GPV_FERID1_J106IDL_SHIFT) /* J106IDL */
#define GPV_FERID1_PNUMH_SHIFT (0)
#define GPV_FERID1_PNUMH_MASK (0xF << GPV_FERID1_PNUMH_SHIFT) /* PNUMH */

/******** Bit definition for GPV_FERID2 register  ********/
#define GPV_FERID2_PREV_SHIFT (4)
#define GPV_FERID2_PREV_MASK (0xF << GPV_FERID2_PREV_SHIFT) /* PREV */
#define GPV_FERID2_J106CF (1 << 3) /* J106CF */
#define GPV_FERID2_J106IDH_SHIFT (0)
#define GPV_FERID2_J106IDH_MASK (0x7 << GPV_FERID2_J106IDH_SHIFT) /* J106IDH */

/******** Bit definition for GPV_FERID3 register  ********/
#define GPV_FERID3_CVER_SHIFT (4)
#define GPV_FERID3_CVER_MASK (0xF << GPV_FERID3_CVER_SHIFT) /* CVER */
#define GPV_FERID3_CMODI_SHIFT (0)
#define GPV_FERID3_CMODI_MASK (0xF << GPV_FERID3_CMODI_SHIFT) /* CMODI */

/******** Bit definition for GPV_COMID0 register  ********/
#define GPV_COMID0_PREAM1_SHIFT (0)
#define GPV_COMID0_PREAM1_MASK (0xFF << GPV_COMID0_PREAM1_SHIFT) /* PREAM1 */

/******** Bit definition for GPV_COMID1 register  ********/
#define GPV_COMID1_COMPC_SHIFT (4)
#define GPV_COMID1_COMPC_MASK (0xF << GPV_COMID1_COMPC_SHIFT) /* COMPC */
#define GPV_COMID1_PREAM2_SHIFT (0)
#define GPV_COMID1_PREAM2_MASK (0xF << GPV_COMID1_PREAM2_SHIFT) /* PREAM2 */

/******** Bit definition for GPV_COMID2 register  ********/
#define GPV_COMID2_PREAM3_SHIFT (0)
#define GPV_COMID2_PREAM3_MASK (0xFF << GPV_COMID2_PREAM3_SHIFT) /* PREAM3 */

/******** Bit definition for GPV_COMID3 register  ********/
#define GPV_COMID3_PREAM4_SHIFT (0)
#define GPV_COMID3_PREAM4_MASK (0xFF << GPV_COMID3_PREAM4_SHIFT) /* PREAM4 */

/******** Bit definition for GPV_AXIROM_IFMOD register  ********/
#define GPV_AXIROM_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_AXIROM_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_AXISRAM1_IFMOD register  ********/
#define GPV_AXISRAM1_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_AXISRAM1_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_AXISRAM2_IFMOD register  ********/
#define GPV_AXISRAM2_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_AXISRAM2_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_XSPI1_IFMOD register  ********/
#define GPV_XSPI1_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_XSPI1_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_XSPI2_IFMOD register  ********/
#define GPV_XSPI2_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_XSPI2_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_FEMC_IFMOD register  ********/
#define GPV_FEMC_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_FEMC_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_SDRAM_IFMOD register  ********/
#define GPV_SDRAM_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_SDRAM_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_AHBP6_IFMOD register  ********/
#define GPV_AHBP6_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_AHBP6_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_AHBP7_IFMOD register  ********/
#define GPV_AHBP7_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_AHBP7_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_AHBP8_IFMOD register  ********/
#define GPV_AHBP8_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_AHBP8_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_M7AXIM_RQOS register  ********/
#define GPV_M7AXIM_RQOS_RQOS_SHIFT (0)
#define GPV_M7AXIM_RQOS_RQOS_MASK (0xF << GPV_M7AXIM_RQOS_RQOS_SHIFT) /* RQOS */

/******** Bit definition for GPV_M7AXIM_WQOS register  ********/
#define GPV_M7AXIM_WQOS_WQOS_SHIFT (0)
#define GPV_M7AXIM_WQOS_WQOS_MASK (0xF << GPV_M7AXIM_WQOS_WQOS_SHIFT) /* WQOS */

/******** Bit definition for GPV_M7AXIM_IFMOD register  ********/
#define GPV_M7AXIM_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_M7AXIM_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_MDMA_RQOS register  ********/
#define GPV_MDMA_RQOS_RQOS_SHIFT (0)
#define GPV_MDMA_RQOS_RQOS_MASK (0xF << GPV_MDMA_RQOS_RQOS_SHIFT) /* RQOS */

/******** Bit definition for GPV_MDMA_WQOS register  ********/
#define GPV_MDMA_WQOS_WQOS_SHIFT (0)
#define GPV_MDMA_WQOS_WQOS_MASK (0xF << GPV_MDMA_WQOS_WQOS_SHIFT) /* WQOS */

/******** Bit definition for GPV_MDMA_IFMOD register  ********/
#define GPV_MDMA_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_MDMA_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_GPU_RQOS register  ********/
#define GPV_GPU_RQOS_RQOS_SHIFT (0)
#define GPV_GPU_RQOS_RQOS_MASK (0xF << GPV_GPU_RQOS_RQOS_SHIFT) /* RQOS */

/******** Bit definition for GPV_GPU_WQOS register  ********/
#define GPV_GPU_WQOS_WQOS_SHIFT (0)
#define GPV_GPU_WQOS_WQOS_MASK (0xF << GPV_GPU_WQOS_WQOS_SHIFT) /* WQOS */

/******** Bit definition for GPV_GPU_IFMOD register  ********/
#define GPV_GPU_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_GPU_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_LCDC_RQOS register  ********/
#define GPV_LCDC_RQOS_RQOS_SHIFT (0)
#define GPV_LCDC_RQOS_RQOS_MASK (0xF << GPV_LCDC_RQOS_RQOS_SHIFT) /* RQOS */

/******** Bit definition for GPV_LCDC_WQOS register  ********/
#define GPV_LCDC_WQOS_WQOS_SHIFT (0)
#define GPV_LCDC_WQOS_WQOS_MASK (0xF << GPV_LCDC_WQOS_WQOS_SHIFT) /* WQOS */

/******** Bit definition for GPV_LCDC_IFMOD register  ********/
#define GPV_LCDC_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_LCDC_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_JPEGSD_RQOS register  ********/
#define GPV_JPEGSD_RQOS_RQOS_SHIFT (0)
#define GPV_JPEGSD_RQOS_RQOS_MASK (0xF << GPV_JPEGSD_RQOS_RQOS_SHIFT) /* RQOS */

/******** Bit definition for GPV_JPEGSD_WQOS register  ********/
#define GPV_JPEGSD_WQOS_WQOS_SHIFT (0)
#define GPV_JPEGSD_WQOS_WQOS_MASK (0xF << GPV_JPEGSD_WQOS_WQOS_SHIFT) /* WQOS */

/******** Bit definition for GPV_JPEGSD_IFMOD register  ********/
#define GPV_JPEGSD_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_JPEGSD_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_JPEGM_RQOS register  ********/
#define GPV_JPEGM_RQOS_RQOS_SHIFT (0)
#define GPV_JPEGM_RQOS_RQOS_MASK (0xF << GPV_JPEGM_RQOS_RQOS_SHIFT) /* RQOS */

/******** Bit definition for GPV_JPEGM_WQOS register  ********/
#define GPV_JPEGM_WQOS_WQOS_SHIFT (0)
#define GPV_JPEGM_WQOS_WQOS_MASK (0xF << GPV_JPEGM_WQOS_WQOS_SHIFT) /* WQOS */

/******** Bit definition for GPV_JPEGM_IFMOD register  ********/
#define GPV_JPEGM_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_JPEGM_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_SDMMC1_RWINCR register  ********/
#define GPV_SDMMC1_RWINCR_WINCR (1 << 1) /* WINCR */
#define GPV_SDMMC1_RWINCR_RINCR (1 << 0) /* RINCR */

/******** Bit definition for GPV_SDMMC1_RQOS register  ********/
#define GPV_SDMMC1_RQOS_RQOS_SHIFT (0)
#define GPV_SDMMC1_RQOS_RQOS_MASK (0xF << GPV_SDMMC1_RQOS_RQOS_SHIFT) /* RQOS */

/******** Bit definition for GPV_SDMMC1_WQOS register  ********/
#define GPV_SDMMC1_WQOS_WQOS_SHIFT (0)
#define GPV_SDMMC1_WQOS_WQOS_MASK (0xF << GPV_SDMMC1_WQOS_WQOS_SHIFT) /* WQOS */

/******** Bit definition for GPV_SDMMC1_IFMOD register  ********/
#define GPV_SDMMC1_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_SDMMC1_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_DVP1_RWINCR register  ********/
#define GPV_DVP1_RWINCR_WINCR (1 << 1) /* WINCR */
#define GPV_DVP1_RWINCR_RINCR (1 << 0) /* RINCR */

/******** Bit definition for GPV_DVP1_RQOS register  ********/
#define GPV_DVP1_RQOS_RQOS_SHIFT (0)
#define GPV_DVP1_RQOS_RQOS_MASK (0xF << GPV_DVP1_RQOS_RQOS_SHIFT) /* RQOS */

/******** Bit definition for GPV_DVP1_WQOS register  ********/
#define GPV_DVP1_WQOS_WQOS_SHIFT (0)
#define GPV_DVP1_WQOS_WQOS_MASK (0xF << GPV_DVP1_WQOS_WQOS_SHIFT) /* WQOS */

/******** Bit definition for GPV_DVP1_IFMOD register  ********/
#define GPV_DVP1_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_DVP1_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_DVP2_RWINCR register  ********/
#define GPV_DVP2_RWINCR_WINCR (1 << 1) /* WINCR */
#define GPV_DVP2_RWINCR_RINCR (1 << 0) /* RINCR */

/******** Bit definition for GPV_DVP2_RQOS register  ********/
#define GPV_DVP2_RQOS_RQOS_SHIFT (0)
#define GPV_DVP2_RQOS_RQOS_MASK (0xF << GPV_DVP2_RQOS_RQOS_SHIFT) /* RQOS */

/******** Bit definition for GPV_DVP2_WQOS register  ********/
#define GPV_DVP2_WQOS_WQOS_SHIFT (0)
#define GPV_DVP2_WQOS_WQOS_MASK (0xF << GPV_DVP2_WQOS_WQOS_SHIFT) /* WQOS */

/******** Bit definition for GPV_DVP2_IFMOD register  ********/
#define GPV_DVP2_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_DVP2_IFMOD_RIC (1 << 0) /* RIC */

/******** Bit definition for GPV_AHB4IB_BM register  ********/
#define GPV_AHB4IB_BM_BM (1 << 0) /* BM */

/******** Bit definition for GPV_AHB4IB_RWINCR register  ********/
#define GPV_AHB4IB_RWINCR_WINCR (1 << 1) /* WINCR */
#define GPV_AHB4IB_RWINCR_RINCR (1 << 0) /* RINCR */

/******** Bit definition for GPV_AHB4IB_RQOS register  ********/
#define GPV_AHB4IB_RQOS_RQOS_SHIFT (0)
#define GPV_AHB4IB_RQOS_RQOS_MASK (0xF << GPV_AHB4IB_RQOS_RQOS_SHIFT) /* RQOS */

/******** Bit definition for GPV_AHB4IB_WQOS register  ********/
#define GPV_AHB4IB_WQOS_WQOS_SHIFT (0)
#define GPV_AHB4IB_WQOS_WQOS_MASK (0xF << GPV_AHB4IB_WQOS_WQOS_SHIFT) /* WQOS */

/******** Bit definition for GPV_AHB4IB_IFMOD register  ********/
#define GPV_AHB4IB_IFMOD_WIC (1 << 1) /* WIC */
#define GPV_AHB4IB_IFMOD_RIC (1 << 0) /* RIC */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_GPV_H */
