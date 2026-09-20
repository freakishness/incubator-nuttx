/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_iwdg.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_IWDG_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_IWDG_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_IWDG_KEY_OFFSET 0x0 /* IWDG_KEY */
#define N32_IWDG_STS_OFFSET 0x4 /* IWDG_STS */
#define N32_IWDG_PREDIV_OFFSET 0x8 /* IWDG_PREDIV */
#define N32_IWDG_RELV_OFFSET 0xC /* IWDG_RELV */

#define N32_IWDG1_KEY (N32_IWDG1_BASE + N32_IWDG_KEY_OFFSET)
#define N32_IWDG1_STS (N32_IWDG1_BASE + N32_IWDG_STS_OFFSET)
#define N32_IWDG1_PREDIV (N32_IWDG1_BASE + N32_IWDG_PREDIV_OFFSET)
#define N32_IWDG1_RELV (N32_IWDG1_BASE + N32_IWDG_RELV_OFFSET)

#define N32_IWDG2_KEY (N32_IWDG2_BASE + N32_IWDG_KEY_OFFSET)
#define N32_IWDG2_STS (N32_IWDG2_BASE + N32_IWDG_STS_OFFSET)
#define N32_IWDG2_PREDIV (N32_IWDG2_BASE + N32_IWDG_PREDIV_OFFSET)
#define N32_IWDG2_RELV (N32_IWDG2_BASE + N32_IWDG_RELV_OFFSET)

/******** Bit definition for IWDG_KEY register  ********/
#define IWDG_KEY_KEYV_SHIFT (0)
#define IWDG_KEY_KEYV_MASK (0xFFFF << IWDG_KEY_KEYV_SHIFT) /* KEYV */

/******** Bit definition for IWDG_STS register  ********/
#define IWDG_STS_PVU (1 << 0) /* PVU */
#define IWDG_STS_CRVU (1 << 1) /* CRVU */
#define IWDG_STS_FRZF (1 << 2) /* FRZF */

/******** Bit definition for IWDG_PREDIV register  ********/
#define IWDG_PREDIV_PD_SHIFT (0)
#define IWDG_PREDIV_PD_MASK (0x7 << IWDG_PREDIV_PD_SHIFT) /* PD */

/******** Bit definition for IWDG_RELV register  ********/
#define IWDG_RELV_REL_SHIFT (0)
#define IWDG_RELV_REL_MASK (0xFFF << IWDG_RELV_REL_SHIFT) /* REL */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_IWDG_H */
