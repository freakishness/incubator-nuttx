/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_exti.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_EXTI_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_EXTI_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_EXTI_RT_CFG0_OFFSET                 0x0     /* Rising Edge Trigger
                                                         * Selection Register
                                                         */
#define N32_EXTI_RT_CFG1_OFFSET                 0x4     /* Rising Edge Trigger
                                                         * Selection Register
                                                         */
#define N32_EXTI_FT_CFG0_OFFSET                 0x20    /* Falling Edge
                                                         * Trigger Selection
                                                         * Register */
#define N32_EXTI_FT_CFG1_OFFSET                 0x24    /* Falling Edge
                                                         * Trigger Selection
                                                         * Register */
#define N32_EXTI_SWIE0_OFFSET                   0x40    /* Software Interrupt
                                                         * Enable Register */
#define N32_EXTI_SWIE1_OFFSET                   0x44    /* Software Interrupt
                                                         * Enable Register */
#define N32_EXTI_M7IMASK0_OFFSET                0x60    /* EXTI to CPU0
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M7IMASK1_OFFSET                0x64    /* EXTI to CPU0
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M4IMASK0_OFFSET                0x80    /* EXTI to CPU1
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M4IMASK1_OFFSET                0x84    /* EXTI to CPU1
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M7EMASK0_OFFSET                0xA0    /* EXTI to CPU0
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M7EMASK1_OFFSET                0xA4    /* EXTI to CPU0
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M4EMASK0_OFFSET                0xC0    /* EXTI to CPU1
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M4EMASK1_OFFSET                0xC4    /* EXTI to CPU1
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M7PEND0_OFFSET                 0xE0    /* EXTI CPU0 Pending
                                                         * Register */
#define N32_EXTI_M7PEND1_OFFSET                 0xE4    /* EXTI CPU0 Pending
                                                         * Register */
#define N32_EXTI_M4PEND0_OFFSET                 0x100   /* EXTI CPU1 Pending
                                                         * Register */
#define N32_EXTI_M4PEND1_OFFSET                 0x104   /* EXTI CPU1 Pending
                                                         * Register */
#define N32_EXTI_M7IMASK0_DRC_OFFSET            0x120   /* EXTI to CPU0
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M7IMASK1_DRC_OFFSET            0x124   /* EXTI to CPU0
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M4IMASK0_DRC_OFFSET            0x140   /* EXTI to CPU1
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M4IMASK1_DRC_OFFSET            0x144   /* EXTI to CPU1
                                                         * interrupt mask
                                                         * register */
#define N32_EXTI_M7EMASK0_DRC_OFFSET            0x160   /* EXTI to CPU0 event
                                                         * mask register */
#define N32_EXTI_M7EMASK1_DRC_OFFSET            0x164   /* EXTI to CPU0 event
                                                         * mask register */
#define N32_EXTI_M4EMASK0_DRC_OFFSET            0x180   /* EXTI to CPU1 event
                                                         * mask register */
#define N32_EXTI_M4EMASK1_DRC_OFFSET            0x184   /* EXTI to CPU1 event
                                                         * mask register */
#define N32_EXTI_CFG_CR_OFFSET                  0x1C0   /* EXTI to CPU1 event
                                                         * mask register */

#define N32_EXTI_RT_CFG0                        (N32_EXTI_BASE + \
                                                 N32_EXTI_RT_CFG0_OFFSET)
#define N32_EXTI_RT_CFG1                        (N32_EXTI_BASE + \
                                                 N32_EXTI_RT_CFG1_OFFSET)
#define N32_EXTI_FT_CFG0                        (N32_EXTI_BASE + \
                                                 N32_EXTI_FT_CFG0_OFFSET)
#define N32_EXTI_FT_CFG1                        (N32_EXTI_BASE + \
                                                 N32_EXTI_FT_CFG1_OFFSET)
#define N32_EXTI_SWIE0                          (N32_EXTI_BASE + \
                                                 N32_EXTI_SWIE0_OFFSET)
#define N32_EXTI_SWIE1                          (N32_EXTI_BASE + \
                                                 N32_EXTI_SWIE1_OFFSET)
#define N32_EXTI_M7IMASK0                       (N32_EXTI_BASE + \
                                                 N32_EXTI_M7IMASK0_OFFSET)
#define N32_EXTI_M7IMASK1                       (N32_EXTI_BASE + \
                                                 N32_EXTI_M7IMASK1_OFFSET)
#define N32_EXTI_M4IMASK0                       (N32_EXTI_BASE + \
                                                 N32_EXTI_M4IMASK0_OFFSET)
#define N32_EXTI_M4IMASK1                       (N32_EXTI_BASE + \
                                                 N32_EXTI_M4IMASK1_OFFSET)
#define N32_EXTI_M7EMASK0                       (N32_EXTI_BASE + \
                                                 N32_EXTI_M7EMASK0_OFFSET)
#define N32_EXTI_M7EMASK1                       (N32_EXTI_BASE + \
                                                 N32_EXTI_M7EMASK1_OFFSET)
#define N32_EXTI_M4EMASK0                       (N32_EXTI_BASE + \
                                                 N32_EXTI_M4EMASK0_OFFSET)
#define N32_EXTI_M4EMASK1                       (N32_EXTI_BASE + \
                                                 N32_EXTI_M4EMASK1_OFFSET)
#define N32_EXTI_M7PEND0                        (N32_EXTI_BASE + \
                                                 N32_EXTI_M7PEND0_OFFSET)
#define N32_EXTI_M7PEND1                        (N32_EXTI_BASE + \
                                                 N32_EXTI_M7PEND1_OFFSET)
#define N32_EXTI_M4PEND0                        (N32_EXTI_BASE + \
                                                 N32_EXTI_M4PEND0_OFFSET)
#define N32_EXTI_M4PEND1                        (N32_EXTI_BASE + \
                                                 N32_EXTI_M4PEND1_OFFSET)
#define N32_EXTI_M7IMASK0_DRC                   (N32_EXTI_BASE + \
                                                 N32_EXTI_M7IMASK0_DRC_OFFSET)
#define N32_EXTI_M7IMASK1_DRC                   (N32_EXTI_BASE + \
                                                 N32_EXTI_M7IMASK1_DRC_OFFSET)
#define N32_EXTI_M4IMASK0_DRC                   (N32_EXTI_BASE + \
                                                 N32_EXTI_M4IMASK0_DRC_OFFSET)
#define N32_EXTI_M4IMASK1_DRC                   (N32_EXTI_BASE + \
                                                 N32_EXTI_M4IMASK1_DRC_OFFSET)
#define N32_EXTI_M7EMASK0_DRC                   (N32_EXTI_BASE + \
                                                 N32_EXTI_M7EMASK0_DRC_OFFSET)
#define N32_EXTI_M7EMASK1_DRC                   (N32_EXTI_BASE + \
                                                 N32_EXTI_M7EMASK1_DRC_OFFSET)
#define N32_EXTI_M4EMASK0_DRC                   (N32_EXTI_BASE + \
                                                 N32_EXTI_M4EMASK0_DRC_OFFSET)
#define N32_EXTI_M4EMASK1_DRC                   (N32_EXTI_BASE + \
                                                 N32_EXTI_M4EMASK1_DRC_OFFSET)
#define N32_EXTI_CFG_CR                         (N32_EXTI_BASE + \
                                                 N32_EXTI_CFG_CR_OFFSET)

/******** Bit definition for EXTI_RT_CFG0 register  ********/
#define EXTI_RT_CFG0_RT_CFG0x_SHIFT             (0)
#define EXTI_RT_CFG0_RT_CFG0x_MASK              (0xFFFFFFFF << \
                                                 EXTI_RT_CFG0_RT_CFG0x_SHIFT)  /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * RT_CFG0x
                                                                                */

/******** Bit definition for EXTI_RT_CFG1 register  ********/
#define EXTI_RT_CFG1_RT_CFG1x_SHIFT             (0)
#define EXTI_RT_CFG1_RT_CFG1x_MASK              (0xFFFFF << \
                                                 EXTI_RT_CFG1_RT_CFG1x_SHIFT) /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * RT_CFG1x
                                                                               */

/******** Bit definition for EXTI_FT_CFG0 register  ********/
#define EXTI_FT_CFG0_FT_CFG0x_SHIFT             (0)
#define EXTI_FT_CFG0_FT_CFG0x_MASK              (0xFFFFFFFF << \
                                                 EXTI_FT_CFG0_FT_CFG0x_SHIFT)  /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * FT_CFG0x
                                                                                */

/******** Bit definition for EXTI_FT_CFG1 register  ********/
#define EXTI_FT_CFG1_FT_CFG1x_SHIFT             (0)
#define EXTI_FT_CFG1_FT_CFG1x_MASK              (0xFFFFF << \
                                                 EXTI_FT_CFG1_FT_CFG1x_SHIFT) /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * FT_CFG1x
                                                                               */

/******** Bit definition for EXTI_SWIE0 register  ********/
#define EXTI_SWIE0_SWIE0x_SHIFT                 (0)
#define EXTI_SWIE0_SWIE0x_MASK                  (0xFFFFFFFF << \
                                                 EXTI_SWIE0_SWIE0x_SHIFT) /*
                                                                           * SWIE0x
                                                                           */

/******** Bit definition for EXTI_SWIE1 register  ********/
#define EXTI_SWIE1_SWIE1x_SHIFT                 (0)
#define EXTI_SWIE1_SWIE1x_MASK                  (0xFFFFF << \
                                                 EXTI_SWIE1_SWIE1x_SHIFT) /*
                                                                           * SWIE1x
                                                                           */

/******** Bit definition for EXTI_M7IMASK0 register  ********/
#define EXTI_M7IMASK0_M7IMSK0x_SHIFT            (0)
#define EXTI_M7IMASK0_M7IMSK0x_MASK             (0xFFFFFFFF << \
                                                 EXTI_M7IMASK0_M7IMSK0x_SHIFT)   /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * M7IMSK0x
                                                                                  */

/******** Bit definition for EXTI_M7IMASK1 register  ********/
#define EXTI_M7IMASK1_M7IMSK1x_SHIFT            (0)
#define EXTI_M7IMASK1_M7IMSK1x_MASK             (0xFFFFF << \
                                                 EXTI_M7IMASK1_M7IMSK1x_SHIFT) /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * M7IMSK1x
                                                                                */

/******** Bit definition for EXTI_M4IMASK0 register  ********/
#define EXTI_M4IMASK0_M4IMSK0x_SHIFT            (0)
#define EXTI_M4IMASK0_M4IMSK0x_MASK             (0xFFFFFFFF << \
                                                 EXTI_M4IMASK0_M4IMSK0x_SHIFT)   /*
                                                                                  *
                                                                                  *
                                                                                  *
                                                                                  * M4IMSK0x
                                                                                  */

/******** Bit definition for EXTI_M4IMASK1 register  ********/
#define EXTI_M4IMASK1_M4IMSK1x_SHIFT            (0)
#define EXTI_M4IMASK1_M4IMSK1x_MASK             (0xFFFFF << \
                                                 EXTI_M4IMASK1_M4IMSK1x_SHIFT) /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * M4IMSK1x
                                                                                */

/******** Bit definition for EXTI_M7EMASK0 register  ********/
#define EXTI_M7EMASK0_M7EMASK0x_SHIFT           (0)
#define EXTI_M7EMASK0_M7EMASK0x_MASK            (0xFFFFFFFF <<                  \
                                                 EXTI_M7EMASK0_M7EMASK0x_SHIFT) \
        /*
         * M7EMASK0x
         */

/******** Bit definition for EXTI_M7EMASK1 register  ********/
#define EXTI_M7EMASK1_M7EMASK1x_SHIFT           (0)
#define EXTI_M7EMASK1_M7EMASK1x_MASK            (0xFFFFF <<                     \
                                                 EXTI_M7EMASK1_M7EMASK1x_SHIFT) \
        /*
         * M7EMASK1x
         */

/******** Bit definition for EXTI_M4EMASK0 register  ********/
#define EXTI_M4EMASK0_M4EMASK0x_SHIFT           (0)
#define EXTI_M4EMASK0_M4EMASK0x_MASK            (0xFFFFFFFF <<                  \
                                                 EXTI_M4EMASK0_M4EMASK0x_SHIFT) \
        /*
         * M4EMASK0x
         */

/******** Bit definition for EXTI_M4EMASK1 register  ********/
#define EXTI_M4EMASK1_M4EMASK1x_SHIFT           (0)
#define EXTI_M4EMASK1_M4EMASK1x_MASK            (0xFFFFF <<                     \
                                                 EXTI_M4EMASK1_M4EMASK1x_SHIFT) \
        /*
         * M4EMASK1x
         */

/******** Bit definition for EXTI_M7PEND0 register  ********/
#define EXTI_M7PEND0_M7PEND0x_SHIFT             (0)
#define EXTI_M7PEND0_M7PEND0x_MASK              (0xFFFFFFFF << \
                                                 EXTI_M7PEND0_M7PEND0x_SHIFT)  /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * M7PEND0x
                                                                                */

/******** Bit definition for EXTI_M7PEND1 register  ********/
#define EXTI_M7PEND1_M7PEND1x_SHIFT             (0)
#define EXTI_M7PEND1_M7PEND1x_MASK              (0xFFFFF << \
                                                 EXTI_M7PEND1_M7PEND1x_SHIFT) /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * M7PEND1x
                                                                               */

/******** Bit definition for EXTI_M4PEND0 register  ********/
#define EXTI_M4PEND0_M4PEND0x_SHIFT             (0)
#define EXTI_M4PEND0_M4PEND0x_MASK              (0xFFFFFFFF << \
                                                 EXTI_M4PEND0_M4PEND0x_SHIFT)  /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * M4PEND0x
                                                                                */

/******** Bit definition for EXTI_M4PEND1 register  ********/
#define EXTI_M4PEND1_M4PEND1x_SHIFT             (0)
#define EXTI_M4PEND1_M4PEND1x_MASK              (0xFFFFF << \
                                                 EXTI_M4PEND1_M4PEND1x_SHIFT) /*
                                                                               *
                                                                               *
                                                                               *
                                                                               * M4PEND1x
                                                                               */

/******** Bit definition for EXTI_M7IMASK0_DRC register  ********/
#define EXTI_M7IMASK0_DRC_M7IMASK0_DRCx_SHIFT   (0)
#define EXTI_M7IMASK0_DRC_M7IMASK0_DRCx_MASK    (0xFFFFFFFF <<                          \
                                                 EXTI_M7IMASK0_DRC_M7IMASK0_DRCx_SHIFT) \
        /*
         * M7IMASK0_DRCx
         */

/******** Bit definition for EXTI_M7IMASK1_DRC register  ********/
#define EXTI_M7IMASK1_DRC_M7IMASK1_DRCx_SHIFT   (0)
#define EXTI_M7IMASK1_DRC_M7IMASK1_DRCx_MASK    (0x7FFFFFF <<                           \
                                                 EXTI_M7IMASK1_DRC_M7IMASK1_DRCx_SHIFT) \
        /*
         * M7IMASK1_DRCx
         */

/******** Bit definition for EXTI_M4IMASK0_DRC register  ********/
#define EXTI_M4IMASK0_DRC_M4IMASK0_DRCx_SHIFT   (0)
#define EXTI_M4IMASK0_DRC_M4IMASK0_DRCx_MASK    (0xFFFFFFFF <<                          \
                                                 EXTI_M4IMASK0_DRC_M4IMASK0_DRCx_SHIFT) \
        /*
         * M4IMASK0_DRCx
         */

/******** Bit definition for EXTI_M4IMASK1_DRC register  ********/
#define EXTI_M4IMASK1_DRC_M4IMASK1_DRCx_SHIFT   (0)
#define EXTI_M4IMASK1_DRC_M4IMASK1_DRCx_MASK    (0x7FFFFFF <<                           \
                                                 EXTI_M4IMASK1_DRC_M4IMASK1_DRCx_SHIFT) \
        /*
         * M4IMASK1_DRCx
         */

/******** Bit definition for EXTI_M7EMASK0_DRC register  ********/
#define EXTI_M7EMASK0_DRC_M7EMASK0_DRCx_SHIFT   (0)
#define EXTI_M7EMASK0_DRC_M7EMASK0_DRCx_MASK    (0xFFFFFFFF <<                          \
                                                 EXTI_M7EMASK0_DRC_M7EMASK0_DRCx_SHIFT) \
        /*
         * M7EMASK0_DRCx
         */

/******** Bit definition for EXTI_M7EMASK1_DRC register  ********/
#define EXTI_M7EMASK1_DRC_M7EMASK1_DRCx_SHIFT   (0)
#define EXTI_M7EMASK1_DRC_M7EMASK1_DRCx_MASK    (0x7FFFFFF <<                           \
                                                 EXTI_M7EMASK1_DRC_M7EMASK1_DRCx_SHIFT) \
        /*
         * M7EMASK1_DRCx
         */

/******** Bit definition for EXTI_M4EMASK0_DRC register  ********/
#define EXTI_M4EMASK0_DRC_M4EMASK0_DRCx_SHIFT   (0)
#define EXTI_M4EMASK0_DRC_M4EMASK0_DRCx_MASK    (0xFFFFFFFF <<                          \
                                                 EXTI_M4EMASK0_DRC_M4EMASK0_DRCx_SHIFT) \
        /*
         * M4EMASK0_DRCx
         */

/******** Bit definition for EXTI_M4EMASK1_DRC register  ********/
#define EXTI_M4EMASK1_DRC_M4EMASK1_DRCx_SHIFT   (0)
#define EXTI_M4EMASK1_DRC_M4EMASK1_DRCx_MASK    (0x7FFFFFF <<                           \
                                                 EXTI_M4EMASK1_DRC_M4EMASK1_DRCx_SHIFT) \
        /*
         * M4EMASK1_DRCx
         */

/******** Bit definition for EXTI_CFG_CR register  ********/
#define EXTI_CFG_CR_GPIO_INT_SEL_SHIFT          (8)
#define EXTI_CFG_CR_GPIO_INT_SEL_MASK           (0xF <<                          \
                                                 EXTI_CFG_CR_GPIO_INT_SEL_SHIFT) \
        /* GPIO_INT_SEL */
#define EXTI_CFG_CR_CPU_EDGE_WKEN_DRC           (1 << 1)    /*
                                                             * CPU_EDGE_WKEN_DRC
                                                             */
#define EXTI_CFG_CR_CPU_EDGE_WKEN               (1 << 0)    /* CPU_EDGE_WKEN
                                                             */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_EXTI_H */
