/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_sdhost.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SDHOST_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SDHOST_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_SDHOST_DSADD_OFFSET             0x0     /* SDMA System Address /
                                                     * Argument 2 */
#define N32_SDHOST_BLKCFG_OFFSET            0x4     /* Block count and size
                                                     * configure register */
#define N32_SDHOST_CMDARG1_OFFSET           0x8     /* Argument1 register */
#define N32_SDHOST_TMODE_OFFSET             0xC     /* nan */
#define N32_SDHOST_CMDRSP0_OFFSET           0x10    /* Command Response 0 */
#define N32_SDHOST_CMDRSP1_OFFSET           0x14    /* Command Response 0 */
#define N32_SDHOST_CMDRSP2_OFFSET           0x18    /* Command Response 0 */
#define N32_SDHOST_CMDRSP3_OFFSET           0x1C    /* Command Response 0 */
#define N32_SDHOST_BUFDAT_OFFSET            0x20    /* nan */
#define N32_SDHOST_PRESTS_OFFSET            0x24    /* Present state register
                                                     */
#define N32_SDHOST_CTRL1_OFFSET             0x28    /* nan */
#define N32_SDHOST_CTRL2_OFFSET             0x2C    /* nan */
#define N32_SDHOST_INTSTS_OFFSET            0x30    /* nan */
#define N32_SDHOST_IE_OFFSET                0x34    /* nan */
#define N32_SDHOST_ISE_OFFSET               0x38    /* nan */
#define N32_SDHOST_CTRLSTS_OFFSET           0x3C    /* nan */
#define N32_SDHOST_CAP0STS_OFFSET           0x40    /* nan */
#define N32_SDHOST_CAP1STS_OFFSET           0x44    /* nan */
#define N32_SDHOST_STSFE_OFFSET             0x50    /* nan */
#define N32_SDHOST_ADMAESTS_OFFSET          0x54    /* nan */
#define N32_SDHOST_ASADD0_OFFSET            0x58    /* nan */
#define N32_SDHOST_ASADD1_OFFSET            0x5C    /* nan */
#define N32_SDHOST_PV0STS_OFFSET            0x60    /* nan */
#define N32_SDHOST_PV1STS_OFFSET            0x64    /* nan */
#define N32_SDHOST_PV2STS_OFFSET            0x68    /* nan */
#define N32_SDHOST_PV3STS_OFFSET            0x6C    /* nan */
#define N32_SDHOST_BOOTTCTRL_OFFSET         0x70    /* nan */

#define N32_SDHOST1_DSADD                   (N32_SDHOST1_BASE + \
                                             N32_SDHOST_DSADD_OFFSET)
#define N32_SDHOST1_BLKCFG                  (N32_SDHOST1_BASE + \
                                             N32_SDHOST_BLKCFG_OFFSET)
#define N32_SDHOST1_CMDARG1                 (N32_SDHOST1_BASE + \
                                             N32_SDHOST_CMDARG1_OFFSET)
#define N32_SDHOST1_TMODE                   (N32_SDHOST1_BASE + \
                                             N32_SDHOST_TMODE_OFFSET)
#define N32_SDHOST1_CMDRSP0                 (N32_SDHOST1_BASE + \
                                             N32_SDHOST_CMDRSP0_OFFSET)
#define N32_SDHOST1_CMDRSP1                 (N32_SDHOST1_BASE + \
                                             N32_SDHOST_CMDRSP1_OFFSET)
#define N32_SDHOST1_CMDRSP2                 (N32_SDHOST1_BASE + \
                                             N32_SDHOST_CMDRSP2_OFFSET)
#define N32_SDHOST1_CMDRSP3                 (N32_SDHOST1_BASE + \
                                             N32_SDHOST_CMDRSP3_OFFSET)
#define N32_SDHOST1_BUFDAT                  (N32_SDHOST1_BASE + \
                                             N32_SDHOST_BUFDAT_OFFSET)
#define N32_SDHOST1_PRESTS                  (N32_SDHOST1_BASE + \
                                             N32_SDHOST_PRESTS_OFFSET)
#define N32_SDHOST1_CTRL1                   (N32_SDHOST1_BASE + \
                                             N32_SDHOST_CTRL1_OFFSET)
#define N32_SDHOST1_CTRL2                   (N32_SDHOST1_BASE + \
                                             N32_SDHOST_CTRL2_OFFSET)
#define N32_SDHOST1_INTSTS                  (N32_SDHOST1_BASE + \
                                             N32_SDHOST_INTSTS_OFFSET)
#define N32_SDHOST1_IE                      (N32_SDHOST1_BASE + \
                                             N32_SDHOST_IE_OFFSET)
#define N32_SDHOST1_ISE                     (N32_SDHOST1_BASE + \
                                             N32_SDHOST_ISE_OFFSET)
#define N32_SDHOST1_CTRLSTS                 (N32_SDHOST1_BASE + \
                                             N32_SDHOST_CTRLSTS_OFFSET)
#define N32_SDHOST1_CAP0STS                 (N32_SDHOST1_BASE + \
                                             N32_SDHOST_CAP0STS_OFFSET)
#define N32_SDHOST1_CAP1STS                 (N32_SDHOST1_BASE + \
                                             N32_SDHOST_CAP1STS_OFFSET)
#define N32_SDHOST1_STSFE                   (N32_SDHOST1_BASE + \
                                             N32_SDHOST_STSFE_OFFSET)
#define N32_SDHOST1_ADMAESTS                (N32_SDHOST1_BASE + \
                                             N32_SDHOST_ADMAESTS_OFFSET)
#define N32_SDHOST1_ASADD0                  (N32_SDHOST1_BASE + \
                                             N32_SDHOST_ASADD0_OFFSET)
#define N32_SDHOST1_ASADD1                  (N32_SDHOST1_BASE + \
                                             N32_SDHOST_ASADD1_OFFSET)
#define N32_SDHOST1_PV0STS                  (N32_SDHOST1_BASE + \
                                             N32_SDHOST_PV0STS_OFFSET)
#define N32_SDHOST1_PV1STS                  (N32_SDHOST1_BASE + \
                                             N32_SDHOST_PV1STS_OFFSET)
#define N32_SDHOST1_PV2STS                  (N32_SDHOST1_BASE + \
                                             N32_SDHOST_PV2STS_OFFSET)
#define N32_SDHOST1_PV3STS                  (N32_SDHOST1_BASE + \
                                             N32_SDHOST_PV3STS_OFFSET)
#define N32_SDHOST1_BOOTTCTRL               (N32_SDHOST1_BASE + \
                                             N32_SDHOST_BOOTTCTRL_OFFSET)

#define N32_SDHOST2_DSADD                   (N32_SDHOST2_BASE + \
                                             N32_SDHOST_DSADD_OFFSET)
#define N32_SDHOST2_BLKCFG                  (N32_SDHOST2_BASE + \
                                             N32_SDHOST_BLKCFG_OFFSET)
#define N32_SDHOST2_CMDARG1                 (N32_SDHOST2_BASE + \
                                             N32_SDHOST_CMDARG1_OFFSET)
#define N32_SDHOST2_TMODE                   (N32_SDHOST2_BASE + \
                                             N32_SDHOST_TMODE_OFFSET)
#define N32_SDHOST2_CMDRSP0                 (N32_SDHOST2_BASE + \
                                             N32_SDHOST_CMDRSP0_OFFSET)
#define N32_SDHOST2_CMDRSP1                 (N32_SDHOST2_BASE + \
                                             N32_SDHOST_CMDRSP1_OFFSET)
#define N32_SDHOST2_CMDRSP2                 (N32_SDHOST2_BASE + \
                                             N32_SDHOST_CMDRSP2_OFFSET)
#define N32_SDHOST2_CMDRSP3                 (N32_SDHOST2_BASE + \
                                             N32_SDHOST_CMDRSP3_OFFSET)
#define N32_SDHOST2_BUFDAT                  (N32_SDHOST2_BASE + \
                                             N32_SDHOST_BUFDAT_OFFSET)
#define N32_SDHOST2_PRESTS                  (N32_SDHOST2_BASE + \
                                             N32_SDHOST_PRESTS_OFFSET)
#define N32_SDHOST2_CTRL1                   (N32_SDHOST2_BASE + \
                                             N32_SDHOST_CTRL1_OFFSET)
#define N32_SDHOST2_CTRL2                   (N32_SDHOST2_BASE + \
                                             N32_SDHOST_CTRL2_OFFSET)
#define N32_SDHOST2_INTSTS                  (N32_SDHOST2_BASE + \
                                             N32_SDHOST_INTSTS_OFFSET)
#define N32_SDHOST2_IE                      (N32_SDHOST2_BASE + \
                                             N32_SDHOST_IE_OFFSET)
#define N32_SDHOST2_ISE                     (N32_SDHOST2_BASE + \
                                             N32_SDHOST_ISE_OFFSET)
#define N32_SDHOST2_CTRLSTS                 (N32_SDHOST2_BASE + \
                                             N32_SDHOST_CTRLSTS_OFFSET)
#define N32_SDHOST2_CAP0STS                 (N32_SDHOST2_BASE + \
                                             N32_SDHOST_CAP0STS_OFFSET)
#define N32_SDHOST2_CAP1STS                 (N32_SDHOST2_BASE + \
                                             N32_SDHOST_CAP1STS_OFFSET)
#define N32_SDHOST2_STSFE                   (N32_SDHOST2_BASE + \
                                             N32_SDHOST_STSFE_OFFSET)
#define N32_SDHOST2_ADMAESTS                (N32_SDHOST2_BASE + \
                                             N32_SDHOST_ADMAESTS_OFFSET)
#define N32_SDHOST2_ASADD0                  (N32_SDHOST2_BASE + \
                                             N32_SDHOST_ASADD0_OFFSET)
#define N32_SDHOST2_ASADD1                  (N32_SDHOST2_BASE + \
                                             N32_SDHOST_ASADD1_OFFSET)
#define N32_SDHOST2_PV0STS                  (N32_SDHOST2_BASE + \
                                             N32_SDHOST_PV0STS_OFFSET)
#define N32_SDHOST2_PV1STS                  (N32_SDHOST2_BASE + \
                                             N32_SDHOST_PV1STS_OFFSET)
#define N32_SDHOST2_PV2STS                  (N32_SDHOST2_BASE + \
                                             N32_SDHOST_PV2STS_OFFSET)
#define N32_SDHOST2_PV3STS                  (N32_SDHOST2_BASE + \
                                             N32_SDHOST_PV3STS_OFFSET)
#define N32_SDHOST2_BOOTTCTRL               (N32_SDHOST2_BASE + \
                                             N32_SDHOST_BOOTTCTRL_OFFSET)

/******** Bit definition for SDHOST_DSADD register  ********/
#define SDHOST_DSADD_ADD_SHIFT              (0)
#define SDHOST_DSADD_ADD_MASK               (0xFFFFFFFF << \
  SDHOST_DSADD_ADD_SHIFT)                                            /* ADD */

/******** Bit definition for SDHOST_BLKCFG register  ********/
#define SDHOST_BLKCFG_CNT_SHIFT             (16)
#define SDHOST_BLKCFG_CNT_MASK              (0xFFFF << \
  SDHOST_BLKCFG_CNT_SHIFT)                                                      /*
                                                                                 * CNT
                                                                                 */
#define SDHOST_BLKCFG_HDBS_SHIFT            (12)
#define SDHOST_BLKCFG_HDBS_MASK             (0x7 << SDHOST_BLKCFG_HDBS_SHIFT)   /*
                                                                                 * HDBS
                                                                                 */
#define SDHOST_BLKCFG_SIZE_SHIFT            (0)
#define SDHOST_BLKCFG_SIZE_MASK             (0xFFF << \
  SDHOST_BLKCFG_SIZE_SHIFT)                                         /* SIZE */

/******** Bit definition for SDHOST_CMDARG1 register  ********/
#define SDHOST_CMDARG1_ARG1_SHIFT           (0)
#define SDHOST_CMDARG1_ARG1_MASK            (0xFFFFFFFF << \
  SDHOST_CMDARG1_ARG1_SHIFT)                                               /*
                                                                            * ARG1
                                                                            */

/******** Bit definition for SDHOST_TMODE register  ********/
#define SDHOST_TMODE_INDEX_SHIFT            (24)
#define SDHOST_TMODE_INDEX_MASK             (0x3F << SDHOST_TMODE_INDEX_SHIFT)  /*
                                                                                 * INDEX
                                                                                 */
#define SDHOST_TMODE_TYPE_SHIFT             (22)
#define SDHOST_TMODE_TYPE_MASK              (0x3 << SDHOST_TMODE_TYPE_SHIFT)    /*
                                                                                 * TYPE
                                                                                 */
#define SDHOST_TMODE_DPRESEL                (1 << 21)                           /*
                                                                                 * DPRESEL
                                                                                 */
#define SDHOST_TMODE_INDEXCK                (1 << 20)                           /*
                                                                                 * INDEXCK
                                                                                 */
#define SDHOST_TMODE_CRCCK                  (1 << 19)                           /*
                                                                                 * CRCCK
                                                                                 */
#define SDHOST_TMODE_RTYPESEL_SHIFT         (16)
#define SDHOST_TMODE_RTYPESEL_MASK          (0x3 << \
  SDHOST_TMODE_RTYPESEL_SHIFT)                          /* RTYPESEL */
#define SDHOST_TMODE_BLKSEL                 (1 << 5)    /* BLKSEL */
#define SDHOST_TMODE_DATDIR                 (1 << 4)    /* DATDIR */
#define SDHOST_TMODE_AUTOCMDE_SHIFT         (2)
#define SDHOST_TMODE_AUTOCMDE_MASK          (0x3 << \
  SDHOST_TMODE_AUTOCMDE_SHIFT)                          /* AUTOCMDE */
#define SDHOST_TMODE_BLOCKCNTE              (1 << 1)    /* BLOCKCNTE */
#define SDHOST_TMODE_DMAE                   (1 << 0)    /* DMAE */

/******** Bit definition for SDHOST_CMDRSP0 register  ********/
#define SDHOST_CMDRSP0_RESP_SHIFT           (0)
#define SDHOST_CMDRSP0_RESP_MASK            (0xFFFFFFFF << \
  SDHOST_CMDRSP0_RESP_SHIFT)                                               /*
                                                                            * RESP
                                                                            */

/******** Bit definition for SDHOST_CMDRSP1 register  ********/
#define SDHOST_CMDRSP1_RESP_SHIFT           (0)
#define SDHOST_CMDRSP1_RESP_MASK            (0xFFFFFFFF << \
  SDHOST_CMDRSP1_RESP_SHIFT)                                               /*
                                                                            * RESP
                                                                            */

/******** Bit definition for SDHOST_CMDRSP2 register  ********/
#define SDHOST_CMDRSP2_RESP_SHIFT           (0)
#define SDHOST_CMDRSP2_RESP_MASK            (0xFFFFFFFF << \
  SDHOST_CMDRSP2_RESP_SHIFT)                                               /*
                                                                            * RESP
                                                                            */

/******** Bit definition for SDHOST_CMDRSP3 register  ********/
#define SDHOST_CMDRSP3_RESP_SHIFT           (0)
#define SDHOST_CMDRSP3_RESP_MASK            (0xFFFFFFFF << \
  SDHOST_CMDRSP3_RESP_SHIFT)                                               /*
                                                                            * RESP
                                                                            */

/******** Bit definition for SDHOST_BUFDAT register  ********/
#define SDHOST_BUFDAT_DAT_SHIFT             (0)
#define SDHOST_BUFDAT_DAT_MASK              (0xFFFFFFFF << \
  SDHOST_BUFDAT_DAT_SHIFT)                                             /* DAT
                                                                        */

/******** Bit definition for SDHOST_PRESTS register  ********/
#define SDHOST_PRESTS_DATLH_SHIFT           (25)
#define SDHOST_PRESTS_DATLH_MASK            (0xF << SDHOST_PRESTS_DATLH_SHIFT)  /*
                                                                                 * DATLH
                                                                                 */
#define SDHOST_PRESTS_CMDL                  (1 << 24)                           /*
                                                                                 * CMDL
                                                                                 */
#define SDHOST_PRESTS_DATLL_SHIFT           (20)
#define SDHOST_PRESTS_DATLL_MASK            (0xF << SDHOST_PRESTS_DATLL_SHIFT)  /*
                                                                                 * DATLL
                                                                                 */
#define SDHOST_PRESTS_SDWPL                 (1 << 19)                           /*
                                                                                 * SDWPL
                                                                                 */
#define SDHOST_PRESTS_SDCDL                 (1 << 18)                           /*
                                                                                 * SDCDL
                                                                                 */
#define SDHOST_PRESTS_CSTSL                 (1 << 17)                           /*
                                                                                 * CSTSL
                                                                                 */
#define SDHOST_PRESTS_CINS                  (1 << 16)                           /*
                                                                                 * CINS
                                                                                 */
#define SDHOST_PRESTS_BUFR                  (1 << 11)                           /*
                                                                                 * BUFR
                                                                                 */
#define SDHOST_PRESTS_BUFW                  (1 << 10)                           /*
                                                                                 * BUFW
                                                                                 */
#define SDHOST_PRESTS_RTRANACT              (1 << 9)                            /*
                                                                                 * RTRANACT
                                                                                 */
#define SDHOST_PRESTS_WTRANACT              (1 << 8)                            /*
                                                                                 * WTRANACT
                                                                                 */
#define SDHOST_PRESTS_RETUNREQ              (1 << 3)                            /*
                                                                                 * RETUNREQ
                                                                                 */
#define SDHOST_PRESTS_DLACT                 (1 << 2)                            /*
                                                                                 * DLACT
                                                                                 */
#define SDHOST_PRESTS_CMDINHD               (1 << 1)                            /*
                                                                                 * CMDINHD
                                                                                 */
#define SDHOST_PRESTS_CMDINHC               (1 << 0)                            /*
                                                                                 * CMDINHC
                                                                                 */

/******** Bit definition for SDHOST_CTRL1 register  ********/
#define SDHOST_CTRL1_RMVWKUP                (1 << 26)   /* RMVWKUP */
#define SDHOST_CTRL1_INSTWKUP               (1 << 25)   /* INSTWKUP */
#define SDHOST_CTRL1_INTWKUP                (1 << 24)   /* INTWKUP */
#define SDHOST_CTRL1_BOOTACKC               (1 << 23)   /* BOOTACKC */
#define SDHOST_CTRL1_BOOTINALT              (1 << 22)   /* BOOTINALT */
#define SDHOST_CTRL1_BOOTEN                 (1 << 21)   /* BOOTEN */
#define SDHOST_CTRL1_SPIMODE                (1 << 20)   /* SPIMODE */
#define SDHOST_CTRL1_INTATBG                (1 << 19)   /* INTATBG */
#define SDHOST_CTRL1_RWAITCTRL              (1 << 18)   /* RWAITCTRL */
#define SDHOST_CTRL1_CONTREQ                (1 << 17)   /* CONTREQ */
#define SDHOST_CTRL1_SABGREQ                (1 << 16)   /* SABGREQ */
#define SDHOST_CTRL1_HWRST                  (1 << 12)   /* HWRST */
#define SDHOST_CTRL1_SDBVSEL_SHIFT          (9)
#define SDHOST_CTRL1_SDBVSEL_MASK           (0x7 << \
  SDHOST_CTRL1_SDBVSEL_SHIFT)                                                   /*
                                                                                 * SDBVSEL
                                                                                 */
#define SDHOST_CTRL1_SDPWR                  (1 << 8)                            /*
                                                                                 * SDPWR
                                                                                 */
#define SDHOST_CTRL1_CDSD                   (1 << 7)                            /*
                                                                                 * CDSD
                                                                                 */
#define SDHOST_CTRL1_CDTL                   (1 << 6)                            /*
                                                                                 * CDTL
                                                                                 */
#define SDHOST_CTRL1_EDTWIDTH               (1 << 5)                            /*
                                                                                 * EDTWIDTH
                                                                                 */
#define SDHOST_CTRL1_DMASEL_SHIFT           (3)
#define SDHOST_CTRL1_DMASEL_MASK            (0x3 << SDHOST_CTRL1_DMASEL_SHIFT)  /*
                                                                                 * DMASEL
                                                                                 */
#define SDHOST_CTRL1_HSEN                   (1 << 2)                            /*
                                                                                 * HSEN
                                                                                 */
#define SDHOST_CTRL1_DTWIDTH                (1 << 1)                            /*
                                                                                 * DTWIDTH
                                                                                 */
#define SDHOST_CTRL1_LEDCTRL                (1 << 0)                            /*
                                                                                 * LEDCTRL
                                                                                 */

/******** Bit definition for SDHOST_CTRL2 register  ********/
#define SDHOST_CTRL2_SWRSTDL                (1 << 26)                           /*
                                                                                 * SWRSTDL
                                                                                 */
#define SDHOST_CTRL2_SWRSTCL                (1 << 25)                           /*
                                                                                 * SWRSTCL
                                                                                 */
#define SDHOST_CTRL2_SWRSTALL               (1 << 24)                           /*
                                                                                 * SWRSTALL
                                                                                 */
#define SDHOST_CTRL2_DTCNT_SHIFT            (16)
#define SDHOST_CTRL2_DTCNT_MASK             (0xF << SDHOST_CTRL2_DTCNT_SHIFT)   /*
                                                                                 * DTCNT
                                                                                 */
#define SDHOST_CTRL2_SDCLKSEL2_SHIFT        (8)
#define SDHOST_CTRL2_SDCLKSEL2_MASK         (0xFF << \
  SDHOST_CTRL2_SDCLKSEL2_SHIFT)                                            /*
                                                                            * SDCLKSEL7_0
                                                                            */
#define SDHOST_CTRL2_SDCLKSEL1_SHIFT        (6)
#define SDHOST_CTRL2_SDCLKSEL1_MASK         (0x3 << \
  SDHOST_CTRL2_SDCLKSEL1_SHIFT)                         /* SDCLKSEL9_8 */
#define SDHOST_CTRL2_SDCLKE                 (1 << 2)    /* SDCLKE */
#define SDHOST_CTRL2_INCLKSTS               (1 << 1)    /* INCLKSTS */
#define SDHOST_CTRL2_INCLKE                 (1 << 0)    /* INCLKE */

/******** Bit definition for SDHOST_INTSTS register  ********/
#define SDHOST_INTSTS_TRGRERR               (1 << 28)   /* TRGRERR */
#define SDHOST_INTSTS_ADMAERR               (1 << 25)   /* ADMAERR */
#define SDHOST_INTSTS_ACMDERR               (1 << 24)   /* ACMDERR */
#define SDHOST_INTSTS_DENDERR               (1 << 22)   /* DENDERR */
#define SDHOST_INTSTS_DCRCERR               (1 << 21)   /* DCRCERR */
#define SDHOST_INTSTS_DTERR                 (1 << 20)   /* DTERR */
#define SDHOST_INTSTS_CINXERR               (1 << 19)   /* CINXERR */
#define SDHOST_INTSTS_CENDBERR              (1 << 18)   /* CENDBERR */
#define SDHOST_INTSTS_CCRCERR               (1 << 17)   /* CCRCERR */
#define SDHOST_INTSTS_CTERR                 (1 << 16)   /* CTERR */
#define SDHOST_INTSTS_ALLERR                (1 << 15)   /* ALLERR */
#define SDHOST_INTSTS_BOOTTER               (1 << 14)   /* BOOTTER */
#define SDHOST_INTSTS_BOOTACKR              (1 << 13)   /* BOOTACKR */
#define SDHOST_INTSTS_RETUNE                (1 << 12)   /* RETUNE */
#define SDHOST_INTSTS_CINT                  (1 << 8)    /* CINT */
#define SDHOST_INTSTS_CRMV                  (1 << 7)    /* CRMV */
#define SDHOST_INTSTS_CINS                  (1 << 6)    /* CINS */
#define SDHOST_INTSTS_BUFRRDY               (1 << 5)    /* BUFRRDY */
#define SDHOST_INTSTS_BUFWRDY               (1 << 4)    /* BUFWRDY */
#define SDHOST_INTSTS_DMAINT                (1 << 3)    /* DMAINT */
#define SDHOST_INTSTS_BLKGAPE               (1 << 2)    /* BLKGAPE */
#define SDHOST_INTSTS_TC                    (1 << 1)    /* TC */
#define SDHOST_INTSTS_CMDC                  (1 << 0)    /* CMDC */

/******** Bit definition for SDHOST_IE register  ********/
#define SDHOST_IE_TRGREE                    (1 << 28)   /* TRGREE */
#define SDHOST_IE_ADMAEE                    (1 << 25)   /* ADMAEE */
#define SDHOST_IE_ACMDEE                    (1 << 24)   /* ACMDEE */
#define SDHOST_IE_DENDEE                    (1 << 22)   /* DENDEE */
#define SDHOST_IE_DCRCEE                    (1 << 21)   /* DCRCEE */
#define SDHOST_IE_DTEE                      (1 << 20)   /* DTEE */
#define SDHOST_IE_CINXEE                    (1 << 19)   /* CINXEE */
#define SDHOST_IE_CENDBEE                   (1 << 18)   /* CENDBEE */
#define SDHOST_IE_CCRCEE                    (1 << 17)   /* CCRCEE */
#define SDHOST_IE_CTEE                      (1 << 16)   /* CTEE */
#define SDHOST_IE_BOOTTIE                   (1 << 14)   /* BOOTTIE */
#define SDHOST_IE_BOOTACKRE                 (1 << 13)   /* BOOTACKRE */
#define SDHOST_IE_RTUNE                     (1 << 12)   /* RTUNE */
#define SDHOST_IE_CINTE                     (1 << 8)    /* CINTE */
#define SDHOST_IE_CRMVE                     (1 << 7)    /* CRMVE */
#define SDHOST_IE_CINSE                     (1 << 6)    /* CINSE */
#define SDHOST_IE_BUFRRDYE                  (1 << 5)    /* BUFRRDYE */
#define SDHOST_IE_BUFWRDYE                  (1 << 4)    /* BUFWRDYE */
#define SDHOST_IE_DMAINTE                   (1 << 3)    /* DMAINTE */
#define SDHOST_IE_BLKGAPEE                  (1 << 2)    /* BLKGAPEE */
#define SDHOST_IE_TCE                       (1 << 1)    /* TCE */
#define SDHOST_IE_CMDCE                     (1 << 0)    /* CMDCE */

/******** Bit definition for SDHOST_ISE register  ********/
#define SDHOST_ISE_TRGRESE                  (1 << 28)   /* TRGRESE */
#define SDHOST_ISE_ADMAESE                  (1 << 25)   /* ADMAESE */
#define SDHOST_ISE_ACMDESE                  (1 << 24)   /* ACMDESE */
#define SDHOST_ISE_DENDESE                  (1 << 22)   /* DENDESE */
#define SDHOST_ISE_DCRCESE                  (1 << 21)   /* DCRCESE */
#define SDHOST_ISE_DTESE                    (1 << 20)   /* DTESE */
#define SDHOST_ISE_CINXESE                  (1 << 19)   /* CINXESE */
#define SDHOST_ISE_CENDBESE                 (1 << 18)   /* CENDBESE */
#define SDHOST_ISE_CCRCESE                  (1 << 17)   /* CCRCESE */
#define SDHOST_ISE_CTESE                    (1 << 16)   /* CTESE */
#define SDHOST_ISE_BOOTTISE                 (1 << 14)   /* BOOTTISE */
#define SDHOST_ISE_BOOTACKRSE               (1 << 13)   /* BOOTACKRSE */
#define SDHOST_ISE_RTUNSE                   (1 << 12)   /* RTUNSE */
#define SDHOST_ISE_CINTSE                   (1 << 8)    /* CINTSE */
#define SDHOST_ISE_CRMVSE                   (1 << 7)    /* CRMVSE */
#define SDHOST_ISE_CINSSE                   (1 << 6)    /* CINSSE */
#define SDHOST_ISE_BUFRRDYSE                (1 << 5)    /* BUFRRDYSE */
#define SDHOST_ISE_BUFWRDYSE                (1 << 4)    /* BUFWRDYSE */
#define SDHOST_ISE_DMAINTSE                 (1 << 3)    /* DMAINTSE */
#define SDHOST_ISE_BLKGAPESE                (1 << 2)    /* BLKGAPESE */
#define SDHOST_ISE_TCSE                     (1 << 1)    /* TCSE */
#define SDHOST_ISE_CMDCSE                   (1 << 0)    /* CMDCSE */

/******** Bit definition for SDHOST_CTRLSTS register  ********/
#define SDHOST_CTRLSTS_PREVE                (1 << 31)   /* PREVE */
#define SDHOST_CTRLSTS_ASYNCIE              (1 << 30)   /* ASYNCIE */
#define SDHOST_CTRLSTS_SCS                  (1 << 23)   /* SCS */
#define SDHOST_CTRLSTS_ETUN                 (1 << 22)   /* ETUN */
#define SDHOST_CTRLSTS_V18SE                (1 << 19)   /* V18SE */
#define SDHOST_CTRLSTS_UHSMOD_SHIFT         (16)
#define SDHOST_CTRLSTS_UHSMOD_MASK          (0x7 << \
  SDHOST_CTRLSTS_UHSMOD_SHIFT)                          /* UHSMOD */
#define SDHOST_CTRLSTS_ACMD12E              (1 << 7)    /* ACMD12E */
#define SDHOST_CTRLSTS_ACMDINXE             (1 << 4)    /* ACMDINXE */
#define SDHOST_CTRLSTS_ACMDEBE              (1 << 3)    /* ACMDEBE */
#define SDHOST_CTRLSTS_ACMDCRCE             (1 << 2)    /* ACMDCRCE */
#define SDHOST_CTRLSTS_ACMDTE               (1 << 1)    /* ACMDTE */
#define SDHOST_CTRLSTS_ACMD12NE             (1 << 0)    /* ACMD12NE */

/******** Bit definition for SDHOST_CAP0STS register  ********/
#define SDHOST_CAP0STS_STYP_SHIFT           (30)
#define SDHOST_CAP0STS_STYP_MASK            (0x3 << SDHOST_CAP0STS_STYP_SHIFT)  /*
                                                                                 * STYP
                                                                                 */
#define SDHOST_CAP0STS_ASYNCINT             (1 << 29)                           /*
                                                                                 * ASYNCINT
                                                                                 */
#define SDHOST_CAP0STS_VS33                 (1 << 24)                           /*
                                                                                 * VS33
                                                                                 */
#define SDHOST_CAP0STS_SRS                  (1 << 23)                           /*
                                                                                 * SRS
                                                                                 */
#define SDHOST_CAP0STS_SDMA                 (1 << 22)                           /*
                                                                                 * SDMA
                                                                                 */
#define SDHOST_CAP0STS_HS                   (1 << 21)                           /*
                                                                                 * HS
                                                                                 */
#define SDHOST_CAP0STS_ADMA2                (1 << 19)                           /*
                                                                                 * ADMA2
                                                                                 */
#define SDHOST_CAP0STS_EMBUS                (1 << 18)                           /*
                                                                                 * EMBUS
                                                                                 */
#define SDHOST_CAP0STS_MBL_SHIFT            (16)
#define SDHOST_CAP0STS_MBL_MASK             (0x3 << SDHOST_CAP0STS_MBL_SHIFT)   /*
                                                                                 * MBL
                                                                                 */
#define SDHOST_CAP0STS_BCLKF_SHIFT          (8)
#define SDHOST_CAP0STS_BCLKF_MASK           (0xFF << \
  SDHOST_CAP0STS_BCLKF_SHIFT)                           /* BCLKF */
#define SDHOST_CAP0STS_TCLKU                (1 << 7)    /* TCLKU */

/******** Bit definition for SDHOST_CAP1STS register  ********/
#define SDHOST_CAP1STS_SPIBMOD              (1 << 25)   /* SPIBMOD */
#define SDHOST_CAP1STS_SPIMOD               (1 << 24)   /* SPIMOD */
#define SDHOST_CAP1STS_UTFSDR50             (1 << 13)   /* UTFSDR50 */
#define SDHOST_CAP1STS_RTTIMCNT_SHIFT       (8)
#define SDHOST_CAP1STS_RTTIMCNT_MASK        (0xF << \
  SDHOST_CAP1STS_RTTIMCNT_SHIFT)                        /* RTTIMCNT */
#define SDHOST_CAP1STS_DDR50                (1 << 2)    /* DDR50 */
#define SDHOST_CAP1STS_SDR104               (1 << 1)    /* SDR104 */
#define SDHOST_CAP1STS_SDR50                (1 << 0)    /* SDR50 */

/******** Bit definition for SDHOST_STSFE register  ********/
#define SDHOST_STSFE_ADMAE                  (1 << 25)   /* ADMAE */
#define SDHOST_STSFE_ACMDE                  (1 << 24)   /* ACMDE */
#define SDHOST_STSFE_DEBE                   (1 << 22)   /* DEBE */
#define SDHOST_STSFE_DCRCE                  (1 << 21)   /* DCRCE */
#define SDHOST_STSFE_DTE                    (1 << 20)   /* DTE */
#define SDHOST_STSFE_CINXE                  (1 << 19)   /* CINXE */
#define SDHOST_STSFE_CEBE                   (1 << 18)   /* CEBE */
#define SDHOST_STSFE_CCRCE                  (1 << 17)   /* CCRCE */
#define SDHOST_STSFE_CTE                    (1 << 16)   /* CTE */
#define SDHOST_STSFE_ACMD12E                (1 << 7)    /* ACMD12E */
#define SDHOST_STSFE_ACMDINXE               (1 << 4)    /* ACMDINXE */
#define SDHOST_STSFE_ACMDEBE                (1 << 3)    /* ACMDEBE */
#define SDHOST_STSFE_ACMDCRCE               (1 << 2)    /* ACMDCRCE */
#define SDHOST_STSFE_ACMDTE                 (1 << 1)    /* ACMDTE */
#define SDHOST_STSFE_ACMD12NE               (1 << 0)    /* ACMD12NE */

/******** Bit definition for SDHOST_ADMAESTS register  ********/
#define SDHOST_ADMAESTS_ADMALME             (1 << 2) /* ADMALME */
#define SDHOST_ADMAESTS_ADMAE_SHIFT         (0)
#define SDHOST_ADMAESTS_ADMAE_MASK          (0x3 << \
  SDHOST_ADMAESTS_ADMAE_SHIFT)                                          /*
                                                                         * ADMAE
                                                                         */

/******** Bit definition for SDHOST_ASADD0 register  ********/
#define SDHOST_ASADD0_ADD_SHIFT             (0)
#define SDHOST_ASADD0_ADD_MASK              (0xFFFFFFFF << \
  SDHOST_ASADD0_ADD_SHIFT)                                             /* ADD
                                                                        */

/******** Bit definition for SDHOST_ASADD1 register  ********/
#define SDHOST_ASADD1_ADD_SHIFT             (0)
#define SDHOST_ASADD1_ADD_MASK              (0xFFFFFFFF << \
  SDHOST_ASADD1_ADD_SHIFT)                                             /* ADD
                                                                        */

/******** Bit definition for SDHOST_PV0STS register  ********/
#define SDHOST_PV0STS_CLKFS_DS_SHIFT        (16)
#define SDHOST_PV0STS_CLKFS_DS_MASK         (0x3FF << \
  SDHOST_PV0STS_CLKFS_DS_SHIFT)                                             /*
                                                                             * CLKFS_DS
                                                                             */
#define SDHOST_PV0STS_CLKFS_INIT_SHIFT      (0)
#define SDHOST_PV0STS_CLKFS_INIT_MASK       (0x3FF << \
  SDHOST_PV0STS_CLKFS_INIT_SHIFT)                                               /*
                                                                                 * CLKFS_INIT
                                                                                 */

/******** Bit definition for SDHOST_PV1STS register  ********/
#define SDHOST_PV1STS_CLKFS_SDR12_SHIFT     (16)
#define SDHOST_PV1STS_CLKFS_SDR12_MASK      (0x3FF << \
  SDHOST_PV1STS_CLKFS_SDR12_SHIFT)                                                /*
                                                                                   * CLKFS_SDR12
                                                                                   */
#define SDHOST_PV1STS_CLKFS_HS_SHIFT        (0)
#define SDHOST_PV1STS_CLKFS_HS_MASK         (0x3FF << \
  SDHOST_PV1STS_CLKFS_HS_SHIFT)                                             /*
                                                                             * CLKFS_HS
                                                                             */

/******** Bit definition for SDHOST_PV2STS register  ********/
#define SDHOST_PV2STS_CLKFS_SDR50_SHIFT     (16)
#define SDHOST_PV2STS_CLKFS_SDR50_MASK      (0x3FF << \
  SDHOST_PV2STS_CLKFS_SDR50_SHIFT)                                                /*
                                                                                   * CLKFS_SDR50
                                                                                   */
#define SDHOST_PV2STS_CLKFS_SDR25_SHIFT     (0)
#define SDHOST_PV2STS_CLKFS_SDR25_MASK      (0x3FF << \
  SDHOST_PV2STS_CLKFS_SDR25_SHIFT)                                                /*
                                                                                   * CLKFS_SDR25
                                                                                   */

/******** Bit definition for SDHOST_PV3STS register  ********/
#define SDHOST_PV3STS_CLKFS_DDR50_SHIFT     (16)
#define SDHOST_PV3STS_CLKFS_DDR50_MASK      (0x3FF << \
  SDHOST_PV3STS_CLKFS_DDR50_SHIFT)                                                /*
                                                                                   * CLKFS_DDR50
                                                                                   */
#define SDHOST_PV3STS_CLKFS_SDR104_SHIFT    (0)
#define SDHOST_PV3STS_CLKFS_SDR104_MASK     (0x3FF << \
  SDHOST_PV3STS_CLKFS_SDR104_SHIFT)                                                 /*
                                                                                     * CLKFS_SDR104
                                                                                     */

/******** Bit definition for SDHOST_BOOTTCTRL register  ********/
#define SDHOST_BOOTTCTRL_CNT_SHIFT          (0)
#define SDHOST_BOOTTCTRL_CNT_MASK           (0xFFFFFFFF << \
  SDHOST_BOOTTCTRL_CNT_SHIFT)                                                /*
                                                                              * CNT
                                                                              */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_SDHOST_H */
