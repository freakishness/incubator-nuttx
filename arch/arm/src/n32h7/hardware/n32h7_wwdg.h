/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_wwdg.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_WWDG_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_WWDG_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_WWDG_CFG_OFFSET 0x0 /* WWDG_CFG */
#define N32_WWDG_CTRL_OFFSET 0x4 /* WWDG_CTRL */
#define N32_WWDG_STS_OFFSET 0x8 /* WWDG_STS */

#define N32_WWDG1_CFG (N32_WWDG1_BASE + N32_WWDG_CFG_OFFSET)
#define N32_WWDG1_CTRL (N32_WWDG1_BASE + N32_WWDG_CTRL_OFFSET)
#define N32_WWDG1_STS (N32_WWDG1_BASE + N32_WWDG_STS_OFFSET)

#define N32_WWDG2_CFG (N32_WWDG2_BASE + N32_WWDG_CFG_OFFSET)
#define N32_WWDG2_CTRL (N32_WWDG2_BASE + N32_WWDG_CTRL_OFFSET)
#define N32_WWDG2_STS (N32_WWDG2_BASE + N32_WWDG_STS_OFFSET)

/******** Bit definition for WWDG_CFG register  ********/
#define WWDG_CFG_W_SHIFT (0)
#define WWDG_CFG_W_MASK (0x3FFF << WWDG_CFG_W_SHIFT) /* W */
#define WWDG_CFG_TIMERB_SHIFT (14)
#define WWDG_CFG_TIMERB_MASK (0x3 << WWDG_CFG_TIMERB_SHIFT) /* TIMERB */
#define WWDG_CFG_EWINT (1 << 16) /* EWINT */

/******** Bit definition for WWDG_CTRL register  ********/
#define WWDG_CTRL_T_SHIFT (0)
#define WWDG_CTRL_T_MASK (0x3FFF << WWDG_CTRL_T_SHIFT) /* T */
#define WWDG_CTRL_ACTB (1 << 14) /* ACTB */

/******** Bit definition for WWDG_STS register  ********/
#define WWDG_STS_EWINTF (1 << 0) /* EWINTF */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_WWDG_H */
