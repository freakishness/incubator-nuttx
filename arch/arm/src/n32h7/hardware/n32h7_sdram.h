/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_sdram.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SDRAM_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SDRAM_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_SDRAM_BADD1_OFFSET          0x80    /* Base Address for SDRAM1
                                                 * Register */
#define N32_SDRAM_ADDMASK1_OFFSET       0x84    /* Address Mask for SDRAM1
                                                 * Register */
#define N32_SDRAM_BADD2_OFFSET          0x88    /* Base Address for SDRAM2
                                                 * Register */
#define N32_SDRAM_ADDMASK2_OFFSET       0x8C    /* Address Mask for SDRAM2
                                                 * Register */
#define N32_SDRAM_CFG1_OFFSET           0xA0    /* SDRAM1 Configuration
                                                 *  Register */
#define N32_SDRAM_CFG2_OFFSET           0xA4    /* SDRAM2 Configuration
                                                 * Register */
#define N32_SDRAM_RAT_OFFSET            0xB0    /* Row Active Time Register */
#define N32_SDRAM_RCT_OFFSET            0xB4    /* Row Cycle Time Register */
#define N32_SDRAM_RRDLY_OFFSET          0xB8    /* Row Active to Row Active
                                                 * Delay Register */
#define N32_SDRAM_PT_OFFSET             0xBC    /* Precharge Time Register */
#define N32_SDRAM_WRT_OFFSET            0xC0    /* Write Recovery Time
                                                 * Register */
#define N32_SDRAM_RFCT_OFFSET           0xC4    /* Refresh Cycle Time Register
                                                 */
#define N32_SDRAM_RCDLY_OFFSET          0xC8    /* RAS to CAS Delay Register
                                                 */
#define N32_SDRAM_RI_OFFSET             0xCC    /* Refresh Interval Register
                                                 */
#define N32_SDRAM_CBO_OFFSET            0xE0    /* Synchronous Memory Buffer
                                                 * Operation Register */
#define N32_SDRAM_OR_OFFSET             0xE4    /* SDRAM Operation Request
                                                 * Register */
#define N32_SDRAM_OS_OFFSET             0xE8    /* SDRAM Operation Setup
                                                 * Register */
#define N32_SDRAM_WP_OFFSET             0x100   /* Write Protection Register
                                                 */

#define N32_SDRAM_BADD1                 (N32_SDRAM_BASE + \
                                         N32_SDRAM_BADD1_OFFSET)
#define N32_SDRAM_ADDMASK1              (N32_SDRAM_BASE + \
                                         N32_SDRAM_ADDMASK1_OFFSET)
#define N32_SDRAM_BADD2                 (N32_SDRAM_BASE + \
                                         N32_SDRAM_BADD2_OFFSET)
#define N32_SDRAM_ADDMASK2              (N32_SDRAM_BASE + \
                                         N32_SDRAM_ADDMASK2_OFFSET)
#define N32_SDRAM_CFG1                  (N32_SDRAM_BASE + \
                                         N32_SDRAM_CFG1_OFFSET)
#define N32_SDRAM_CFG2                  (N32_SDRAM_BASE + \
                                         N32_SDRAM_CFG2_OFFSET)
#define N32_SDRAM_RAT                   (N32_SDRAM_BASE + \
                                         N32_SDRAM_RAT_OFFSET)
#define N32_SDRAM_RCT                   (N32_SDRAM_BASE + \
                                         N32_SDRAM_RCT_OFFSET)
#define N32_SDRAM_RRDLY                 (N32_SDRAM_BASE + \
                                         N32_SDRAM_RRDLY_OFFSET)
#define N32_SDRAM_PT                    (N32_SDRAM_BASE + N32_SDRAM_PT_OFFSET)
#define N32_SDRAM_WRT                   (N32_SDRAM_BASE + \
                                         N32_SDRAM_WRT_OFFSET)
#define N32_SDRAM_RFCT                  (N32_SDRAM_BASE + \
                                         N32_SDRAM_RFCT_OFFSET)
#define N32_SDRAM_RCDLY                 (N32_SDRAM_BASE + \
                                         N32_SDRAM_RCDLY_OFFSET)
#define N32_SDRAM_RI                    (N32_SDRAM_BASE + N32_SDRAM_RI_OFFSET)
#define N32_SDRAM_CBO                   (N32_SDRAM_BASE + \
                                         N32_SDRAM_CBO_OFFSET)
#define N32_SDRAM_OR                    (N32_SDRAM_BASE + N32_SDRAM_OR_OFFSET)
#define N32_SDRAM_OS                    (N32_SDRAM_BASE + N32_SDRAM_OS_OFFSET)
#define N32_SDRAM_WP                    (N32_SDRAM_BASE + N32_SDRAM_WP_OFFSET)

/******** Bit definition for SDRAM_BADD1 register  ********/
#define SDRAM_BADD1_ADDBASE_SHIFT       (12)
#define SDRAM_BADD1_ADDBASE_MASK        (0xFFFFF << SDRAM_BADD1_ADDBASE_SHIFT) /*
                                                                                * ADDBASE
                                                                                */

/******** Bit definition for SDRAM_ADDMASK1 register  ********/
#define SDRAM_ADDMASK1_ADDMASK_SHIFT    (12)
#define SDRAM_ADDMASK1_ADDMASK_MASK     (0xFFFFF << \
  SDRAM_ADDMASK1_ADDMASK_SHIFT)                                               /*
                                                                               * ADDMASK
                                                                               */

/******** Bit definition for SDRAM_BADD2 register  ********/
#define SDRAM_BADD2_ADDBASE_SHIFT       (12)
#define SDRAM_BADD2_ADDBASE_MASK        (0xFFFFF << SDRAM_BADD2_ADDBASE_SHIFT) /*
                                                                                * ADDBASE
                                                                                */

/******** Bit definition for SDRAM_ADDMASK2 register  ********/
#define SDRAM_ADDMASK2_ADDMASK_SHIFT    (12)
#define SDRAM_ADDMASK2_ADDMASK_MASK     (0xFFFFF << \
  SDRAM_ADDMASK2_ADDMASK_SHIFT)                                               /*
                                                                               * ADDMASK
                                                                               */

/******** Bit definition for SDRAM_CFG1 register  ********/
#define SDRAM_CFG1_SDRAMEN              (1 << 31)                               /*
                                                                                 * SDRAMEN
                                                                                 */
#define SDRAM_CFG1_REFRESHEN            (1 << 30)                               /*
                                                                                 * REFRESHEN
                                                                                 */
#define SDRAM_CFG1_AUTOPCHEN            (1 << 23)                               /*
                                                                                 * AUTOPCHEN
                                                                                 */
#define SDRAM_CFG1_BUSWID_SHIFT         (21)
#define SDRAM_CFG1_BUSWID_MASK          (0x3 << SDRAM_CFG1_BUSWID_SHIFT)        /*
                                                                                 * BUSWID
                                                                                 */
#define SDRAM_CFG1_BURSTLEN_SHIFT       (18)
#define SDRAM_CFG1_BURSTLEN_MASK        (0x7 << SDRAM_CFG1_BURSTLEN_SHIFT)      /*
                                                                                 * BURSTLEN
                                                                                 */
#define SDRAM_CFG1_CASLATENCY_SHIFT     (16)
#define SDRAM_CFG1_CASLATENCY_MASK      (0x3 << SDRAM_CFG1_CASLATENCY_SHIFT)    /*
                                                                                 * CASLATENCY
                                                                                 */
#define SDRAM_CFG1_PREFCHRDEN           (1 << 9)                                /*
                                                                                 * PREFCHRDEN
                                                                                 */
#define SDRAM_CFG1_SOMEN                (1 << 8)                                /*
                                                                                 * SOMEN
                                                                                 */
#define SDRAM_CFG1_BANKINTRLEN          (1 << 4)                                /*
                                                                                 * BANKINTRLEN
                                                                                 */
#define SDRAM_CFG1_ADDCFG_SHIFT         (0)
#define SDRAM_CFG1_ADDCFG_MASK          (0xF << SDRAM_CFG1_ADDCFG_SHIFT)        /*
                                                                                 * ADDCFG
                                                                                 */

/******** Bit definition for SDRAM_CFG2 register  ********/
#define SDRAM_CFG2_SDRAMEN              (1 << 31)                               /*
                                                                                 * SDRAMEN
                                                                                 */
#define SDRAM_CFG2_REFRESHEN            (1 << 30)                               /*
                                                                                 * REFRESHEN
                                                                                 */
#define SDRAM_CFG2_AUTOPCHEN            (1 << 23)                               /*
                                                                                 * AUTOPCHEN
                                                                                 */
#define SDRAM_CFG2_BUSWID_SHIFT         (21)
#define SDRAM_CFG2_BUSWID_MASK          (0x3 << SDRAM_CFG2_BUSWID_SHIFT)        /*
                                                                                 * BUSWID
                                                                                 */
#define SDRAM_CFG2_BURSTLEN_SHIFT       (18)
#define SDRAM_CFG2_BURSTLEN_MASK        (0x7 << SDRAM_CFG2_BURSTLEN_SHIFT)      /*
                                                                                 * BURSTLEN
                                                                                 */
#define SDRAM_CFG2_CASLATENCY_SHIFT     (16)
#define SDRAM_CFG2_CASLATENCY_MASK      (0x3 << SDRAM_CFG2_CASLATENCY_SHIFT)    /*
                                                                                 * CASLATENCY
                                                                                 */
#define SDRAM_CFG2_PREFCHRDEN           (1 << 9)                                /*
                                                                                 * PREFCHRDEN
                                                                                 */
#define SDRAM_CFG2_SOMEN                (1 << 8)                                /*
                                                                                 * SOMEN
                                                                                 */
#define SDRAM_CFG2_BANKINTRLEN          (1 << 4)                                /*
                                                                                 * BANKINTRLEN
                                                                                 */
#define SDRAM_CFG2_ADDCFG_SHIFT         (0)
#define SDRAM_CFG2_ADDCFG_MASK          (0xF << SDRAM_CFG2_ADDCFG_SHIFT)        /*
                                                                                 * ADDCFG
                                                                                 */

/******** Bit definition for SDRAM_RAT register  ********/
#define SDRAM_RAT_TRAS_SHIFT            (0)
#define SDRAM_RAT_TRAS_MASK             (0x3F << SDRAM_RAT_TRAS_SHIFT) /* TRAS
                                                                        */

/******** Bit definition for SDRAM_RCT register  ********/
#define SDRAM_RCT_TRC_SHIFT             (0)
#define SDRAM_RCT_TRC_MASK              (0x3F << SDRAM_RCT_TRC_SHIFT) /* TRC
                                                                       */

/******** Bit definition for SDRAM_RRDLY register  ********/
#define SDRAM_RRDLY_TRRD_SHIFT          (0)
#define SDRAM_RRDLY_TRRD_MASK           (0x3F << SDRAM_RRDLY_TRRD_SHIFT) /*
                                                                          * TRRD
                                                                          */

/******** Bit definition for SDRAM_PT register  ********/
#define SDRAM_PT_TRP_SHIFT              (0)
#define SDRAM_PT_TRP_MASK               (0x3F << SDRAM_PT_TRP_SHIFT) /* TRP */

/******** Bit definition for SDRAM_WRT register  ********/
#define SDRAM_WRT_TWR_SHIFT             (0)
#define SDRAM_WRT_TWR_MASK              (0x3F << SDRAM_WRT_TWR_SHIFT) /* TWR
                                                                       */

/******** Bit definition for SDRAM_RFCT register  ********/
#define SDRAM_RFCT_TRFC_SHIFT           (0)
#define SDRAM_RFCT_TRFC_MASK            (0x3F << SDRAM_RFCT_TRFC_SHIFT) /*
                                                                         * TRFC
                                                                         */

/******** Bit definition for SDRAM_RCDLY register  ********/
#define SDRAM_RCDLY_TRCD_SHIFT          (0)
#define SDRAM_RCDLY_TRCD_MASK           (0xF << SDRAM_RCDLY_TRCD_SHIFT) /*
                                                                         * TRCD
                                                                         */

/******** Bit definition for SDRAM_RI register  ********/
#define SDRAM_RI_TRI_SHIFT              (0)
#define SDRAM_RI_TRI_MASK               (0xFFFFFF << SDRAM_RI_TRI_SHIFT) /*
                                                                          * TRI
                                                                          */

/******** Bit definition for SDRAM_CBO register  ********/
#define SDRAM_CBO_DUMMY_SHIFT           (0)
#define SDRAM_CBO_DUMMY_MASK            (0xFFFFFFFF << SDRAM_CBO_DUMMY_SHIFT) /*
                                                                               * DUMMY
                                                                               */

/******** Bit definition for SDRAM_OR register  ********/
#define SDRAM_OR_DUMMY_SHIFT            (0)
#define SDRAM_OR_DUMMY_MASK             (0xFFFFFFFF << SDRAM_OR_DUMMY_SHIFT) /*
                                                                              * DUMMY
                                                                              */

/******** Bit definition for SDRAM_OS register  ********/
#define SDRAM_OS_CKEN                   (1 << 30)                       /*
                                                                         * CKEN
                                                                         */
#define SDRAM_OS_OPCODE_SHIFT           (28)
#define SDRAM_OS_OPCODE_MASK            (0x3 << SDRAM_OS_OPCODE_SHIFT)  /*
                                                                         * OPCODE
                                                                         */
#define SDRAM_OS_CS_SHIFT               (24)
#define SDRAM_OS_CS_MASK                (0x3 << SDRAM_OS_CS_SHIFT)      /* CS
                                                                         */
#define SDRAM_OS_BANKADD_SHIFT          (16)
#define SDRAM_OS_BANKADD_MASK           (0x3 << SDRAM_OS_BANKADD_SHIFT) /*
                                                                         * BANKADD
                                                                         */
#define SDRAM_OS_ADD_SHIFT              (0)
#define SDRAM_OS_ADD_MASK               (0x3FFF << SDRAM_OS_ADD_SHIFT)  /* ADD
                                                                         */

/******** Bit definition for SDRAM_WP register  ********/
#define SDRAM_WP_WP2                    (1 << 1)    /* WP2 */
#define SDRAM_WP_WP1                    (1 << 0)    /* WP1 */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SDRAM_H */
