/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_shrtim2.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SHRTIM2_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SHRTIM2_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_SHRTIM2_SHRTIM_MCTRL_OFFSET             0x0     /* SHRTIM
                                                             *  configuration
                                                             * register for
                                                             * master timer */
#define N32_SHRTIM2_SHRTIM_MINTSTS_OFFSET           0x4     /* SHRTIM status
                                                             * register for
                                                             * master timer
                                                             * interrupt */
#define N32_SHRTIM2_SHRTIM_MINTCLR_OFFSET           0x8     /* SHRTIM master
                                                             * timer interrupt
                                                             * clear register
                                                             */
#define N32_SHRTIM2_SHRTIM_MIDEN_OFFSET             0xC     /* SHRTIM master
                                                             * timer interrupt
                                                             * and DMA request
                                                             * enable register
                                                             */
#define N32_SHRTIM2_SHRTIM_MCNT_OFFSET              0x10    /* SHRTIM master
                                                             * timer counter
                                                             * register */
#define N32_SHRTIM2_SHRTIM_MPRD_OFFSET              0x14    /* SHRTIM master
                                                             * timer period
                                                             * register */
#define N32_SHRTIM2_SHRTIM_MREPT_OFFSET             0x18    /* SHRTIM master
                                                             * timer
                                                             * repetition
                                                             * register */
#define N32_SHRTIM2_SHRTIM_MCMP1DAT_OFFSET          0x1C    /* SHRTIM master
                                                             * timer compare 1
                                                             * register */
#define N32_SHRTIM2_SHRTIM_MCMP2DAT_OFFSET          0x24    /* SHRTIM master
                                                             * timer compare 2
                                                             * register */
#define N32_SHRTIM2_SHRTIM_MCMP3DAT_OFFSET          0x28    /* SHRTIM master
                                                             * timer compare 3
                                                             * register */
#define N32_SHRTIM2_SHRTIM_MCMP4DAT_OFFSET          0x2C    /* SHRTIM master
                                                             * timer compare 4
                                                             * register */
#define N32_SHRTIM2_SHRTIM_SYNCOUT_OFFSET           0x30    /* SYNOUT
                                                             * configure
                                                             * register */
#define N32_SHRTIM2_SHRTIM_FRZDIS_OFFSET            0x34    /* Timer behavior
                                                             * during CPU
                                                             * freeze */

#define N32_SHRTIM2_Master_SHRTIM_MCTRL             (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCTRL_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_MINTSTS           (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTSTS_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_MINTCLR           (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTCLR_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_MIDEN             (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MIDEN_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_MCNT              (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCNT_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_MPRD              (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MPRD_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_MREPT             (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MREPT_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_MCMP1DAT          (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP1DAT_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_MCMP2DAT          (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP2DAT_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_MCMP3DAT          (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP3DAT_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_MCMP4DAT          (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP4DAT_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_SYNCOUT           (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_SYNCOUT_OFFSET)
#define N32_SHRTIM2_Master_SHRTIM_FRZDIS            (N32_SHRTIM2_Master_BASE + \
                                                     N32_SHRTIM2_SHRTIM_FRZDIS_OFFSET)

#define N32_SHRTIM2_TIMA_SHRTIM_MCTRL               (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCTRL_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_MINTSTS             (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTSTS_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_MINTCLR             (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTCLR_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_MIDEN               (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MIDEN_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_MCNT                (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCNT_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_MPRD                (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MPRD_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_MREPT               (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MREPT_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_MCMP1DAT            (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP1DAT_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_MCMP2DAT            (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP2DAT_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_MCMP3DAT            (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP3DAT_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_MCMP4DAT            (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP4DAT_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_SYNCOUT             (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_SYNCOUT_OFFSET)
#define N32_SHRTIM2_TIMA_SHRTIM_FRZDIS              (N32_SHRTIM2_TIMA_BASE + \
                                                     N32_SHRTIM2_SHRTIM_FRZDIS_OFFSET)

#define N32_SHRTIM2_TIMB_SHRTIM_MCTRL               (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCTRL_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_MINTSTS             (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTSTS_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_MINTCLR             (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTCLR_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_MIDEN               (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MIDEN_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_MCNT                (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCNT_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_MPRD                (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MPRD_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_MREPT               (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MREPT_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_MCMP1DAT            (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP1DAT_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_MCMP2DAT            (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP2DAT_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_MCMP3DAT            (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP3DAT_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_MCMP4DAT            (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP4DAT_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_SYNCOUT             (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_SYNCOUT_OFFSET)
#define N32_SHRTIM2_TIMB_SHRTIM_FRZDIS              (N32_SHRTIM2_TIMB_BASE + \
                                                     N32_SHRTIM2_SHRTIM_FRZDIS_OFFSET)

#define N32_SHRTIM2_TIMC_SHRTIM_MCTRL               (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCTRL_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_MINTSTS             (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTSTS_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_MINTCLR             (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTCLR_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_MIDEN               (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MIDEN_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_MCNT                (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCNT_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_MPRD                (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MPRD_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_MREPT               (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MREPT_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_MCMP1DAT            (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP1DAT_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_MCMP2DAT            (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP2DAT_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_MCMP3DAT            (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP3DAT_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_MCMP4DAT            (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP4DAT_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_SYNCOUT             (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_SYNCOUT_OFFSET)
#define N32_SHRTIM2_TIMC_SHRTIM_FRZDIS              (N32_SHRTIM2_TIMC_BASE + \
                                                     N32_SHRTIM2_SHRTIM_FRZDIS_OFFSET)

#define N32_SHRTIM2_TIMD_SHRTIM_MCTRL               (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCTRL_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_MINTSTS             (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTSTS_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_MINTCLR             (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTCLR_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_MIDEN               (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MIDEN_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_MCNT                (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCNT_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_MPRD                (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MPRD_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_MREPT               (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MREPT_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_MCMP1DAT            (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP1DAT_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_MCMP2DAT            (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP2DAT_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_MCMP3DAT            (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP3DAT_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_MCMP4DAT            (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP4DAT_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_SYNCOUT             (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_SYNCOUT_OFFSET)
#define N32_SHRTIM2_TIMD_SHRTIM_FRZDIS              (N32_SHRTIM2_TIMD_BASE + \
                                                     N32_SHRTIM2_SHRTIM_FRZDIS_OFFSET)

#define N32_SHRTIM2_TIME_SHRTIM_MCTRL               (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCTRL_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_MINTSTS             (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTSTS_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_MINTCLR             (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTCLR_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_MIDEN               (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MIDEN_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_MCNT                (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCNT_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_MPRD                (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MPRD_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_MREPT               (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MREPT_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_MCMP1DAT            (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP1DAT_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_MCMP2DAT            (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP2DAT_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_MCMP3DAT            (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP3DAT_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_MCMP4DAT            (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP4DAT_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_SYNCOUT             (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_SYNCOUT_OFFSET)
#define N32_SHRTIM2_TIME_SHRTIM_FRZDIS              (N32_SHRTIM2_TIME_BASE + \
                                                     N32_SHRTIM2_SHRTIM_FRZDIS_OFFSET)

#define N32_SHRTIM2_TIMF_SHRTIM_MCTRL               (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCTRL_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_MINTSTS             (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTSTS_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_MINTCLR             (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTCLR_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_MIDEN               (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MIDEN_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_MCNT                (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCNT_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_MPRD                (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MPRD_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_MREPT               (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MREPT_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_MCMP1DAT            (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP1DAT_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_MCMP2DAT            (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP2DAT_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_MCMP3DAT            (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP3DAT_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_MCMP4DAT            (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP4DAT_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_SYNCOUT             (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_SYNCOUT_OFFSET)
#define N32_SHRTIM2_TIMF_SHRTIM_FRZDIS              (N32_SHRTIM2_TIMF_BASE + \
                                                     N32_SHRTIM2_SHRTIM_FRZDIS_OFFSET)

#define N32_SHRTIM2_Common_SHRTIM_MCTRL             (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCTRL_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_MINTSTS           (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTSTS_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_MINTCLR           (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MINTCLR_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_MIDEN             (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MIDEN_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_MCNT              (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCNT_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_MPRD              (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MPRD_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_MREPT             (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MREPT_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_MCMP1DAT          (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP1DAT_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_MCMP2DAT          (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP2DAT_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_MCMP3DAT          (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP3DAT_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_MCMP4DAT          (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_MCMP4DAT_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_SYNCOUT           (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_SYNCOUT_OFFSET)
#define N32_SHRTIM2_Common_SHRTIM_FRZDIS            (N32_SHRTIM2_Common_BASE + \
                                                     N32_SHRTIM2_SHRTIM_FRZDIS_OFFSET)

/******** Bit definition for SHRTIM_MCTRL register  ********/
#define SHRTIM2_SHRTIM_MCTRL_BRSTDMA_SHIFT          (30)
#define SHRTIM2_SHRTIM_MCTRL_BRSTDMA_MASK           (0x3 << \
  SHRTIM2_SHRTIM_MCTRL_BRSTDMA_SHIFT)                           /* BRSTDMA */
#define SHRTIM2_SHRTIM_MCTRL_MREPTUEN               (1 << 29)   /* MREPTUEN */
#define SHRTIM2_SHRTIM_MCTRL_PLEN                   (1 << 27)   /* PLEN */
#define SHRTIM2_SHRTIM_MCTRL_DACTRIG_SHIFT          (25)
#define SHRTIM2_SHRTIM_MCTRL_DACTRIG_MASK           (0x3 << \
  SHRTIM2_SHRTIM_MCTRL_DACTRIG_SHIFT)                           /* DACTRIG */
#define SHRTIM2_SHRTIM_MCTRL_TFCNTEN                (1 << 22)   /* TFCNTEN */
#define SHRTIM2_SHRTIM_MCTRL_TECNTEN                (1 << 21)   /* TECNTEN */
#define SHRTIM2_SHRTIM_MCTRL_TDCNTEN                (1 << 20)   /* TDCNTEN */
#define SHRTIM2_SHRTIM_MCTRL_TCCNTEN                (1 << 19)   /* TCCNTEN */
#define SHRTIM2_SHRTIM_MCTRL_TBCNTEN                (1 << 18)   /* TBCNTEN */
#define SHRTIM2_SHRTIM_MCTRL_TACNTEN                (1 << 17)   /* TACNTEN */
#define SHRTIM2_SHRTIM_MCTRL_MCNTEN                 (1 << 16)   /* MCNTEN */
#define SHRTIM2_SHRTIM_MCTRL_SYNCOSRC_SHIFT         (14)
#define SHRTIM2_SHRTIM_MCTRL_SYNCOSRC_MASK          (0x3 << \
  SHRTIM2_SHRTIM_MCTRL_SYNCOSRC_SHIFT)                          /* SYNCOSRC */
#define SHRTIM2_SHRTIM_MCTRL_SYNCSTRT               (1 << 13)   /* SYNCSTRT */
#define SHRTIM2_SHRTIM_MCTRL_SYNCRST                (1 << 12)   /* SYNCRST */
#define SHRTIM2_SHRTIM_MCTRL_SYNCIN_SHIFT           (8)
#define SHRTIM2_SHRTIM_MCTRL_SYNCIN_MASK            (0x7 << \
  SHRTIM2_SHRTIM_MCTRL_SYNCIN_SHIFT)                                                /*
                                                                                     * SYNCIN
                                                                                     */
#define SHRTIM2_SHRTIM_MCTRL_ILV_SHIFT              (6)
#define SHRTIM2_SHRTIM_MCTRL_ILV_MASK               (0x3 << \
  SHRTIM2_SHRTIM_MCTRL_ILV_SHIFT)                               /* ILV */
#define SHRTIM2_SHRTIM_MCTRL_HLF                    (1 << 5)    /* HLF */
#define SHRTIM2_SHRTIM_MCTRL_RTG                    (1 << 4)    /* RTG */
#define SHRTIM2_SHRTIM_MCTRL_CONT                   (1 << 3)    /* CONT */
#define SHRTIM2_SHRTIM_MCTRL_CKPSC_SHIFT            (0)
#define SHRTIM2_SHRTIM_MCTRL_CKPSC_MASK             (0x7 << \
  SHRTIM2_SHRTIM_MCTRL_CKPSC_SHIFT)                                               /*
                                                                                   * CKPSC
                                                                                   */

/******** Bit definition for SHRTIM_MINTSTS register  ********/
#define SHRTIM2_SHRTIM_MINTSTS_MUPDITF              (1 << 6)    /* MUPDITF */
#define SHRTIM2_SHRTIM_MINTSTS_SYNCINITF            (1 << 5)    /* SYNCINITF
                                                                 */
#define SHRTIM2_SHRTIM_MINTSTS_MREPTITF             (1 << 4)    /* MREPTITF */
#define SHRTIM2_SHRTIM_MINTSTS_MCMP4ITF             (1 << 3)    /* MCMP4ITF */
#define SHRTIM2_SHRTIM_MINTSTS_MCMP3ITF             (1 << 2)    /* MCMP3ITF */
#define SHRTIM2_SHRTIM_MINTSTS_MCMP2ITF             (1 << 1)    /* MCMP2ITF */
#define SHRTIM2_SHRTIM_MINTSTS_MCMP1ITF             (1 << 0)    /* MCMP1ITF */

/******** Bit definition for SHRTIM_MINTCLR register  ********/
#define SHRTIM2_SHRTIM_MINTCLR_MUPDIC               (1 << 6)    /* MUPDIC */
#define SHRTIM2_SHRTIM_MINTCLR_SYNCINIC             (1 << 5)    /* SYNCINIC */
#define SHRTIM2_SHRTIM_MINTCLR_MREPTIC              (1 << 4)    /* MREPTIC */
#define SHRTIM2_SHRTIM_MINTCLR_MCMP4IC              (1 << 3)    /* MCMP4IC */
#define SHRTIM2_SHRTIM_MINTCLR_MCMP3IC              (1 << 2)    /* MCMP3IC */
#define SHRTIM2_SHRTIM_MINTCLR_MCMP2IC              (1 << 1)    /* MCMP2IC */
#define SHRTIM2_SHRTIM_MINTCLR_MCMP1IC              (1 << 0)    /* MCMP1IC */

/******** Bit definition for SHRTIM_MIDEN register  ********/
#define SHRTIM2_SHRTIM_MIDEN_MUPDDEN                (1 << 22)   /* MUPDDEN */
#define SHRTIM2_SHRTIM_MIDEN_SYNCINDEN              (1 << 21)   /* SYNCINDEN
                                                                 */
#define SHRTIM2_SHRTIM_MIDEN_MREPTDEN               (1 << 20)   /* MREPTDEN */
#define SHRTIM2_SHRTIM_MIDEN_MCMP4DEN               (1 << 19)   /* MCMP4DEN */
#define SHRTIM2_SHRTIM_MIDEN_MCMP3DEN               (1 << 18)   /* MCMP3DEN */
#define SHRTIM2_SHRTIM_MIDEN_MCMP2DEN               (1 << 17)   /* MCMP2DEN */
#define SHRTIM2_SHRTIM_MIDEN_MCMP1DEN               (1 << 16)   /* MCMP1DEN */
#define SHRTIM2_SHRTIM_MIDEN_MUPDIEN                (1 << 6)    /* MUPDIEN */
#define SHRTIM2_SHRTIM_MIDEN_SYNCINIEN              (1 << 5)    /* SYNCINIEN
                                                                 */
#define SHRTIM2_SHRTIM_MIDEN_MREPTIEN               (1 << 4)    /* MREPTIEN */
#define SHRTIM2_SHRTIM_MIDEN_MCMP4IEN               (1 << 3)    /* MCMP4IEN */
#define SHRTIM2_SHRTIM_MIDEN_MCMP3IEN               (1 << 2)    /* MCMP3IEN */
#define SHRTIM2_SHRTIM_MIDEN_MCMP2IEN               (1 << 1)    /* MCMP2IEN */
#define SHRTIM2_SHRTIM_MIDEN_MCMP1IEN               (1 << 0)    /* MCMP1IEN */

/******** Bit definition for SHRTIM_MCNT register  ********/
#define SHRTIM2_SHRTIM_MCNT_MCOUNT_SHIFT            (0)
#define SHRTIM2_SHRTIM_MCNT_MCOUNT_MASK             (0xFFFF << \
  SHRTIM2_SHRTIM_MCNT_MCOUNT_SHIFT)                                                  /*
                                                                                      * MCOUNT
                                                                                      */

/******** Bit definition for SHRTIM_MPRD register  ********/
#define SHRTIM2_SHRTIM_MPRD_MPRD_SHIFT              (0)
#define SHRTIM2_SHRTIM_MPRD_MPRD_MASK               (0xFFFF << \
  SHRTIM2_SHRTIM_MPRD_MPRD_SHIFT)                                                /*
                                                                                  * MPRD
                                                                                  */

/******** Bit definition for SHRTIM_MREPT register  ********/
#define SHRTIM2_SHRTIM_MREPT_MREPT_SHIFT            (0)
#define SHRTIM2_SHRTIM_MREPT_MREPT_MASK             (0xFF << \
  SHRTIM2_SHRTIM_MREPT_MREPT_SHIFT)                                                /*
                                                                                    * MREPT
                                                                                    */

/******** Bit definition for SHRTIM_MCMP1DAT register  ********/
#define SHRTIM2_SHRTIM_MCMP1DAT_MCMP1DAT_SHIFT      (0)
#define SHRTIM2_SHRTIM_MCMP1DAT_MCMP1DAT_MASK       (0xFFFF << \
  SHRTIM2_SHRTIM_MCMP1DAT_MCMP1DAT_SHIFT)                                                        /*
                                                                                                  * MCMP1DAT
                                                                                                  */

/******** Bit definition for SHRTIM_MCMP2DAT register  ********/
#define SHRTIM2_SHRTIM_MCMP2DAT_MCMP2DAT_SHIFT      (0)
#define SHRTIM2_SHRTIM_MCMP2DAT_MCMP2DAT_MASK       (0xFFFF << \
  SHRTIM2_SHRTIM_MCMP2DAT_MCMP2DAT_SHIFT)                                                        /*
                                                                                                  * MCMP2DAT
                                                                                                  */

/******** Bit definition for SHRTIM_MCMP3DAT register  ********/
#define SHRTIM2_SHRTIM_MCMP3DAT_MCMP3DAT_SHIFT      (0)
#define SHRTIM2_SHRTIM_MCMP3DAT_MCMP3DAT_MASK       (0xFFFF << \
  SHRTIM2_SHRTIM_MCMP3DAT_MCMP3DAT_SHIFT)                                                        /*
                                                                                                  * MCMP3DAT
                                                                                                  */

/******** Bit definition for SHRTIM_MCMP4DAT register  ********/
#define SHRTIM2_SHRTIM_MCMP4DAT_MCMP4DAT_SHIFT      (0)
#define SHRTIM2_SHRTIM_MCMP4DAT_MCMP4DAT_MASK       (0xFFFF << \
  SHRTIM2_SHRTIM_MCMP4DAT_MCMP4DAT_SHIFT)                                                        /*
                                                                                                  * MCMP4DAT
                                                                                                  */

/******** Bit definition for SHRTIM_SYNCOUT register  ********/
#define SHRTIM2_SHRTIM_SYNCOUT_SYNCOUTPUS_SHIFT     (0)
#define SHRTIM2_SHRTIM_SYNCOUT_SYNCOUTPUS_MASK      (0x3 << \
  SHRTIM2_SHRTIM_SYNCOUT_SYNCOUTPUS_SHIFT)                                                      /*
                                                                                                 * SYNCOUTPUS
                                                                                                 */

/******** Bit definition for SHRTIM_FRZDIS register  ********/
#define SHRTIM2_SHRTIM_FRZDIS_ALLTIMDBGEN           (1 << 7)    /* ALLTIMDBGEN
                                                                 */
#define SHRTIM2_SHRTIM_FRZDIS_TFDBGEN               (1 << 6)    /* TFDBGEN */
#define SHRTIM2_SHRTIM_FRZDIS_TEDBGEN               (1 << 5)    /* TEDBGEN */
#define SHRTIM2_SHRTIM_FRZDIS_TDDBGEN               (1 << 4)    /* TDDBGEN */
#define SHRTIM2_SHRTIM_FRZDIS_TCDBGEN               (1 << 3)    /* TCDBGEN */
#define SHRTIM2_SHRTIM_FRZDIS_TBDBGEN               (1 << 2)    /* TBDBGEN */
#define SHRTIM2_SHRTIM_FRZDIS_TADBGEN               (1 << 1)    /* TADBGEN */
#define SHRTIM2_SHRTIM_FRZDIS_MDBGEN                (1 << 0)    /* MDBGEN */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SHRTIM2_H */
