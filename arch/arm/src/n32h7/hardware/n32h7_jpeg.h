/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_jpeg.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_JPEG_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_JPEG_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_JPEG_CTRL_OFFSET 0x0 /* JPEG mode CTRL */

#define N32_JPEGCTRL_CTRL (N32_JPEGCTRL_BASE + N32_JPEG_CTRL_OFFSET)

#define N32_H2P_CTRL (N32_H2P_BASE + N32_JPEG_CTRL_OFFSET)

#define N32_P2H_CTRL (N32_P2H_BASE + N32_JPEG_CTRL_OFFSET)

#define N32_BRC_CTRL (N32_BRC_BASE + N32_JPEG_CTRL_OFFSET)

#define N32_RBC_CTRL (N32_RBC_BASE + N32_JPEG_CTRL_OFFSET)

#define N32_ENC_CTRL (N32_ENC_BASE + N32_JPEG_CTRL_OFFSET)

#define N32_DEC_CTRL (N32_DEC_BASE + N32_JPEG_CTRL_OFFSET)

/******** Bit definition for JPEG_CTRL register  ********/
#define JPEG_CTRL_SWAP (1 << 1) /* SWAP */
#define JPEG_CTRL_TYPE (1 << 0) /* TYPE */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_JPEG_H */
