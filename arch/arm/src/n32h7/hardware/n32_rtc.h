/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_rtc.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_RTC_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_RTC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_RTC_TSH_OFFSET 0x0 /* RTC_TSH */
#define N32_RTC_DATE_OFFSET 0x4 /* RTC_DATE */
#define N32_RTC_CTRL_OFFSET 0x8 /* RTC_CTRL */
#define N32_RTC_INITSTS_OFFSET 0xC /* RTC_INITSTS */
#define N32_RTC_PRE_OFFSET 0x10 /* RTC_PRE */
#define N32_RTC_WKUPT_OFFSET 0x14 /* RTC_WKUPT */
#define N32_RTC_ALARMA_OFFSET 0x1C /* RTC_ALARMA */
#define N32_RTC_ALARMB_OFFSET 0x20 /* RTC_ALARMB */
#define N32_RTC_WRP_OFFSET 0x24 /* RTC_WRP */
#define N32_RTC_SUBS_OFFSET 0x28 /* RTC_SUBS */
#define N32_RTC_SCTRL_OFFSET 0x2C /* RTC_SCTRL */
#define N32_RTC_TST_OFFSET 0x30 /* RTC_TST */
#define N32_RTC_TSD_OFFSET 0x34 /* RTC_TSD */
#define N32_RTC_TSSS_OFFSET 0x38 /* RTC_TSSS */
#define N32_RTC_CALIB_OFFSET 0x3C /* RTC_CALIB */
#define N32_RTC_ALRMASS_OFFSET 0x44 /* RTC_ALRMASS */
#define N32_RTC_ALRMBSS_OFFSET 0x48 /* RTC_ALRMBSS */
#define N32_RTC_OPT_OFFSET 0x4C /* RTC_OPT */
#define N32_RTC_BKP1_OFFSET 0x50 /* RTC_BKP1 */
#define N32_RTC_BKP2_OFFSET 0x54 /* RTC_BKP2 */
#define N32_RTC_BKP3_OFFSET 0x58 /* RTC_BKP3 */
#define N32_RTC_BKP4_OFFSET 0x5C /* RTC_BKP4 */
#define N32_RTC_BKP5_OFFSET 0x60 /* RTC_BKP5 */
#define N32_RTC_BKP6_OFFSET 0x64 /* RTC_BKP6 */
#define N32_RTC_BKP7_OFFSET 0x68 /* RTC_BKP7 */
#define N32_RTC_BKP8_OFFSET 0x6C /* RTC_BKP8 */
#define N32_RTC_BKP9_OFFSET 0x70 /* RTC_BKP9 */
#define N32_RTC_BKP10_OFFSET 0x74 /* RTC_BKP10 */
#define N32_RTC_BKP11_OFFSET 0x78 /* RTC_BKP11 */
#define N32_RTC_BKP12_OFFSET 0x7C /* RTC_BKP12 */
#define N32_RTC_BKP13_OFFSET 0x80 /* RTC_BKP13 */
#define N32_RTC_BKP14_OFFSET 0x84 /* RTC_BKP14 */
#define N32_RTC_BKP15_OFFSET 0x88 /* RTC_BKP15 */
#define N32_RTC_BKP16_OFFSET 0x8C /* RTC_BKP16 */
#define N32_RTC_BKP17_OFFSET 0x90 /* RTC_BKP17 */
#define N32_RTC_BKP18_OFFSET 0x94 /* RTC_BKP18 */
#define N32_RTC_BKP19_OFFSET 0x98 /* RTC_BKP19 */
#define N32_RTC_BKP20_OFFSET 0x9C /* RTC_BKP20 */
#define N32_RTC_BKP21_OFFSET 0xA0 /* RTC_BKP21 */
#define N32_RTC_BKP22_OFFSET 0xA4 /* RTC_BKP22 */
#define N32_RTC_BKP23_OFFSET 0xA8 /* RTC_BKP23 */
#define N32_RTC_BKP24_OFFSET 0xAC /* RTC_BKP24 */
#define N32_RTC_BKP25_OFFSET 0xB0 /* RTC_BKP25 */
#define N32_RTC_BKP26_OFFSET 0xB4 /* RTC_BKP26 */
#define N32_RTC_BKP27_OFFSET 0xB8 /* RTC_BKP27 */
#define N32_RTC_BKP28_OFFSET 0xBC /* RTC_BKP27 */
#define N32_RTC_BKP29_OFFSET 0xC0 /* RTC_BKP29 */
#define N32_RTC_BKP30_OFFSET 0xC4 /* RTC_BKP30 */
#define N32_RTC_BKP31_OFFSET 0xC8 /* RTC_BKP31 */
#define N32_RTC_BKP32_OFFSET 0xCC /* RTC_BKP32 */
#define N32_RTC_TMPCFG_OFFSET 0xD4 /* RTC_TMPCFG */
#define N32_RTC_TMPCTRL1_OFFSET 0xD8 /* RTC_TMPCTRL1 */
#define N32_RTC_TMPCTRL2_OFFSET 0xDC /* RTC_TMPCTRL2 */
#define N32_RTC_TMPCTRL3_OFFSET 0xE0 /* RTC_TMPCTRL3 */
#define N32_RTC_TMPCTRL4_OFFSET 0xE4 /* RTC_TMPCTRL4 */
#define N32_RTC_TMPCTRL5_OFFSET 0xE8 /* RTC_TMPCTRL5 */
#define N32_RTC_TMPCTRL6_OFFSET 0xEC /* RTC_TMPCTRL6 */
#define N32_RTC_TMPCTRL7_OFFSET 0xF0 /* RTC_TMPCTRL7 */
#define N32_RTC_TMPCTRL8_OFFSET 0xF4 /* RTC_TMPCTRL8 */

#define N32_RTC_TSH (N32_RTC_BASE + N32_RTC_TSH_OFFSET)
#define N32_RTC_DATE (N32_RTC_BASE + N32_RTC_DATE_OFFSET)
#define N32_RTC_CTRL (N32_RTC_BASE + N32_RTC_CTRL_OFFSET)
#define N32_RTC_INITSTS (N32_RTC_BASE + N32_RTC_INITSTS_OFFSET)
#define N32_RTC_PRE (N32_RTC_BASE + N32_RTC_PRE_OFFSET)
#define N32_RTC_WKUPT (N32_RTC_BASE + N32_RTC_WKUPT_OFFSET)
#define N32_RTC_ALARMA (N32_RTC_BASE + N32_RTC_ALARMA_OFFSET)
#define N32_RTC_ALARMB (N32_RTC_BASE + N32_RTC_ALARMB_OFFSET)
#define N32_RTC_WRP (N32_RTC_BASE + N32_RTC_WRP_OFFSET)
#define N32_RTC_SUBS (N32_RTC_BASE + N32_RTC_SUBS_OFFSET)
#define N32_RTC_SCTRL (N32_RTC_BASE + N32_RTC_SCTRL_OFFSET)
#define N32_RTC_TST (N32_RTC_BASE + N32_RTC_TST_OFFSET)
#define N32_RTC_TSD (N32_RTC_BASE + N32_RTC_TSD_OFFSET)
#define N32_RTC_TSSS (N32_RTC_BASE + N32_RTC_TSSS_OFFSET)
#define N32_RTC_CALIB (N32_RTC_BASE + N32_RTC_CALIB_OFFSET)
#define N32_RTC_ALRMASS (N32_RTC_BASE + N32_RTC_ALRMASS_OFFSET)
#define N32_RTC_ALRMBSS (N32_RTC_BASE + N32_RTC_ALRMBSS_OFFSET)
#define N32_RTC_OPT (N32_RTC_BASE + N32_RTC_OPT_OFFSET)
#define N32_RTC_BKP1 (N32_RTC_BASE + N32_RTC_BKP1_OFFSET)
#define N32_RTC_BKP2 (N32_RTC_BASE + N32_RTC_BKP2_OFFSET)
#define N32_RTC_BKP3 (N32_RTC_BASE + N32_RTC_BKP3_OFFSET)
#define N32_RTC_BKP4 (N32_RTC_BASE + N32_RTC_BKP4_OFFSET)
#define N32_RTC_BKP5 (N32_RTC_BASE + N32_RTC_BKP5_OFFSET)
#define N32_RTC_BKP6 (N32_RTC_BASE + N32_RTC_BKP6_OFFSET)
#define N32_RTC_BKP7 (N32_RTC_BASE + N32_RTC_BKP7_OFFSET)
#define N32_RTC_BKP8 (N32_RTC_BASE + N32_RTC_BKP8_OFFSET)
#define N32_RTC_BKP9 (N32_RTC_BASE + N32_RTC_BKP9_OFFSET)
#define N32_RTC_BKP10 (N32_RTC_BASE + N32_RTC_BKP10_OFFSET)
#define N32_RTC_BKP11 (N32_RTC_BASE + N32_RTC_BKP11_OFFSET)
#define N32_RTC_BKP12 (N32_RTC_BASE + N32_RTC_BKP12_OFFSET)
#define N32_RTC_BKP13 (N32_RTC_BASE + N32_RTC_BKP13_OFFSET)
#define N32_RTC_BKP14 (N32_RTC_BASE + N32_RTC_BKP14_OFFSET)
#define N32_RTC_BKP15 (N32_RTC_BASE + N32_RTC_BKP15_OFFSET)
#define N32_RTC_BKP16 (N32_RTC_BASE + N32_RTC_BKP16_OFFSET)
#define N32_RTC_BKP17 (N32_RTC_BASE + N32_RTC_BKP17_OFFSET)
#define N32_RTC_BKP18 (N32_RTC_BASE + N32_RTC_BKP18_OFFSET)
#define N32_RTC_BKP19 (N32_RTC_BASE + N32_RTC_BKP19_OFFSET)
#define N32_RTC_BKP20 (N32_RTC_BASE + N32_RTC_BKP20_OFFSET)
#define N32_RTC_BKP21 (N32_RTC_BASE + N32_RTC_BKP21_OFFSET)
#define N32_RTC_BKP22 (N32_RTC_BASE + N32_RTC_BKP22_OFFSET)
#define N32_RTC_BKP23 (N32_RTC_BASE + N32_RTC_BKP23_OFFSET)
#define N32_RTC_BKP24 (N32_RTC_BASE + N32_RTC_BKP24_OFFSET)
#define N32_RTC_BKP25 (N32_RTC_BASE + N32_RTC_BKP25_OFFSET)
#define N32_RTC_BKP26 (N32_RTC_BASE + N32_RTC_BKP26_OFFSET)
#define N32_RTC_BKP27 (N32_RTC_BASE + N32_RTC_BKP27_OFFSET)
#define N32_RTC_BKP28 (N32_RTC_BASE + N32_RTC_BKP28_OFFSET)
#define N32_RTC_BKP29 (N32_RTC_BASE + N32_RTC_BKP29_OFFSET)
#define N32_RTC_BKP30 (N32_RTC_BASE + N32_RTC_BKP30_OFFSET)
#define N32_RTC_BKP31 (N32_RTC_BASE + N32_RTC_BKP31_OFFSET)
#define N32_RTC_BKP32 (N32_RTC_BASE + N32_RTC_BKP32_OFFSET)
#define N32_RTC_TMPCFG (N32_RTC_BASE + N32_RTC_TMPCFG_OFFSET)
#define N32_RTC_TMPCTRL1 (N32_RTC_BASE + N32_RTC_TMPCTRL1_OFFSET)
#define N32_RTC_TMPCTRL2 (N32_RTC_BASE + N32_RTC_TMPCTRL2_OFFSET)
#define N32_RTC_TMPCTRL3 (N32_RTC_BASE + N32_RTC_TMPCTRL3_OFFSET)
#define N32_RTC_TMPCTRL4 (N32_RTC_BASE + N32_RTC_TMPCTRL4_OFFSET)
#define N32_RTC_TMPCTRL5 (N32_RTC_BASE + N32_RTC_TMPCTRL5_OFFSET)
#define N32_RTC_TMPCTRL6 (N32_RTC_BASE + N32_RTC_TMPCTRL6_OFFSET)
#define N32_RTC_TMPCTRL7 (N32_RTC_BASE + N32_RTC_TMPCTRL7_OFFSET)
#define N32_RTC_TMPCTRL8 (N32_RTC_BASE + N32_RTC_TMPCTRL8_OFFSET)

/******** Bit definition for RTC_TSH register  ********/
#define RTC_TSH_SCU_SHIFT (0)
#define RTC_TSH_SCU_MASK (0xF << RTC_TSH_SCU_SHIFT) /* SCU */
#define RTC_TSH_SCT_SHIFT (4)
#define RTC_TSH_SCT_MASK (0x7 << RTC_TSH_SCT_SHIFT) /* SCT */
#define RTC_TSH_MIU_SHIFT (8)
#define RTC_TSH_MIU_MASK (0xF << RTC_TSH_MIU_SHIFT) /* MIU */
#define RTC_TSH_MIT_SHIFT (12)
#define RTC_TSH_MIT_MASK (0x7 << RTC_TSH_MIT_SHIFT) /* MIT */
#define RTC_TSH_HOU_SHIFT (16)
#define RTC_TSH_HOU_MASK (0xF << RTC_TSH_HOU_SHIFT) /* HOU */
#define RTC_TSH_HOT_SHIFT (20)
#define RTC_TSH_HOT_MASK (0x3 << RTC_TSH_HOT_SHIFT) /* HOT */
#define RTC_TSH_APM (1 << 22) /* APM */

/******** Bit definition for RTC_DATE register  ********/
#define RTC_DATE_DAU_SHIFT (0)
#define RTC_DATE_DAU_MASK (0xF << RTC_DATE_DAU_SHIFT) /* DAU */
#define RTC_DATE_DAT_SHIFT (4)
#define RTC_DATE_DAT_MASK (0x3 << RTC_DATE_DAT_SHIFT) /* DAT */
#define RTC_DATE_MOU_SHIFT (8)
#define RTC_DATE_MOU_MASK (0xF << RTC_DATE_MOU_SHIFT) /* MOU */
#define RTC_DATE_MOT (1 << 12) /* MOT */
#define RTC_DATE_WDU_SHIFT (13)
#define RTC_DATE_WDU_MASK (0x7 << RTC_DATE_WDU_SHIFT) /* WDU */
#define RTC_DATE_YRU_SHIFT (16)
#define RTC_DATE_YRU_MASK (0xF << RTC_DATE_YRU_SHIFT) /* YRU */
#define RTC_DATE_YRT_SHIFT (20)
#define RTC_DATE_YRT_MASK (0xF << RTC_DATE_YRT_SHIFT) /* YRT */

/******** Bit definition for RTC_CTRL register  ********/
#define RTC_CTRL_WKUPSEL_SHIFT (0)
#define RTC_CTRL_WKUPSEL_MASK (0x7 << RTC_CTRL_WKUPSEL_SHIFT) /* WKUPSEL */
#define RTC_CTRL_TEDGE (1 << 3) /* TEDGE */
#define RTC_CTRL_REFCLKEN (1 << 4) /* REFCLKEN */
#define RTC_CTRL_BYPS (1 << 5) /* BYPS */
#define RTC_CTRL_HFMT (1 << 6) /* HFMT */
#define RTC_CTRL_CAOVEN (1 << 7) /* CAOVEN */
#define RTC_CTRL_ALAEN (1 << 8) /* ALAEN */
#define RTC_CTRL_ALBEN (1 << 9) /* ALBEN */
#define RTC_CTRL_WTEN (1 << 10) /* WTEN */
#define RTC_CTRL_TSEN (1 << 11) /* TSEN */
#define RTC_CTRL_ALAIEN (1 << 12) /* ALAIEN */
#define RTC_CTRL_ALBIEN (1 << 13) /* ALBIEN */
#define RTC_CTRL_WTIEN (1 << 14) /* WTIEN */
#define RTC_CTRL_TSIEN (1 << 15) /* TSIEN */
#define RTC_CTRL_AD1H (1 << 16) /* AD1H */
#define RTC_CTRL_SU1H (1 << 17) /* SU1H */
#define RTC_CTRL_BAKP (1 << 18) /* BAKP */
#define RTC_CTRL_CALOSEL (1 << 19) /* CALOSEL */
#define RTC_CTRL_OPOL (1 << 20) /* OPOL */
#define RTC_CTRL_OUTSEL_SHIFT (21)
#define RTC_CTRL_OUTSEL_MASK (0x3 << RTC_CTRL_OUTSEL_SHIFT) /* OUTSEL */
#define RTC_CTRL_COEN (1 << 23) /* COEN */
#define RTC_CTRL_IETSEN (1 << 24) /* IETSEN */
#define RTC_CTRL_TAMPOE (1 << 26) /* TAMPOE */
#define RTC_CTRL_CAOVIEN (1 << 27) /* CAOVIEN */

/******** Bit definition for RTC_INITSTS register  ********/
#define RTC_INITSTS_ALAWF (1 << 0) /* ALAWF */
#define RTC_INITSTS_ALBWF (1 << 1) /* ALBWF */
#define RTC_INITSTS_WTWF (1 << 2) /* WTWF */
#define RTC_INITSTS_SHOPF (1 << 3) /* SHOPF */
#define RTC_INITSTS_INITSF (1 << 4) /* INITSF */
#define RTC_INITSTS_RSYF (1 << 5) /* RSYF */
#define RTC_INITSTS_INITF (1 << 6) /* INITF */
#define RTC_INITSTS_INITM (1 << 7) /* INITM */
#define RTC_INITSTS_ALAF (1 << 8) /* ALAF */
#define RTC_INITSTS_ALBF (1 << 9) /* ALBF */
#define RTC_INITSTS_WTF (1 << 10) /* WTF */
#define RTC_INITSTS_TISF (1 << 11) /* TISF */
#define RTC_INITSTS_TISOVF (1 << 12) /* TISOVF */
#define RTC_INITSTS_TAM1F (1 << 13) /* TAM1F */
#define RTC_INITSTS_TAM2F (1 << 14) /* TAM2F */
#define RTC_INITSTS_TAM3F (1 << 15) /* TAM3F */
#define RTC_INITSTS_RECPF (1 << 16) /* RECPF */
#define RTC_INITSTS_TAM4F (1 << 17) /* TAM4F */
#define RTC_INITSTS_TAM5F (1 << 18) /* TAM5F */
#define RTC_INITSTS_TAM6F (1 << 19) /* TAM6F */
#define RTC_INITSTS_TAM7F (1 << 20) /* TAM7F */
#define RTC_INITSTS_TAM8F (1 << 21) /* TAM8F */
#define RTC_INITSTS_CAOVF (1 << 22) /* CAOVF */
#define RTC_INITSTS_IETSF (1 << 23) /* IETSF */
#define RTC_INITSTS_BKSRAMEF (1 << 24) /* BKSRAMEF */

/******** Bit definition for RTC_PRE register  ********/
#define RTC_PRE_DIVS_SHIFT (0)
#define RTC_PRE_DIVS_MASK (0x7FFF << RTC_PRE_DIVS_SHIFT) /* DIVS */
#define RTC_PRE_DIVA_SHIFT (16)
#define RTC_PRE_DIVA_MASK (0x7F << RTC_PRE_DIVA_SHIFT) /* DIVA */

/******** Bit definition for RTC_WKUPT register  ********/
#define RTC_WKUPT_WKUPT_SHIFT (0)
#define RTC_WKUPT_WKUPT_MASK (0xFFFF << RTC_WKUPT_WKUPT_SHIFT) /* WKUPT */

/******** Bit definition for RTC_ALARMA register  ********/
#define RTC_ALARMA_SEU_SHIFT (0)
#define RTC_ALARMA_SEU_MASK (0xF << RTC_ALARMA_SEU_SHIFT) /* SEU */
#define RTC_ALARMA_SET_SHIFT (4)
#define RTC_ALARMA_SET_MASK (0x7 << RTC_ALARMA_SET_SHIFT) /* SET */
#define RTC_ALARMA_MASK1 (1 << 7) /* MASK1 */
#define RTC_ALARMA_MIU_SHIFT (8)
#define RTC_ALARMA_MIU_MASK (0xF << RTC_ALARMA_MIU_SHIFT) /* MIU */
#define RTC_ALARMA_MIT_SHIFT (12)
#define RTC_ALARMA_MIT_MASK (0x7 << RTC_ALARMA_MIT_SHIFT) /* MIT */
#define RTC_ALARMA_MASK2 (1 << 15) /* MASK2 */
#define RTC_ALARMA_HOU_SHIFT (16)
#define RTC_ALARMA_HOU_MASK (0xF << RTC_ALARMA_HOU_SHIFT) /* HOU */
#define RTC_ALARMA_HOT_SHIFT (20)
#define RTC_ALARMA_HOT_MASK (0x3 << RTC_ALARMA_HOT_SHIFT) /* HOT */
#define RTC_ALARMA_APM (1 << 22) /* APM */
#define RTC_ALARMA_MASK3 (1 << 23) /* MASK3 */
#define RTC_ALARMA_DTU_SHIFT (24)
#define RTC_ALARMA_DTU_MASK (0xF << RTC_ALARMA_DTU_SHIFT) /* DTU */
#define RTC_ALARMA_DTT_SHIFT (28)
#define RTC_ALARMA_DTT_MASK (0x3 << RTC_ALARMA_DTT_SHIFT) /* DTT */
#define RTC_ALARMA_WKDSEL (1 << 30) /* WKDSEL */
#define RTC_ALARMA_MASK4 (1 << 31) /* MASK4 */

/******** Bit definition for RTC_ALARMB register  ********/
#define RTC_ALARMB_SEU_SHIFT (0)
#define RTC_ALARMB_SEU_MASK (0xF << RTC_ALARMB_SEU_SHIFT) /* SEU */
#define RTC_ALARMB_SET_SHIFT (4)
#define RTC_ALARMB_SET_MASK (0x7 << RTC_ALARMB_SET_SHIFT) /* SET */
#define RTC_ALARMB_MASK1 (1 << 7) /* MASK1 */
#define RTC_ALARMB_MIU_SHIFT (8)
#define RTC_ALARMB_MIU_MASK (0xF << RTC_ALARMB_MIU_SHIFT) /* MIU */
#define RTC_ALARMB_MIT_SHIFT (12)
#define RTC_ALARMB_MIT_MASK (0x7 << RTC_ALARMB_MIT_SHIFT) /* MIT */
#define RTC_ALARMB_MASK2 (1 << 15) /* MASK2 */
#define RTC_ALARMB_HOU_SHIFT (16)
#define RTC_ALARMB_HOU_MASK (0xF << RTC_ALARMB_HOU_SHIFT) /* HOU */
#define RTC_ALARMB_HOT_SHIFT (20)
#define RTC_ALARMB_HOT_MASK (0x3 << RTC_ALARMB_HOT_SHIFT) /* HOT */
#define RTC_ALARMB_APM (1 << 22) /* APM */
#define RTC_ALARMB_MASK3 (1 << 23) /* MASK3 */
#define RTC_ALARMB_DTU_SHIFT (24)
#define RTC_ALARMB_DTU_MASK (0xF << RTC_ALARMB_DTU_SHIFT) /* DTU */
#define RTC_ALARMB_DTT_SHIFT (28)
#define RTC_ALARMB_DTT_MASK (0x3 << RTC_ALARMB_DTT_SHIFT) /* DTT */
#define RTC_ALARMB_WKDSEL (1 << 30) /* WKDSEL */
#define RTC_ALARMB_MASK4 (1 << 31) /* MASK4 */

/******** Bit definition for RTC_WRP register  ********/
#define RTC_WRP_PKEY_SHIFT (0)
#define RTC_WRP_PKEY_MASK (0xFF << RTC_WRP_PKEY_SHIFT) /* PKEY */

/******** Bit definition for RTC_SUBS register  ********/
#define RTC_SUBS_SS_SHIFT (0)
#define RTC_SUBS_SS_MASK (0xFFFF << RTC_SUBS_SS_SHIFT) /* SS */

/******** Bit definition for RTC_SCTRL register  ********/
#define RTC_SCTRL_SUBF_SHIFT (0)
#define RTC_SCTRL_SUBF_MASK (0x7FFF << RTC_SCTRL_SUBF_SHIFT) /* SUBF */
#define RTC_SCTRL_ADD1S (1 << 31) /* ADD1S */

/******** Bit definition for RTC_TST register  ********/
#define RTC_TST_SEU_SHIFT (0)
#define RTC_TST_SEU_MASK (0xF << RTC_TST_SEU_SHIFT) /* SEU */
#define RTC_TST_SET_SHIFT (4)
#define RTC_TST_SET_MASK (0x7 << RTC_TST_SET_SHIFT) /* SET */
#define RTC_TST_MIU_SHIFT (8)
#define RTC_TST_MIU_MASK (0xF << RTC_TST_MIU_SHIFT) /* MIU */
#define RTC_TST_MIT_SHIFT (12)
#define RTC_TST_MIT_MASK (0x7 << RTC_TST_MIT_SHIFT) /* MIT */
#define RTC_TST_HOU_SHIFT (16)
#define RTC_TST_HOU_MASK (0xF << RTC_TST_HOU_SHIFT) /* HOU */
#define RTC_TST_HOT_SHIFT (20)
#define RTC_TST_HOT_MASK (0x3 << RTC_TST_HOT_SHIFT) /* HOT */
#define RTC_TST_APM (1 << 22) /* APM */

/******** Bit definition for RTC_TSD register  ********/
#define RTC_TSD_DAU_SHIFT (0)
#define RTC_TSD_DAU_MASK (0xF << RTC_TSD_DAU_SHIFT) /* DAU */
#define RTC_TSD_DAT_SHIFT (4)
#define RTC_TSD_DAT_MASK (0x3 << RTC_TSD_DAT_SHIFT) /* DAT */
#define RTC_TSD_MOU_SHIFT (8)
#define RTC_TSD_MOU_MASK (0xF << RTC_TSD_MOU_SHIFT) /* MOU */
#define RTC_TSD_MOT (1 << 12) /* MOT */
#define RTC_TSD_WDU_SHIFT (13)
#define RTC_TSD_WDU_MASK (0x7 << RTC_TSD_WDU_SHIFT) /* WDU */
#define RTC_TSD_YRU_SHIFT (16)
#define RTC_TSD_YRU_MASK (0xF << RTC_TSD_YRU_SHIFT) /* YRU */
#define RTC_TSD_YRT_SHIFT (20)
#define RTC_TSD_YRT_MASK (0xF << RTC_TSD_YRT_SHIFT) /* YRT */

/******** Bit definition for RTC_TSSS register  ********/
#define RTC_TSSS_SSE_SHIFT (0)
#define RTC_TSSS_SSE_MASK (0xFFFF << RTC_TSSS_SSE_SHIFT) /* SSE */

/******** Bit definition for RTC_CALIB register  ********/
#define RTC_CALIB_CM_SHIFT (0)
#define RTC_CALIB_CM_MASK (0x1FF << RTC_CALIB_CM_SHIFT) /* CM */
#define RTC_CALIB_CW16 (1 << 13) /* CW16 */
#define RTC_CALIB_CW8 (1 << 14) /* CW8 */
#define RTC_CALIB_CP (1 << 15) /* CP */

/******** Bit definition for RTC_ALRMASS register  ********/
#define RTC_ALRMASS_SSV_SHIFT (0)
#define RTC_ALRMASS_SSV_MASK (0x7FFF << RTC_ALRMASS_SSV_SHIFT) /* SSV */
#define RTC_ALRMASS_MASKSSB_SHIFT (24)
#define RTC_ALRMASS_MASKSSB_MASK (0xF << RTC_ALRMASS_MASKSSB_SHIFT) /* MASKSSB */

/******** Bit definition for RTC_ALRMBSS register  ********/
#define RTC_ALRMBSS_SSV_SHIFT (0)
#define RTC_ALRMBSS_SSV_MASK (0x7FFF << RTC_ALRMBSS_SSV_SHIFT) /* SSV */
#define RTC_ALRMBSS_MASKSSB_SHIFT (24)
#define RTC_ALRMBSS_MASKSSB_MASK (0xF << RTC_ALRMBSS_MASKSSB_SHIFT) /* MASKSSB */

/******** Bit definition for RTC_OPT register  ********/
#define RTC_OPT_TYPE (1 << 0) /* TYPE */
#define RTC_OPT_PWREST (1 << 1) /* PWREST */
#define RTC_OPT_OUTPU (1 << 2) /* OUTPU */
#define RTC_OPT_OUTMAP (1 << 3) /* OUTMAP */
#define RTC_OPT_OPDC (1 << 7) /* OPDC */

/******** Bit definition for RTC_BKP1 register  ********/
#define RTC_BKP1_BF_SHIFT (0)
#define RTC_BKP1_BF_MASK (0xFFFFFFFF << RTC_BKP1_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP2 register  ********/
#define RTC_BKP2_BF_SHIFT (0)
#define RTC_BKP2_BF_MASK (0xFFFFFFFF << RTC_BKP2_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP3 register  ********/
#define RTC_BKP3_BF_SHIFT (0)
#define RTC_BKP3_BF_MASK (0xFFFFFFFF << RTC_BKP3_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP4 register  ********/
#define RTC_BKP4_BF_SHIFT (0)
#define RTC_BKP4_BF_MASK (0xFFFFFFFF << RTC_BKP4_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP5 register  ********/
#define RTC_BKP5_BF_SHIFT (0)
#define RTC_BKP5_BF_MASK (0xFFFFFFFF << RTC_BKP5_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP6 register  ********/
#define RTC_BKP6_BF_SHIFT (0)
#define RTC_BKP6_BF_MASK (0xFFFFFFFF << RTC_BKP6_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP7 register  ********/
#define RTC_BKP7_BF_SHIFT (0)
#define RTC_BKP7_BF_MASK (0xFFFFFFFF << RTC_BKP7_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP8 register  ********/
#define RTC_BKP8_BF_SHIFT (0)
#define RTC_BKP8_BF_MASK (0xFFFFFFFF << RTC_BKP8_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP9 register  ********/
#define RTC_BKP9_BF_SHIFT (0)
#define RTC_BKP9_BF_MASK (0xFFFFFFFF << RTC_BKP9_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP10 register  ********/
#define RTC_BKP10_BF_SHIFT (0)
#define RTC_BKP10_BF_MASK (0xFFFFFFFF << RTC_BKP10_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP11 register  ********/
#define RTC_BKP11_BF_SHIFT (0)
#define RTC_BKP11_BF_MASK (0xFFFFFFFF << RTC_BKP11_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP12 register  ********/
#define RTC_BKP12_BF_SHIFT (0)
#define RTC_BKP12_BF_MASK (0xFFFFFFFF << RTC_BKP12_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP13 register  ********/
#define RTC_BKP13_BF_SHIFT (0)
#define RTC_BKP13_BF_MASK (0xFFFFFFFF << RTC_BKP13_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP14 register  ********/
#define RTC_BKP14_BF_SHIFT (0)
#define RTC_BKP14_BF_MASK (0xFFFFFFFF << RTC_BKP14_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP15 register  ********/
#define RTC_BKP15_BF_SHIFT (0)
#define RTC_BKP15_BF_MASK (0xFFFFFFFF << RTC_BKP15_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP16 register  ********/
#define RTC_BKP16_BF_SHIFT (0)
#define RTC_BKP16_BF_MASK (0xFFFFFFFF << RTC_BKP16_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP17 register  ********/
#define RTC_BKP17_BF_SHIFT (0)
#define RTC_BKP17_BF_MASK (0xFFFFFFFF << RTC_BKP17_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP18 register  ********/
#define RTC_BKP18_BF_SHIFT (0)
#define RTC_BKP18_BF_MASK (0xFFFFFFFF << RTC_BKP18_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP19 register  ********/
#define RTC_BKP19_BF_SHIFT (0)
#define RTC_BKP19_BF_MASK (0xFFFFFFFF << RTC_BKP19_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP20 register  ********/
#define RTC_BKP20_BF_SHIFT (0)
#define RTC_BKP20_BF_MASK (0xFFFFFFFF << RTC_BKP20_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP21 register  ********/
#define RTC_BKP21_BF_SHIFT (0)
#define RTC_BKP21_BF_MASK (0xFFFFFFFF << RTC_BKP21_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP22 register  ********/
#define RTC_BKP22_BF_SHIFT (0)
#define RTC_BKP22_BF_MASK (0xFFFFFFFF << RTC_BKP22_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP23 register  ********/
#define RTC_BKP23_BF_SHIFT (0)
#define RTC_BKP23_BF_MASK (0xFFFFFFFF << RTC_BKP23_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP24 register  ********/
#define RTC_BKP24_BF_SHIFT (0)
#define RTC_BKP24_BF_MASK (0xFFFFFFFF << RTC_BKP24_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP25 register  ********/
#define RTC_BKP25_BF_SHIFT (0)
#define RTC_BKP25_BF_MASK (0xFFFFFFFF << RTC_BKP25_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP26 register  ********/
#define RTC_BKP26_BF_SHIFT (0)
#define RTC_BKP26_BF_MASK (0xFFFFFFFF << RTC_BKP26_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP27 register  ********/
#define RTC_BKP27_BF_SHIFT (0)
#define RTC_BKP27_BF_MASK (0xFFFFFFFF << RTC_BKP27_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP28 register  ********/
#define RTC_BKP28_BF_SHIFT (0)
#define RTC_BKP28_BF_MASK (0xFFFFFFFF << RTC_BKP28_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP29 register  ********/
#define RTC_BKP29_BF_SHIFT (0)
#define RTC_BKP29_BF_MASK (0xFFFFFFFF << RTC_BKP29_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP30 register  ********/
#define RTC_BKP30_BF_SHIFT (0)
#define RTC_BKP30_BF_MASK (0xFFFFFFFF << RTC_BKP30_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP31 register  ********/
#define RTC_BKP31_BF_SHIFT (0)
#define RTC_BKP31_BF_MASK (0xFFFFFFFF << RTC_BKP31_BF_SHIFT) /* BF */

/******** Bit definition for RTC_BKP32 register  ********/
#define RTC_BKP32_BF_SHIFT (0)
#define RTC_BKP32_BF_MASK (0xFFFFFFFF << RTC_BKP32_BF_SHIFT) /* BF */

/******** Bit definition for RTC_TMPCFG register  ********/
#define RTC_TMPCFG_TPINTEN (1 << 2) /* TPINTEN */
#define RTC_TMPCFG_TPTS (1 << 7) /* TPTS */
#define RTC_TMPCFG_TPFREQ_SHIFT (8)
#define RTC_TMPCFG_TPFREQ_MASK (0x7 << RTC_TMPCFG_TPFREQ_SHIFT) /* TPFREQ */
#define RTC_TMPCFG_TPFLT_SHIFT (11)
#define RTC_TMPCFG_TPFLT_MASK (0x3 << RTC_TMPCFG_TPFLT_SHIFT) /* TPFLT */
#define RTC_TMPCFG_TPPRCH_SHIFT (13)
#define RTC_TMPCFG_TPPRCH_MASK (0x3 << RTC_TMPCFG_TPPRCH_SHIFT) /* TPPRCH */
#define RTC_TMPCFG_TPPUDIS (1 << 15) /* TPPUDIS */

/******** Bit definition for RTC_TMPCTRL1 register  ********/
#define RTC_TMPCTRL1_TPEN (1 << 0) /* TPEN */
#define RTC_TMPCTRL1_TPTRG (1 << 1) /* TPTRG */
#define RTC_TMPCTRL1_TPINTEN (1 << 2) /* TPINTEN */
#define RTC_TMPCTRL1_TPNOE (1 << 3) /* TPNOE */
#define RTC_TMPCTRL1_TPMF (1 << 4) /* TPMF */

/******** Bit definition for RTC_TMPCTRL2 register  ********/
#define RTC_TMPCTRL2_TPEN (1 << 0) /* TPEN */
#define RTC_TMPCTRL2_TPTRG (1 << 1) /* TPTRG */
#define RTC_TMPCTRL2_TPINTEN (1 << 2) /* TPINTEN */
#define RTC_TMPCTRL2_TPNOE (1 << 3) /* TPNOE */
#define RTC_TMPCTRL2_TPMF (1 << 4) /* TPMF */

/******** Bit definition for RTC_TMPCTRL3 register  ********/
#define RTC_TMPCTRL3_TPEN (1 << 0) /* TPEN */
#define RTC_TMPCTRL3_TPTRG (1 << 1) /* TPTRG */
#define RTC_TMPCTRL3_TPINTEN (1 << 2) /* TPINTEN */
#define RTC_TMPCTRL3_TPNOE (1 << 3) /* TPNOE */
#define RTC_TMPCTRL3_TPMF (1 << 4) /* TPMF */

/******** Bit definition for RTC_TMPCTRL4 register  ********/
#define RTC_TMPCTRL4_TPEN (1 << 0) /* TPEN */
#define RTC_TMPCTRL4_TPTRG (1 << 1) /* TPTRG */
#define RTC_TMPCTRL4_TPINTEN (1 << 2) /* TPINTEN */
#define RTC_TMPCTRL4_TPNOE (1 << 3) /* TPNOE */
#define RTC_TMPCTRL4_TPMF (1 << 4) /* TPMF */

/******** Bit definition for RTC_TMPCTRL5 register  ********/
#define RTC_TMPCTRL5_TPEN (1 << 0) /* TPEN */
#define RTC_TMPCTRL5_TPTRG (1 << 1) /* TPTRG */
#define RTC_TMPCTRL5_TPINTEN (1 << 2) /* TPINTEN */
#define RTC_TMPCTRL5_TPNOE (1 << 3) /* TPNOE */
#define RTC_TMPCTRL5_TPMF (1 << 4) /* TPMF */

/******** Bit definition for RTC_TMPCTRL6 register  ********/
#define RTC_TMPCTRL6_TPEN (1 << 0) /* TPEN */
#define RTC_TMPCTRL6_TPTRG (1 << 1) /* TPTRG */
#define RTC_TMPCTRL6_TPINTEN (1 << 2) /* TPINTEN */
#define RTC_TMPCTRL6_TPNOE (1 << 3) /* TPNOE */
#define RTC_TMPCTRL6_TPMF (1 << 4) /* TPMF */

/******** Bit definition for RTC_TMPCTRL7 register  ********/
#define RTC_TMPCTRL7_TPEN (1 << 0) /* TPEN */
#define RTC_TMPCTRL7_TPTRG (1 << 1) /* TPTRG */
#define RTC_TMPCTRL7_TPINTEN (1 << 2) /* TPINTEN */
#define RTC_TMPCTRL7_TPNOE (1 << 3) /* TPNOE */
#define RTC_TMPCTRL7_TPMF (1 << 4) /* TPMF */

/******** Bit definition for RTC_TMPCTRL8 register  ********/
#define RTC_TMPCTRL8_TPEN (1 << 0) /* TPEN */
#define RTC_TMPCTRL8_TPTRG (1 << 1) /* TPTRG */
#define RTC_TMPCTRL8_TPINTEN (1 << 2) /* TPINTEN */
#define RTC_TMPCTRL8_TPNOE (1 << 3) /* TPNOE */
#define RTC_TMPCTRL8_TPMF (1 << 4) /* TPMF */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_RTC_H */
