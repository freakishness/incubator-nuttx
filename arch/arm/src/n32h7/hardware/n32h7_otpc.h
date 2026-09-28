/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_otpc.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_OTPC_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_OTPC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_OTPC_CTRL_OFFSET                0x0     /* OTPC Control Register
                                                     */
#define N32_OTPC_STS_OFFSET                 0x4     /* OTPC Status Register */
#define N32_OTPC_KEY_OFFSET                 0x8     /* OTPC Key Regsiter */
#define N32_OTPC_USC_OFFSET                 0xC     /* OTPC Us Counter
                                                     * Register */
#define N32_OTPC_ADDR_OFFSET                0x10    /* OTPC Address Register
                                                     */
#define N32_OTPC_RDATA_OFFSET               0x14    /* OTPC Read Data Register
                                                     */
#define N32_OTPC_WDATA_OFFSET               0x18    /* OTPC Write Data
                                                     * Regsiter */
#define N32_OTPC_SECJVLD_OFFSET             0x20    /* nan */
#define N32_OTPC_SECMDVLD_OFFSET            0x28    /* nan */
#define N32_OTPC_RDP2PVLD_OFFSET            0x30    /* nan */
#define N32_OTPC_BTMVLD_OFFSET              0x38    /* nan */
#define N32_OTPC_BORVLD_OFFSET              0x3C    /* nan */
#define N32_OTPC_IWDGVLD_OFFSET             0x40    /* nan */
#define N32_OTPC_TCMSZVLD_OFFSET            0x44    /* nan */
#define N32_OTPC_JTAGKVLD_OFFSET            0x50    /* nan */
#define N32_OTPC_REKU1VLD_OFFSET            0x54    /* nan */
#define N32_OTPC_REKU2VLD_OFFSET            0x58    /* nan */
#define N32_OTPC_REKU3VLD_OFFSET            0x5C    /* nan */
#define N32_OTPC_REKU4V_OFFSET              0x60    /* nan */
#define N32_OTPC_IDKU1VLD_OFFSET            0x64    /* nan */
#define N32_OTPC_IDKU2VLD_OFFSET            0x68    /* nan */
#define N32_OTPC_IDKU3VLD_OFFSET            0x6C    /* nan */
#define N32_OTPC_IDKU4VLD_OFFSET            0x70    /* nan */
#define N32_OTPC_UMUU0_OFFSET               0x74    /* OTPC USRMEM Unused 0 */
#define N32_OTPC_UMUU1_OFFSET               0x78    /* OTPC USRMEM Unused 1 */
#define N32_OTPC_UMUU2_OFFSET               0x7C    /* OTPC USRMEM Unused 2 */
#define N32_OTPC_UMUU3_OFFSET               0x80    /* OTPC USRMEM Unused 3 */
#define N32_OTPC_UMUU4_OFFSET               0x84    /* OTPC USRMEM Unused 4 */
#define N32_OTPC_UMUU5_OFFSET               0x88    /* OTPC USRMEM Unused 5 */
#define N32_OTPC_UMUU6_OFFSET               0x8C    /* OTPC USRMEM Unused 6 */
#define N32_OTPC_UMUU7_OFFSET               0x90    /* OTPC USRMEM Unused 7 */
#define N32_OTPC_CRLD1_OFFSET               0xB8    /* nan */
#define N32_OTPC_CRLD2_OFFSET               0xBC    /* nan */

#define N32_OTPC_CTRL                       (N32_OTPC_BASE + \
                                             N32_OTPC_CTRL_OFFSET)
#define N32_OTPC_STS                        (N32_OTPC_BASE + \
                                             N32_OTPC_STS_OFFSET)
#define N32_OTPC_KEY                        (N32_OTPC_BASE + \
                                             N32_OTPC_KEY_OFFSET)
#define N32_OTPC_USC                        (N32_OTPC_BASE + \
                                             N32_OTPC_USC_OFFSET)
#define N32_OTPC_ADDR                       (N32_OTPC_BASE + \
                                             N32_OTPC_ADDR_OFFSET)
#define N32_OTPC_RDATA                      (N32_OTPC_BASE + \
                                             N32_OTPC_RDATA_OFFSET)
#define N32_OTPC_WDATA                      (N32_OTPC_BASE + \
                                             N32_OTPC_WDATA_OFFSET)
#define N32_OTPC_SECJVLD                    (N32_OTPC_BASE + \
                                             N32_OTPC_SECJVLD_OFFSET)
#define N32_OTPC_SECMDVLD                   (N32_OTPC_BASE + \
                                             N32_OTPC_SECMDVLD_OFFSET)
#define N32_OTPC_RDP2PVLD                   (N32_OTPC_BASE + \
                                             N32_OTPC_RDP2PVLD_OFFSET)
#define N32_OTPC_BTMVLD                     (N32_OTPC_BASE + \
                                             N32_OTPC_BTMVLD_OFFSET)
#define N32_OTPC_BORVLD                     (N32_OTPC_BASE + \
                                             N32_OTPC_BORVLD_OFFSET)
#define N32_OTPC_IWDGVLD                    (N32_OTPC_BASE + \
                                             N32_OTPC_IWDGVLD_OFFSET)
#define N32_OTPC_TCMSZVLD                   (N32_OTPC_BASE + \
                                             N32_OTPC_TCMSZVLD_OFFSET)
#define N32_OTPC_JTAGKVLD                   (N32_OTPC_BASE + \
                                             N32_OTPC_JTAGKVLD_OFFSET)
#define N32_OTPC_REKU1VLD                   (N32_OTPC_BASE + \
                                             N32_OTPC_REKU1VLD_OFFSET)
#define N32_OTPC_REKU2VLD                   (N32_OTPC_BASE + \
                                             N32_OTPC_REKU2VLD_OFFSET)
#define N32_OTPC_REKU3VLD                   (N32_OTPC_BASE + \
                                             N32_OTPC_REKU3VLD_OFFSET)
#define N32_OTPC_REKU4V                     (N32_OTPC_BASE + \
                                             N32_OTPC_REKU4V_OFFSET)
#define N32_OTPC_IDKU1VLD                   (N32_OTPC_BASE + \
                                             N32_OTPC_IDKU1VLD_OFFSET)
#define N32_OTPC_IDKU2VLD                   (N32_OTPC_BASE + \
                                             N32_OTPC_IDKU2VLD_OFFSET)
#define N32_OTPC_IDKU3VLD                   (N32_OTPC_BASE + \
                                             N32_OTPC_IDKU3VLD_OFFSET)
#define N32_OTPC_IDKU4VLD                   (N32_OTPC_BASE + \
                                             N32_OTPC_IDKU4VLD_OFFSET)
#define N32_OTPC_UMUU0                      (N32_OTPC_BASE + \
                                             N32_OTPC_UMUU0_OFFSET)
#define N32_OTPC_UMUU1                      (N32_OTPC_BASE + \
                                             N32_OTPC_UMUU1_OFFSET)
#define N32_OTPC_UMUU2                      (N32_OTPC_BASE + \
                                             N32_OTPC_UMUU2_OFFSET)
#define N32_OTPC_UMUU3                      (N32_OTPC_BASE + \
                                             N32_OTPC_UMUU3_OFFSET)
#define N32_OTPC_UMUU4                      (N32_OTPC_BASE + \
                                             N32_OTPC_UMUU4_OFFSET)
#define N32_OTPC_UMUU5                      (N32_OTPC_BASE + \
                                             N32_OTPC_UMUU5_OFFSET)
#define N32_OTPC_UMUU6                      (N32_OTPC_BASE + \
                                             N32_OTPC_UMUU6_OFFSET)
#define N32_OTPC_UMUU7                      (N32_OTPC_BASE + \
                                             N32_OTPC_UMUU7_OFFSET)
#define N32_OTPC_CRLD1                      (N32_OTPC_BASE + \
                                             N32_OTPC_CRLD1_OFFSET)
#define N32_OTPC_CRLD2                      (N32_OTPC_BASE + \
                                             N32_OTPC_CRLD2_OFFSET)

/******** Bit definition for OTPC_CTRL register  ********/
#define OTPC_CTRL_BEEN                      (1 << 6)    /* BEEN */
#define OTPC_CTRL_OOREEN                    (1 << 5)    /* OOREEN */
#define OTPC_CTRL_RDPEEN                    (1 << 4)    /* RDPEEN */
#define OTPC_CTRL_WRPEEN                    (1 << 3)    /* WRPEEN */
#define OTPC_CTRL_PGEEN                     (1 << 2)    /* PGEEN */
#define OTPC_CTRL_PRMD                      (1 << 1)    /* PRMD */
#define OTPC_CTRL_LOCK                      (1 << 0)    /* LOCK */

/******** Bit definition for OTPC_STS register  ********/
#define OTPC_STS_BE                         (1 << 6)    /* BE */
#define OTPC_STS_OORE                       (1 << 5)    /* OORE */
#define OTPC_STS_RDPE                       (1 << 4)    /* RDPE */
#define OTPC_STS_WRPE                       (1 << 3)    /* WRPE */
#define OTPC_STS_PGE                        (1 << 2)    /* PGE */
#define OTPC_STS_KEYE                       (1 << 1)    /* KEYE */
#define OTPC_STS_BUSY                       (1 << 0)    /* BUSY */

/******** Bit definition for OTPC_KEY register  ********/
#define OTPC_KEY_KEY_SHIFT                  (0)
#define OTPC_KEY_KEY_MASK                   (0xFFFFFFFF << OTPC_KEY_KEY_SHIFT) /*
                                                                                *
                                                                                * KEY
                                                                                */

/******** Bit definition for OTPC_USC register  ********/
#define OTPC_USC_VAL_SHIFT                  (0)
#define OTPC_USC_VAL_MASK                   (0x1FF << OTPC_USC_VAL_SHIFT) /*
                                                                           * VAL
                                                                           */

/******** Bit definition for OTPC_ADDR register  ********/
#define OTPC_ADDR_ADDR_SHIFT                (0)
#define OTPC_ADDR_ADDR_MASK                 (0xFFFFFFFF << \
                                             OTPC_ADDR_ADDR_SHIFT) /* ADDR */

/******** Bit definition for OTPC_RDATA register  ********/
#define OTPC_RDATA_DAT_SHIFT                (0)
#define OTPC_RDATA_DAT_MASK                 (0xFFFFFFFF << \
                                             OTPC_RDATA_DAT_SHIFT) /* DAT */

/******** Bit definition for OTPC_WDATA register  ********/
#define OTPC_WDATA_DAT_SHIFT                (0)
#define OTPC_WDATA_DAT_MASK                 (0xFFFFFFFF << \
                                             OTPC_WDATA_DAT_SHIFT) /* DAT */

/******** Bit definition for OTPC_SECJVLD register  ********/
#define OTPC_SECJVLD_USR_NVR_VLD_SHIFT      (0)
#define OTPC_SECJVLD_USR_NVR_VLD_MASK       (0xFFFF << \
                                             OTPC_SECJVLD_USR_NVR_VLD_SHIFT)     /*
                                                                                  *
                                                                                  * USR_NVR_VLD
                                                                                  */

/******** Bit definition for OTPC_SECMDVLD register  ********/
#define OTPC_SECMDVLD_USR_NVR_VLD_SHIFT     (0)
#define OTPC_SECMDVLD_USR_NVR_VLD_MASK      (0xFFFF << \
                                             OTPC_SECMDVLD_USR_NVR_VLD_SHIFT)      /*
                                                                                    *
                                                                                    * USR_NVR_VLD
                                                                                    */

/******** Bit definition for OTPC_RDP2PVLD register  ********/
#define OTPC_RDP2PVLD_USR_NVR_VLD_SHIFT     (0)
#define OTPC_RDP2PVLD_USR_NVR_VLD_MASK      (0xFFFF << \
                                             OTPC_RDP2PVLD_USR_NVR_VLD_SHIFT)      /*
                                                                                    *
                                                                                    * USR_NVR_VLD
                                                                                    */

/******** Bit definition for OTPC_BTMVLD register  ********/
#define OTPC_BTMVLD_USR_NVR_VLD_SHIFT       (0)
#define OTPC_BTMVLD_USR_NVR_VLD_MASK        (0xFFFF << \
                                             OTPC_BTMVLD_USR_NVR_VLD_SHIFT)    /*
                                                                                *
                                                                                * USR_NVR_VLD
                                                                                */

/******** Bit definition for OTPC_BORVLD register  ********/
#define OTPC_BORVLD_USR_NVR_VLD_SHIFT       (0)
#define OTPC_BORVLD_USR_NVR_VLD_MASK        (0xFFFF << \
                                             OTPC_BORVLD_USR_NVR_VLD_SHIFT)    /*
                                                                                *
                                                                                * USR_NVR_VLD
                                                                                */

/******** Bit definition for OTPC_IWDGVLD register  ********/
#define OTPC_IWDGVLD_USR_NVR_VLD_SHIFT      (0)
#define OTPC_IWDGVLD_USR_NVR_VLD_MASK       (0xFFFF << \
                                             OTPC_IWDGVLD_USR_NVR_VLD_SHIFT)     /*
                                                                                  *
                                                                                  * USR_NVR_VLD
                                                                                  */

/******** Bit definition for OTPC_TCMSZVLD register  ********/
#define OTPC_TCMSZVLD_USR_NVR_VLD_SHIFT     (0)
#define OTPC_TCMSZVLD_USR_NVR_VLD_MASK      (0xFFFF << \
                                             OTPC_TCMSZVLD_USR_NVR_VLD_SHIFT)      /*
                                                                                    *
                                                                                    * USR_NVR_VLD
                                                                                    */

/******** Bit definition for OTPC_JTAGKVLD register  ********/
#define OTPC_JTAGKVLD_USR_NVR_VLD_SHIFT     (0)
#define OTPC_JTAGKVLD_USR_NVR_VLD_MASK      (0xFFFF << \
                                             OTPC_JTAGKVLD_USR_NVR_VLD_SHIFT)      /*
                                                                                    *
                                                                                    * USR_NVR_VLD
                                                                                    */

/******** Bit definition for OTPC_REKU1VLD register  ********/
#define OTPC_REKU1VLD_USR_NVR_VLD_SHIFT     (0)
#define OTPC_REKU1VLD_USR_NVR_VLD_MASK      (0xFFFF << \
                                             OTPC_REKU1VLD_USR_NVR_VLD_SHIFT)      /*
                                                                                    *
                                                                                    * USR_NVR_VLD
                                                                                    */

/******** Bit definition for OTPC_REKU2VLD register  ********/
#define OTPC_REKU2VLD_USR_NVR_VLD_SHIFT     (0)
#define OTPC_REKU2VLD_USR_NVR_VLD_MASK      (0xFFFF << \
                                             OTPC_REKU2VLD_USR_NVR_VLD_SHIFT)      /*
                                                                                    *
                                                                                    * USR_NVR_VLD
                                                                                    */

/******** Bit definition for OTPC_REKU3VLD register  ********/
#define OTPC_REKU3VLD_USR_NVR_VLD_SHIFT     (0)
#define OTPC_REKU3VLD_USR_NVR_VLD_MASK      (0xFFFF << \
                                             OTPC_REKU3VLD_USR_NVR_VLD_SHIFT)      /*
                                                                                    *
                                                                                    * USR_NVR_VLD
                                                                                    */

/******** Bit definition for OTPC_REKU4V register  ********/
#define OTPC_REKU4V_USR_NVR_VLD_SHIFT       (0)
#define OTPC_REKU4V_USR_NVR_VLD_MASK        (0xFFFF << \
                                             OTPC_REKU4V_USR_NVR_VLD_SHIFT)    /*
                                                                                *
                                                                                * USR_NVR_VLD
                                                                                */

/******** Bit definition for OTPC_IDKU1VLD register  ********/
#define OTPC_IDKU1VLD_USR_NVR_VLD_SHIFT     (0)
#define OTPC_IDKU1VLD_USR_NVR_VLD_MASK      (0xFFFF << \
                                             OTPC_IDKU1VLD_USR_NVR_VLD_SHIFT)      /*
                                                                                    *
                                                                                    * USR_NVR_VLD
                                                                                    */

/******** Bit definition for OTPC_IDKU2VLD register  ********/
#define OTPC_IDKU2VLD_USR_NVR_VLD_SHIFT     (0)
#define OTPC_IDKU2VLD_USR_NVR_VLD_MASK      (0xFFFF << \
                                             OTPC_IDKU2VLD_USR_NVR_VLD_SHIFT)      /*
                                                                                    *
                                                                                    * USR_NVR_VLD
                                                                                    */

/******** Bit definition for OTPC_IDKU3VLD register  ********/
#define OTPC_IDKU3VLD_USR_NVR_VLD_SHIFT     (0)
#define OTPC_IDKU3VLD_USR_NVR_VLD_MASK      (0xFFFF << \
                                             OTPC_IDKU3VLD_USR_NVR_VLD_SHIFT)      /*
                                                                                    *
                                                                                    * USR_NVR_VLD
                                                                                    */

/******** Bit definition for OTPC_IDKU4VLD register  ********/
#define OTPC_IDKU4VLD_USR_NVR_VLD_SHIFT     (0)
#define OTPC_IDKU4VLD_USR_NVR_VLD_MASK      (0xFFFF << \
                                             OTPC_IDKU4VLD_USR_NVR_VLD_SHIFT)      /*
                                                                                    *
                                                                                    * USR_NVR_VLD
                                                                                    */

/******** Bit definition for OTPC_UMUU0 register  ********/
#define OTPC_UMUU0_UU_SHIFT                 (0)
#define OTPC_UMUU0_UU_MASK                  (0xFFFFFFFF << \
                                             OTPC_UMUU0_UU_SHIFT) /* UU */

/******** Bit definition for OTPC_UMUU1 register  ********/
#define OTPC_UMUU1_UU_SHIFT                 (0)
#define OTPC_UMUU1_UU_MASK                  (0xFFFFFFFF << \
                                             OTPC_UMUU1_UU_SHIFT) /* UU */

/******** Bit definition for OTPC_UMUU2 register  ********/
#define OTPC_UMUU2_UU_SHIFT                 (0)
#define OTPC_UMUU2_UU_MASK                  (0xFFFFFFFF << \
                                             OTPC_UMUU2_UU_SHIFT) /* UU */

/******** Bit definition for OTPC_UMUU3 register  ********/
#define OTPC_UMUU3_UU_SHIFT                 (0)
#define OTPC_UMUU3_UU_MASK                  (0xFFFFFFFF << \
                                             OTPC_UMUU3_UU_SHIFT) /* UU */

/******** Bit definition for OTPC_UMUU4 register  ********/
#define OTPC_UMUU4_UU_SHIFT                 (0)
#define OTPC_UMUU4_UU_MASK                  (0xFFFFFFFF << \
                                             OTPC_UMUU4_UU_SHIFT) /* UU */

/******** Bit definition for OTPC_UMUU5 register  ********/
#define OTPC_UMUU5_UU_SHIFT                 (0)
#define OTPC_UMUU5_UU_MASK                  (0xFFFFFFFF << \
                                             OTPC_UMUU5_UU_SHIFT) /* UU */

/******** Bit definition for OTPC_UMUU6 register  ********/
#define OTPC_UMUU6_UU_SHIFT                 (0)
#define OTPC_UMUU6_UU_MASK                  (0xFFFFFFFF << \
                                             OTPC_UMUU6_UU_SHIFT) /* UU */

/******** Bit definition for OTPC_UMUU7 register  ********/
#define OTPC_UMUU7_UU_SHIFT                 (0)
#define OTPC_UMUU7_UU_MASK                  (0xFFFFFFFF << \
                                             OTPC_UMUU7_UU_SHIFT) /* UU */

/******** Bit definition for OTPC_CRLD1 register  ********/
#define OTPC_CRLD1_NRIWDG_SHIFT             (16)
#define OTPC_CRLD1_NRIWDG_MASK              (0x3FFF << \
                                             OTPC_CRLD1_NRIWDG_SHIFT)       /*
                                                                             *
                                                                             * NRIWDG
                                                                             */
#define OTPC_CRLD1_BOR_SHIFT                (12)
#define OTPC_CRLD1_BOR_MASK                 (0x7 << OTPC_CRLD1_BOR_SHIFT)   /*
                                                                             *
                                                                             * BOR
                                                                             */
#define OTPC_CRLD1_SJAG_SHIFT               (0)
#define OTPC_CRLD1_SJAG_MASK                (0xF << OTPC_CRLD1_SJAG_SHIFT)  /*
                                                                             *
                                                                             * SJAG
                                                                             */

/******** Bit definition for OTPC_CRLD2 register  ********/
#define OTPC_CRLD2_L2MD                     (1 << 12)                           /*
                                                                                 *
                                                                                 * L2MD
                                                                                 */
#define OTPC_CRLD2_L1MD                     (1 << 11)                           /*
                                                                                 *
                                                                                 * L1MD
                                                                                 */
#define OTPC_CRLD2_L0MD                     (1 << 10)                           /*
                                                                                 *
                                                                                 * L0MD
                                                                                 */
#define OTPC_CRLD2_ROOTMD                   (1 << 9)                            /*
                                                                                 *
                                                                                 * ROOTMD
                                                                                 */
#define OTPC_CRLD2_INITMD                   (1 << 8)                            /*
                                                                                 *
                                                                                 * INITMD
                                                                                 */
#define OTPC_CRLD2_TCMSZ_SHIFT              (0)
#define OTPC_CRLD2_TCMSZ_MASK               (0x3F << OTPC_CRLD2_TCMSZ_SHIFT)    /*
                                                                                 *
                                                                                 * TCMSZ
                                                                                 */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_OTPC_H */
