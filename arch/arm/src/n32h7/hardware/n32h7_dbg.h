/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_dbg.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DBG_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DBG_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_DBG_ID_OFFSET           0x0     /* DBGMCU Identity code register
                                             */
#define N32_DBG_CTRL_OFFSET         0x4     /* Control Register */
#define N32_DBG_M7APB1FZ_OFFSET     0x8     /* DBGMCU APB1 peripheral freeze
                                             * register CPU1 */
#define N32_DBG_M4APB1FZ_OFFSET     0xC     /* DBGMCU APB1 peripheral freeze
                                             * register CPU2 */
#define N32_DBG_M7APB2FZ_OFFSET     0x10    /* DBGMCU APB2 peripheral freeze
                                             * register CPU1 */
#define N32_DBG_M4APB2FZ_OFFSET     0x14    /* DBGMCU APB2 peripheral freeze
                                             * register CPU2 */
#define N32_DBG_M7APB5FZ_OFFSET     0x18    /* DBGMCU APB5 peripheral freeze
                                             * register CPU1 */
#define N32_DBG_M4APB5FZ_OFFSET     0x1C    /* DBGMCU APB5 peripheral freeze
                                             * register CPU2 */
#define N32_DBG_M7APB6FZ_OFFSET     0x20    /* DBGMCU APB6 peripheral freeze
                                             * register CPU1 */
#define N32_DBG_M4APB6FZ_OFFSET     0x24    /* DBGMCU APB6 peripheral freeze
                                             * register CPU2 */

#define N32_DBG_ID                  (N32_DBG_BASE + N32_DBG_ID_OFFSET)
#define N32_DBG_CTRL                (N32_DBG_BASE + N32_DBG_CTRL_OFFSET)
#define N32_DBG_M7APB1FZ            (N32_DBG_BASE + N32_DBG_M7APB1FZ_OFFSET)
#define N32_DBG_M4APB1FZ            (N32_DBG_BASE + N32_DBG_M4APB1FZ_OFFSET)
#define N32_DBG_M7APB2FZ            (N32_DBG_BASE + N32_DBG_M7APB2FZ_OFFSET)
#define N32_DBG_M4APB2FZ            (N32_DBG_BASE + N32_DBG_M4APB2FZ_OFFSET)
#define N32_DBG_M7APB5FZ            (N32_DBG_BASE + N32_DBG_M7APB5FZ_OFFSET)
#define N32_DBG_M4APB5FZ            (N32_DBG_BASE + N32_DBG_M4APB5FZ_OFFSET)
#define N32_DBG_M7APB6FZ            (N32_DBG_BASE + N32_DBG_M7APB6FZ_OFFSET)
#define N32_DBG_M4APB6FZ            (N32_DBG_BASE + N32_DBG_M4APB6FZ_OFFSET)

/******** Bit definition for DBG_ID register  ********/
#define DBG_ID_DEV_NUM_L_SHIFT      (20)
#define DBG_ID_DEV_NUM_L_MASK       (0xF << DBG_ID_DEV_NUM_L_SHIFT) /*
                                                                     * DEV_NUM_L
                                                                     */
#define DBG_ID_FLASH_SHIFT          (16)
#define DBG_ID_FLASH_MASK           (0xF << DBG_ID_FLASH_SHIFT)     /* FLASH
                                                                     * capacity
                                                                     */
#define DBG_ID_DEV_NUM_H_SHIFT      (12)
#define DBG_ID_DEV_NUM_H_MASK       (0xF << DBG_ID_DEV_NUM_H_SHIFT) /*
                                                                     * DEV_NUM_H
                                                                     */
#define DBG_ID_DEV_NUM_M_SHIFT      (8)
#define DBG_ID_DEV_NUM_M_MASK       (0xF << DBG_ID_DEV_NUM_M_SHIFT) /*
                                                                     * DEV_NUM_M
                                                                     */
#define DBG_ID_REV_NUM_H_SHIFT      (4)
#define DBG_ID_REV_NUM_H_MASK       (0xF << DBG_ID_REV_NUM_H_SHIFT) /*
                                                                     * REV_NUM_H
                                                                     */
#define DBG_ID_REV_NUM_L_SHIFT      (0)
#define DBG_ID_REV_NUM_L_MASK       (0xF << DBG_ID_REV_NUM_L_SHIFT) /*
                                                                     * REV_NUM_L
                                                                     */

/******** Bit definition for DBG_CTRL register  ********/
#define DBG_CTRL_TRACE_CFG          (1 << 10)                           /*
                                                                         * TRACE_CFG
                                                                         */
#define DBG_CTRL_TRACE_MODE_SHIFT   (8)
#define DBG_CTRL_TRACE_MODE_MASK    (0x3 << DBG_CTRL_TRACE_MODE_SHIFT)  /*
                                                                         * TRACE_MODE
                                                                         */
#define DBG_CTRL_TRACE_IOEN         (1 << 7)                            /*
                                                                         * TRACE_IOEN
                                                                         */
#define DBG_CTRL_TRGOEN             (1 << 6)                            /*
                                                                         * TRGOEN
                                                                         */
#define DBG_CTRL_M7STBY             (1 << 5)                            /*
                                                                         * M7STBY
                                                                         */
#define DBG_CTRL_M7STOP             (1 << 4)                            /*
                                                                         * M7STOP
                                                                         */
#define DBG_CTRL_M7SLEEP            (1 << 3)                            /*
                                                                         * M7SLEEP
                                                                         */
#define DBG_CTRL_M4STBY             (1 << 2)                            /*
                                                                         * M4STBY
                                                                         */
#define DBG_CTRL_M4STOP             (1 << 1)                            /*
                                                                         * M4STOP
                                                                         */
#define DBG_CTRL_M4SLEEP            (1 << 0)                            /*
                                                                         * M4SLEEP
                                                                         */

/******** Bit definition for DBG_M7APB1FZ register  ********/
#define DBG_M7APB1FZ_CANFD6_STOP    (1 << 18)   /* CANFD6_STOP */
#define DBG_M7APB1FZ_CANFD5_STOP    (1 << 17)   /* CANFD5_STOP */
#define DBG_M7APB1FZ_CANFD2_STOP    (1 << 16)   /* CANFD2_STOP */
#define DBG_M7APB1FZ_CANFD1_STOP    (1 << 15)   /* CANFD1_STOP */
#define DBG_M7APB1FZ_WWDG2_STOP     (1 << 14)   /* WWDG2_STOP */
#define DBG_M7APB1FZ_I2C3_STOP      (1 << 13)   /* I2C3_STOP */
#define DBG_M7APB1FZ_I2C2_STOP      (1 << 12)   /* I2C2_STOP */
#define DBG_M7APB1FZ_I2C1_STOP      (1 << 11)   /* I2C1_STOP */
#define DBG_M7APB1FZ_GTIMB3_STOP    (1 << 10)   /* GTIMB3_STOP */
#define DBG_M7APB1FZ_GTIMB2_STOP    (1 << 9)    /* GTIMB2_STOP */
#define DBG_M7APB1FZ_GTIMB1_STOP    (1 << 8)    /* GTIMB1_STOP */
#define DBG_M7APB1FZ_GTIMA7_STOP    (1 << 7)    /* GTIMA7_STOP */
#define DBG_M7APB1FZ_GTIMA6_STOP    (1 << 6)    /* GTIMA6_STOP */
#define DBG_M7APB1FZ_GTIMA5_STOP    (1 << 5)    /* GTIMA5_STOP */
#define DBG_M7APB1FZ_GTIMA4_STOP    (1 << 4)    /* GTIMA4_STOP */
#define DBG_M7APB1FZ_BTIM4_STOP     (1 << 3)    /* BTIM4_STOP */
#define DBG_M7APB1FZ_BTIM3_STOP     (1 << 2)    /* BTIM3_STOP */
#define DBG_M7APB1FZ_BTIM2_STOP     (1 << 1)    /* BTIM2_STOP */
#define DBG_M7APB1FZ_BTIM1_STOP     (1 << 0)    /* BTIM1_STOP */

/******** Bit definition for DBG_M4APB1FZ register  ********/
#define DBG_M4APB1FZ_CANFD6_STOP    (1 << 18)   /* CANFD6_STOP */
#define DBG_M4APB1FZ_CANFD5_STOP    (1 << 17)   /* CANFD5_STOP */
#define DBG_M4APB1FZ_CANFD2_STOP    (1 << 16)   /* CANFD2_STOP */
#define DBG_M4APB1FZ_CANFD1_STOP    (1 << 15)   /* CANFD1_STOP */
#define DBG_M4APB1FZ_WWDG2_STOP     (1 << 14)   /* WWDG2_STOP */
#define DBG_M4APB1FZ_I2C3_STOP      (1 << 13)   /* I2C3_STOP */
#define DBG_M4APB1FZ_I2C2_STOP      (1 << 12)   /* I2C2_STOP */
#define DBG_M4APB1FZ_I2C1_STOP      (1 << 11)   /* I2C1_STOP */
#define DBG_M4APB1FZ_GTIMB3_STOP    (1 << 10)   /* GTIMB3_STOP */
#define DBG_M4APB1FZ_GTIMB2_STOP    (1 << 9)    /* GTIMB2_STOP */
#define DBG_M4APB1FZ_GTIMB1_STOP    (1 << 8)    /* GTIMB1_STOP */
#define DBG_M4APB1FZ_GTIMA7_STOP    (1 << 7)    /* GTIMA7_STOP */
#define DBG_M4APB1FZ_GTIMA6_STOP    (1 << 6)    /* GTIMA6_STOP */
#define DBG_M4APB1FZ_GTIMA5_STOP    (1 << 5)    /* GTIMA5_STOP */
#define DBG_M4APB1FZ_GTIMA4_STOP    (1 << 4)    /* GTIMA4_STOP */
#define DBG_M4APB1FZ_BTIM4_STOP     (1 << 3)    /* BTIM4_STOP */
#define DBG_M4APB1FZ_BTIM3_STOP     (1 << 2)    /* BTIM3_STOP */
#define DBG_M4APB1FZ_BTIM2_STOP     (1 << 1)    /* BTIM2_STOP */
#define DBG_M4APB1FZ_BTIM1_STOP     (1 << 0)    /* BTIM1_STOP */

/******** Bit definition for DBG_M7APB2FZ register  ********/
#define DBG_M7APB2FZ_CANFD8_STOP    (1 << 13)   /* CANFD8_STOP */
#define DBG_M7APB2FZ_CANFD7_STOP    (1 << 12)   /* CANFD7_STOP */
#define DBG_M7APB2FZ_CANFD4_STOP    (1 << 11)   /* CANFD4_STOP */
#define DBG_M7APB2FZ_CANFD3_STOP    (1 << 10)   /* CANFD3_STOP */
#define DBG_M7APB2FZ_I2C6_STOP      (1 << 9)    /* I2C6_STOP */
#define DBG_M7APB2FZ_I2C5_STOP      (1 << 8)    /* I2C5_STOP */
#define DBG_M7APB2FZ_I2C4_STOP      (1 << 7)    /* I2C4_STOP */
#define DBG_M7APB2FZ_ATIM2_STOP     (1 << 6)    /* ATIM2_STOP */
#define DBG_M7APB2FZ_ATIM1_STOP     (1 << 5)    /* ATIM1_STOP */
#define DBG_M7APB2FZ_GTIMA3_STOP    (1 << 4)    /* GTIMA3_STOP */
#define DBG_M7APB2FZ_GTIMA2_STOP    (1 << 3)    /* GTIMA2_STOP */
#define DBG_M7APB2FZ_GTIMA1_STOP    (1 << 2)    /* GTIMA1_STOP */
#define DBG_M7APB2FZ_SHRTIM2_STOP   (1 << 1)    /* SHRTIM2_STOP */
#define DBG_M7APB2FZ_SHRTIM1_STOP   (1 << 0)    /* SHRTIM1_STOP */

/******** Bit definition for DBG_M4APB2FZ register  ********/
#define DBG_M4APB2FZ_CANFD8_STOP    (1 << 13)   /* CANFD8_STOP */
#define DBG_M4APB2FZ_CANFD7_STOP    (1 << 12)   /* CANFD7_STOP */
#define DBG_M4APB2FZ_CANFD4_STOP    (1 << 11)   /* CANFD4_STOP */
#define DBG_M4APB2FZ_CANFD3_STOP    (1 << 10)   /* CANFD3_STOP */
#define DBG_M4APB2FZ_I2C6_STOP      (1 << 9)    /* I2C6_STOP */
#define DBG_M4APB2FZ_I2C5_STOP      (1 << 8)    /* I2C5_STOP */
#define DBG_M4APB2FZ_I2C4_STOP      (1 << 7)    /* I2C4_STOP */
#define DBG_M4APB2FZ_ATIM2_STOP     (1 << 6)    /* ATIM2_STOP */
#define DBG_M4APB2FZ_ATIM1_STOP     (1 << 5)    /* ATIM1_STOP */
#define DBG_M4APB2FZ_GTIMA3_STOP    (1 << 4)    /* GTIMA3_STOP */
#define DBG_M4APB2FZ_GTIMA2_STOP    (1 << 3)    /* GTIMA2_STOP */
#define DBG_M4APB2FZ_GTIMA1_STOP    (1 << 2)    /* GTIMA1_STOP */
#define DBG_M4APB2FZ_SHRTIM2_STOP   (1 << 1)    /* SHRTIM2_STOP */
#define DBG_M4APB2FZ_SHRTIM1_STOP   (1 << 0)    /* SHRTIM1_STOP */

/******** Bit definition for DBG_M7APB5FZ register  ********/
#define DBG_M7APB5FZ_RTC_STOP       (1 << 13)   /* RTC_STOP */
#define DBG_M7APB5FZ_LPTIM5_STOP    (1 << 12)   /* LPTIM5_STOP */
#define DBG_M7APB5FZ_LPTIM4_STOP    (1 << 11)   /* LPTIM4_STOP */
#define DBG_M7APB5FZ_LPTIM3_STOP    (1 << 10)   /* LPTIM3_STOP */
#define DBG_M7APB5FZ_LPTIM2_STOP    (1 << 9)    /* LPTIM2_STOP */
#define DBG_M7APB5FZ_LPTIM1_STOP    (1 << 8)    /* LPTIM1_STOP */
#define DBG_M7APB5FZ_IWDG2_STOP     (1 << 7)    /* IWDG2_STOP */
#define DBG_M7APB5FZ_IWDG1_STOP     (1 << 6)    /* IWDG1_STOP */
#define DBG_M7APB5FZ_I2C10_STOP     (1 << 5)    /* I2C10_STOP */
#define DBG_M7APB5FZ_I2C9_STOP      (1 << 4)    /* I2C9_STOP */
#define DBG_M7APB5FZ_I2C8_STOP      (1 << 3)    /* I2C8_STOP */
#define DBG_M7APB5FZ_I2C7_STOP      (1 << 2)    /* I2C7_STOP */
#define DBG_M7APB5FZ_ATIM4_STOP     (1 << 1)    /* ATIM4_STOP */
#define DBG_M7APB5FZ_ATIM3_STOP     (1 << 0)    /* ATIM3_STOP */

/******** Bit definition for DBG_M4APB5FZ register  ********/
#define DBG_M4APB5FZ_RTC_STOP       (1 << 13)   /* RTC_STOP */
#define DBG_M4APB5FZ_LPTIM5_STOP    (1 << 12)   /* LPTIM5_STOP */
#define DBG_M4APB5FZ_LPTIM4_STOP    (1 << 11)   /* LPTIM4_STOP */
#define DBG_M4APB5FZ_LPTIM3_STOP    (1 << 10)   /* LPTIM3_STOP */
#define DBG_M4APB5FZ_LPTIM2_STOP    (1 << 9)    /* LPTIM2_STOP */
#define DBG_M4APB5FZ_LPTIM1_STOP    (1 << 8)    /* LPTIM1_STOP */
#define DBG_M4APB5FZ_IWDG2_STOP     (1 << 7)    /* IWDG2_STOP */
#define DBG_M4APB5FZ_IWDG1_STOP     (1 << 6)    /* IWDG1_STOP */
#define DBG_M4APB5FZ_I2C10_STOP     (1 << 5)    /* I2C10_STOP */
#define DBG_M4APB5FZ_I2C9_STOP      (1 << 4)    /* I2C9_STOP */
#define DBG_M4APB5FZ_I2C8_STOP      (1 << 3)    /* I2C8_STOP */
#define DBG_M4APB5FZ_I2C7_STOP      (1 << 2)    /* I2C7_STOP */
#define DBG_M4APB5FZ_ATIM4_STOP     (1 << 1)    /* ATIM4_STOP */
#define DBG_M4APB5FZ_ATIM3_STOP     (1 << 0)    /* ATIM3_STOP */

/******** Bit definition for DBG_M7APB6FZ register  ********/
#define DBG_M7APB6FZ_WWDG1_STOP     (1 << 0) /* WWDG1_STOP */

/******** Bit definition for DBG_M4APB6FZ register  ********/
#define DBG_M4APB6FZ_WWDG1_STOP     (1 << 0) /* WWDG1_STOP */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_DBG_H */
