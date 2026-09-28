/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_tcmc.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_TCMC_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_TCMC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_TCMC_CTR_OFFSET     0x0 /* TCMC control register */

#define N32_TCMC_CTR            (N32_TCMC_BASE + N32_TCMC_CTR_OFFSET)

/******** Bit definition for TCMC_CTR register  ********/
#define TCMC_CTR_ARAM3S_SHIFT   (28)
#define TCMC_CTR_ARAM3S_MASK    (0xF << TCMC_CTR_ARAM3S_SHIFT)  /* ARAM3S */
#define TCMC_CTR_ARAM2S_SHIFT   (24)
#define TCMC_CTR_ARAM2S_MASK    (0xF << TCMC_CTR_ARAM2S_SHIFT)  /* ARAM2S */
#define TCMC_CTR_DTCMEWEN       (1 << 23)                       /* DTCMEWEN */
#define TCMC_CTR_DTCMS_SHIFT    (16)
#define TCMC_CTR_DTCMS_MASK     (0xF << TCMC_CTR_DTCMS_SHIFT)   /* DTCMS */
#define TCMC_CTR_ITCMEWEN       (1 << 15)                       /* ITCMEWEN */
#define TCMC_CTR_ITCMS_SHIFT    (8)
#define TCMC_CTR_ITCMS_MASK     (0xF << TCMC_CTR_ITCMS_SHIFT)   /* ITCMS */
#define TCMC_CTR_CSA            (1 << 5)                        /* CSA */
#define TCMC_CTR_ECCINJP        (1 << 1)                        /* ECCINJP */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_TCMC_H */
