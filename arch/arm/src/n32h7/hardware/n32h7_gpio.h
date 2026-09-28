/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_gpio.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_GPIO_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_GPIO_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_GPIO_GPIOx_PMODE_OFFSET     0x0     /* GPIO mode description
                                                 * register */
#define N32_GPIO_GPIOx_POTYPE_OFFSET    0x4     /* GPIO type defenition */
#define N32_GPIO_GPIOx_SR_OFFSET        0x8     /* Portx slew rate config
                                                 * register */
#define N32_GPIO_GPIOx_PUPD_OFFSET      0xC     /* GPIO pull up pull down
                                                 * description register */
#define N32_GPIO_GPIOx_PID_OFFSET       0x10    /* GPIO input data register */
#define N32_GPIO_GPIOx_POD_OFFSET       0x14    /* GPIO output data register
                                                 */
#define N32_GPIO_GPIOx_PBSC_OFFSET      0x18    /* Portx bit set/reset
                                                 * register */
#define N32_GPIO_GPIOx_PLCK_OFFSET      0x1C    /* Portx configuration lock
                                                 * register */
#define N32_GPIO_GPIOx_AFRL_OFFSET      0x20    /* Portx Alternate function
                                                 * low register */
#define N32_GPIO_GPIOx_AFRH_OFFSET      0x24    /* Portx Alternate function
                                                 * High register */
#define N32_GPIO_GPIOx_PBC_OFFSET       0x28    /* Portx bit reset register */
#define N32_GPIO_GPIOx_DS_OFFSET        0x2C    /* Portx driver strength
                                                 * config register */

#define N32_GPIOA_GPIOx_PMODE           (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_PMODE_OFFSET)
#define N32_GPIOA_GPIOx_POTYPE          (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_POTYPE_OFFSET)
#define N32_GPIOA_GPIOx_SR              (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_SR_OFFSET)
#define N32_GPIOA_GPIOx_PUPD            (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_PUPD_OFFSET)
#define N32_GPIOA_GPIOx_PID             (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_PID_OFFSET)
#define N32_GPIOA_GPIOx_POD             (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_POD_OFFSET)
#define N32_GPIOA_GPIOx_PBSC            (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_PBSC_OFFSET)
#define N32_GPIOA_GPIOx_PLCK            (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_PLCK_OFFSET)
#define N32_GPIOA_GPIOx_AFRL            (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_AFRL_OFFSET)
#define N32_GPIOA_GPIOx_AFRH            (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_AFRH_OFFSET)
#define N32_GPIOA_GPIOx_PBC             (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_PBC_OFFSET)
#define N32_GPIOA_GPIOx_DS              (N32_GPIOA_BASE + \
                                         N32_GPIO_GPIOx_DS_OFFSET)

#define N32_GPIOB_GPIOx_PMODE           (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_PMODE_OFFSET)
#define N32_GPIOB_GPIOx_POTYPE          (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_POTYPE_OFFSET)
#define N32_GPIOB_GPIOx_SR              (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_SR_OFFSET)
#define N32_GPIOB_GPIOx_PUPD            (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_PUPD_OFFSET)
#define N32_GPIOB_GPIOx_PID             (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_PID_OFFSET)
#define N32_GPIOB_GPIOx_POD             (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_POD_OFFSET)
#define N32_GPIOB_GPIOx_PBSC            (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_PBSC_OFFSET)
#define N32_GPIOB_GPIOx_PLCK            (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_PLCK_OFFSET)
#define N32_GPIOB_GPIOx_AFRL            (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_AFRL_OFFSET)
#define N32_GPIOB_GPIOx_AFRH            (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_AFRH_OFFSET)
#define N32_GPIOB_GPIOx_PBC             (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_PBC_OFFSET)
#define N32_GPIOB_GPIOx_DS              (N32_GPIOB_BASE + \
                                         N32_GPIO_GPIOx_DS_OFFSET)

#define N32_GPIOC_GPIOx_PMODE           (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_PMODE_OFFSET)
#define N32_GPIOC_GPIOx_POTYPE          (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_POTYPE_OFFSET)
#define N32_GPIOC_GPIOx_SR              (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_SR_OFFSET)
#define N32_GPIOC_GPIOx_PUPD            (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_PUPD_OFFSET)
#define N32_GPIOC_GPIOx_PID             (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_PID_OFFSET)
#define N32_GPIOC_GPIOx_POD             (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_POD_OFFSET)
#define N32_GPIOC_GPIOx_PBSC            (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_PBSC_OFFSET)
#define N32_GPIOC_GPIOx_PLCK            (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_PLCK_OFFSET)
#define N32_GPIOC_GPIOx_AFRL            (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_AFRL_OFFSET)
#define N32_GPIOC_GPIOx_AFRH            (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_AFRH_OFFSET)
#define N32_GPIOC_GPIOx_PBC             (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_PBC_OFFSET)
#define N32_GPIOC_GPIOx_DS              (N32_GPIOC_BASE + \
                                         N32_GPIO_GPIOx_DS_OFFSET)

#define N32_GPIOD_GPIOx_PMODE           (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_PMODE_OFFSET)
#define N32_GPIOD_GPIOx_POTYPE          (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_POTYPE_OFFSET)
#define N32_GPIOD_GPIOx_SR              (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_SR_OFFSET)
#define N32_GPIOD_GPIOx_PUPD            (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_PUPD_OFFSET)
#define N32_GPIOD_GPIOx_PID             (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_PID_OFFSET)
#define N32_GPIOD_GPIOx_POD             (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_POD_OFFSET)
#define N32_GPIOD_GPIOx_PBSC            (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_PBSC_OFFSET)
#define N32_GPIOD_GPIOx_PLCK            (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_PLCK_OFFSET)
#define N32_GPIOD_GPIOx_AFRL            (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_AFRL_OFFSET)
#define N32_GPIOD_GPIOx_AFRH            (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_AFRH_OFFSET)
#define N32_GPIOD_GPIOx_PBC             (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_PBC_OFFSET)
#define N32_GPIOD_GPIOx_DS              (N32_GPIOD_BASE + \
                                         N32_GPIO_GPIOx_DS_OFFSET)

#define N32_GPIOE_GPIOx_PMODE           (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_PMODE_OFFSET)
#define N32_GPIOE_GPIOx_POTYPE          (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_POTYPE_OFFSET)
#define N32_GPIOE_GPIOx_SR              (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_SR_OFFSET)
#define N32_GPIOE_GPIOx_PUPD            (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_PUPD_OFFSET)
#define N32_GPIOE_GPIOx_PID             (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_PID_OFFSET)
#define N32_GPIOE_GPIOx_POD             (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_POD_OFFSET)
#define N32_GPIOE_GPIOx_PBSC            (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_PBSC_OFFSET)
#define N32_GPIOE_GPIOx_PLCK            (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_PLCK_OFFSET)
#define N32_GPIOE_GPIOx_AFRL            (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_AFRL_OFFSET)
#define N32_GPIOE_GPIOx_AFRH            (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_AFRH_OFFSET)
#define N32_GPIOE_GPIOx_PBC             (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_PBC_OFFSET)
#define N32_GPIOE_GPIOx_DS              (N32_GPIOE_BASE + \
                                         N32_GPIO_GPIOx_DS_OFFSET)

#define N32_GPIOF_GPIOx_PMODE           (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_PMODE_OFFSET)
#define N32_GPIOF_GPIOx_POTYPE          (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_POTYPE_OFFSET)
#define N32_GPIOF_GPIOx_SR              (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_SR_OFFSET)
#define N32_GPIOF_GPIOx_PUPD            (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_PUPD_OFFSET)
#define N32_GPIOF_GPIOx_PID             (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_PID_OFFSET)
#define N32_GPIOF_GPIOx_POD             (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_POD_OFFSET)
#define N32_GPIOF_GPIOx_PBSC            (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_PBSC_OFFSET)
#define N32_GPIOF_GPIOx_PLCK            (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_PLCK_OFFSET)
#define N32_GPIOF_GPIOx_AFRL            (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_AFRL_OFFSET)
#define N32_GPIOF_GPIOx_AFRH            (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_AFRH_OFFSET)
#define N32_GPIOF_GPIOx_PBC             (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_PBC_OFFSET)
#define N32_GPIOF_GPIOx_DS              (N32_GPIOF_BASE + \
                                         N32_GPIO_GPIOx_DS_OFFSET)

#define N32_GPIOG_GPIOx_PMODE           (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_PMODE_OFFSET)
#define N32_GPIOG_GPIOx_POTYPE          (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_POTYPE_OFFSET)
#define N32_GPIOG_GPIOx_SR              (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_SR_OFFSET)
#define N32_GPIOG_GPIOx_PUPD            (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_PUPD_OFFSET)
#define N32_GPIOG_GPIOx_PID             (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_PID_OFFSET)
#define N32_GPIOG_GPIOx_POD             (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_POD_OFFSET)
#define N32_GPIOG_GPIOx_PBSC            (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_PBSC_OFFSET)
#define N32_GPIOG_GPIOx_PLCK            (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_PLCK_OFFSET)
#define N32_GPIOG_GPIOx_AFRL            (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_AFRL_OFFSET)
#define N32_GPIOG_GPIOx_AFRH            (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_AFRH_OFFSET)
#define N32_GPIOG_GPIOx_PBC             (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_PBC_OFFSET)
#define N32_GPIOG_GPIOx_DS              (N32_GPIOG_BASE + \
                                         N32_GPIO_GPIOx_DS_OFFSET)

#define N32_GPIOH_GPIOx_PMODE           (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_PMODE_OFFSET)
#define N32_GPIOH_GPIOx_POTYPE          (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_POTYPE_OFFSET)
#define N32_GPIOH_GPIOx_SR              (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_SR_OFFSET)
#define N32_GPIOH_GPIOx_PUPD            (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_PUPD_OFFSET)
#define N32_GPIOH_GPIOx_PID             (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_PID_OFFSET)
#define N32_GPIOH_GPIOx_POD             (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_POD_OFFSET)
#define N32_GPIOH_GPIOx_PBSC            (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_PBSC_OFFSET)
#define N32_GPIOH_GPIOx_PLCK            (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_PLCK_OFFSET)
#define N32_GPIOH_GPIOx_AFRL            (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_AFRL_OFFSET)
#define N32_GPIOH_GPIOx_AFRH            (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_AFRH_OFFSET)
#define N32_GPIOH_GPIOx_PBC             (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_PBC_OFFSET)
#define N32_GPIOH_GPIOx_DS              (N32_GPIOH_BASE + \
                                         N32_GPIO_GPIOx_DS_OFFSET)

#define N32_GPIOI_GPIOx_PMODE           (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_PMODE_OFFSET)
#define N32_GPIOI_GPIOx_POTYPE          (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_POTYPE_OFFSET)
#define N32_GPIOI_GPIOx_SR              (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_SR_OFFSET)
#define N32_GPIOI_GPIOx_PUPD            (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_PUPD_OFFSET)
#define N32_GPIOI_GPIOx_PID             (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_PID_OFFSET)
#define N32_GPIOI_GPIOx_POD             (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_POD_OFFSET)
#define N32_GPIOI_GPIOx_PBSC            (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_PBSC_OFFSET)
#define N32_GPIOI_GPIOx_PLCK            (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_PLCK_OFFSET)
#define N32_GPIOI_GPIOx_AFRL            (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_AFRL_OFFSET)
#define N32_GPIOI_GPIOx_AFRH            (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_AFRH_OFFSET)
#define N32_GPIOI_GPIOx_PBC             (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_PBC_OFFSET)
#define N32_GPIOI_GPIOx_DS              (N32_GPIOI_BASE + \
                                         N32_GPIO_GPIOx_DS_OFFSET)

#define N32_GPIOJ_GPIOx_PMODE           (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_PMODE_OFFSET)
#define N32_GPIOJ_GPIOx_POTYPE          (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_POTYPE_OFFSET)
#define N32_GPIOJ_GPIOx_SR              (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_SR_OFFSET)
#define N32_GPIOJ_GPIOx_PUPD            (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_PUPD_OFFSET)
#define N32_GPIOJ_GPIOx_PID             (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_PID_OFFSET)
#define N32_GPIOJ_GPIOx_POD             (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_POD_OFFSET)
#define N32_GPIOJ_GPIOx_PBSC            (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_PBSC_OFFSET)
#define N32_GPIOJ_GPIOx_PLCK            (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_PLCK_OFFSET)
#define N32_GPIOJ_GPIOx_AFRL            (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_AFRL_OFFSET)
#define N32_GPIOJ_GPIOx_AFRH            (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_AFRH_OFFSET)
#define N32_GPIOJ_GPIOx_PBC             (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_PBC_OFFSET)
#define N32_GPIOJ_GPIOx_DS              (N32_GPIOJ_BASE + \
                                         N32_GPIO_GPIOx_DS_OFFSET)

#define N32_GPIOK_GPIOx_PMODE           (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_PMODE_OFFSET)
#define N32_GPIOK_GPIOx_POTYPE          (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_POTYPE_OFFSET)
#define N32_GPIOK_GPIOx_SR              (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_SR_OFFSET)
#define N32_GPIOK_GPIOx_PUPD            (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_PUPD_OFFSET)
#define N32_GPIOK_GPIOx_PID             (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_PID_OFFSET)
#define N32_GPIOK_GPIOx_POD             (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_POD_OFFSET)
#define N32_GPIOK_GPIOx_PBSC            (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_PBSC_OFFSET)
#define N32_GPIOK_GPIOx_PLCK            (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_PLCK_OFFSET)
#define N32_GPIOK_GPIOx_AFRL            (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_AFRL_OFFSET)
#define N32_GPIOK_GPIOx_AFRH            (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_AFRH_OFFSET)
#define N32_GPIOK_GPIOx_PBC             (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_PBC_OFFSET)
#define N32_GPIOK_GPIOx_DS              (N32_GPIOK_BASE + \
                                         N32_GPIO_GPIOx_DS_OFFSET)

/******** Bit definition for GPIOx_PMODE register  ********/
#define GPIO_GPIOx_PMODE_MODE15_SHIFT   (30)
#define GPIO_GPIOx_PMODE_MODE15_MASK    (0x3 << GPIO_GPIOx_PMODE_MODE15_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE15
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE14_SHIFT   (28)
#define GPIO_GPIOx_PMODE_MODE14_MASK    (0x3 << GPIO_GPIOx_PMODE_MODE14_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE14
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE13_SHIFT   (26)
#define GPIO_GPIOx_PMODE_MODE13_MASK    (0x3 << GPIO_GPIOx_PMODE_MODE13_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE13
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE12_SHIFT   (24)
#define GPIO_GPIOx_PMODE_MODE12_MASK    (0x3 << GPIO_GPIOx_PMODE_MODE12_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE12
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE11_SHIFT   (22)
#define GPIO_GPIOx_PMODE_MODE11_MASK    (0x3 << GPIO_GPIOx_PMODE_MODE11_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE11
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE10_SHIFT   (20)
#define GPIO_GPIOx_PMODE_MODE10_MASK    (0x3 << GPIO_GPIOx_PMODE_MODE10_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE10
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE9_SHIFT    (18)
#define GPIO_GPIOx_PMODE_MODE9_MASK     (0x3 << GPIO_GPIOx_PMODE_MODE9_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE9
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE8_SHIFT    (16)
#define GPIO_GPIOx_PMODE_MODE8_MASK     (0x3 << GPIO_GPIOx_PMODE_MODE8_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE8
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE7_SHIFT    (14)
#define GPIO_GPIOx_PMODE_MODE7_MASK     (0x3 << GPIO_GPIOx_PMODE_MODE7_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE7
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE6_SHIFT    (12)
#define GPIO_GPIOx_PMODE_MODE6_MASK     (0x3 << GPIO_GPIOx_PMODE_MODE6_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE6
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE5_SHIFT    (10)
#define GPIO_GPIOx_PMODE_MODE5_MASK     (0x3 << GPIO_GPIOx_PMODE_MODE5_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE5
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE4_SHIFT    (8)
#define GPIO_GPIOx_PMODE_MODE4_MASK     (0x3 << GPIO_GPIOx_PMODE_MODE4_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE4
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE3_SHIFT    (6)
#define GPIO_GPIOx_PMODE_MODE3_MASK     (0x3 << GPIO_GPIOx_PMODE_MODE3_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE3
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE2_SHIFT    (4)
#define GPIO_GPIOx_PMODE_MODE2_MASK     (0x3 << GPIO_GPIOx_PMODE_MODE2_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE2
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE1_SHIFT    (2)
#define GPIO_GPIOx_PMODE_MODE1_MASK     (0x3 << GPIO_GPIOx_PMODE_MODE1_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE1
                                                                                 */
#define GPIO_GPIOx_PMODE_MODE0_SHIFT    (0)
#define GPIO_GPIOx_PMODE_MODE0_MASK     (0x3 << GPIO_GPIOx_PMODE_MODE0_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MODE0
                                                                                 */

#define GPIO_GPIOx_PMODE_INPUT          (0x00)
#define GPIO_GPIOx_PMODE_OUTPUT         (0x01)
#define GPIO_GPIOx_PMODE_ALT            (0x10)
#define GPIO_GPIOx_PMODE_ANALOG         (0x11)
#define GPIO_GPIOx_PMODE_MODE_SHIFT(n)  ((n) << 1)
#define GPIO_GPIOx_PMODE_MODE_MASK(n)   (0x3 << \
                                         GPIO_GPIOx_PMODE_MODE_SHIFT(n))

/******** Bit definition for GPIOx_POTYPE register  ********/
#define GPIO_GPIOx_POTYPE_POT15         (1 << 15)   /* POT15 */
#define GPIO_GPIOx_POTYPE_POT14         (1 << 14)   /* POT14 */
#define GPIO_GPIOx_POTYPE_POT13         (1 << 13)   /* POT13 */
#define GPIO_GPIOx_POTYPE_POT12         (1 << 12)   /* POT12 */
#define GPIO_GPIOx_POTYPE_POT11         (1 << 11)   /* POT11 */
#define GPIO_GPIOx_POTYPE_POT10         (1 << 10)   /* POT10 */
#define GPIO_GPIOx_POTYPE_POT9          (1 << 9)    /* POT9 */
#define GPIO_GPIOx_POTYPE_POT8          (1 << 8)    /* POT8 */
#define GPIO_GPIOx_POTYPE_POT7          (1 << 7)    /* POT7 */
#define GPIO_GPIOx_POTYPE_POT6          (1 << 6)    /* POT6 */
#define GPIO_GPIOx_POTYPE_POT5          (1 << 5)    /* POT5 */
#define GPIO_GPIOx_POTYPE_POT4          (1 << 4)    /* POT4 */
#define GPIO_GPIOx_POTYPE_POT3          (1 << 3)    /* POT3 */
#define GPIO_GPIOx_POTYPE_POT2          (1 << 2)    /* POT2 */
#define GPIO_GPIOx_POTYPE_POT1          (1 << 1)    /* POT1 */
#define GPIO_GPIOx_POTYPE_POT0          (1 << 0)    /* POT0 */

/******** Bit definition for GPIOx_SR register  ********/
#define GPIO_GPIOx_SR_SR15              (1 << 15)   /* SR15 */
#define GPIO_GPIOx_SR_SR14              (1 << 14)   /* SR14 */
#define GPIO_GPIOx_SR_SR13              (1 << 13)   /* SR13 */
#define GPIO_GPIOx_SR_SR12              (1 << 12)   /* SR12 */
#define GPIO_GPIOx_SR_SR11              (1 << 11)   /* SR11 */
#define GPIO_GPIOx_SR_SR10              (1 << 10)   /* SR10 */
#define GPIO_GPIOx_SR_SR9               (1 << 9)    /* SR9 */
#define GPIO_GPIOx_SR_SR8               (1 << 8)    /* SR8 */
#define GPIO_GPIOx_SR_SR7               (1 << 7)    /* SR7 */
#define GPIO_GPIOx_SR_SR6               (1 << 6)    /* SR6 */
#define GPIO_GPIOx_SR_SR5               (1 << 5)    /* SR5 */
#define GPIO_GPIOx_SR_SR4               (1 << 4)    /* SR4 */
#define GPIO_GPIOx_SR_SR3               (1 << 3)    /* SR3 */
#define GPIO_GPIOx_SR_SR2               (1 << 2)    /* SR2 */
#define GPIO_GPIOx_SR_SR1               (1 << 1)    /* SR1 */
#define GPIO_GPIOx_SR_SR0               (1 << 0)    /* SR0 */

#define GPIO_GPIOx_SR_SHIFT(n)  (n)
#define GPIO_GPIOx_SR_MASK(n)   (0x1 << GPIO_GPIOx_SR_OFFSET(n))

/******** Bit definition for GPIOx_PUPD register  ********/
#define GPIO_GPIOx_PUPD_PUPD15_SHIFT    (30)
#define GPIO_GPIOx_PUPD_PUPD15_MASK     (0x3 << GPIO_GPIOx_PUPD_PUPD15_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD15
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD14_SHIFT    (28)
#define GPIO_GPIOx_PUPD_PUPD14_MASK     (0x3 << GPIO_GPIOx_PUPD_PUPD14_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD14
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD13_SHIFT    (26)
#define GPIO_GPIOx_PUPD_PUPD13_MASK     (0x3 << GPIO_GPIOx_PUPD_PUPD13_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD13
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD12_SHIFT    (24)
#define GPIO_GPIOx_PUPD_PUPD12_MASK     (0x3 << GPIO_GPIOx_PUPD_PUPD12_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD12
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD11_SHIFT    (22)
#define GPIO_GPIOx_PUPD_PUPD11_MASK     (0x3 << GPIO_GPIOx_PUPD_PUPD11_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD11
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD10_SHIFT    (20)
#define GPIO_GPIOx_PUPD_PUPD10_MASK     (0x3 << GPIO_GPIOx_PUPD_PUPD10_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD10
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD9_SHIFT     (18)
#define GPIO_GPIOx_PUPD_PUPD9_MASK      (0x3 << GPIO_GPIOx_PUPD_PUPD9_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD9
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD8_SHIFT     (16)
#define GPIO_GPIOx_PUPD_PUPD8_MASK      (0x3 << GPIO_GPIOx_PUPD_PUPD8_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD8
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD7_SHIFT     (14)
#define GPIO_GPIOx_PUPD_PUPD7_MASK      (0x3 << GPIO_GPIOx_PUPD_PUPD7_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD7
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD6_SHIFT     (12)
#define GPIO_GPIOx_PUPD_PUPD6_MASK      (0x3 << GPIO_GPIOx_PUPD_PUPD6_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD6
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD5_SHIFT     (10)
#define GPIO_GPIOx_PUPD_PUPD5_MASK      (0x3 << GPIO_GPIOx_PUPD_PUPD5_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD5
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD4_SHIFT     (8)
#define GPIO_GPIOx_PUPD_PUPD4_MASK      (0x3 << GPIO_GPIOx_PUPD_PUPD4_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD4
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD3_SHIFT     (6)
#define GPIO_GPIOx_PUPD_PUPD3_MASK      (0x3 << GPIO_GPIOx_PUPD_PUPD3_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD3
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD2_SHIFT     (4)
#define GPIO_GPIOx_PUPD_PUPD2_MASK      (0x3 << GPIO_GPIOx_PUPD_PUPD2_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD2
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD1_SHIFT     (2)
#define GPIO_GPIOx_PUPD_PUPD1_MASK      (0x3 << GPIO_GPIOx_PUPD_PUPD1_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD1
                                                                                 */
#define GPIO_GPIOx_PUPD_PUPD0_SHIFT     (0)
#define GPIO_GPIOx_PUPD_PUPD0_MASK      (0x3 << GPIO_GPIOx_PUPD_PUPD0_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PUPD0
                                                                                 */

#define GPIO_GPIOx_PUPD_SHIFT(n)    ((n) << 1)
#define GPIO_GPIOx_PUPD_MASK(n)     (0x3 << GPIO_GPIOx_PUPD_SHIFT(n))
/******** Bit definition for GPIOx_PID register  ********/
#define GPIO_GPIOx_PID_PID15            (1 << 15)   /* PID15 */
#define GPIO_GPIOx_PID_PID14            (1 << 14)   /* PID14 */
#define GPIO_GPIOx_PID_PID13            (1 << 13)   /* PID13 */
#define GPIO_GPIOx_PID_PID12            (1 << 12)   /* PID12 */
#define GPIO_GPIOx_PID_PID11            (1 << 11)   /* PID11 */
#define GPIO_GPIOx_PID_PID10            (1 << 10)   /* PID10 */
#define GPIO_GPIOx_PID_PID9             (1 << 9)    /* PID9 */
#define GPIO_GPIOx_PID_PID8             (1 << 8)    /* PID8 */
#define GPIO_GPIOx_PID_PID7             (1 << 7)    /* PID7 */
#define GPIO_GPIOx_PID_PID6             (1 << 6)    /* PID6 */
#define GPIO_GPIOx_PID_PID5             (1 << 5)    /* PID5 */
#define GPIO_GPIOx_PID_PID4             (1 << 4)    /* PID4 */
#define GPIO_GPIOx_PID_PID3             (1 << 3)    /* PID3 */
#define GPIO_GPIOx_PID_PID2             (1 << 2)    /* PID2 */
#define GPIO_GPIOx_PID_PID1             (1 << 1)    /* PID1 */
#define GPIO_GPIOx_PID_PID0             (1 << 0)    /* PID0 */

#define GPIO_GPIOx_PID(n)  (1 << (n)

/******** Bit definition for GPIOx_POD register  ********/
#define GPIO_GPIOx_POD_POD15            (1 << 15)   /* POD15 */
#define GPIO_GPIOx_POD_POD14            (1 << 14)   /* POD14 */
#define GPIO_GPIOx_POD_POD13            (1 << 13)   /* POD13 */
#define GPIO_GPIOx_POD_POD12            (1 << 12)   /* POD12 */
#define GPIO_GPIOx_POD_POD11            (1 << 11)   /* POD11 */
#define GPIO_GPIOx_POD_POD10            (1 << 10)   /* POD10 */
#define GPIO_GPIOx_POD_POD9             (1 << 9)    /* POD9 */
#define GPIO_GPIOx_POD_POD8             (1 << 8)    /* POD8 */
#define GPIO_GPIOx_POD_POD7             (1 << 7)    /* POD7 */
#define GPIO_GPIOx_POD_POD6             (1 << 6)    /* POD6 */
#define GPIO_GPIOx_POD_POD5             (1 << 5)    /* POD5 */
#define GPIO_GPIOx_POD_POD4             (1 << 4)    /* POD4 */
#define GPIO_GPIOx_POD_POD3             (1 << 3)    /* POD3 */
#define GPIO_GPIOx_POD_POD2             (1 << 2)    /* POD2 */
#define GPIO_GPIOx_POD_POD1             (1 << 1)    /* POD1 */
#define GPIO_GPIOx_POD_POD0             (1 << 0)    /* POD0 */

/******** Bit definition for GPIOx_PBSC register  ********/
#define GPIO_GPIOx_PBSC_PBC15           (1 << 31)   /* PBC15 */
#define GPIO_GPIOx_PBSC_PBC14           (1 << 30)   /* PBC14 */
#define GPIO_GPIOx_PBSC_PBC13           (1 << 29)   /* PBC13 */
#define GPIO_GPIOx_PBSC_PBC12           (1 << 28)   /* PBC12 */
#define GPIO_GPIOx_PBSC_PBC11           (1 << 27)   /* PBC11 */
#define GPIO_GPIOx_PBSC_PBC10           (1 << 26)   /* PBC10 */
#define GPIO_GPIOx_PBSC_PBC9            (1 << 25)   /* PBC9 */
#define GPIO_GPIOx_PBSC_PBC8            (1 << 24)   /* PBC8 */
#define GPIO_GPIOx_PBSC_PBC7            (1 << 23)   /* PBC7 */
#define GPIO_GPIOx_PBSC_PBC6            (1 << 22)   /* PBC6 */
#define GPIO_GPIOx_PBSC_PBC5            (1 << 21)   /* PBC5 */
#define GPIO_GPIOx_PBSC_PBC4            (1 << 20)   /* PBC4 */
#define GPIO_GPIOx_PBSC_PBC3            (1 << 19)   /* PBC3 */
#define GPIO_GPIOx_PBSC_PBC2            (1 << 18)   /* PBC2 */
#define GPIO_GPIOx_PBSC_PBC1            (1 << 17)   /* PBC1 */
#define GPIO_GPIOx_PBSC_PBC0            (1 << 16)   /* PBC0 */
#define GPIO_GPIOx_PBSC_PBS15           (1 << 15)   /* PBS15 */
#define GPIO_GPIOx_PBSC_PBS14           (1 << 14)   /* PBS14 */
#define GPIO_GPIOx_PBSC_PBS13           (1 << 13)   /* PBS13 */
#define GPIO_GPIOx_PBSC_PBS12           (1 << 12)   /* PBS12 */
#define GPIO_GPIOx_PBSC_PBS11           (1 << 11)   /* PBS11 */
#define GPIO_GPIOx_PBSC_PBS10           (1 << 10)   /* PBS10 */
#define GPIO_GPIOx_PBSC_PBS9            (1 << 9)    /* PBS9 */
#define GPIO_GPIOx_PBSC_PBS8            (1 << 8)    /* PBS8 */
#define GPIO_GPIOx_PBSC_PBS7            (1 << 7)    /* PBS7 */
#define GPIO_GPIOx_PBSC_PBS6            (1 << 6)    /* PBS6 */
#define GPIO_GPIOx_PBSC_PBS5            (1 << 5)    /* PBS5 */
#define GPIO_GPIOx_PBSC_PBS4            (1 << 4)    /* PBS4 */
#define GPIO_GPIOx_PBSC_PBS3            (1 << 3)    /* PBS3 */
#define GPIO_GPIOx_PBSC_PBS2            (1 << 2)    /* PBS2 */
#define GPIO_GPIOx_PBSC_PBS1            (1 << 1)    /* PBS1 */
#define GPIO_GPIOx_PBSC_PBS0            (1 << 0)    /* PBS0 */

#define GPIO_GPIOx_PBSC_PBSC(n)     (1 << (n))
#define GPIO_GPIOx_PBSC_PBC(n)      (1 << (n + 16))

/******** Bit definition for GPIOx_PLCK register  ********/
#define GPIO_GPIOx_PLCK_PLOCKK          (1 << 16)   /* PLOCKK */
#define GPIO_GPIOx_PLCK_PLOCK15         (1 << 15)   /* PLOCK15 */
#define GPIO_GPIOx_PLCK_PLOCK14         (1 << 14)   /* PLOCK14 */
#define GPIO_GPIOx_PLCK_PLOCK13         (1 << 13)   /* PLOCK13 */
#define GPIO_GPIOx_PLCK_PLOCK12         (1 << 12)   /* PLOCK12 */
#define GPIO_GPIOx_PLCK_PLOCK11         (1 << 11)   /* PLOCK11 */
#define GPIO_GPIOx_PLCK_PLOCK10         (1 << 10)   /* PLOCK10 */
#define GPIO_GPIOx_PLCK_PLOCK9          (1 << 9)    /* PLOCK9 */
#define GPIO_GPIOx_PLCK_PLOCK8          (1 << 8)    /* PLOCK8 */
#define GPIO_GPIOx_PLCK_PLOCK7          (1 << 7)    /* PLOCK7 */
#define GPIO_GPIOx_PLCK_PLOCK6          (1 << 6)    /* PLOCK6 */
#define GPIO_GPIOx_PLCK_PLOCK5          (1 << 5)    /* PLOCK5 */
#define GPIO_GPIOx_PLCK_PLOCK4          (1 << 4)    /* PLOCK4 */
#define GPIO_GPIOx_PLCK_PLOCK3          (1 << 3)    /* PLOCK3 */
#define GPIO_GPIOx_PLCK_PLOCK2          (1 << 2)    /* PLOCK2 */
#define GPIO_GPIOx_PLCK_PLOCK1          (1 << 1)    /* PLOCK1 */
#define GPIO_GPIOx_PLCK_PLOCK0          (1 << 0)    /* PLOCK0 */

#define GPIO_GPIOx_AFR_AFSEL(n)     ((n) << 2)
#define GPIO_GPIOx_AFR_MASK(n)      (0xf << GPIO_GPIOx_AFR_AFSEL(n))

/******** Bit definition for GPIOx_AFRL register  ********/
#define GPIO_GPIOx_AFRL_AFSEL7_SHIFT    (28)
#define GPIO_GPIOx_AFRL_AFSEL7_MASK     (0xF << GPIO_GPIOx_AFRL_AFSEL7_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL7
                                                                                 */
#define GPIO_GPIOx_AFRL_AFSEL6_SHIFT    (24)
#define GPIO_GPIOx_AFRL_AFSEL6_MASK     (0xF << GPIO_GPIOx_AFRL_AFSEL6_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL6
                                                                                 */
#define GPIO_GPIOx_AFRL_AFSEL5_SHIFT    (20)
#define GPIO_GPIOx_AFRL_AFSEL5_MASK     (0xF << GPIO_GPIOx_AFRL_AFSEL5_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL5
                                                                                 */
#define GPIO_GPIOx_AFRL_AFSEL4_SHIFT    (16)
#define GPIO_GPIOx_AFRL_AFSEL4_MASK     (0xF << GPIO_GPIOx_AFRL_AFSEL4_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL4
                                                                                 */
#define GPIO_GPIOx_AFRL_AFSEL3_SHIFT    (12)
#define GPIO_GPIOx_AFRL_AFSEL3_MASK     (0xF << GPIO_GPIOx_AFRL_AFSEL3_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL3
                                                                                 */
#define GPIO_GPIOx_AFRL_AFSEL2_SHIFT    (8)
#define GPIO_GPIOx_AFRL_AFSEL2_MASK     (0xF << GPIO_GPIOx_AFRL_AFSEL2_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL2
                                                                                 */
#define GPIO_GPIOx_AFRL_AFSEL1_SHIFT    (4)
#define GPIO_GPIOx_AFRL_AFSEL1_MASK     (0xF << GPIO_GPIOx_AFRL_AFSEL1_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL1
                                                                                 */
#define GPIO_GPIOx_AFRL_AFSEL0_SHIFT    (0)
#define GPIO_GPIOx_AFRL_AFSEL0_MASK     (0xF << GPIO_GPIOx_AFRL_AFSEL0_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL0
                                                                                 */

/******** Bit definition for GPIOx_AFRH register  ********/
#define GPIO_GPIOx_AFRH_AFSEL15_SHIFT   (28)
#define GPIO_GPIOx_AFRH_AFSEL15_MASK    (0xF << GPIO_GPIOx_AFRH_AFSEL15_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL15
                                                                                 */
#define GPIO_GPIOx_AFRH_AFSEL14_SHIFT   (24)
#define GPIO_GPIOx_AFRH_AFSEL14_MASK    (0xF << GPIO_GPIOx_AFRH_AFSEL14_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL14
                                                                                 */
#define GPIO_GPIOx_AFRH_AFSEL13_SHIFT   (20)
#define GPIO_GPIOx_AFRH_AFSEL13_MASK    (0xF << GPIO_GPIOx_AFRH_AFSEL13_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL13
                                                                                 */
#define GPIO_GPIOx_AFRH_AFSEL12_SHIFT   (16)
#define GPIO_GPIOx_AFRH_AFSEL12_MASK    (0xF << GPIO_GPIOx_AFRH_AFSEL12_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL12
                                                                                 */
#define GPIO_GPIOx_AFRH_AFSEL11_SHIFT   (12)
#define GPIO_GPIOx_AFRH_AFSEL11_MASK    (0xF << GPIO_GPIOx_AFRH_AFSEL11_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL11
                                                                                 */
#define GPIO_GPIOx_AFRH_AFSEL10_SHIFT   (8)
#define GPIO_GPIOx_AFRH_AFSEL10_MASK    (0xF << GPIO_GPIOx_AFRH_AFSEL10_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL10
                                                                                 */
#define GPIO_GPIOx_AFRH_AFSEL9_SHIFT    (4)
#define GPIO_GPIOx_AFRH_AFSEL9_MASK     (0xF << GPIO_GPIOx_AFRH_AFSEL9_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL9
                                                                                 */
#define GPIO_GPIOx_AFRH_AFSEL8_SHIFT    (0)
#define GPIO_GPIOx_AFRH_AFSEL8_MASK     (0xF << GPIO_GPIOx_AFRH_AFSEL8_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * AFSEL8
                                                                                 */

/******** Bit definition for GPIOx_PBC register  ********/
#define GPIO_GPIOx_PBC_PBC15            (1 << 15)   /* PBC15 */
#define GPIO_GPIOx_PBC_PBC14            (1 << 14)   /* PBC14 */
#define GPIO_GPIOx_PBC_PBC13            (1 << 13)   /* PBC13 */
#define GPIO_GPIOx_PBC_PBC12            (1 << 12)   /* PBC12 */
#define GPIO_GPIOx_PBC_PBC11            (1 << 11)   /* PBC11 */
#define GPIO_GPIOx_PBC_PBC10            (1 << 10)   /* PBC10 */
#define GPIO_GPIOx_PBC_PBC9             (1 << 9)    /* PBC9 */
#define GPIO_GPIOx_PBC_PBC8             (1 << 8)    /* PBC8 */
#define GPIO_GPIOx_PBC_PBC7             (1 << 7)    /* PBC7 */
#define GPIO_GPIOx_PBC_PBC6             (1 << 6)    /* PBC6 */
#define GPIO_GPIOx_PBC_PBC5             (1 << 5)    /* PBC5 */
#define GPIO_GPIOx_PBC_PBC4             (1 << 4)    /* PBC4 */
#define GPIO_GPIOx_PBC_PBC3             (1 << 3)    /* PBC3 */
#define GPIO_GPIOx_PBC_PBC2             (1 << 2)    /* PBC2 */
#define GPIO_GPIOx_PBC_PBC1             (1 << 1)    /* PBC1 */
#define GPIO_GPIOx_PBC_PBC0             (1 << 0)    /* PBC0 */

#define GPIO_GPIOx_PBC_PBC(n)  (1 << (n))

/******** Bit definition for GPIOx_DS register  ********/
#define GPIO_GPIOx_DS_DSR15_SHIFT       (30)
#define GPIO_GPIOx_DS_DSR15_MASK        (0x3 << GPIO_GPIOx_DS_DSR15_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR15
                                                                             */
#define GPIO_GPIOx_DS_DSR14_SHIFT       (28)
#define GPIO_GPIOx_DS_DSR14_MASK        (0x3 << GPIO_GPIOx_DS_DSR14_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR14
                                                                             */
#define GPIO_GPIOx_DS_DSR13_SHIFT       (26)
#define GPIO_GPIOx_DS_DSR13_MASK        (0x3 << GPIO_GPIOx_DS_DSR13_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR13
                                                                             */
#define GPIO_GPIOx_DS_DSR12_SHIFT       (24)
#define GPIO_GPIOx_DS_DSR12_MASK        (0x3 << GPIO_GPIOx_DS_DSR12_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR12
                                                                             */
#define GPIO_GPIOx_DS_DSR11_SHIFT       (22)
#define GPIO_GPIOx_DS_DSR11_MASK        (0x3 << GPIO_GPIOx_DS_DSR11_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR11
                                                                             */
#define GPIO_GPIOx_DS_DSR10_SHIFT       (20)
#define GPIO_GPIOx_DS_DSR10_MASK        (0x3 << GPIO_GPIOx_DS_DSR10_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR10
                                                                             */
#define GPIO_GPIOx_DS_DSR9_SHIFT        (18)
#define GPIO_GPIOx_DS_DSR9_MASK         (0x3 << GPIO_GPIOx_DS_DSR9_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR9
                                                                             */
#define GPIO_GPIOx_DS_DSR8_SHIFT        (16)
#define GPIO_GPIOx_DS_DSR8_MASK         (0x3 << GPIO_GPIOx_DS_DSR8_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR8
                                                                             */
#define GPIO_GPIOx_DS_DSR7_SHIFT        (14)
#define GPIO_GPIOx_DS_DSR7_MASK         (0x3 << GPIO_GPIOx_DS_DSR7_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR7
                                                                             */
#define GPIO_GPIOx_DS_DSR6_SHIFT        (12)
#define GPIO_GPIOx_DS_DSR6_MASK         (0x3 << GPIO_GPIOx_DS_DSR6_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR6
                                                                             */
#define GPIO_GPIOx_DS_DSR5_SHIFT        (10)
#define GPIO_GPIOx_DS_DSR5_MASK         (0x3 << GPIO_GPIOx_DS_DSR5_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR5
                                                                             */
#define GPIO_GPIOx_DS_DSR4_SHIFT        (8)
#define GPIO_GPIOx_DS_DSR4_MASK         (0x3 << GPIO_GPIOx_DS_DSR4_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR4
                                                                             */
#define GPIO_GPIOx_DS_DSR3_SHIFT        (6)
#define GPIO_GPIOx_DS_DSR3_MASK         (0x3 << GPIO_GPIOx_DS_DSR3_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR3
                                                                             */
#define GPIO_GPIOx_DS_DSR2_SHIFT        (4)
#define GPIO_GPIOx_DS_DSR2_MASK         (0x3 << GPIO_GPIOx_DS_DSR2_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR2
                                                                             */
#define GPIO_GPIOx_DS_DSR1_SHIFT        (2)
#define GPIO_GPIOx_DS_DSR1_MASK         (0x3 << GPIO_GPIOx_DS_DSR1_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR1
                                                                             */
#define GPIO_GPIOx_DS_DSR0_SHIFT        (0)
#define GPIO_GPIOx_DS_DSR0_MASK         (0x3 << GPIO_GPIOx_DS_DSR0_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * DSR0
                                                                             */

#define GPIO_GPIOx_DS_SHIFT(n)  ((n) << 2)
#define GPIO_GPIOx_DS_MASK(n)   (0x3 << GPIO_GPIOx_DS_SHIFT(n))

#define GPIO_DC_2MA                     0x00
#define GPIO_DC_8MA                     0x01
#define GPIO_DC_4MA                     0x02
#define GPIO_DC_12MA                    0x03

#define GPIO_5VTOL_DC_1MA               0x00
#define GPIO_5VTOL_DC_4MA               0x01
#define GPIO_5VTOL_DC_2MA               0x02
#define GPIO_5VTOL_DC_6MA               0x03

#define GPIO_HS_IO_DC_1MA               0x00
#define GPIO_HS_IO_DC_2MA               0x00
#define GPIO_HS_IO_DC_8MA               0x01
#define GPIO_HS_IO_DC_4MA               0x02
#define GPIO_HS_IO_DC_5MA               0x02
#define GPIO_HS_IO_DC_12MA              0x03
#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_GPIO_H */
