/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_dvp.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DVP_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DVP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_DVP_CTRL_OFFSET 0x0 /* DVP_CTRL */
#define N32_DVP_INTEN_OFFSET 0x4 /* DVP_INTEN */
#define N32_DVP_INTSTS_OFFSET 0x8 /* DVP_INTSTS */
#define N32_DVP_PORTCFG_OFFSET 0xC /* DVP_PORTCFG */
#define N32_DVP_FIFOCFG_OFFSET 0x10 /* DVP_FIFOCFG */
#define N32_DVP_SMADDR1_OFFSET 0x14 /* DVP_SMADDR1 */
#define N32_DVP_SMADDR2_OFFSET 0x18 /* DVP_SMADDR2 */
#define N32_DVP_FBS_OFFSET 0x1C /* DVP_FBS */
#define N32_DVP_FPBC1_OFFSET 0x20 /* DVP_FPBC1 */
#define N32_DVP_FPBC2_OFFSET 0x24 /* DVP_FPBC2 */
#define N32_DVP_CSXY_OFFSET 0x28 /* DVP_CSXY */
#define N32_DVP_CEXY_OFFSET 0x2C /* DVP_CEXY */
#define N32_DVP_EMSC_OFFSET 0x30 /* DVP_EMSC */
#define N32_DVP_EMSCM_OFFSET 0x34 /* DVP_EMSCM */

#define N32_DVP1_CTRL (N32_DVP1_BASE + N32_DVP_CTRL_OFFSET)
#define N32_DVP1_INTEN (N32_DVP1_BASE + N32_DVP_INTEN_OFFSET)
#define N32_DVP1_INTSTS (N32_DVP1_BASE + N32_DVP_INTSTS_OFFSET)
#define N32_DVP1_PORTCFG (N32_DVP1_BASE + N32_DVP_PORTCFG_OFFSET)
#define N32_DVP1_FIFOCFG (N32_DVP1_BASE + N32_DVP_FIFOCFG_OFFSET)
#define N32_DVP1_SMADDR1 (N32_DVP1_BASE + N32_DVP_SMADDR1_OFFSET)
#define N32_DVP1_SMADDR2 (N32_DVP1_BASE + N32_DVP_SMADDR2_OFFSET)
#define N32_DVP1_FBS (N32_DVP1_BASE + N32_DVP_FBS_OFFSET)
#define N32_DVP1_FPBC1 (N32_DVP1_BASE + N32_DVP_FPBC1_OFFSET)
#define N32_DVP1_FPBC2 (N32_DVP1_BASE + N32_DVP_FPBC2_OFFSET)
#define N32_DVP1_CSXY (N32_DVP1_BASE + N32_DVP_CSXY_OFFSET)
#define N32_DVP1_CEXY (N32_DVP1_BASE + N32_DVP_CEXY_OFFSET)
#define N32_DVP1_EMSC (N32_DVP1_BASE + N32_DVP_EMSC_OFFSET)
#define N32_DVP1_EMSCM (N32_DVP1_BASE + N32_DVP_EMSCM_OFFSET)

#define N32_DVP2_CTRL (N32_DVP2_BASE + N32_DVP_CTRL_OFFSET)
#define N32_DVP2_INTEN (N32_DVP2_BASE + N32_DVP_INTEN_OFFSET)
#define N32_DVP2_INTSTS (N32_DVP2_BASE + N32_DVP_INTSTS_OFFSET)
#define N32_DVP2_PORTCFG (N32_DVP2_BASE + N32_DVP_PORTCFG_OFFSET)
#define N32_DVP2_FIFOCFG (N32_DVP2_BASE + N32_DVP_FIFOCFG_OFFSET)
#define N32_DVP2_SMADDR1 (N32_DVP2_BASE + N32_DVP_SMADDR1_OFFSET)
#define N32_DVP2_SMADDR2 (N32_DVP2_BASE + N32_DVP_SMADDR2_OFFSET)
#define N32_DVP2_FBS (N32_DVP2_BASE + N32_DVP_FBS_OFFSET)
#define N32_DVP2_FPBC1 (N32_DVP2_BASE + N32_DVP_FPBC1_OFFSET)
#define N32_DVP2_FPBC2 (N32_DVP2_BASE + N32_DVP_FPBC2_OFFSET)
#define N32_DVP2_CSXY (N32_DVP2_BASE + N32_DVP_CSXY_OFFSET)
#define N32_DVP2_CEXY (N32_DVP2_BASE + N32_DVP_CEXY_OFFSET)
#define N32_DVP2_EMSC (N32_DVP2_BASE + N32_DVP_EMSC_OFFSET)
#define N32_DVP2_EMSCM (N32_DVP2_BASE + N32_DVP_EMSCM_OFFSET)

/******** Bit definition for DVP_CTRL register  ********/
#define DVP_CTRL_VBFLT_SHIFT (28)
#define DVP_CTRL_VBFLT_MASK (0xF << DVP_CTRL_VBFLT_SHIFT) /* VBFLT */
#define DVP_CTRL_CROPEN (1 << 8) /* CROPEN */
#define DVP_CTRL_CM (1 << 1) /* CM */
#define DVP_CTRL_DVPEN (1 << 0) /* DVPEN */

/******** Bit definition for DVP_INTEN register  ********/
#define DVP_INTEN_FMSIE (1 << 19) /* FMSIE */
#define DVP_INTEN_SERRIE (1 << 18) /* SERRIE */
#define DVP_INTEN_CERRIE (1 << 17) /* CERRIE */
#define DVP_INTEN_SKIPIE (1 << 16) /* SKIPIE */
#define DVP_INTEN_MOIE (1 << 8) /* MOIE */
#define DVP_INTEN_AHBERRIE (1 << 7) /* AHBERRIE */
#define DVP_INTEN_FOIE (1 << 5) /* FOIE */
#define DVP_INTEN_M2TCIE (1 << 3) /* M2TCIE */
#define DVP_INTEN_M1TCIE (1 << 2) /* M1TCIE */
#define DVP_INTEN_M2SIE (1 << 1) /* M2SIE */
#define DVP_INTEN_M1SIE (1 << 0) /* M1SIE */

/******** Bit definition for DVP_INTSTS register  ********/
#define DVP_INTSTS_CROPENS (1 << 31) /* CROPENS */
#define DVP_INTSTS_CMS (1 << 30) /* CMS */
#define DVP_INTSTS_DVPDIS (1 << 24) /* DVPDIS */
#define DVP_INTSTS_FMSF (1 << 19) /* FMSF */
#define DVP_INTSTS_SERRF (1 << 18) /* SERRF */
#define DVP_INTSTS_CERRF (1 << 17) /* CERRF */
#define DVP_INTSTS_SKIPF (1 << 16) /* SKIPF */
#define DVP_INTSTS_M2OF (1 << 9) /* M2OF */
#define DVP_INTSTS_M1OF (1 << 8) /* M1OF */
#define DVP_INTSTS_AHBERR2F (1 << 7) /* AHBERR2F */
#define DVP_INTSTS_AHBERR1F (1 << 6) /* AHBERR1F */
#define DVP_INTSTS_M2FOF (1 << 5) /* M2FOF */
#define DVP_INTSTS_M1FOF (1 << 4) /* M1FOF */
#define DVP_INTSTS_M2TCF (1 << 3) /* M2TCF */
#define DVP_INTSTS_M1TCF (1 << 2) /* M1TCF */
#define DVP_INTSTS_M2SF (1 << 1) /* M2SF */
#define DVP_INTSTS_M1SF (1 << 0) /* M1SF */

/******** Bit definition for DVP_PORTCFG register  ********/
#define DVP_PORTCFG_HRSKIP_SHIFT (28)
#define DVP_PORTCFG_HRSKIP_MASK (0xF << DVP_PORTCFG_HRSKIP_SHIFT) /* HRSKIP */
#define DVP_PORTCFG_HISKIP_SHIFT (24)
#define DVP_PORTCFG_HISKIP_MASK (0xF << DVP_PORTCFG_HISKIP_SHIFT) /* HISKIP */
#define DVP_PORTCFG_BMAP_SHIFT (16)
#define DVP_PORTCFG_BMAP_MASK (0xFF << DVP_PORTCFG_BMAP_SHIFT) /* BMAP */
#define DVP_PORTCFG_PIXELDB (1 << 12) /* PIXELDB */
#define DVP_PORTCFG_DBIT_SHIFT (8)
#define DVP_PORTCFG_DBIT_MASK (0x7 << DVP_PORTCFG_DBIT_SHIFT) /* DBIT */
#define DVP_PORTCFG_EMBSEN (1 << 7) /* EMBSEN */
#define DVP_PORTCFG_SLC (1 << 6) /* SLC */
#define DVP_PORTCFG_DATRVS (1 << 4) /* DATRVS */
#define DVP_PORTCFG_DATINV (1 << 3) /* DATINV */
#define DVP_PORTCFG_VSPOL (1 << 2) /* VSPOL */
#define DVP_PORTCFG_HSPOL (1 << 1) /* HSPOL */
#define DVP_PORTCFG_PCLKPOL (1 << 0) /* PCLKPOL */

/******** Bit definition for DVP_FIFOCFG register  ********/
#define DVP_FIFOCFG_TXBURSZ_SHIFT (16)
#define DVP_FIFOCFG_TXBURSZ_MASK (0x7 << DVP_FIFOCFG_TXBURSZ_SHIFT) /* TXBURSZ */
#define DVP_FIFOCFG_TXFTH_SHIFT (8)
#define DVP_FIFOCFG_TXFTH_MASK (0x7 << DVP_FIFOCFG_TXFTH_SHIFT) /* TXFTH */
#define DVP_FIFOCFG_EN1KBD (1 << 5) /* EN1KBD */
#define DVP_FIFOCFG_DISPMODE (1 << 4) /* DISPMODE */
#define DVP_FIFOCFG_M2ADDREN (1 << 1) /* M2ADDREN */
#define DVP_FIFOCFG_M1ADDREN (1 << 0) /* M1ADDREN */

/******** Bit definition for DVP_SMADDR1 register  ********/
#define DVP_SMADDR1_MADDR_SHIFT (0)
#define DVP_SMADDR1_MADDR_MASK (0xFFFFFFFF << DVP_SMADDR1_MADDR_SHIFT) /* MADDR */

/******** Bit definition for DVP_SMADDR2 register  ********/
#define DVP_SMADDR2_MADDR_SHIFT (0)
#define DVP_SMADDR2_MADDR_MASK (0xFFFFFFFF << DVP_SMADDR2_MADDR_SHIFT) /* MADDR */

/******** Bit definition for DVP_FBS register  ********/
#define DVP_FBS_FMSIZE_SHIFT (0)
#define DVP_FBS_FMSIZE_MASK (0x3FFFFF << DVP_FBS_FMSIZE_SHIFT) /* FMSIZE */

/******** Bit definition for DVP_FPBC1 register  ********/
#define DVP_FPBC1_PIXLC_SHIFT (0)
#define DVP_FPBC1_PIXLC_MASK (0xFFFFFFFF << DVP_FPBC1_PIXLC_SHIFT) /* PIXLC */

/******** Bit definition for DVP_FPBC2 register  ********/
#define DVP_FPBC2_PIXLC_SHIFT (0)
#define DVP_FPBC2_PIXLC_MASK (0xFFFFFFFF << DVP_FPBC2_PIXLC_SHIFT) /* PIXLC */

/******** Bit definition for DVP_CSXY register  ********/
#define DVP_CSXY_CSTAY_SHIFT (16)
#define DVP_CSXY_CSTAY_MASK (0x7FF << DVP_CSXY_CSTAY_SHIFT) /* CSTAY */
#define DVP_CSXY_CSTAX_SHIFT (0)
#define DVP_CSXY_CSTAX_MASK (0xFFF << DVP_CSXY_CSTAX_SHIFT) /* CSTAX */

/******** Bit definition for DVP_CEXY register  ********/
#define DVP_CEXY_CENDY_SHIFT (16)
#define DVP_CEXY_CENDY_MASK (0x7FF << DVP_CEXY_CENDY_SHIFT) /* CENDY */
#define DVP_CEXY_CENDX_SHIFT (0)
#define DVP_CEXY_CENDX_MASK (0xFFF << DVP_CEXY_CENDX_SHIFT) /* CENDX */

/******** Bit definition for DVP_EMSC register  ********/
#define DVP_EMSC_HE_PTTN__SHIFT (24)
#define DVP_EMSC_HE_PTTN__MASK (0xFF << DVP_EMSC_HE_PTTN__SHIFT) /* HE_PTTN */
#define DVP_EMSC_HS_PTTN__SHIFT (16)
#define DVP_EMSC_HS_PTTN__MASK (0xFF << DVP_EMSC_HS_PTTN__SHIFT) /* HS_PTTN */
#define DVP_EMSC_VE_PTTN__SHIFT (8)
#define DVP_EMSC_VE_PTTN__MASK (0xFF << DVP_EMSC_VE_PTTN__SHIFT) /* VE_PTTN */
#define DVP_EMSC_VS_PTTN__SHIFT (0)
#define DVP_EMSC_VS_PTTN__MASK (0xFF << DVP_EMSC_VS_PTTN__SHIFT) /* VS_PTTN */

/******** Bit definition for DVP_EMSCM register  ********/
#define DVP_EMSCM_HE_MASK_SHIFT (24)
#define DVP_EMSCM_HE_MASK_MASK (0xFF << DVP_EMSCM_HE_MASK_SHIFT) /* HE_MASK */
#define DVP_EMSCM_HS_MASK_SHIFT (16)
#define DVP_EMSCM_HS_MASK_MASK (0xFF << DVP_EMSCM_HS_MASK_SHIFT) /* HS_MASK */
#define DVP_EMSCM_VE_MASK_SHIFT (8)
#define DVP_EMSCM_VE_MASK_MASK (0xFF << DVP_EMSCM_VE_MASK_SHIFT) /* VE_MASK */
#define DVP_EMSCM_VS_MASK_SHIFT (0)
#define DVP_EMSCM_VS_MASK_MASK (0xFF << DVP_EMSCM_VS_MASK_SHIFT) /* VS_MASK */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DVP_H */
