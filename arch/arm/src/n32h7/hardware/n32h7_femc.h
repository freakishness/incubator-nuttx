/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_femc.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_FEMC_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_FEMC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_FEMC_STS_OFFSET             0x0     /* Memory Controller Status
                                                 * Register */
#define N32_FEMC_STS1_OFFSET            0x4     /* Memory Interface
                                                 * Configuration Register */
#define N32_FEMC_CFG_OFFSET             0x8     /* Set Configuration Register
                                                 */
#define N32_FEMC_CCFG_OFFSET            0xC     /* Clear Configuration
                                                 * Register */
#define N32_FEMC_CTRL_OFFSET            0x10    /* Direct Command Register */
#define N32_FEMC_TCFG_OFFSET            0x14    /* Set Cycles Register */
#define N32_FEMC_OMCFG_OFFSET           0x18    /* Set Operating Mode Register
                                                 */
#define N32_FEMC_RPE_OFFSET             0x20    /* Refresh Period 0 Register
                                                 */
#define N32_FEMC_FECM_SNTSTS1_OFFSET    0x100   /* SRAM chip 1 Cycles Register
                                                 */
#define N32_FEMC_FECM_SNTSTS2_OFFSET    0x120   /* SRAM chip 2 Cycles Register
                                                 */
#define N32_FEMC_FECM_SNTSTS3_OFFSET    0x140   /* SRAM chip 3 Cycles Register
                                                 */
#define N32_FEMC_FECM_SNTSTS4_OFFSET    0x160   /* SRAM chip 4 Cycles Register
                                                 */
#define N32_FEMC_FECM_NTSTS1_OFFSET     0x180   /* NAND chip 1 Cycles Register
                                                 */
#define N32_FEMC_FECM_NTSTS2_OFFSET     0x1A0   /* NAND chip 2 Cycles Register
                                                 */
#define N32_FEMC_SNOMSTS1_OFFSET        0x104   /* SRAM chip 1 Operating Mode
                                                 * Status Register */
#define N32_FEMC_SNOMSTS2_OFFSET        0x124   /* SRAM chip 3 Operating Mode
                                                 * Status Register */
#define N32_FEMC_SNOMSTS3_OFFSET        0x144   /* SRAM chip 3 Operating Mode
                                                 * Status Register */
#define N32_FEMC_SNOMSTS4_OFFSET        0x164   /* SRAM chip 4 Operating Mode
                                                 * Status Register */
#define N32_FEMC_NOMSTS1_OFFSET         0x184   /* NAND chip 1 Operating Mode
                                                 * Status Register */
#define N32_FEMC_NOMSTS2_OFFSET         0x1A4   /* NAND chip 2 Operating Mode
                                                 * Status Register */
#define N32_FEMC_ECCSTS_OFFSET          0x400   /* NAND ECC Status Register */
#define N32_FEMC_ECCCFG_OFFSET          0x404   /* NAND ECC Configuration
                                                 * Register */
#define N32_FEMC_ECCCMD0_OFFSET         0x408   /* NAND ECC Command 0 Register
                                                 */
#define N32_FEMC_ECCCMD1_OFFSET         0x40C   /* NAND ECC Command 1 Register
                                                 */
#define N32_FEMC_ECCADDR0_OFFSET        0x410   /* NAND ECC Address 0 Register
                                                 */
#define N32_FEMC_ECCADDR1_OFFSET        0x414   /* NAND ECC Address 1 Register
                                                 */
#define N32_FEMC_ECCBLK0_OFFSET         0x418   /* NAND ECC Block 0 Registers
                                                 */
#define N32_FEMC_ECCBLK1_OFFSET         0x41C   /* NAND ECC Block 1 Registers
                                                 */
#define N32_FEMC_ECCBLK2_OFFSET         0x420   /* NAND ECC Block 2 Registers
                                                 */
#define N32_FEMC_ECCBLK3_OFFSET         0x424   /* NAND ECC Block 3 Registers
                                                 */
#define N32_FEMC_ECCEBLK_OFFSET         0x428   /* NAND ECC Extra Block
                                                 * Register */
#define N32_FEMC_SNADD1_OFFSET          0x500   /* Set address 0_1 register */
#define N32_FEMC_SNADD2_OFFSET          0x504   /* Set address 0_2 register */
#define N32_FEMC_SNADD3_OFFSET          0x508   /* Set address 0_3 register */
#define N32_FEMC_SNADD4_OFFSET          0x50C   /* Set address 0_4 register */
#define N32_FEMC_NADDR1_OFFSET          0x510   /* Set address 1_1 register */
#define N32_FEMC_NADDR2_OFFSET          0x514   /* Set address 1_2 register */
#define N32_FEMC_SNMOD_OFFSET           0x520   /* SRAM miscellaneous mode
                                                 * register */
#define N32_FEMC_NMOD_OFFSET            0x524   /* NAND miscellaneous mode
                                                 * register */
#define N32_FEMC_REMAP_OFFSET           0x528   /* NAND REMAP */

#define N32_FEMC_STS                    (N32_FEMC_BASE + N32_FEMC_STS_OFFSET)
#define N32_FEMC_STS1                   (N32_FEMC_BASE + N32_FEMC_STS1_OFFSET)
#define N32_FEMC_CFG                    (N32_FEMC_BASE + N32_FEMC_CFG_OFFSET)
#define N32_FEMC_CCFG                   (N32_FEMC_BASE + N32_FEMC_CCFG_OFFSET)
#define N32_FEMC_CTRL                   (N32_FEMC_BASE + N32_FEMC_CTRL_OFFSET)
#define N32_FEMC_TCFG                   (N32_FEMC_BASE + N32_FEMC_TCFG_OFFSET)
#define N32_FEMC_OMCFG                  (N32_FEMC_BASE + \
                                         N32_FEMC_OMCFG_OFFSET)
#define N32_FEMC_RPE                    (N32_FEMC_BASE + N32_FEMC_RPE_OFFSET)
#define N32_FEMC_FECM_SNTSTS1           (N32_FEMC_BASE + \
                                         N32_FEMC_FECM_SNTSTS1_OFFSET)
#define N32_FEMC_FECM_SNTSTS2           (N32_FEMC_BASE + \
                                         N32_FEMC_FECM_SNTSTS2_OFFSET)
#define N32_FEMC_FECM_SNTSTS3           (N32_FEMC_BASE + \
                                         N32_FEMC_FECM_SNTSTS3_OFFSET)
#define N32_FEMC_FECM_SNTSTS4           (N32_FEMC_BASE + \
                                         N32_FEMC_FECM_SNTSTS4_OFFSET)
#define N32_FEMC_FECM_NTSTS1            (N32_FEMC_BASE + \
                                         N32_FEMC_FECM_NTSTS1_OFFSET)
#define N32_FEMC_FECM_NTSTS2            (N32_FEMC_BASE + \
                                         N32_FEMC_FECM_NTSTS2_OFFSET)
#define N32_FEMC_SNOMSTS1               (N32_FEMC_BASE + \
                                         N32_FEMC_SNOMSTS1_OFFSET)
#define N32_FEMC_SNOMSTS2               (N32_FEMC_BASE + \
                                         N32_FEMC_SNOMSTS2_OFFSET)
#define N32_FEMC_SNOMSTS3               (N32_FEMC_BASE + \
                                         N32_FEMC_SNOMSTS3_OFFSET)
#define N32_FEMC_SNOMSTS4               (N32_FEMC_BASE + \
                                         N32_FEMC_SNOMSTS4_OFFSET)
#define N32_FEMC_NOMSTS1                (N32_FEMC_BASE + \
                                         N32_FEMC_NOMSTS1_OFFSET)
#define N32_FEMC_NOMSTS2                (N32_FEMC_BASE + \
                                         N32_FEMC_NOMSTS2_OFFSET)
#define N32_FEMC_ECCSTS                 (N32_FEMC_BASE + \
                                         N32_FEMC_ECCSTS_OFFSET)
#define N32_FEMC_ECCCFG                 (N32_FEMC_BASE + \
                                         N32_FEMC_ECCCFG_OFFSET)
#define N32_FEMC_ECCCMD0                (N32_FEMC_BASE + \
                                         N32_FEMC_ECCCMD0_OFFSET)
#define N32_FEMC_ECCCMD1                (N32_FEMC_BASE + \
                                         N32_FEMC_ECCCMD1_OFFSET)
#define N32_FEMC_ECCADDR0               (N32_FEMC_BASE + \
                                         N32_FEMC_ECCADDR0_OFFSET)
#define N32_FEMC_ECCADDR1               (N32_FEMC_BASE + \
                                         N32_FEMC_ECCADDR1_OFFSET)
#define N32_FEMC_ECCBLK0                (N32_FEMC_BASE + \
                                         N32_FEMC_ECCBLK0_OFFSET)
#define N32_FEMC_ECCBLK1                (N32_FEMC_BASE + \
                                         N32_FEMC_ECCBLK1_OFFSET)
#define N32_FEMC_ECCBLK2                (N32_FEMC_BASE + \
                                         N32_FEMC_ECCBLK2_OFFSET)
#define N32_FEMC_ECCBLK3                (N32_FEMC_BASE + \
                                         N32_FEMC_ECCBLK3_OFFSET)
#define N32_FEMC_ECCEBLK                (N32_FEMC_BASE + \
                                         N32_FEMC_ECCEBLK_OFFSET)
#define N32_FEMC_SNADD1                 (N32_FEMC_BASE + \
                                         N32_FEMC_SNADD1_OFFSET)
#define N32_FEMC_SNADD2                 (N32_FEMC_BASE + \
                                         N32_FEMC_SNADD2_OFFSET)
#define N32_FEMC_SNADD3                 (N32_FEMC_BASE + \
                                         N32_FEMC_SNADD3_OFFSET)
#define N32_FEMC_SNADD4                 (N32_FEMC_BASE + \
                                         N32_FEMC_SNADD4_OFFSET)
#define N32_FEMC_NADDR1                 (N32_FEMC_BASE + \
                                         N32_FEMC_NADDR1_OFFSET)
#define N32_FEMC_NADDR2                 (N32_FEMC_BASE + \
                                         N32_FEMC_NADDR2_OFFSET)
#define N32_FEMC_SNMOD                  (N32_FEMC_BASE + \
                                         N32_FEMC_SNMOD_OFFSET)
#define N32_FEMC_NMOD                   (N32_FEMC_BASE + N32_FEMC_NMOD_OFFSET)
#define N32_FEMC_REMAP                  (N32_FEMC_BASE + \
                                         N32_FEMC_REMAP_OFFSET)

/******** Bit definition for FEMC_STS register  ********/
#define FEMC_STS_RECCINTF               (1 << 12)   /* RECCINTF */
#define FEMC_STS_ECCINTF                (1 << 10)   /* ECCINTF */
#define FEMC_STS_ECCINTENF              (1 << 8)    /* ECCINTENF */
#define FEMC_STS_RINT1F                 (1 << 6)    /* RINT1F */
#define FEMC_STS_RINT0F                 (1 << 5)    /* RINT0F */
#define FEMC_STS_INT1F                  (1 << 4)    /* INT1F */
#define FEMC_STS_INT0F                  (1 << 3)    /* INT0F */
#define FEMC_STS_INT1ENF                (1 << 2)    /* INT1ENF */
#define FEMC_STS_INT0ENF                (1 << 1)    /* INT0ENF */

/******** Bit definition for FEMC_STS1 register  ********/
#define FEMC_STS1_M0TYPE_SHIFT          (0)
#define FEMC_STS1_M0TYPE_MASK           (0x3 << FEMC_STS1_M0TYPE_SHIFT) /*
                                                                         * M0TYPE
                                                                         */

/******** Bit definition for FEMC_CFG register  ********/
#define FEMC_CFG_ASYNCADV               (1 << 8)    /* ASYNCADV */
#define FEMC_CFG_ECCINTEN               (1 << 6)    /* ECCINTEN */
#define FEMC_CFG_INT1EN                 (1 << 1)    /* INT1EN */
#define FEMC_CFG_INT0EN                 (1 << 0)    /* INT0EN */

/******** Bit definition for FEMC_CCFG register  ********/
#define FEMC_CCFG_ASYNCADVDIS           (1 << 8)    /* ASYNCADVDIS */
#define FEMC_CCFG_ECCINTDIS             (1 << 6)    /* ECCINTDIS */
#define FEMC_CCFG_INT1CLR               (1 << 4)    /* INT1CLR */
#define FEMC_CCFG_INT0CLR               (1 << 3)    /* INT0CLR */
#define FEMC_CCFG_INT1DIS               (1 << 1)    /* INT1DIS */
#define FEMC_CCFG_INT0DIS               (1 << 0)    /* INT0DIS */

/******** Bit definition for FEMC_CTRL register  ********/
#define FEMC_CTRL_CHIPNUM_SHIFT         (23)
#define FEMC_CTRL_CHIPNUM_MASK          (0x7 << FEMC_CTRL_CHIPNUM_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * CHIPNUM
                                                                             */
#define FEMC_CTRL_CMDTYPE_SHIFT         (21)
#define FEMC_CTRL_CMDTYPE_MASK          (0x3 << FEMC_CTRL_CMDTYPE_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * CMDTYPE
                                                                             */
#define FEMC_CTRL_CREPOL                (1 << 20)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * CREPOL
                                                                             */
#define FEMC_CTRL_ADDR_SHIFT            (0)
#define FEMC_CTRL_ADDR_MASK             (0xFFFFF << FEMC_CTRL_ADDR_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDR
                                                                             */

/******** Bit definition for FEMC_TCFG register  ********/
#define FEMC_TCFG_WERR_SHIFT            (20)
#define FEMC_TCFG_WERR_MASK             (0xF << FEMC_TCFG_WERR_SHIFT)   /*
                                                                         * WERR
                                                                         */
#define FEMC_TCFG_TRAR_SHIFT            (17)
#define FEMC_TCFG_TRAR_MASK             (0x7 << FEMC_TCFG_TRAR_SHIFT)   /*
                                                                         * TRAR
                                                                         */
#define FEMC_TCFG_PCCLR_SHIFT           (14)
#define FEMC_TCFG_PCCLR_MASK            (0x7 << FEMC_TCFG_PCCLR_SHIFT)  /*
                                                                         * PCCLR
                                                                         */
#define FEMC_TCFG_WP_SHIFT              (11)
#define FEMC_TCFG_WP_MASK               (0x7 << FEMC_TCFG_WP_SHIFT)     /* WP
                                                                         */
#define FEMC_TCFG_CERE_SHIFT            (8)
#define FEMC_TCFG_CERE_MASK             (0x7 << FEMC_TCFG_CERE_SHIFT)   /*
                                                                         * CERE
                                                                         */
#define FEMC_TCFG_WC_SHIFT              (4)
#define FEMC_TCFG_WC_MASK               (0xF << FEMC_TCFG_WC_SHIFT)     /* WC
                                                                         */
#define FEMC_TCFG_RC_SHIFT              (0)
#define FEMC_TCFG_RC_MASK               (0xF << FEMC_TCFG_RC_SHIFT)     /* RC
                                                                         */

/******** Bit definition for FEMC_OMCFG register  ********/
#define FEMC_OMCFG_BSTAGN_SHIFT         (13)
#define FEMC_OMCFG_BSTAGN_MASK          (0x7 << FEMC_OMCFG_BSTAGN_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * BSTAGN
                                                                             */
#define FEMC_OMCFG_BLSS                 (1 << 12)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * BLSS
                                                                             */
#define FEMC_OMCFG_ADV                  (1 << 11)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADV
                                                                             */
#define FEMC_OMCFG_BAA                  (1 << 10)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * BAA
                                                                             */
#define FEMC_OMCFG_WRBL_SHIFT           (7)
#define FEMC_OMCFG_WRBL_MASK            (0x7 << FEMC_OMCFG_WRBL_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * WRBL
                                                                             */
#define FEMC_OMCFG_WRSYNC               (1 << 6)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * WRSYNC
                                                                             */
#define FEMC_OMCFG_RDBL_SHIFT           (3)
#define FEMC_OMCFG_RDBL_MASK            (0x7 << FEMC_OMCFG_RDBL_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RDBL
                                                                             */
#define FEMC_OMCFG_RDSYNC               (1 << 2)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RDSYNC
                                                                             */
#define FEMC_OMCFG_MDBW_SHIFT           (0)
#define FEMC_OMCFG_MDBW_MASK            (0x3 << FEMC_OMCFG_MDBW_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * MDBW
                                                                             */

/******** Bit definition for FEMC_RPE register  ********/
#define FEMC_RPE_REFPRD_SHIFT           (0)
#define FEMC_RPE_REFPRD_MASK            (0xF << FEMC_RPE_REFPRD_SHIFT) /*
                                                                        * REFPRD
                                                                        */

/******** Bit definition for FECM_SNTSTS1 register  ********/
#define FEMC_FECM_SNTSTS1_WECS          (1 << 20)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WECS
                                                                                 */
#define FEMC_FECM_SNTSTS1_TR_SHIFT      (17)
#define FEMC_FECM_SNTSTS1_TR_MASK       (0x7 << FEMC_FECM_SNTSTS1_TR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TR
                                                                                 */
#define FEMC_FECM_SNTSTS1_PC_SHIFT      (14)
#define FEMC_FECM_SNTSTS1_PC_MASK       (0x7 << FEMC_FECM_SNTSTS1_PC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PC
                                                                                 */
#define FEMC_FECM_SNTSTS1_WP_SHIFT      (11)
#define FEMC_FECM_SNTSTS1_WP_MASK       (0x7 << FEMC_FECM_SNTSTS1_WP_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WP
                                                                                 */
#define FEMC_FECM_SNTSTS1_CEOE_SHIFT    (8)
#define FEMC_FECM_SNTSTS1_CEOE_MASK     (0x7 << FEMC_FECM_SNTSTS1_CEOE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CEOE
                                                                                 */
#define FEMC_FECM_SNTSTS1_WC_SHIFT      (4)
#define FEMC_FECM_SNTSTS1_WC_MASK       (0xF << FEMC_FECM_SNTSTS1_WC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WC
                                                                                 */
#define FEMC_FECM_SNTSTS1_RC_SHIFT      (0)
#define FEMC_FECM_SNTSTS1_RC_MASK       (0xF << FEMC_FECM_SNTSTS1_RC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RC
                                                                                 */

/******** Bit definition for FECM_SNTSTS2 register  ********/
#define FEMC_FECM_SNTSTS2_WECS          (1 << 20)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WECS
                                                                                 */
#define FEMC_FECM_SNTSTS2_TR_SHIFT      (17)
#define FEMC_FECM_SNTSTS2_TR_MASK       (0x7 << FEMC_FECM_SNTSTS2_TR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TR
                                                                                 */
#define FEMC_FECM_SNTSTS2_PC_SHIFT      (14)
#define FEMC_FECM_SNTSTS2_PC_MASK       (0x7 << FEMC_FECM_SNTSTS2_PC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PC
                                                                                 */
#define FEMC_FECM_SNTSTS2_WP_SHIFT      (11)
#define FEMC_FECM_SNTSTS2_WP_MASK       (0x7 << FEMC_FECM_SNTSTS2_WP_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WP
                                                                                 */
#define FEMC_FECM_SNTSTS2_CEOE_SHIFT    (8)
#define FEMC_FECM_SNTSTS2_CEOE_MASK     (0x7 << FEMC_FECM_SNTSTS2_CEOE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CEOE
                                                                                 */
#define FEMC_FECM_SNTSTS2_WC_SHIFT      (4)
#define FEMC_FECM_SNTSTS2_WC_MASK       (0xF << FEMC_FECM_SNTSTS2_WC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WC
                                                                                 */
#define FEMC_FECM_SNTSTS2_RC_SHIFT      (0)
#define FEMC_FECM_SNTSTS2_RC_MASK       (0xF << FEMC_FECM_SNTSTS2_RC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RC
                                                                                 */

/******** Bit definition for FECM_SNTSTS3 register  ********/
#define FEMC_FECM_SNTSTS3_WECS          (1 << 20)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WECS
                                                                                 */
#define FEMC_FECM_SNTSTS3_TR_SHIFT      (17)
#define FEMC_FECM_SNTSTS3_TR_MASK       (0x7 << FEMC_FECM_SNTSTS3_TR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TR
                                                                                 */
#define FEMC_FECM_SNTSTS3_PC_SHIFT      (14)
#define FEMC_FECM_SNTSTS3_PC_MASK       (0x7 << FEMC_FECM_SNTSTS3_PC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PC
                                                                                 */
#define FEMC_FECM_SNTSTS3_WP_SHIFT      (11)
#define FEMC_FECM_SNTSTS3_WP_MASK       (0x7 << FEMC_FECM_SNTSTS3_WP_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WP
                                                                                 */
#define FEMC_FECM_SNTSTS3_CEOE_SHIFT    (8)
#define FEMC_FECM_SNTSTS3_CEOE_MASK     (0x7 << FEMC_FECM_SNTSTS3_CEOE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CEOE
                                                                                 */
#define FEMC_FECM_SNTSTS3_WC_SHIFT      (4)
#define FEMC_FECM_SNTSTS3_WC_MASK       (0xF << FEMC_FECM_SNTSTS3_WC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WC
                                                                                 */
#define FEMC_FECM_SNTSTS3_RC_SHIFT      (0)
#define FEMC_FECM_SNTSTS3_RC_MASK       (0xF << FEMC_FECM_SNTSTS3_RC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RC
                                                                                 */

/******** Bit definition for FECM_SNTSTS4 register  ********/
#define FEMC_FECM_SNTSTS4_WECS          (1 << 20)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WECS
                                                                                 */
#define FEMC_FECM_SNTSTS4_TR_SHIFT      (17)
#define FEMC_FECM_SNTSTS4_TR_MASK       (0x7 << FEMC_FECM_SNTSTS4_TR_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * TR
                                                                                 */
#define FEMC_FECM_SNTSTS4_PC_SHIFT      (14)
#define FEMC_FECM_SNTSTS4_PC_MASK       (0x7 << FEMC_FECM_SNTSTS4_PC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * PC
                                                                                 */
#define FEMC_FECM_SNTSTS4_WP_SHIFT      (11)
#define FEMC_FECM_SNTSTS4_WP_MASK       (0x7 << FEMC_FECM_SNTSTS4_WP_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WP
                                                                                 */
#define FEMC_FECM_SNTSTS4_CEOE_SHIFT    (8)
#define FEMC_FECM_SNTSTS4_CEOE_MASK     (0x7 << FEMC_FECM_SNTSTS4_CEOE_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CEOE
                                                                                 */
#define FEMC_FECM_SNTSTS4_WC_SHIFT      (4)
#define FEMC_FECM_SNTSTS4_WC_MASK       (0xF << FEMC_FECM_SNTSTS4_WC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WC
                                                                                 */
#define FEMC_FECM_SNTSTS4_RC_SHIFT      (0)
#define FEMC_FECM_SNTSTS4_RC_MASK       (0xF << FEMC_FECM_SNTSTS4_RC_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RC
                                                                                 */

/******** Bit definition for FECM_NTSTS1 register  ********/
#define FEMC_FECM_NTSTS1_RR_SHIFT       (20)
#define FEMC_FECM_NTSTS1_RR_MASK        (0xF << FEMC_FECM_NTSTS1_RR_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RR
                                                                             */
#define FEMC_FECM_NTSTS1_AR_SHIFT       (17)
#define FEMC_FECM_NTSTS1_AR_MASK        (0x7 << FEMC_FECM_NTSTS1_AR_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * AR
                                                                             */
#define FEMC_FECM_NTSTS1_CLR_SHIFT      (14)
#define FEMC_FECM_NTSTS1_CLR_MASK       (0x7 << FEMC_FECM_NTSTS1_CLR_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * CLR
                                                                             */
#define FEMC_FECM_NTSTS1_WP_SHIFT       (11)
#define FEMC_FECM_NTSTS1_WP_MASK        (0x7 << FEMC_FECM_NTSTS1_WP_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * WP
                                                                             */
#define FEMC_FECM_NTSTS1_REA_SHIFT      (8)
#define FEMC_FECM_NTSTS1_REA_MASK       (0x7 << FEMC_FECM_NTSTS1_REA_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * REA
                                                                             */
#define FEMC_FECM_NTSTS1_WC_SHIFT       (4)
#define FEMC_FECM_NTSTS1_WC_MASK        (0xF << FEMC_FECM_NTSTS1_WC_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * WC
                                                                             */
#define FEMC_FECM_NTSTS1_RC_SHIFT       (0)
#define FEMC_FECM_NTSTS1_RC_MASK        (0xF << FEMC_FECM_NTSTS1_RC_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RC
                                                                             */

/******** Bit definition for FECM_NTSTS2 register  ********/
#define FEMC_FECM_NTSTS2_RR_SHIFT       (20)
#define FEMC_FECM_NTSTS2_RR_MASK        (0xF << FEMC_FECM_NTSTS2_RR_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RR
                                                                             */
#define FEMC_FECM_NTSTS2_AR_SHIFT       (17)
#define FEMC_FECM_NTSTS2_AR_MASK        (0x7 << FEMC_FECM_NTSTS2_AR_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * AR
                                                                             */
#define FEMC_FECM_NTSTS2_CLR_SHIFT      (14)
#define FEMC_FECM_NTSTS2_CLR_MASK       (0x7 << FEMC_FECM_NTSTS2_CLR_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * CLR
                                                                             */
#define FEMC_FECM_NTSTS2_WP_SHIFT       (11)
#define FEMC_FECM_NTSTS2_WP_MASK        (0x7 << FEMC_FECM_NTSTS2_WP_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * WP
                                                                             */
#define FEMC_FECM_NTSTS2_REA_SHIFT      (8)
#define FEMC_FECM_NTSTS2_REA_MASK       (0x7 << FEMC_FECM_NTSTS2_REA_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * REA
                                                                             */
#define FEMC_FECM_NTSTS2_WC_SHIFT       (4)
#define FEMC_FECM_NTSTS2_WC_MASK        (0xF << FEMC_FECM_NTSTS2_WC_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * WC
                                                                             */
#define FEMC_FECM_NTSTS2_RC_SHIFT       (0)
#define FEMC_FECM_NTSTS2_RC_MASK        (0xF << FEMC_FECM_NTSTS2_RC_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RC
                                                                             */

/******** Bit definition for FEMC_SNOMSTS1 register  ********/
#define FEMC_SNOMSTS1_ADDRMCH_SHIFT     (24)
#define FEMC_SNOMSTS1_ADDRMCH_MASK      (0xFF << FEMC_SNOMSTS1_ADDRMCH_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMCH
                                                                                 */
#define FEMC_SNOMSTS1_ADDRMSK_SHIFT     (16)
#define FEMC_SNOMSTS1_ADDRMSK_MASK      (0xFF << FEMC_SNOMSTS1_ADDRMSK_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMSK
                                                                                 */
#define FEMC_SNOMSTS1_BSTAGN_SHIFT      (13)
#define FEMC_SNOMSTS1_BSTAGN_MASK       (0x7 << FEMC_SNOMSTS1_BSTAGN_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BSTAGN
                                                                                 */
#define FEMC_SNOMSTS1_BLSS              (1 << 12)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLSS
                                                                                 */
#define FEMC_SNOMSTS1_ADV               (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADV
                                                                                 */
#define FEMC_SNOMSTS1_BAA               (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BAA
                                                                                 */
#define FEMC_SNOMSTS1_WRBL_SHIFT        (7)
#define FEMC_SNOMSTS1_WRBL_MASK         (0x7 << FEMC_SNOMSTS1_WRBL_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WRBL
                                                                                 */
#define FEMC_SNOMSTS1_WRSYN             (1 << 6)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WRSYN
                                                                                 */
#define FEMC_SNOMSTS1_RDBL_SHIFT        (3)
#define FEMC_SNOMSTS1_RDBL_MASK         (0x7 << FEMC_SNOMSTS1_RDBL_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDBL
                                                                                 */
#define FEMC_SNOMSTS1_RDSYN             (1 << 2)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDSYN
                                                                                 */
#define FEMC_SNOMSTS1_MDBW_SHIFT        (0)
#define FEMC_SNOMSTS1_MDBW_MASK         (0x3 << FEMC_SNOMSTS1_MDBW_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MDBW
                                                                                 */

/******** Bit definition for FEMC_SNOMSTS2 register  ********/
#define FEMC_SNOMSTS2_ADDRMCH_SHIFT     (24)
#define FEMC_SNOMSTS2_ADDRMCH_MASK      (0xFF << FEMC_SNOMSTS2_ADDRMCH_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMCH
                                                                                 */
#define FEMC_SNOMSTS2_ADDRMSK_SHIFT     (16)
#define FEMC_SNOMSTS2_ADDRMSK_MASK      (0xFF << FEMC_SNOMSTS2_ADDRMSK_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMSK
                                                                                 */
#define FEMC_SNOMSTS2_BSTAGN_SHIFT      (13)
#define FEMC_SNOMSTS2_BSTAGN_MASK       (0x7 << FEMC_SNOMSTS2_BSTAGN_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BSTAGN
                                                                                 */
#define FEMC_SNOMSTS2_BLSS              (1 << 12)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLSS
                                                                                 */
#define FEMC_SNOMSTS2_ADV               (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADV
                                                                                 */
#define FEMC_SNOMSTS2_BAA               (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BAA
                                                                                 */
#define FEMC_SNOMSTS2_WRBL_SHIFT        (7)
#define FEMC_SNOMSTS2_WRBL_MASK         (0x7 << FEMC_SNOMSTS2_WRBL_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WRBL
                                                                                 */
#define FEMC_SNOMSTS2_WRSYN             (1 << 6)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WRSYN
                                                                                 */
#define FEMC_SNOMSTS2_RDBL_SHIFT        (3)
#define FEMC_SNOMSTS2_RDBL_MASK         (0x7 << FEMC_SNOMSTS2_RDBL_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDBL
                                                                                 */
#define FEMC_SNOMSTS2_RDSYN             (1 << 2)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDSYN
                                                                                 */
#define FEMC_SNOMSTS2_MDBW_SHIFT        (0)
#define FEMC_SNOMSTS2_MDBW_MASK         (0x3 << FEMC_SNOMSTS2_MDBW_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MDBW
                                                                                 */

/******** Bit definition for FEMC_SNOMSTS3 register  ********/
#define FEMC_SNOMSTS3_ADDRMCH_SHIFT     (24)
#define FEMC_SNOMSTS3_ADDRMCH_MASK      (0xFF << FEMC_SNOMSTS3_ADDRMCH_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMCH
                                                                                 */
#define FEMC_SNOMSTS3_ADDRMSK_SHIFT     (16)
#define FEMC_SNOMSTS3_ADDRMSK_MASK      (0xFF << FEMC_SNOMSTS3_ADDRMSK_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMSK
                                                                                 */
#define FEMC_SNOMSTS3_BSTAGN_SHIFT      (13)
#define FEMC_SNOMSTS3_BSTAGN_MASK       (0x7 << FEMC_SNOMSTS3_BSTAGN_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BSTAGN
                                                                                 */
#define FEMC_SNOMSTS3_BLSS              (1 << 12)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLSS
                                                                                 */
#define FEMC_SNOMSTS3_ADV               (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADV
                                                                                 */
#define FEMC_SNOMSTS3_BAA               (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BAA
                                                                                 */
#define FEMC_SNOMSTS3_WRBL_SHIFT        (7)
#define FEMC_SNOMSTS3_WRBL_MASK         (0x7 << FEMC_SNOMSTS3_WRBL_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WRBL
                                                                                 */
#define FEMC_SNOMSTS3_WRSYN             (1 << 6)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WRSYN
                                                                                 */
#define FEMC_SNOMSTS3_RDBL_SHIFT        (3)
#define FEMC_SNOMSTS3_RDBL_MASK         (0x7 << FEMC_SNOMSTS3_RDBL_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDBL
                                                                                 */
#define FEMC_SNOMSTS3_RDSYN             (1 << 2)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDSYN
                                                                                 */
#define FEMC_SNOMSTS3_MDBW_SHIFT        (0)
#define FEMC_SNOMSTS3_MDBW_MASK         (0x3 << FEMC_SNOMSTS3_MDBW_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MDBW
                                                                                 */

/******** Bit definition for FEMC_SNOMSTS4 register  ********/
#define FEMC_SNOMSTS4_ADDRMCH_SHIFT     (24)
#define FEMC_SNOMSTS4_ADDRMCH_MASK      (0xFF << FEMC_SNOMSTS4_ADDRMCH_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMCH
                                                                                 */
#define FEMC_SNOMSTS4_ADDRMSK_SHIFT     (16)
#define FEMC_SNOMSTS4_ADDRMSK_MASK      (0xFF << FEMC_SNOMSTS4_ADDRMSK_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMSK
                                                                                 */
#define FEMC_SNOMSTS4_BSTAGN_SHIFT      (13)
#define FEMC_SNOMSTS4_BSTAGN_MASK       (0x7 << FEMC_SNOMSTS4_BSTAGN_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BSTAGN
                                                                                 */
#define FEMC_SNOMSTS4_BLSS              (1 << 12)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLSS
                                                                                 */
#define FEMC_SNOMSTS4_ADV               (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADV
                                                                                 */
#define FEMC_SNOMSTS4_BAA               (1 << 10)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BAA
                                                                                 */
#define FEMC_SNOMSTS4_WRBL_SHIFT        (7)
#define FEMC_SNOMSTS4_WRBL_MASK         (0x7 << FEMC_SNOMSTS4_WRBL_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WRBL
                                                                                 */
#define FEMC_SNOMSTS4_WRSYN             (1 << 6)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WRSYN
                                                                                 */
#define FEMC_SNOMSTS4_RDBL_SHIFT        (3)
#define FEMC_SNOMSTS4_RDBL_MASK         (0x7 << FEMC_SNOMSTS4_RDBL_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDBL
                                                                                 */
#define FEMC_SNOMSTS4_RDSYN             (1 << 2)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDSYN
                                                                                 */
#define FEMC_SNOMSTS4_MDBW_SHIFT        (0)
#define FEMC_SNOMSTS4_MDBW_MASK         (0x3 << FEMC_SNOMSTS4_MDBW_SHIFT)       /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MDBW
                                                                                 */

/******** Bit definition for FEMC_NOMSTS1 register  ********/
#define FEMC_NOMSTS1_ADDRMCH_SHIFT      (24)
#define FEMC_NOMSTS1_ADDRMCH_MASK       (0xFF << FEMC_NOMSTS1_ADDRMCH_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMCH
                                                                                 */
#define FEMC_NOMSTS1_ADDRMSK_SHIFT      (16)
#define FEMC_NOMSTS1_ADDRMSK_MASK       (0xFF << FEMC_NOMSTS1_ADDRMSK_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMSK
                                                                                 */
#define FEMC_NOMSTS1_MDBW_SHIFT         (0)
#define FEMC_NOMSTS1_MDBW_MASK          (0x3 << FEMC_NOMSTS1_MDBW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MDBW
                                                                                 */

/******** Bit definition for FEMC_NOMSTS2 register  ********/
#define FEMC_NOMSTS2_ADDRMCH_SHIFT      (24)
#define FEMC_NOMSTS2_ADDRMCH_MASK       (0xFF << FEMC_NOMSTS2_ADDRMCH_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMCH
                                                                                 */
#define FEMC_NOMSTS2_ADDRMSK_SHIFT      (16)
#define FEMC_NOMSTS2_ADDRMSK_MASK       (0xFF << FEMC_NOMSTS2_ADDRMSK_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ADDRMSK
                                                                                 */
#define FEMC_NOMSTS2_MDBW_SHIFT         (0)
#define FEMC_NOMSTS2_MDBW_MASK          (0x3 << FEMC_NOMSTS2_MDBW_SHIFT)        /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * MDBW
                                                                                 */

/******** Bit definition for FEMC_ECCSTS register  ********/
#define FEMC_ECCSTS_RDF_SHIFT           (25)
#define FEMC_ECCSTS_RDF_MASK            (0x1F << FEMC_ECCSTS_RDF_SHIFT)     /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RDF
                                                                             */
#define FEMC_ECCSTS_CORCTF_SHIFT        (20)
#define FEMC_ECCSTS_CORCTF_MASK         (0x1F << FEMC_ECCSTS_CORCTF_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * CORCTF
                                                                             */
#define FEMC_ECCSTS_ERRF_SHIFT          (15)
#define FEMC_ECCSTS_ERRF_MASK           (0x1F << FEMC_ECCSTS_ERRF_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ERRF
                                                                             */
#define FEMC_ECCSTS_VLDF_SHIFT          (10)
#define FEMC_ECCSTS_VLDF_MASK           (0x1F << FEMC_ECCSTS_VLDF_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * VLDF
                                                                             */
#define FEMC_ECCSTS_WRF                 (1 << 9)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * WRF
                                                                             */
#define FEMC_ECCSTS_LASTS_SHIFT         (7)
#define FEMC_ECCSTS_LASTS_MASK          (0x3 << FEMC_ECCSTS_LASTS_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * LASTS
                                                                             */
#define FEMC_ECCSTS_BUSY                (1 << 6)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * BUSY
                                                                             */
#define FEMC_ECCSTS_INTF_SHIFT          (0)
#define FEMC_ECCSTS_INTF_MASK           (0x3F << FEMC_ECCSTS_INTF_SHIFT)    /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * INTF
                                                                             */

/******** Bit definition for FEMC_ECCCFG register  ********/
#define FEMC_ECCCFG_EBLKSIZ_SHIFT       (11)
#define FEMC_ECCCFG_EBLKSIZ_MASK        (0x3 << FEMC_ECCCFG_EBLKSIZ_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EBLKSIZ
                                                                             */
#define FEMC_ECCCFG_EBLKEN              (1 << 10)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * EBLKEN
                                                                             */
#define FEMC_ECCCFG_ABTINT              (1 << 9)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ABTINT
                                                                             */
#define FEMC_ECCCFG_RDCINT              (1 << 8)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RDCINT
                                                                             */
#define FEMC_ECCCFG_A8OUTMSK            (1 << 7)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * A8OUTMSK
                                                                             */
#define FEMC_ECCCFG_JUMP_SHIFT          (5)
#define FEMC_ECCCFG_JUMP_MASK           (0x3 << FEMC_ECCCFG_JUMP_SHIFT)     /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * JUMP
                                                                             */
#define FEMC_ECCCFG_RMOD                (1 << 4)                            /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RMOD
                                                                             */
#define FEMC_ECCCFG_MOD_SHIFT           (2)
#define FEMC_ECCCFG_MOD_MASK            (0x3 << FEMC_ECCCFG_MOD_SHIFT)      /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * MOD
                                                                             */
#define FEMC_ECCCFG_BLKNUM_SHIFT        (0)
#define FEMC_ECCCFG_BLKNUM_MASK         (0x3 << FEMC_ECCCFG_BLKNUM_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * BLKNUM
                                                                             */

/******** Bit definition for FEMC_ECCCMD0 register  ********/
#define FEMC_ECCCMD0_UEND               (1 << 24)                           /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * UEND
                                                                             */
#define FEMC_ECCCMD0_RDEND_SHIFT        (16)
#define FEMC_ECCCMD0_RDEND_MASK         (0xFF << FEMC_ECCCMD0_RDEND_SHIFT)  /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RDEND
                                                                             */
#define FEMC_ECCCMD0_RD_SHIFT           (8)
#define FEMC_ECCCMD0_RD_MASK            (0xFF << FEMC_ECCCMD0_RD_SHIFT)     /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RD
                                                                             */
#define FEMC_ECCCMD0_WR_SHIFT           (0)
#define FEMC_ECCCMD0_WR_MASK            (0xFF << FEMC_ECCCMD0_WR_SHIFT)     /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * WR
                                                                             */

/******** Bit definition for FEMC_ECCCMD1 register  ********/
#define FEMC_ECCCMD1_UEND               (1 << 24)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * UEND
                                                                                 */
#define FEMC_ECCCMD1_RDCOLEND_SHIFT     (16)
#define FEMC_ECCCMD1_RDCOLEND_MASK      (0xFF << FEMC_ECCCMD1_RDCOLEND_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDCOLEND
                                                                                 */
#define FEMC_ECCCMD1_RDCOL_SHIFT        (8)
#define FEMC_ECCCMD1_RDCOL_MASK         (0xFF << FEMC_ECCCMD1_RDCOL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDCOL
                                                                                 */
#define FEMC_ECCCMD1_WRCOL_SHIFT        (0)
#define FEMC_ECCCMD1_WRCOL_MASK         (0xFF << FEMC_ECCCMD1_WRCOL_SHIFT)      /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * WRCOL
                                                                                 */

/******** Bit definition for FEMC_ECCADDR0 register  ********/
#define FEMC_ECCADDR0_ADDR_SHIFT        (0)
#define FEMC_ECCADDR0_ADDR_MASK         (0xFFFFFFFF << \
                                         FEMC_ECCADDR0_ADDR_SHIFT)       /*
                                                                          * ADDR
                                                                          */

/******** Bit definition for FEMC_ECCADDR1 register  ********/
#define FEMC_ECCADDR1_ADDR_SHIFT        (0)
#define FEMC_ECCADDR1_ADDR_MASK         (0xFFFFFF << FEMC_ECCADDR1_ADDR_SHIFT) /*
                                                                                *
                                                                                *
                                                                                *
                                                                                * ADDR
                                                                                */

/******** Bit definition for FEMC_ECCBLK0 register  ********/
#define FEMC_ECCBLK0_INTF               (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTF
                                                                                 */
#define FEMC_ECCBLK0_VALDF              (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VALDF
                                                                                 */
#define FEMC_ECCBLK0_RDF                (1 << 29)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDF
                                                                                 */
#define FEMC_ECCBLK0_ERRF               (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ERRF
                                                                                 */
#define FEMC_ECCBLK0_CRTF               (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CRTF
                                                                                 */
#define FEMC_ECCBLK0_VAL_SHIFT          (0)
#define FEMC_ECCBLK0_VAL_MASK           (0xFFFFFF << FEMC_ECCBLK0_VAL_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VAL
                                                                                 */

/******** Bit definition for FEMC_ECCBLK1 register  ********/
#define FEMC_ECCBLK1_INTF               (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTF
                                                                                 */
#define FEMC_ECCBLK1_VALDF              (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VALDF
                                                                                 */
#define FEMC_ECCBLK1_RDF                (1 << 29)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDF
                                                                                 */
#define FEMC_ECCBLK1_ERRF               (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ERRF
                                                                                 */
#define FEMC_ECCBLK1_CRTF               (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CRTF
                                                                                 */
#define FEMC_ECCBLK1_VAL_SHIFT          (0)
#define FEMC_ECCBLK1_VAL_MASK           (0xFFFFFF << FEMC_ECCBLK1_VAL_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VAL
                                                                                 */

/******** Bit definition for FEMC_ECCBLK2 register  ********/
#define FEMC_ECCBLK2_INTF               (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTF
                                                                                 */
#define FEMC_ECCBLK2_VALDF              (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VALDF
                                                                                 */
#define FEMC_ECCBLK2_RDF                (1 << 29)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDF
                                                                                 */
#define FEMC_ECCBLK2_ERRF               (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ERRF
                                                                                 */
#define FEMC_ECCBLK2_CRTF               (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CRTF
                                                                                 */
#define FEMC_ECCBLK2_VAL_SHIFT          (0)
#define FEMC_ECCBLK2_VAL_MASK           (0xFFFFFF << FEMC_ECCBLK2_VAL_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VAL
                                                                                 */

/******** Bit definition for FEMC_ECCBLK3 register  ********/
#define FEMC_ECCBLK3_INTF               (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTF
                                                                                 */
#define FEMC_ECCBLK3_VALDF              (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VALDF
                                                                                 */
#define FEMC_ECCBLK3_RDF                (1 << 29)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDF
                                                                                 */
#define FEMC_ECCBLK3_ERRF               (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ERRF
                                                                                 */
#define FEMC_ECCBLK3_CRTF               (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CRTF
                                                                                 */
#define FEMC_ECCBLK3_VAL_SHIFT          (0)
#define FEMC_ECCBLK3_VAL_MASK           (0xFFFFFF << FEMC_ECCBLK3_VAL_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VAL
                                                                                 */

/******** Bit definition for FEMC_ECCEBLK register  ********/
#define FEMC_ECCEBLK_INTF               (1 << 31)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INTF
                                                                                 */
#define FEMC_ECCEBLK_VALDF              (1 << 30)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VALDF
                                                                                 */
#define FEMC_ECCEBLK_RDF                (1 << 29)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * RDF
                                                                                 */
#define FEMC_ECCEBLK_ERRF               (1 << 28)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * ERRF
                                                                                 */
#define FEMC_ECCEBLK_CRTF               (1 << 27)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * CRTF
                                                                                 */
#define FEMC_ECCEBLK_VAL_SHIFT          (0)
#define FEMC_ECCEBLK_VAL_MASK           (0xFFFFFF << FEMC_ECCEBLK_VAL_SHIFT)    /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VAL
                                                                                 */

/******** Bit definition for FEMC_SNADD1 register  ********/
#define FEMC_SNADD1_ADDRMCH_SHIFT       (24)
#define FEMC_SNADD1_ADDRMCH_MASK        (0xFF << FEMC_SNADD1_ADDRMCH_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMCH
                                                                             */
#define FEMC_SNADD1_ADDRMSK_SHIFT       (16)
#define FEMC_SNADD1_ADDRMSK_MASK        (0xFF << FEMC_SNADD1_ADDRMSK_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMSK
                                                                             */

/******** Bit definition for FEMC_SNADD2 register  ********/
#define FEMC_SNADD2_ADDRMCH_SHIFT       (24)
#define FEMC_SNADD2_ADDRMCH_MASK        (0xFF << FEMC_SNADD2_ADDRMCH_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMCH
                                                                             */
#define FEMC_SNADD2_ADDRMSK_SHIFT       (16)
#define FEMC_SNADD2_ADDRMSK_MASK        (0xFF << FEMC_SNADD2_ADDRMSK_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMSK
                                                                             */

/******** Bit definition for FEMC_SNADD3 register  ********/
#define FEMC_SNADD3_ADDRMCH_SHIFT       (24)
#define FEMC_SNADD3_ADDRMCH_MASK        (0xFF << FEMC_SNADD3_ADDRMCH_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMCH
                                                                             */
#define FEMC_SNADD3_ADDRMSK_SHIFT       (16)
#define FEMC_SNADD3_ADDRMSK_MASK        (0xFF << FEMC_SNADD3_ADDRMSK_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMSK
                                                                             */

/******** Bit definition for FEMC_SNADD4 register  ********/
#define FEMC_SNADD4_ADDRMCH_SHIFT       (24)
#define FEMC_SNADD4_ADDRMCH_MASK        (0xFF << FEMC_SNADD4_ADDRMCH_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMCH
                                                                             */
#define FEMC_SNADD4_ADDRMSK_SHIFT       (16)
#define FEMC_SNADD4_ADDRMSK_MASK        (0xFF << FEMC_SNADD4_ADDRMSK_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMSK
                                                                             */

/******** Bit definition for FEMC_NADDR1 register  ********/
#define FEMC_NADDR1_ADDRMCH_SHIFT       (24)
#define FEMC_NADDR1_ADDRMCH_MASK        (0xFF << FEMC_NADDR1_ADDRMCH_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMCH
                                                                             */
#define FEMC_NADDR1_ADDRMSK_SHIFT       (16)
#define FEMC_NADDR1_ADDRMSK_MASK        (0xFF << FEMC_NADDR1_ADDRMSK_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMSK
                                                                             */

/******** Bit definition for FEMC_NADDR2 register  ********/
#define FEMC_NADDR2_ADDRMCH_SHIFT       (24)
#define FEMC_NADDR2_ADDRMCH_MASK        (0xFF << FEMC_NADDR2_ADDRMCH_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMCH
                                                                             */
#define FEMC_NADDR2_ADDRMSK_SHIFT       (16)
#define FEMC_NADDR2_ADDRMSK_MASK        (0xFF << FEMC_NADDR2_ADDRMSK_SHIFT) /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * ADDRMSK
                                                                             */

/******** Bit definition for FEMC_SNMOD register  ********/
#define FEMC_SNMOD_MUXEN                (1 << 5)                        /*
                                                                         * MUXEN
                                                                         */
#define FEMC_SNMOD_AGTM                 (1 << 4)                        /*
                                                                         * AGTM
                                                                         */
#define FEMC_SNMOD_SYNC                 (1 << 3)                        /*
                                                                         * SYNC
                                                                         */
#define FEMC_SNMOD_BANKEN               (1 << 2)                        /*
                                                                         * BANKEN
                                                                         */
#define FEMC_SNMOD_MDBW_SHIFT           (0)
#define FEMC_SNMOD_MDBW_MASK            (0x3 << FEMC_SNMOD_MDBW_SHIFT)  /*
                                                                         * MDBW
                                                                         */

/******** Bit definition for FEMC_NMOD register  ********/
#define FEMC_NMOD_CSL                   (1 << 6)    /* CSL */
#define FEMC_NMOD_BOOTEN                (1 << 5)    /* BOOTEN */
#define FEMC_NMOD_AGTM                  (1 << 4)    /* AGTM */
#define FEMC_NMOD_SYNC                  (1 << 3)    /* SYNC */
#define FEMC_NMOD_BANKEN                (1 << 2)    /* BANKEN */
#define FEMC_NMOD_MDBW                  (1 << 0)    /* MDBW */

/******** Bit definition for FEMC_REMAP register  ********/
#define FEMC_REMAP_REMAP                (1 << 0) /* REMAP */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_FEMC_H */
