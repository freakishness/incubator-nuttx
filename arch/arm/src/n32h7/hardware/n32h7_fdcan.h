/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_fdcan.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_FDCAN_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_FDCAN_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_FDCAN_CREL_OFFSET       0x0     /* FDCAN Core Release Register */
#define N32_FDCAN_ENDN_OFFSET       0x4     /* FDCAN Endian register */
#define N32_FDCAN_DBTP_OFFSET       0xC     /* FDCAN Data Bit Timing and
                                             * Prescaler Register */
#define N32_FDCAN_TEST_OFFSET       0x10    /* FDCAN Test Register */
#define N32_FDCAN_RWD_OFFSET        0x14    /* FDCAN RAM watchdog registe */
#define N32_FDCAN_CCCR_OFFSET       0x18    /* FDCAN CC control registe */
#define N32_FDCAN_NBTP_OFFSET       0x1C    /* FDCAN nominal bit timing and
                                             * prescaler register */
#define N32_FDCAN_TSCC_OFFSET       0x20    /* FDCAN timestamp counter
                                             * configuration register */
#define N32_FDCAN_TSCV_OFFSET       0x24    /* FDCAN timestamp counter value
                                             * register */
#define N32_FDCAN_TOCC_OFFSET       0x28    /* FDCAN timeout counter
                                             * configuration register */
#define N32_FDCAN_TOCV_OFFSET       0x2C    /* FDCAN timeout counter value
                                             * register */
#define N32_FDCAN_ECR_OFFSET        0x40    /* FDCAN error counter register */
#define N32_FDCAN_PSR_OFFSET        0x44    /* FDCAN protocol status register
                                             */
#define N32_FDCAN_TDCR_OFFSET       0x48    /* FDCAN transmitter delay
                                             * compensation register */
#define N32_FDCAN_IR_OFFSET         0x50    /* FDCAN interrupt register */
#define N32_FDCAN_IE_OFFSET         0x54    /* FDCAN interrupt enable register
                                             */
#define N32_FDCAN_ILS_OFFSET        0x58    /* FDCAN interrupt line select
                                             * register */
#define N32_FDCAN_ILE_OFFSET        0x5C    /* FDCAN interrupt line enable
                                             * register */
#define N32_FDCAN_GFC_OFFSET        0x80    /* FDCAN global filter
                                             * configuration register */
#define N32_FDCAN_SIDFC_OFFSET      0x84    /* FDCAN standard ID filter
                                             * configuration register */
#define N32_FDCAN_XIDFC_OFFSET      0x88    /* FDCAN extended ID filter
                                             * configuration register */
#define N32_FDCAN_XIDAM_OFFSET      0x90    /* FDCAN extended ID and mask
                                             * register */
#define N32_FDCAN_HPMS_OFFSET       0x94    /* FDCAN high priority message
                                             * status register */
#define N32_FDCAN_NDAT1_OFFSET      0x98    /* FDCAN new data register 1 */
#define N32_FDCAN_NDAT2_OFFSET      0x9C    /* FDCAN new data register 2 */
#define N32_FDCAN_RXF0C_OFFSET      0xA0    /* FDCAN Rx FIFO 0 configuration
                                             * register */
#define N32_FDCAN_RXF0S_OFFSET      0xA4    /* FDCAN Rx FIFO 0 status register
                                             */
#define N32_FDCAN_RXF0A_OFFSET      0xA8    /* FDCAN Rx FIFO 0 acknowledge
                                             * register */
#define N32_FDCAN_RXBC_OFFSET       0xAC    /* FDCAN Rx buffer configuration
                                             * register */
#define N32_FDCAN_RXF1C_OFFSET      0xB0    /* FDCAN Rx FIFO 1 configuration
                                             * register */
#define N32_FDCAN_RXF1S_OFFSET      0xB4    /* FDCAN Rx FIFO 1 status register
                                             */
#define N32_FDCAN_RXF1A_OFFSET      0xB8    /* FDCAN Rx FIFO 1 acknowledge
                                             * register */
#define N32_FDCAN_RXESC_OFFSET      0xBC    /* FDCAN Rx buffer element size
                                             * configuration register */
#define N32_FDCAN_TXBC_OFFSET       0xC0    /* FDCAN Tx buffer configuration
                                             * register */
#define N32_FDCAN_TXFQS_OFFSET      0xC4    /* FDCAN Tx FIFO/queue status
                                             * register */
#define N32_FDCAN_TXESC_OFFSET      0xC8    /* FDCAN Tx buffer element size
                                             * configuration register */
#define N32_FDCAN_TXBRP_OFFSET      0xCC    /* FDCAN Tx buffer request pending
                                             * register */
#define N32_FDCAN_TXBAR_OFFSET      0xD0    /* FDCAN Tx buffer add request
                                             * register */
#define N32_FDCAN_TXBCR_OFFSET      0xD4    /* FDCAN Tx buffer cancellation
                                             * request register */
#define N32_FDCAN_TXBTO_OFFSET      0xD8    /* FDCAN Tx buffer transmission
                                             * occurred register */
#define N32_FDCAN_TXBCF_OFFSET      0xDC    /* FDCAN Tx buffer cancellation
                                             * finished register */
#define N32_FDCAN_TXBTIE_OFFSET     0xE0    /* FDCAN Tx buffer transmission
                                             * interrupt enable register */
#define N32_FDCAN_TXBCIE_OFFSET     0xE4    /* FDCAN Tx buffer cancellation
                                             * finished interrupt enable
                                             * register */
#define N32_FDCAN_TXEFC_OFFSET      0xF0    /* FDCAN Tx event FIFO
                                             * configuration register */
#define N32_FDCAN_TXEFS_OFFSET      0xF4    /* FDCAN Tx event FIFO status
                                             * register */
#define N32_FDCAN_TXEFA_OFFSET      0xF8    /* FDCAN Tx event FIFO acknowledge
                                             * register */
#define N32_FDCAN_TTTMC_OFFSET      0x100   /* nan */
#define N32_FDCAN_TTRMC_OFFSET      0x104   /* nan */
#define N32_FDCAN_TTOCF_OFFSET      0x108   /* nan */
#define N32_FDCAN_TTMLM_OFFSET      0x10C   /* nan */
#define N32_FDCAN_TURCF_OFFSET      0x110   /* nan */
#define N32_FDCAN_TTOCN_OFFSET      0x114   /* nan */
#define N32_FDCAN_TTGTP_OFFSET      0x118   /* nan */
#define N32_FDCAN_TTTMK_OFFSET      0x11C   /* nan */
#define N32_FDCAN_TTIR_OFFSET       0x120   /* nan */
#define N32_FDCAN_TTIE_OFFSET       0x124   /* nan */
#define N32_FDCAN_TTILS_OFFSET      0x128   /* nan */
#define N32_FDCAN_TTOST_OFFSET      0x12C   /* nan */
#define N32_FDCAN_TURNA_OFFSET      0x130   /* nan */
#define N32_FDCAN_TTLGT_OFFSET      0x134   /* nan */
#define N32_FDCAN_TTCTC_OFFSET      0x138   /* nan */
#define N32_FDCAN_TTCPT_OFFSET      0x13C   /* nan */
#define N32_FDCAN_TTCSM_OFFSET      0x140   /* nan */
#define N32_FDCAN_TTTS_OFFSET       0x144   /* FDCAN external signal select
                                             * register */

#define N32_FDCAN1_CREL             (N32_FDCAN1_BASE + N32_FDCAN_CREL_OFFSET)
#define N32_FDCAN1_ENDN             (N32_FDCAN1_BASE + N32_FDCAN_ENDN_OFFSET)
#define N32_FDCAN1_DBTP             (N32_FDCAN1_BASE + N32_FDCAN_DBTP_OFFSET)
#define N32_FDCAN1_TEST             (N32_FDCAN1_BASE + N32_FDCAN_TEST_OFFSET)
#define N32_FDCAN1_RWD              (N32_FDCAN1_BASE + N32_FDCAN_RWD_OFFSET)
#define N32_FDCAN1_CCCR             (N32_FDCAN1_BASE + N32_FDCAN_CCCR_OFFSET)
#define N32_FDCAN1_NBTP             (N32_FDCAN1_BASE + N32_FDCAN_NBTP_OFFSET)
#define N32_FDCAN1_TSCC             (N32_FDCAN1_BASE + N32_FDCAN_TSCC_OFFSET)
#define N32_FDCAN1_TSCV             (N32_FDCAN1_BASE + N32_FDCAN_TSCV_OFFSET)
#define N32_FDCAN1_TOCC             (N32_FDCAN1_BASE + N32_FDCAN_TOCC_OFFSET)
#define N32_FDCAN1_TOCV             (N32_FDCAN1_BASE + N32_FDCAN_TOCV_OFFSET)
#define N32_FDCAN1_ECR              (N32_FDCAN1_BASE + N32_FDCAN_ECR_OFFSET)
#define N32_FDCAN1_PSR              (N32_FDCAN1_BASE + N32_FDCAN_PSR_OFFSET)
#define N32_FDCAN1_TDCR             (N32_FDCAN1_BASE + N32_FDCAN_TDCR_OFFSET)
#define N32_FDCAN1_IR               (N32_FDCAN1_BASE + N32_FDCAN_IR_OFFSET)
#define N32_FDCAN1_IE               (N32_FDCAN1_BASE + N32_FDCAN_IE_OFFSET)
#define N32_FDCAN1_ILS              (N32_FDCAN1_BASE + N32_FDCAN_ILS_OFFSET)
#define N32_FDCAN1_ILE              (N32_FDCAN1_BASE + N32_FDCAN_ILE_OFFSET)
#define N32_FDCAN1_GFC              (N32_FDCAN1_BASE + N32_FDCAN_GFC_OFFSET)
#define N32_FDCAN1_SIDFC            (N32_FDCAN1_BASE + N32_FDCAN_SIDFC_OFFSET)
#define N32_FDCAN1_XIDFC            (N32_FDCAN1_BASE + N32_FDCAN_XIDFC_OFFSET)
#define N32_FDCAN1_XIDAM            (N32_FDCAN1_BASE + N32_FDCAN_XIDAM_OFFSET)
#define N32_FDCAN1_HPMS             (N32_FDCAN1_BASE + N32_FDCAN_HPMS_OFFSET)
#define N32_FDCAN1_NDAT1            (N32_FDCAN1_BASE + N32_FDCAN_NDAT1_OFFSET)
#define N32_FDCAN1_NDAT2            (N32_FDCAN1_BASE + N32_FDCAN_NDAT2_OFFSET)
#define N32_FDCAN1_RXF0C            (N32_FDCAN1_BASE + N32_FDCAN_RXF0C_OFFSET)
#define N32_FDCAN1_RXF0S            (N32_FDCAN1_BASE + N32_FDCAN_RXF0S_OFFSET)
#define N32_FDCAN1_RXF0A            (N32_FDCAN1_BASE + N32_FDCAN_RXF0A_OFFSET)
#define N32_FDCAN1_RXBC             (N32_FDCAN1_BASE + N32_FDCAN_RXBC_OFFSET)
#define N32_FDCAN1_RXF1C            (N32_FDCAN1_BASE + N32_FDCAN_RXF1C_OFFSET)
#define N32_FDCAN1_RXF1S            (N32_FDCAN1_BASE + N32_FDCAN_RXF1S_OFFSET)
#define N32_FDCAN1_RXF1A            (N32_FDCAN1_BASE + N32_FDCAN_RXF1A_OFFSET)
#define N32_FDCAN1_RXESC            (N32_FDCAN1_BASE + N32_FDCAN_RXESC_OFFSET)
#define N32_FDCAN1_TXBC             (N32_FDCAN1_BASE + N32_FDCAN_TXBC_OFFSET)
#define N32_FDCAN1_TXFQS            (N32_FDCAN1_BASE + N32_FDCAN_TXFQS_OFFSET)
#define N32_FDCAN1_TXESC            (N32_FDCAN1_BASE + N32_FDCAN_TXESC_OFFSET)
#define N32_FDCAN1_TXBRP            (N32_FDCAN1_BASE + N32_FDCAN_TXBRP_OFFSET)
#define N32_FDCAN1_TXBAR            (N32_FDCAN1_BASE + N32_FDCAN_TXBAR_OFFSET)
#define N32_FDCAN1_TXBCR            (N32_FDCAN1_BASE + N32_FDCAN_TXBCR_OFFSET)
#define N32_FDCAN1_TXBTO            (N32_FDCAN1_BASE + N32_FDCAN_TXBTO_OFFSET)
#define N32_FDCAN1_TXBCF            (N32_FDCAN1_BASE + N32_FDCAN_TXBCF_OFFSET)
#define N32_FDCAN1_TXBTIE           (N32_FDCAN1_BASE + \
                                     N32_FDCAN_TXBTIE_OFFSET)
#define N32_FDCAN1_TXBCIE           (N32_FDCAN1_BASE + \
                                     N32_FDCAN_TXBCIE_OFFSET)
#define N32_FDCAN1_TXEFC            (N32_FDCAN1_BASE + N32_FDCAN_TXEFC_OFFSET)
#define N32_FDCAN1_TXEFS            (N32_FDCAN1_BASE + N32_FDCAN_TXEFS_OFFSET)
#define N32_FDCAN1_TXEFA            (N32_FDCAN1_BASE + N32_FDCAN_TXEFA_OFFSET)
#define N32_FDCAN1_TTTMC            (N32_FDCAN1_BASE + N32_FDCAN_TTTMC_OFFSET)
#define N32_FDCAN1_TTRMC            (N32_FDCAN1_BASE + N32_FDCAN_TTRMC_OFFSET)
#define N32_FDCAN1_TTOCF            (N32_FDCAN1_BASE + N32_FDCAN_TTOCF_OFFSET)
#define N32_FDCAN1_TTMLM            (N32_FDCAN1_BASE + N32_FDCAN_TTMLM_OFFSET)
#define N32_FDCAN1_TURCF            (N32_FDCAN1_BASE + N32_FDCAN_TURCF_OFFSET)
#define N32_FDCAN1_TTOCN            (N32_FDCAN1_BASE + N32_FDCAN_TTOCN_OFFSET)
#define N32_FDCAN1_TTGTP            (N32_FDCAN1_BASE + N32_FDCAN_TTGTP_OFFSET)
#define N32_FDCAN1_TTTMK            (N32_FDCAN1_BASE + N32_FDCAN_TTTMK_OFFSET)
#define N32_FDCAN1_TTIR             (N32_FDCAN1_BASE + N32_FDCAN_TTIR_OFFSET)
#define N32_FDCAN1_TTIE             (N32_FDCAN1_BASE + N32_FDCAN_TTIE_OFFSET)
#define N32_FDCAN1_TTILS            (N32_FDCAN1_BASE + N32_FDCAN_TTILS_OFFSET)
#define N32_FDCAN1_TTOST            (N32_FDCAN1_BASE + N32_FDCAN_TTOST_OFFSET)
#define N32_FDCAN1_TURNA            (N32_FDCAN1_BASE + N32_FDCAN_TURNA_OFFSET)
#define N32_FDCAN1_TTLGT            (N32_FDCAN1_BASE + N32_FDCAN_TTLGT_OFFSET)
#define N32_FDCAN1_TTCTC            (N32_FDCAN1_BASE + N32_FDCAN_TTCTC_OFFSET)
#define N32_FDCAN1_TTCPT            (N32_FDCAN1_BASE + N32_FDCAN_TTCPT_OFFSET)
#define N32_FDCAN1_TTCSM            (N32_FDCAN1_BASE + N32_FDCAN_TTCSM_OFFSET)
#define N32_FDCAN1_TTTS             (N32_FDCAN1_BASE + N32_FDCAN_TTTS_OFFSET)

#define N32_FDCAN2_CREL             (N32_FDCAN2_BASE + N32_FDCAN_CREL_OFFSET)
#define N32_FDCAN2_ENDN             (N32_FDCAN2_BASE + N32_FDCAN_ENDN_OFFSET)
#define N32_FDCAN2_DBTP             (N32_FDCAN2_BASE + N32_FDCAN_DBTP_OFFSET)
#define N32_FDCAN2_TEST             (N32_FDCAN2_BASE + N32_FDCAN_TEST_OFFSET)
#define N32_FDCAN2_RWD              (N32_FDCAN2_BASE + N32_FDCAN_RWD_OFFSET)
#define N32_FDCAN2_CCCR             (N32_FDCAN2_BASE + N32_FDCAN_CCCR_OFFSET)
#define N32_FDCAN2_NBTP             (N32_FDCAN2_BASE + N32_FDCAN_NBTP_OFFSET)
#define N32_FDCAN2_TSCC             (N32_FDCAN2_BASE + N32_FDCAN_TSCC_OFFSET)
#define N32_FDCAN2_TSCV             (N32_FDCAN2_BASE + N32_FDCAN_TSCV_OFFSET)
#define N32_FDCAN2_TOCC             (N32_FDCAN2_BASE + N32_FDCAN_TOCC_OFFSET)
#define N32_FDCAN2_TOCV             (N32_FDCAN2_BASE + N32_FDCAN_TOCV_OFFSET)
#define N32_FDCAN2_ECR              (N32_FDCAN2_BASE + N32_FDCAN_ECR_OFFSET)
#define N32_FDCAN2_PSR              (N32_FDCAN2_BASE + N32_FDCAN_PSR_OFFSET)
#define N32_FDCAN2_TDCR             (N32_FDCAN2_BASE + N32_FDCAN_TDCR_OFFSET)
#define N32_FDCAN2_IR               (N32_FDCAN2_BASE + N32_FDCAN_IR_OFFSET)
#define N32_FDCAN2_IE               (N32_FDCAN2_BASE + N32_FDCAN_IE_OFFSET)
#define N32_FDCAN2_ILS              (N32_FDCAN2_BASE + N32_FDCAN_ILS_OFFSET)
#define N32_FDCAN2_ILE              (N32_FDCAN2_BASE + N32_FDCAN_ILE_OFFSET)
#define N32_FDCAN2_GFC              (N32_FDCAN2_BASE + N32_FDCAN_GFC_OFFSET)
#define N32_FDCAN2_SIDFC            (N32_FDCAN2_BASE + N32_FDCAN_SIDFC_OFFSET)
#define N32_FDCAN2_XIDFC            (N32_FDCAN2_BASE + N32_FDCAN_XIDFC_OFFSET)
#define N32_FDCAN2_XIDAM            (N32_FDCAN2_BASE + N32_FDCAN_XIDAM_OFFSET)
#define N32_FDCAN2_HPMS             (N32_FDCAN2_BASE + N32_FDCAN_HPMS_OFFSET)
#define N32_FDCAN2_NDAT1            (N32_FDCAN2_BASE + N32_FDCAN_NDAT1_OFFSET)
#define N32_FDCAN2_NDAT2            (N32_FDCAN2_BASE + N32_FDCAN_NDAT2_OFFSET)
#define N32_FDCAN2_RXF0C            (N32_FDCAN2_BASE + N32_FDCAN_RXF0C_OFFSET)
#define N32_FDCAN2_RXF0S            (N32_FDCAN2_BASE + N32_FDCAN_RXF0S_OFFSET)
#define N32_FDCAN2_RXF0A            (N32_FDCAN2_BASE + N32_FDCAN_RXF0A_OFFSET)
#define N32_FDCAN2_RXBC             (N32_FDCAN2_BASE + N32_FDCAN_RXBC_OFFSET)
#define N32_FDCAN2_RXF1C            (N32_FDCAN2_BASE + N32_FDCAN_RXF1C_OFFSET)
#define N32_FDCAN2_RXF1S            (N32_FDCAN2_BASE + N32_FDCAN_RXF1S_OFFSET)
#define N32_FDCAN2_RXF1A            (N32_FDCAN2_BASE + N32_FDCAN_RXF1A_OFFSET)
#define N32_FDCAN2_RXESC            (N32_FDCAN2_BASE + N32_FDCAN_RXESC_OFFSET)
#define N32_FDCAN2_TXBC             (N32_FDCAN2_BASE + N32_FDCAN_TXBC_OFFSET)
#define N32_FDCAN2_TXFQS            (N32_FDCAN2_BASE + N32_FDCAN_TXFQS_OFFSET)
#define N32_FDCAN2_TXESC            (N32_FDCAN2_BASE + N32_FDCAN_TXESC_OFFSET)
#define N32_FDCAN2_TXBRP            (N32_FDCAN2_BASE + N32_FDCAN_TXBRP_OFFSET)
#define N32_FDCAN2_TXBAR            (N32_FDCAN2_BASE + N32_FDCAN_TXBAR_OFFSET)
#define N32_FDCAN2_TXBCR            (N32_FDCAN2_BASE + N32_FDCAN_TXBCR_OFFSET)
#define N32_FDCAN2_TXBTO            (N32_FDCAN2_BASE + N32_FDCAN_TXBTO_OFFSET)
#define N32_FDCAN2_TXBCF            (N32_FDCAN2_BASE + N32_FDCAN_TXBCF_OFFSET)
#define N32_FDCAN2_TXBTIE           (N32_FDCAN2_BASE + \
                                     N32_FDCAN_TXBTIE_OFFSET)
#define N32_FDCAN2_TXBCIE           (N32_FDCAN2_BASE + \
                                     N32_FDCAN_TXBCIE_OFFSET)
#define N32_FDCAN2_TXEFC            (N32_FDCAN2_BASE + N32_FDCAN_TXEFC_OFFSET)
#define N32_FDCAN2_TXEFS            (N32_FDCAN2_BASE + N32_FDCAN_TXEFS_OFFSET)
#define N32_FDCAN2_TXEFA            (N32_FDCAN2_BASE + N32_FDCAN_TXEFA_OFFSET)
#define N32_FDCAN2_TTTMC            (N32_FDCAN2_BASE + N32_FDCAN_TTTMC_OFFSET)
#define N32_FDCAN2_TTRMC            (N32_FDCAN2_BASE + N32_FDCAN_TTRMC_OFFSET)
#define N32_FDCAN2_TTOCF            (N32_FDCAN2_BASE + N32_FDCAN_TTOCF_OFFSET)
#define N32_FDCAN2_TTMLM            (N32_FDCAN2_BASE + N32_FDCAN_TTMLM_OFFSET)
#define N32_FDCAN2_TURCF            (N32_FDCAN2_BASE + N32_FDCAN_TURCF_OFFSET)
#define N32_FDCAN2_TTOCN            (N32_FDCAN2_BASE + N32_FDCAN_TTOCN_OFFSET)
#define N32_FDCAN2_TTGTP            (N32_FDCAN2_BASE + N32_FDCAN_TTGTP_OFFSET)
#define N32_FDCAN2_TTTMK            (N32_FDCAN2_BASE + N32_FDCAN_TTTMK_OFFSET)
#define N32_FDCAN2_TTIR             (N32_FDCAN2_BASE + N32_FDCAN_TTIR_OFFSET)
#define N32_FDCAN2_TTIE             (N32_FDCAN2_BASE + N32_FDCAN_TTIE_OFFSET)
#define N32_FDCAN2_TTILS            (N32_FDCAN2_BASE + N32_FDCAN_TTILS_OFFSET)
#define N32_FDCAN2_TTOST            (N32_FDCAN2_BASE + N32_FDCAN_TTOST_OFFSET)
#define N32_FDCAN2_TURNA            (N32_FDCAN2_BASE + N32_FDCAN_TURNA_OFFSET)
#define N32_FDCAN2_TTLGT            (N32_FDCAN2_BASE + N32_FDCAN_TTLGT_OFFSET)
#define N32_FDCAN2_TTCTC            (N32_FDCAN2_BASE + N32_FDCAN_TTCTC_OFFSET)
#define N32_FDCAN2_TTCPT            (N32_FDCAN2_BASE + N32_FDCAN_TTCPT_OFFSET)
#define N32_FDCAN2_TTCSM            (N32_FDCAN2_BASE + N32_FDCAN_TTCSM_OFFSET)
#define N32_FDCAN2_TTTS             (N32_FDCAN2_BASE + N32_FDCAN_TTTS_OFFSET)

#define N32_FDCAN3_CREL             (N32_FDCAN3_BASE + N32_FDCAN_CREL_OFFSET)
#define N32_FDCAN3_ENDN             (N32_FDCAN3_BASE + N32_FDCAN_ENDN_OFFSET)
#define N32_FDCAN3_DBTP             (N32_FDCAN3_BASE + N32_FDCAN_DBTP_OFFSET)
#define N32_FDCAN3_TEST             (N32_FDCAN3_BASE + N32_FDCAN_TEST_OFFSET)
#define N32_FDCAN3_RWD              (N32_FDCAN3_BASE + N32_FDCAN_RWD_OFFSET)
#define N32_FDCAN3_CCCR             (N32_FDCAN3_BASE + N32_FDCAN_CCCR_OFFSET)
#define N32_FDCAN3_NBTP             (N32_FDCAN3_BASE + N32_FDCAN_NBTP_OFFSET)
#define N32_FDCAN3_TSCC             (N32_FDCAN3_BASE + N32_FDCAN_TSCC_OFFSET)
#define N32_FDCAN3_TSCV             (N32_FDCAN3_BASE + N32_FDCAN_TSCV_OFFSET)
#define N32_FDCAN3_TOCC             (N32_FDCAN3_BASE + N32_FDCAN_TOCC_OFFSET)
#define N32_FDCAN3_TOCV             (N32_FDCAN3_BASE + N32_FDCAN_TOCV_OFFSET)
#define N32_FDCAN3_ECR              (N32_FDCAN3_BASE + N32_FDCAN_ECR_OFFSET)
#define N32_FDCAN3_PSR              (N32_FDCAN3_BASE + N32_FDCAN_PSR_OFFSET)
#define N32_FDCAN3_TDCR             (N32_FDCAN3_BASE + N32_FDCAN_TDCR_OFFSET)
#define N32_FDCAN3_IR               (N32_FDCAN3_BASE + N32_FDCAN_IR_OFFSET)
#define N32_FDCAN3_IE               (N32_FDCAN3_BASE + N32_FDCAN_IE_OFFSET)
#define N32_FDCAN3_ILS              (N32_FDCAN3_BASE + N32_FDCAN_ILS_OFFSET)
#define N32_FDCAN3_ILE              (N32_FDCAN3_BASE + N32_FDCAN_ILE_OFFSET)
#define N32_FDCAN3_GFC              (N32_FDCAN3_BASE + N32_FDCAN_GFC_OFFSET)
#define N32_FDCAN3_SIDFC            (N32_FDCAN3_BASE + N32_FDCAN_SIDFC_OFFSET)
#define N32_FDCAN3_XIDFC            (N32_FDCAN3_BASE + N32_FDCAN_XIDFC_OFFSET)
#define N32_FDCAN3_XIDAM            (N32_FDCAN3_BASE + N32_FDCAN_XIDAM_OFFSET)
#define N32_FDCAN3_HPMS             (N32_FDCAN3_BASE + N32_FDCAN_HPMS_OFFSET)
#define N32_FDCAN3_NDAT1            (N32_FDCAN3_BASE + N32_FDCAN_NDAT1_OFFSET)
#define N32_FDCAN3_NDAT2            (N32_FDCAN3_BASE + N32_FDCAN_NDAT2_OFFSET)
#define N32_FDCAN3_RXF0C            (N32_FDCAN3_BASE + N32_FDCAN_RXF0C_OFFSET)
#define N32_FDCAN3_RXF0S            (N32_FDCAN3_BASE + N32_FDCAN_RXF0S_OFFSET)
#define N32_FDCAN3_RXF0A            (N32_FDCAN3_BASE + N32_FDCAN_RXF0A_OFFSET)
#define N32_FDCAN3_RXBC             (N32_FDCAN3_BASE + N32_FDCAN_RXBC_OFFSET)
#define N32_FDCAN3_RXF1C            (N32_FDCAN3_BASE + N32_FDCAN_RXF1C_OFFSET)
#define N32_FDCAN3_RXF1S            (N32_FDCAN3_BASE + N32_FDCAN_RXF1S_OFFSET)
#define N32_FDCAN3_RXF1A            (N32_FDCAN3_BASE + N32_FDCAN_RXF1A_OFFSET)
#define N32_FDCAN3_RXESC            (N32_FDCAN3_BASE + N32_FDCAN_RXESC_OFFSET)
#define N32_FDCAN3_TXBC             (N32_FDCAN3_BASE + N32_FDCAN_TXBC_OFFSET)
#define N32_FDCAN3_TXFQS            (N32_FDCAN3_BASE + N32_FDCAN_TXFQS_OFFSET)
#define N32_FDCAN3_TXESC            (N32_FDCAN3_BASE + N32_FDCAN_TXESC_OFFSET)
#define N32_FDCAN3_TXBRP            (N32_FDCAN3_BASE + N32_FDCAN_TXBRP_OFFSET)
#define N32_FDCAN3_TXBAR            (N32_FDCAN3_BASE + N32_FDCAN_TXBAR_OFFSET)
#define N32_FDCAN3_TXBCR            (N32_FDCAN3_BASE + N32_FDCAN_TXBCR_OFFSET)
#define N32_FDCAN3_TXBTO            (N32_FDCAN3_BASE + N32_FDCAN_TXBTO_OFFSET)
#define N32_FDCAN3_TXBCF            (N32_FDCAN3_BASE + N32_FDCAN_TXBCF_OFFSET)
#define N32_FDCAN3_TXBTIE           (N32_FDCAN3_BASE + \
                                     N32_FDCAN_TXBTIE_OFFSET)
#define N32_FDCAN3_TXBCIE           (N32_FDCAN3_BASE + \
                                     N32_FDCAN_TXBCIE_OFFSET)
#define N32_FDCAN3_TXEFC            (N32_FDCAN3_BASE + N32_FDCAN_TXEFC_OFFSET)
#define N32_FDCAN3_TXEFS            (N32_FDCAN3_BASE + N32_FDCAN_TXEFS_OFFSET)
#define N32_FDCAN3_TXEFA            (N32_FDCAN3_BASE + N32_FDCAN_TXEFA_OFFSET)
#define N32_FDCAN3_TTTMC            (N32_FDCAN3_BASE + N32_FDCAN_TTTMC_OFFSET)
#define N32_FDCAN3_TTRMC            (N32_FDCAN3_BASE + N32_FDCAN_TTRMC_OFFSET)
#define N32_FDCAN3_TTOCF            (N32_FDCAN3_BASE + N32_FDCAN_TTOCF_OFFSET)
#define N32_FDCAN3_TTMLM            (N32_FDCAN3_BASE + N32_FDCAN_TTMLM_OFFSET)
#define N32_FDCAN3_TURCF            (N32_FDCAN3_BASE + N32_FDCAN_TURCF_OFFSET)
#define N32_FDCAN3_TTOCN            (N32_FDCAN3_BASE + N32_FDCAN_TTOCN_OFFSET)
#define N32_FDCAN3_TTGTP            (N32_FDCAN3_BASE + N32_FDCAN_TTGTP_OFFSET)
#define N32_FDCAN3_TTTMK            (N32_FDCAN3_BASE + N32_FDCAN_TTTMK_OFFSET)
#define N32_FDCAN3_TTIR             (N32_FDCAN3_BASE + N32_FDCAN_TTIR_OFFSET)
#define N32_FDCAN3_TTIE             (N32_FDCAN3_BASE + N32_FDCAN_TTIE_OFFSET)
#define N32_FDCAN3_TTILS            (N32_FDCAN3_BASE + N32_FDCAN_TTILS_OFFSET)
#define N32_FDCAN3_TTOST            (N32_FDCAN3_BASE + N32_FDCAN_TTOST_OFFSET)
#define N32_FDCAN3_TURNA            (N32_FDCAN3_BASE + N32_FDCAN_TURNA_OFFSET)
#define N32_FDCAN3_TTLGT            (N32_FDCAN3_BASE + N32_FDCAN_TTLGT_OFFSET)
#define N32_FDCAN3_TTCTC            (N32_FDCAN3_BASE + N32_FDCAN_TTCTC_OFFSET)
#define N32_FDCAN3_TTCPT            (N32_FDCAN3_BASE + N32_FDCAN_TTCPT_OFFSET)
#define N32_FDCAN3_TTCSM            (N32_FDCAN3_BASE + N32_FDCAN_TTCSM_OFFSET)
#define N32_FDCAN3_TTTS             (N32_FDCAN3_BASE + N32_FDCAN_TTTS_OFFSET)

#define N32_FDCAN4_CREL             (N32_FDCAN4_BASE + N32_FDCAN_CREL_OFFSET)
#define N32_FDCAN4_ENDN             (N32_FDCAN4_BASE + N32_FDCAN_ENDN_OFFSET)
#define N32_FDCAN4_DBTP             (N32_FDCAN4_BASE + N32_FDCAN_DBTP_OFFSET)
#define N32_FDCAN4_TEST             (N32_FDCAN4_BASE + N32_FDCAN_TEST_OFFSET)
#define N32_FDCAN4_RWD              (N32_FDCAN4_BASE + N32_FDCAN_RWD_OFFSET)
#define N32_FDCAN4_CCCR             (N32_FDCAN4_BASE + N32_FDCAN_CCCR_OFFSET)
#define N32_FDCAN4_NBTP             (N32_FDCAN4_BASE + N32_FDCAN_NBTP_OFFSET)
#define N32_FDCAN4_TSCC             (N32_FDCAN4_BASE + N32_FDCAN_TSCC_OFFSET)
#define N32_FDCAN4_TSCV             (N32_FDCAN4_BASE + N32_FDCAN_TSCV_OFFSET)
#define N32_FDCAN4_TOCC             (N32_FDCAN4_BASE + N32_FDCAN_TOCC_OFFSET)
#define N32_FDCAN4_TOCV             (N32_FDCAN4_BASE + N32_FDCAN_TOCV_OFFSET)
#define N32_FDCAN4_ECR              (N32_FDCAN4_BASE + N32_FDCAN_ECR_OFFSET)
#define N32_FDCAN4_PSR              (N32_FDCAN4_BASE + N32_FDCAN_PSR_OFFSET)
#define N32_FDCAN4_TDCR             (N32_FDCAN4_BASE + N32_FDCAN_TDCR_OFFSET)
#define N32_FDCAN4_IR               (N32_FDCAN4_BASE + N32_FDCAN_IR_OFFSET)
#define N32_FDCAN4_IE               (N32_FDCAN4_BASE + N32_FDCAN_IE_OFFSET)
#define N32_FDCAN4_ILS              (N32_FDCAN4_BASE + N32_FDCAN_ILS_OFFSET)
#define N32_FDCAN4_ILE              (N32_FDCAN4_BASE + N32_FDCAN_ILE_OFFSET)
#define N32_FDCAN4_GFC              (N32_FDCAN4_BASE + N32_FDCAN_GFC_OFFSET)
#define N32_FDCAN4_SIDFC            (N32_FDCAN4_BASE + N32_FDCAN_SIDFC_OFFSET)
#define N32_FDCAN4_XIDFC            (N32_FDCAN4_BASE + N32_FDCAN_XIDFC_OFFSET)
#define N32_FDCAN4_XIDAM            (N32_FDCAN4_BASE + N32_FDCAN_XIDAM_OFFSET)
#define N32_FDCAN4_HPMS             (N32_FDCAN4_BASE + N32_FDCAN_HPMS_OFFSET)
#define N32_FDCAN4_NDAT1            (N32_FDCAN4_BASE + N32_FDCAN_NDAT1_OFFSET)
#define N32_FDCAN4_NDAT2            (N32_FDCAN4_BASE + N32_FDCAN_NDAT2_OFFSET)
#define N32_FDCAN4_RXF0C            (N32_FDCAN4_BASE + N32_FDCAN_RXF0C_OFFSET)
#define N32_FDCAN4_RXF0S            (N32_FDCAN4_BASE + N32_FDCAN_RXF0S_OFFSET)
#define N32_FDCAN4_RXF0A            (N32_FDCAN4_BASE + N32_FDCAN_RXF0A_OFFSET)
#define N32_FDCAN4_RXBC             (N32_FDCAN4_BASE + N32_FDCAN_RXBC_OFFSET)
#define N32_FDCAN4_RXF1C            (N32_FDCAN4_BASE + N32_FDCAN_RXF1C_OFFSET)
#define N32_FDCAN4_RXF1S            (N32_FDCAN4_BASE + N32_FDCAN_RXF1S_OFFSET)
#define N32_FDCAN4_RXF1A            (N32_FDCAN4_BASE + N32_FDCAN_RXF1A_OFFSET)
#define N32_FDCAN4_RXESC            (N32_FDCAN4_BASE + N32_FDCAN_RXESC_OFFSET)
#define N32_FDCAN4_TXBC             (N32_FDCAN4_BASE + N32_FDCAN_TXBC_OFFSET)
#define N32_FDCAN4_TXFQS            (N32_FDCAN4_BASE + N32_FDCAN_TXFQS_OFFSET)
#define N32_FDCAN4_TXESC            (N32_FDCAN4_BASE + N32_FDCAN_TXESC_OFFSET)
#define N32_FDCAN4_TXBRP            (N32_FDCAN4_BASE + N32_FDCAN_TXBRP_OFFSET)
#define N32_FDCAN4_TXBAR            (N32_FDCAN4_BASE + N32_FDCAN_TXBAR_OFFSET)
#define N32_FDCAN4_TXBCR            (N32_FDCAN4_BASE + N32_FDCAN_TXBCR_OFFSET)
#define N32_FDCAN4_TXBTO            (N32_FDCAN4_BASE + N32_FDCAN_TXBTO_OFFSET)
#define N32_FDCAN4_TXBCF            (N32_FDCAN4_BASE + N32_FDCAN_TXBCF_OFFSET)
#define N32_FDCAN4_TXBTIE           (N32_FDCAN4_BASE + \
                                     N32_FDCAN_TXBTIE_OFFSET)
#define N32_FDCAN4_TXBCIE           (N32_FDCAN4_BASE + \
                                     N32_FDCAN_TXBCIE_OFFSET)
#define N32_FDCAN4_TXEFC            (N32_FDCAN4_BASE + N32_FDCAN_TXEFC_OFFSET)
#define N32_FDCAN4_TXEFS            (N32_FDCAN4_BASE + N32_FDCAN_TXEFS_OFFSET)
#define N32_FDCAN4_TXEFA            (N32_FDCAN4_BASE + N32_FDCAN_TXEFA_OFFSET)
#define N32_FDCAN4_TTTMC            (N32_FDCAN4_BASE + N32_FDCAN_TTTMC_OFFSET)
#define N32_FDCAN4_TTRMC            (N32_FDCAN4_BASE + N32_FDCAN_TTRMC_OFFSET)
#define N32_FDCAN4_TTOCF            (N32_FDCAN4_BASE + N32_FDCAN_TTOCF_OFFSET)
#define N32_FDCAN4_TTMLM            (N32_FDCAN4_BASE + N32_FDCAN_TTMLM_OFFSET)
#define N32_FDCAN4_TURCF            (N32_FDCAN4_BASE + N32_FDCAN_TURCF_OFFSET)
#define N32_FDCAN4_TTOCN            (N32_FDCAN4_BASE + N32_FDCAN_TTOCN_OFFSET)
#define N32_FDCAN4_TTGTP            (N32_FDCAN4_BASE + N32_FDCAN_TTGTP_OFFSET)
#define N32_FDCAN4_TTTMK            (N32_FDCAN4_BASE + N32_FDCAN_TTTMK_OFFSET)
#define N32_FDCAN4_TTIR             (N32_FDCAN4_BASE + N32_FDCAN_TTIR_OFFSET)
#define N32_FDCAN4_TTIE             (N32_FDCAN4_BASE + N32_FDCAN_TTIE_OFFSET)
#define N32_FDCAN4_TTILS            (N32_FDCAN4_BASE + N32_FDCAN_TTILS_OFFSET)
#define N32_FDCAN4_TTOST            (N32_FDCAN4_BASE + N32_FDCAN_TTOST_OFFSET)
#define N32_FDCAN4_TURNA            (N32_FDCAN4_BASE + N32_FDCAN_TURNA_OFFSET)
#define N32_FDCAN4_TTLGT            (N32_FDCAN4_BASE + N32_FDCAN_TTLGT_OFFSET)
#define N32_FDCAN4_TTCTC            (N32_FDCAN4_BASE + N32_FDCAN_TTCTC_OFFSET)
#define N32_FDCAN4_TTCPT            (N32_FDCAN4_BASE + N32_FDCAN_TTCPT_OFFSET)
#define N32_FDCAN4_TTCSM            (N32_FDCAN4_BASE + N32_FDCAN_TTCSM_OFFSET)
#define N32_FDCAN4_TTTS             (N32_FDCAN4_BASE + N32_FDCAN_TTTS_OFFSET)

#define N32_FDCAN5_CREL             (N32_FDCAN5_BASE + N32_FDCAN_CREL_OFFSET)
#define N32_FDCAN5_ENDN             (N32_FDCAN5_BASE + N32_FDCAN_ENDN_OFFSET)
#define N32_FDCAN5_DBTP             (N32_FDCAN5_BASE + N32_FDCAN_DBTP_OFFSET)
#define N32_FDCAN5_TEST             (N32_FDCAN5_BASE + N32_FDCAN_TEST_OFFSET)
#define N32_FDCAN5_RWD              (N32_FDCAN5_BASE + N32_FDCAN_RWD_OFFSET)
#define N32_FDCAN5_CCCR             (N32_FDCAN5_BASE + N32_FDCAN_CCCR_OFFSET)
#define N32_FDCAN5_NBTP             (N32_FDCAN5_BASE + N32_FDCAN_NBTP_OFFSET)
#define N32_FDCAN5_TSCC             (N32_FDCAN5_BASE + N32_FDCAN_TSCC_OFFSET)
#define N32_FDCAN5_TSCV             (N32_FDCAN5_BASE + N32_FDCAN_TSCV_OFFSET)
#define N32_FDCAN5_TOCC             (N32_FDCAN5_BASE + N32_FDCAN_TOCC_OFFSET)
#define N32_FDCAN5_TOCV             (N32_FDCAN5_BASE + N32_FDCAN_TOCV_OFFSET)
#define N32_FDCAN5_ECR              (N32_FDCAN5_BASE + N32_FDCAN_ECR_OFFSET)
#define N32_FDCAN5_PSR              (N32_FDCAN5_BASE + N32_FDCAN_PSR_OFFSET)
#define N32_FDCAN5_TDCR             (N32_FDCAN5_BASE + N32_FDCAN_TDCR_OFFSET)
#define N32_FDCAN5_IR               (N32_FDCAN5_BASE + N32_FDCAN_IR_OFFSET)
#define N32_FDCAN5_IE               (N32_FDCAN5_BASE + N32_FDCAN_IE_OFFSET)
#define N32_FDCAN5_ILS              (N32_FDCAN5_BASE + N32_FDCAN_ILS_OFFSET)
#define N32_FDCAN5_ILE              (N32_FDCAN5_BASE + N32_FDCAN_ILE_OFFSET)
#define N32_FDCAN5_GFC              (N32_FDCAN5_BASE + N32_FDCAN_GFC_OFFSET)
#define N32_FDCAN5_SIDFC            (N32_FDCAN5_BASE + N32_FDCAN_SIDFC_OFFSET)
#define N32_FDCAN5_XIDFC            (N32_FDCAN5_BASE + N32_FDCAN_XIDFC_OFFSET)
#define N32_FDCAN5_XIDAM            (N32_FDCAN5_BASE + N32_FDCAN_XIDAM_OFFSET)
#define N32_FDCAN5_HPMS             (N32_FDCAN5_BASE + N32_FDCAN_HPMS_OFFSET)
#define N32_FDCAN5_NDAT1            (N32_FDCAN5_BASE + N32_FDCAN_NDAT1_OFFSET)
#define N32_FDCAN5_NDAT2            (N32_FDCAN5_BASE + N32_FDCAN_NDAT2_OFFSET)
#define N32_FDCAN5_RXF0C            (N32_FDCAN5_BASE + N32_FDCAN_RXF0C_OFFSET)
#define N32_FDCAN5_RXF0S            (N32_FDCAN5_BASE + N32_FDCAN_RXF0S_OFFSET)
#define N32_FDCAN5_RXF0A            (N32_FDCAN5_BASE + N32_FDCAN_RXF0A_OFFSET)
#define N32_FDCAN5_RXBC             (N32_FDCAN5_BASE + N32_FDCAN_RXBC_OFFSET)
#define N32_FDCAN5_RXF1C            (N32_FDCAN5_BASE + N32_FDCAN_RXF1C_OFFSET)
#define N32_FDCAN5_RXF1S            (N32_FDCAN5_BASE + N32_FDCAN_RXF1S_OFFSET)
#define N32_FDCAN5_RXF1A            (N32_FDCAN5_BASE + N32_FDCAN_RXF1A_OFFSET)
#define N32_FDCAN5_RXESC            (N32_FDCAN5_BASE + N32_FDCAN_RXESC_OFFSET)
#define N32_FDCAN5_TXBC             (N32_FDCAN5_BASE + N32_FDCAN_TXBC_OFFSET)
#define N32_FDCAN5_TXFQS            (N32_FDCAN5_BASE + N32_FDCAN_TXFQS_OFFSET)
#define N32_FDCAN5_TXESC            (N32_FDCAN5_BASE + N32_FDCAN_TXESC_OFFSET)
#define N32_FDCAN5_TXBRP            (N32_FDCAN5_BASE + N32_FDCAN_TXBRP_OFFSET)
#define N32_FDCAN5_TXBAR            (N32_FDCAN5_BASE + N32_FDCAN_TXBAR_OFFSET)
#define N32_FDCAN5_TXBCR            (N32_FDCAN5_BASE + N32_FDCAN_TXBCR_OFFSET)
#define N32_FDCAN5_TXBTO            (N32_FDCAN5_BASE + N32_FDCAN_TXBTO_OFFSET)
#define N32_FDCAN5_TXBCF            (N32_FDCAN5_BASE + N32_FDCAN_TXBCF_OFFSET)
#define N32_FDCAN5_TXBTIE           (N32_FDCAN5_BASE + \
                                     N32_FDCAN_TXBTIE_OFFSET)
#define N32_FDCAN5_TXBCIE           (N32_FDCAN5_BASE + \
                                     N32_FDCAN_TXBCIE_OFFSET)
#define N32_FDCAN5_TXEFC            (N32_FDCAN5_BASE + N32_FDCAN_TXEFC_OFFSET)
#define N32_FDCAN5_TXEFS            (N32_FDCAN5_BASE + N32_FDCAN_TXEFS_OFFSET)
#define N32_FDCAN5_TXEFA            (N32_FDCAN5_BASE + N32_FDCAN_TXEFA_OFFSET)
#define N32_FDCAN5_TTTMC            (N32_FDCAN5_BASE + N32_FDCAN_TTTMC_OFFSET)
#define N32_FDCAN5_TTRMC            (N32_FDCAN5_BASE + N32_FDCAN_TTRMC_OFFSET)
#define N32_FDCAN5_TTOCF            (N32_FDCAN5_BASE + N32_FDCAN_TTOCF_OFFSET)
#define N32_FDCAN5_TTMLM            (N32_FDCAN5_BASE + N32_FDCAN_TTMLM_OFFSET)
#define N32_FDCAN5_TURCF            (N32_FDCAN5_BASE + N32_FDCAN_TURCF_OFFSET)
#define N32_FDCAN5_TTOCN            (N32_FDCAN5_BASE + N32_FDCAN_TTOCN_OFFSET)
#define N32_FDCAN5_TTGTP            (N32_FDCAN5_BASE + N32_FDCAN_TTGTP_OFFSET)
#define N32_FDCAN5_TTTMK            (N32_FDCAN5_BASE + N32_FDCAN_TTTMK_OFFSET)
#define N32_FDCAN5_TTIR             (N32_FDCAN5_BASE + N32_FDCAN_TTIR_OFFSET)
#define N32_FDCAN5_TTIE             (N32_FDCAN5_BASE + N32_FDCAN_TTIE_OFFSET)
#define N32_FDCAN5_TTILS            (N32_FDCAN5_BASE + N32_FDCAN_TTILS_OFFSET)
#define N32_FDCAN5_TTOST            (N32_FDCAN5_BASE + N32_FDCAN_TTOST_OFFSET)
#define N32_FDCAN5_TURNA            (N32_FDCAN5_BASE + N32_FDCAN_TURNA_OFFSET)
#define N32_FDCAN5_TTLGT            (N32_FDCAN5_BASE + N32_FDCAN_TTLGT_OFFSET)
#define N32_FDCAN5_TTCTC            (N32_FDCAN5_BASE + N32_FDCAN_TTCTC_OFFSET)
#define N32_FDCAN5_TTCPT            (N32_FDCAN5_BASE + N32_FDCAN_TTCPT_OFFSET)
#define N32_FDCAN5_TTCSM            (N32_FDCAN5_BASE + N32_FDCAN_TTCSM_OFFSET)
#define N32_FDCAN5_TTTS             (N32_FDCAN5_BASE + N32_FDCAN_TTTS_OFFSET)

#define N32_FDCAN6_CREL             (N32_FDCAN6_BASE + N32_FDCAN_CREL_OFFSET)
#define N32_FDCAN6_ENDN             (N32_FDCAN6_BASE + N32_FDCAN_ENDN_OFFSET)
#define N32_FDCAN6_DBTP             (N32_FDCAN6_BASE + N32_FDCAN_DBTP_OFFSET)
#define N32_FDCAN6_TEST             (N32_FDCAN6_BASE + N32_FDCAN_TEST_OFFSET)
#define N32_FDCAN6_RWD              (N32_FDCAN6_BASE + N32_FDCAN_RWD_OFFSET)
#define N32_FDCAN6_CCCR             (N32_FDCAN6_BASE + N32_FDCAN_CCCR_OFFSET)
#define N32_FDCAN6_NBTP             (N32_FDCAN6_BASE + N32_FDCAN_NBTP_OFFSET)
#define N32_FDCAN6_TSCC             (N32_FDCAN6_BASE + N32_FDCAN_TSCC_OFFSET)
#define N32_FDCAN6_TSCV             (N32_FDCAN6_BASE + N32_FDCAN_TSCV_OFFSET)
#define N32_FDCAN6_TOCC             (N32_FDCAN6_BASE + N32_FDCAN_TOCC_OFFSET)
#define N32_FDCAN6_TOCV             (N32_FDCAN6_BASE + N32_FDCAN_TOCV_OFFSET)
#define N32_FDCAN6_ECR              (N32_FDCAN6_BASE + N32_FDCAN_ECR_OFFSET)
#define N32_FDCAN6_PSR              (N32_FDCAN6_BASE + N32_FDCAN_PSR_OFFSET)
#define N32_FDCAN6_TDCR             (N32_FDCAN6_BASE + N32_FDCAN_TDCR_OFFSET)
#define N32_FDCAN6_IR               (N32_FDCAN6_BASE + N32_FDCAN_IR_OFFSET)
#define N32_FDCAN6_IE               (N32_FDCAN6_BASE + N32_FDCAN_IE_OFFSET)
#define N32_FDCAN6_ILS              (N32_FDCAN6_BASE + N32_FDCAN_ILS_OFFSET)
#define N32_FDCAN6_ILE              (N32_FDCAN6_BASE + N32_FDCAN_ILE_OFFSET)
#define N32_FDCAN6_GFC              (N32_FDCAN6_BASE + N32_FDCAN_GFC_OFFSET)
#define N32_FDCAN6_SIDFC            (N32_FDCAN6_BASE + N32_FDCAN_SIDFC_OFFSET)
#define N32_FDCAN6_XIDFC            (N32_FDCAN6_BASE + N32_FDCAN_XIDFC_OFFSET)
#define N32_FDCAN6_XIDAM            (N32_FDCAN6_BASE + N32_FDCAN_XIDAM_OFFSET)
#define N32_FDCAN6_HPMS             (N32_FDCAN6_BASE + N32_FDCAN_HPMS_OFFSET)
#define N32_FDCAN6_NDAT1            (N32_FDCAN6_BASE + N32_FDCAN_NDAT1_OFFSET)
#define N32_FDCAN6_NDAT2            (N32_FDCAN6_BASE + N32_FDCAN_NDAT2_OFFSET)
#define N32_FDCAN6_RXF0C            (N32_FDCAN6_BASE + N32_FDCAN_RXF0C_OFFSET)
#define N32_FDCAN6_RXF0S            (N32_FDCAN6_BASE + N32_FDCAN_RXF0S_OFFSET)
#define N32_FDCAN6_RXF0A            (N32_FDCAN6_BASE + N32_FDCAN_RXF0A_OFFSET)
#define N32_FDCAN6_RXBC             (N32_FDCAN6_BASE + N32_FDCAN_RXBC_OFFSET)
#define N32_FDCAN6_RXF1C            (N32_FDCAN6_BASE + N32_FDCAN_RXF1C_OFFSET)
#define N32_FDCAN6_RXF1S            (N32_FDCAN6_BASE + N32_FDCAN_RXF1S_OFFSET)
#define N32_FDCAN6_RXF1A            (N32_FDCAN6_BASE + N32_FDCAN_RXF1A_OFFSET)
#define N32_FDCAN6_RXESC            (N32_FDCAN6_BASE + N32_FDCAN_RXESC_OFFSET)
#define N32_FDCAN6_TXBC             (N32_FDCAN6_BASE + N32_FDCAN_TXBC_OFFSET)
#define N32_FDCAN6_TXFQS            (N32_FDCAN6_BASE + N32_FDCAN_TXFQS_OFFSET)
#define N32_FDCAN6_TXESC            (N32_FDCAN6_BASE + N32_FDCAN_TXESC_OFFSET)
#define N32_FDCAN6_TXBRP            (N32_FDCAN6_BASE + N32_FDCAN_TXBRP_OFFSET)
#define N32_FDCAN6_TXBAR            (N32_FDCAN6_BASE + N32_FDCAN_TXBAR_OFFSET)
#define N32_FDCAN6_TXBCR            (N32_FDCAN6_BASE + N32_FDCAN_TXBCR_OFFSET)
#define N32_FDCAN6_TXBTO            (N32_FDCAN6_BASE + N32_FDCAN_TXBTO_OFFSET)
#define N32_FDCAN6_TXBCF            (N32_FDCAN6_BASE + N32_FDCAN_TXBCF_OFFSET)
#define N32_FDCAN6_TXBTIE           (N32_FDCAN6_BASE + \
                                     N32_FDCAN_TXBTIE_OFFSET)
#define N32_FDCAN6_TXBCIE           (N32_FDCAN6_BASE + \
                                     N32_FDCAN_TXBCIE_OFFSET)
#define N32_FDCAN6_TXEFC            (N32_FDCAN6_BASE + N32_FDCAN_TXEFC_OFFSET)
#define N32_FDCAN6_TXEFS            (N32_FDCAN6_BASE + N32_FDCAN_TXEFS_OFFSET)
#define N32_FDCAN6_TXEFA            (N32_FDCAN6_BASE + N32_FDCAN_TXEFA_OFFSET)
#define N32_FDCAN6_TTTMC            (N32_FDCAN6_BASE + N32_FDCAN_TTTMC_OFFSET)
#define N32_FDCAN6_TTRMC            (N32_FDCAN6_BASE + N32_FDCAN_TTRMC_OFFSET)
#define N32_FDCAN6_TTOCF            (N32_FDCAN6_BASE + N32_FDCAN_TTOCF_OFFSET)
#define N32_FDCAN6_TTMLM            (N32_FDCAN6_BASE + N32_FDCAN_TTMLM_OFFSET)
#define N32_FDCAN6_TURCF            (N32_FDCAN6_BASE + N32_FDCAN_TURCF_OFFSET)
#define N32_FDCAN6_TTOCN            (N32_FDCAN6_BASE + N32_FDCAN_TTOCN_OFFSET)
#define N32_FDCAN6_TTGTP            (N32_FDCAN6_BASE + N32_FDCAN_TTGTP_OFFSET)
#define N32_FDCAN6_TTTMK            (N32_FDCAN6_BASE + N32_FDCAN_TTTMK_OFFSET)
#define N32_FDCAN6_TTIR             (N32_FDCAN6_BASE + N32_FDCAN_TTIR_OFFSET)
#define N32_FDCAN6_TTIE             (N32_FDCAN6_BASE + N32_FDCAN_TTIE_OFFSET)
#define N32_FDCAN6_TTILS            (N32_FDCAN6_BASE + N32_FDCAN_TTILS_OFFSET)
#define N32_FDCAN6_TTOST            (N32_FDCAN6_BASE + N32_FDCAN_TTOST_OFFSET)
#define N32_FDCAN6_TURNA            (N32_FDCAN6_BASE + N32_FDCAN_TURNA_OFFSET)
#define N32_FDCAN6_TTLGT            (N32_FDCAN6_BASE + N32_FDCAN_TTLGT_OFFSET)
#define N32_FDCAN6_TTCTC            (N32_FDCAN6_BASE + N32_FDCAN_TTCTC_OFFSET)
#define N32_FDCAN6_TTCPT            (N32_FDCAN6_BASE + N32_FDCAN_TTCPT_OFFSET)
#define N32_FDCAN6_TTCSM            (N32_FDCAN6_BASE + N32_FDCAN_TTCSM_OFFSET)
#define N32_FDCAN6_TTTS             (N32_FDCAN6_BASE + N32_FDCAN_TTTS_OFFSET)

#define N32_FDCAN7_CREL             (N32_FDCAN7_BASE + N32_FDCAN_CREL_OFFSET)
#define N32_FDCAN7_ENDN             (N32_FDCAN7_BASE + N32_FDCAN_ENDN_OFFSET)
#define N32_FDCAN7_DBTP             (N32_FDCAN7_BASE + N32_FDCAN_DBTP_OFFSET)
#define N32_FDCAN7_TEST             (N32_FDCAN7_BASE + N32_FDCAN_TEST_OFFSET)
#define N32_FDCAN7_RWD              (N32_FDCAN7_BASE + N32_FDCAN_RWD_OFFSET)
#define N32_FDCAN7_CCCR             (N32_FDCAN7_BASE + N32_FDCAN_CCCR_OFFSET)
#define N32_FDCAN7_NBTP             (N32_FDCAN7_BASE + N32_FDCAN_NBTP_OFFSET)
#define N32_FDCAN7_TSCC             (N32_FDCAN7_BASE + N32_FDCAN_TSCC_OFFSET)
#define N32_FDCAN7_TSCV             (N32_FDCAN7_BASE + N32_FDCAN_TSCV_OFFSET)
#define N32_FDCAN7_TOCC             (N32_FDCAN7_BASE + N32_FDCAN_TOCC_OFFSET)
#define N32_FDCAN7_TOCV             (N32_FDCAN7_BASE + N32_FDCAN_TOCV_OFFSET)
#define N32_FDCAN7_ECR              (N32_FDCAN7_BASE + N32_FDCAN_ECR_OFFSET)
#define N32_FDCAN7_PSR              (N32_FDCAN7_BASE + N32_FDCAN_PSR_OFFSET)
#define N32_FDCAN7_TDCR             (N32_FDCAN7_BASE + N32_FDCAN_TDCR_OFFSET)
#define N32_FDCAN7_IR               (N32_FDCAN7_BASE + N32_FDCAN_IR_OFFSET)
#define N32_FDCAN7_IE               (N32_FDCAN7_BASE + N32_FDCAN_IE_OFFSET)
#define N32_FDCAN7_ILS              (N32_FDCAN7_BASE + N32_FDCAN_ILS_OFFSET)
#define N32_FDCAN7_ILE              (N32_FDCAN7_BASE + N32_FDCAN_ILE_OFFSET)
#define N32_FDCAN7_GFC              (N32_FDCAN7_BASE + N32_FDCAN_GFC_OFFSET)
#define N32_FDCAN7_SIDFC            (N32_FDCAN7_BASE + N32_FDCAN_SIDFC_OFFSET)
#define N32_FDCAN7_XIDFC            (N32_FDCAN7_BASE + N32_FDCAN_XIDFC_OFFSET)
#define N32_FDCAN7_XIDAM            (N32_FDCAN7_BASE + N32_FDCAN_XIDAM_OFFSET)
#define N32_FDCAN7_HPMS             (N32_FDCAN7_BASE + N32_FDCAN_HPMS_OFFSET)
#define N32_FDCAN7_NDAT1            (N32_FDCAN7_BASE + N32_FDCAN_NDAT1_OFFSET)
#define N32_FDCAN7_NDAT2            (N32_FDCAN7_BASE + N32_FDCAN_NDAT2_OFFSET)
#define N32_FDCAN7_RXF0C            (N32_FDCAN7_BASE + N32_FDCAN_RXF0C_OFFSET)
#define N32_FDCAN7_RXF0S            (N32_FDCAN7_BASE + N32_FDCAN_RXF0S_OFFSET)
#define N32_FDCAN7_RXF0A            (N32_FDCAN7_BASE + N32_FDCAN_RXF0A_OFFSET)
#define N32_FDCAN7_RXBC             (N32_FDCAN7_BASE + N32_FDCAN_RXBC_OFFSET)
#define N32_FDCAN7_RXF1C            (N32_FDCAN7_BASE + N32_FDCAN_RXF1C_OFFSET)
#define N32_FDCAN7_RXF1S            (N32_FDCAN7_BASE + N32_FDCAN_RXF1S_OFFSET)
#define N32_FDCAN7_RXF1A            (N32_FDCAN7_BASE + N32_FDCAN_RXF1A_OFFSET)
#define N32_FDCAN7_RXESC            (N32_FDCAN7_BASE + N32_FDCAN_RXESC_OFFSET)
#define N32_FDCAN7_TXBC             (N32_FDCAN7_BASE + N32_FDCAN_TXBC_OFFSET)
#define N32_FDCAN7_TXFQS            (N32_FDCAN7_BASE + N32_FDCAN_TXFQS_OFFSET)
#define N32_FDCAN7_TXESC            (N32_FDCAN7_BASE + N32_FDCAN_TXESC_OFFSET)
#define N32_FDCAN7_TXBRP            (N32_FDCAN7_BASE + N32_FDCAN_TXBRP_OFFSET)
#define N32_FDCAN7_TXBAR            (N32_FDCAN7_BASE + N32_FDCAN_TXBAR_OFFSET)
#define N32_FDCAN7_TXBCR            (N32_FDCAN7_BASE + N32_FDCAN_TXBCR_OFFSET)
#define N32_FDCAN7_TXBTO            (N32_FDCAN7_BASE + N32_FDCAN_TXBTO_OFFSET)
#define N32_FDCAN7_TXBCF            (N32_FDCAN7_BASE + N32_FDCAN_TXBCF_OFFSET)
#define N32_FDCAN7_TXBTIE           (N32_FDCAN7_BASE + \
                                     N32_FDCAN_TXBTIE_OFFSET)
#define N32_FDCAN7_TXBCIE           (N32_FDCAN7_BASE + \
                                     N32_FDCAN_TXBCIE_OFFSET)
#define N32_FDCAN7_TXEFC            (N32_FDCAN7_BASE + N32_FDCAN_TXEFC_OFFSET)
#define N32_FDCAN7_TXEFS            (N32_FDCAN7_BASE + N32_FDCAN_TXEFS_OFFSET)
#define N32_FDCAN7_TXEFA            (N32_FDCAN7_BASE + N32_FDCAN_TXEFA_OFFSET)
#define N32_FDCAN7_TTTMC            (N32_FDCAN7_BASE + N32_FDCAN_TTTMC_OFFSET)
#define N32_FDCAN7_TTRMC            (N32_FDCAN7_BASE + N32_FDCAN_TTRMC_OFFSET)
#define N32_FDCAN7_TTOCF            (N32_FDCAN7_BASE + N32_FDCAN_TTOCF_OFFSET)
#define N32_FDCAN7_TTMLM            (N32_FDCAN7_BASE + N32_FDCAN_TTMLM_OFFSET)
#define N32_FDCAN7_TURCF            (N32_FDCAN7_BASE + N32_FDCAN_TURCF_OFFSET)
#define N32_FDCAN7_TTOCN            (N32_FDCAN7_BASE + N32_FDCAN_TTOCN_OFFSET)
#define N32_FDCAN7_TTGTP            (N32_FDCAN7_BASE + N32_FDCAN_TTGTP_OFFSET)
#define N32_FDCAN7_TTTMK            (N32_FDCAN7_BASE + N32_FDCAN_TTTMK_OFFSET)
#define N32_FDCAN7_TTIR             (N32_FDCAN7_BASE + N32_FDCAN_TTIR_OFFSET)
#define N32_FDCAN7_TTIE             (N32_FDCAN7_BASE + N32_FDCAN_TTIE_OFFSET)
#define N32_FDCAN7_TTILS            (N32_FDCAN7_BASE + N32_FDCAN_TTILS_OFFSET)
#define N32_FDCAN7_TTOST            (N32_FDCAN7_BASE + N32_FDCAN_TTOST_OFFSET)
#define N32_FDCAN7_TURNA            (N32_FDCAN7_BASE + N32_FDCAN_TURNA_OFFSET)
#define N32_FDCAN7_TTLGT            (N32_FDCAN7_BASE + N32_FDCAN_TTLGT_OFFSET)
#define N32_FDCAN7_TTCTC            (N32_FDCAN7_BASE + N32_FDCAN_TTCTC_OFFSET)
#define N32_FDCAN7_TTCPT            (N32_FDCAN7_BASE + N32_FDCAN_TTCPT_OFFSET)
#define N32_FDCAN7_TTCSM            (N32_FDCAN7_BASE + N32_FDCAN_TTCSM_OFFSET)
#define N32_FDCAN7_TTTS             (N32_FDCAN7_BASE + N32_FDCAN_TTTS_OFFSET)

#define N32_FDCAN8_CREL             (N32_FDCAN8_BASE + N32_FDCAN_CREL_OFFSET)
#define N32_FDCAN8_ENDN             (N32_FDCAN8_BASE + N32_FDCAN_ENDN_OFFSET)
#define N32_FDCAN8_DBTP             (N32_FDCAN8_BASE + N32_FDCAN_DBTP_OFFSET)
#define N32_FDCAN8_TEST             (N32_FDCAN8_BASE + N32_FDCAN_TEST_OFFSET)
#define N32_FDCAN8_RWD              (N32_FDCAN8_BASE + N32_FDCAN_RWD_OFFSET)
#define N32_FDCAN8_CCCR             (N32_FDCAN8_BASE + N32_FDCAN_CCCR_OFFSET)
#define N32_FDCAN8_NBTP             (N32_FDCAN8_BASE + N32_FDCAN_NBTP_OFFSET)
#define N32_FDCAN8_TSCC             (N32_FDCAN8_BASE + N32_FDCAN_TSCC_OFFSET)
#define N32_FDCAN8_TSCV             (N32_FDCAN8_BASE + N32_FDCAN_TSCV_OFFSET)
#define N32_FDCAN8_TOCC             (N32_FDCAN8_BASE + N32_FDCAN_TOCC_OFFSET)
#define N32_FDCAN8_TOCV             (N32_FDCAN8_BASE + N32_FDCAN_TOCV_OFFSET)
#define N32_FDCAN8_ECR              (N32_FDCAN8_BASE + N32_FDCAN_ECR_OFFSET)
#define N32_FDCAN8_PSR              (N32_FDCAN8_BASE + N32_FDCAN_PSR_OFFSET)
#define N32_FDCAN8_TDCR             (N32_FDCAN8_BASE + N32_FDCAN_TDCR_OFFSET)
#define N32_FDCAN8_IR               (N32_FDCAN8_BASE + N32_FDCAN_IR_OFFSET)
#define N32_FDCAN8_IE               (N32_FDCAN8_BASE + N32_FDCAN_IE_OFFSET)
#define N32_FDCAN8_ILS              (N32_FDCAN8_BASE + N32_FDCAN_ILS_OFFSET)
#define N32_FDCAN8_ILE              (N32_FDCAN8_BASE + N32_FDCAN_ILE_OFFSET)
#define N32_FDCAN8_GFC              (N32_FDCAN8_BASE + N32_FDCAN_GFC_OFFSET)
#define N32_FDCAN8_SIDFC            (N32_FDCAN8_BASE + N32_FDCAN_SIDFC_OFFSET)
#define N32_FDCAN8_XIDFC            (N32_FDCAN8_BASE + N32_FDCAN_XIDFC_OFFSET)
#define N32_FDCAN8_XIDAM            (N32_FDCAN8_BASE + N32_FDCAN_XIDAM_OFFSET)
#define N32_FDCAN8_HPMS             (N32_FDCAN8_BASE + N32_FDCAN_HPMS_OFFSET)
#define N32_FDCAN8_NDAT1            (N32_FDCAN8_BASE + N32_FDCAN_NDAT1_OFFSET)
#define N32_FDCAN8_NDAT2            (N32_FDCAN8_BASE + N32_FDCAN_NDAT2_OFFSET)
#define N32_FDCAN8_RXF0C            (N32_FDCAN8_BASE + N32_FDCAN_RXF0C_OFFSET)
#define N32_FDCAN8_RXF0S            (N32_FDCAN8_BASE + N32_FDCAN_RXF0S_OFFSET)
#define N32_FDCAN8_RXF0A            (N32_FDCAN8_BASE + N32_FDCAN_RXF0A_OFFSET)
#define N32_FDCAN8_RXBC             (N32_FDCAN8_BASE + N32_FDCAN_RXBC_OFFSET)
#define N32_FDCAN8_RXF1C            (N32_FDCAN8_BASE + N32_FDCAN_RXF1C_OFFSET)
#define N32_FDCAN8_RXF1S            (N32_FDCAN8_BASE + N32_FDCAN_RXF1S_OFFSET)
#define N32_FDCAN8_RXF1A            (N32_FDCAN8_BASE + N32_FDCAN_RXF1A_OFFSET)
#define N32_FDCAN8_RXESC            (N32_FDCAN8_BASE + N32_FDCAN_RXESC_OFFSET)
#define N32_FDCAN8_TXBC             (N32_FDCAN8_BASE + N32_FDCAN_TXBC_OFFSET)
#define N32_FDCAN8_TXFQS            (N32_FDCAN8_BASE + N32_FDCAN_TXFQS_OFFSET)
#define N32_FDCAN8_TXESC            (N32_FDCAN8_BASE + N32_FDCAN_TXESC_OFFSET)
#define N32_FDCAN8_TXBRP            (N32_FDCAN8_BASE + N32_FDCAN_TXBRP_OFFSET)
#define N32_FDCAN8_TXBAR            (N32_FDCAN8_BASE + N32_FDCAN_TXBAR_OFFSET)
#define N32_FDCAN8_TXBCR            (N32_FDCAN8_BASE + N32_FDCAN_TXBCR_OFFSET)
#define N32_FDCAN8_TXBTO            (N32_FDCAN8_BASE + N32_FDCAN_TXBTO_OFFSET)
#define N32_FDCAN8_TXBCF            (N32_FDCAN8_BASE + N32_FDCAN_TXBCF_OFFSET)
#define N32_FDCAN8_TXBTIE           (N32_FDCAN8_BASE + \
                                     N32_FDCAN_TXBTIE_OFFSET)
#define N32_FDCAN8_TXBCIE           (N32_FDCAN8_BASE + \
                                     N32_FDCAN_TXBCIE_OFFSET)
#define N32_FDCAN8_TXEFC            (N32_FDCAN8_BASE + N32_FDCAN_TXEFC_OFFSET)
#define N32_FDCAN8_TXEFS            (N32_FDCAN8_BASE + N32_FDCAN_TXEFS_OFFSET)
#define N32_FDCAN8_TXEFA            (N32_FDCAN8_BASE + N32_FDCAN_TXEFA_OFFSET)
#define N32_FDCAN8_TTTMC            (N32_FDCAN8_BASE + N32_FDCAN_TTTMC_OFFSET)
#define N32_FDCAN8_TTRMC            (N32_FDCAN8_BASE + N32_FDCAN_TTRMC_OFFSET)
#define N32_FDCAN8_TTOCF            (N32_FDCAN8_BASE + N32_FDCAN_TTOCF_OFFSET)
#define N32_FDCAN8_TTMLM            (N32_FDCAN8_BASE + N32_FDCAN_TTMLM_OFFSET)
#define N32_FDCAN8_TURCF            (N32_FDCAN8_BASE + N32_FDCAN_TURCF_OFFSET)
#define N32_FDCAN8_TTOCN            (N32_FDCAN8_BASE + N32_FDCAN_TTOCN_OFFSET)
#define N32_FDCAN8_TTGTP            (N32_FDCAN8_BASE + N32_FDCAN_TTGTP_OFFSET)
#define N32_FDCAN8_TTTMK            (N32_FDCAN8_BASE + N32_FDCAN_TTTMK_OFFSET)
#define N32_FDCAN8_TTIR             (N32_FDCAN8_BASE + N32_FDCAN_TTIR_OFFSET)
#define N32_FDCAN8_TTIE             (N32_FDCAN8_BASE + N32_FDCAN_TTIE_OFFSET)
#define N32_FDCAN8_TTILS            (N32_FDCAN8_BASE + N32_FDCAN_TTILS_OFFSET)
#define N32_FDCAN8_TTOST            (N32_FDCAN8_BASE + N32_FDCAN_TTOST_OFFSET)
#define N32_FDCAN8_TURNA            (N32_FDCAN8_BASE + N32_FDCAN_TURNA_OFFSET)
#define N32_FDCAN8_TTLGT            (N32_FDCAN8_BASE + N32_FDCAN_TTLGT_OFFSET)
#define N32_FDCAN8_TTCTC            (N32_FDCAN8_BASE + N32_FDCAN_TTCTC_OFFSET)
#define N32_FDCAN8_TTCPT            (N32_FDCAN8_BASE + N32_FDCAN_TTCPT_OFFSET)
#define N32_FDCAN8_TTCSM            (N32_FDCAN8_BASE + N32_FDCAN_TTCSM_OFFSET)
#define N32_FDCAN8_TTTS             (N32_FDCAN8_BASE + N32_FDCAN_TTTS_OFFSET)

/******** Bit definition for FDCAN_CREL register  ********/
#define FDCAN_CREL_REL_SHIFT        (28)
#define FDCAN_CREL_REL_MASK         (0xF << FDCAN_CREL_REL_SHIFT)       /*
                                                                         * Core
                                                                         * release
                                                                         */
#define FDCAN_CREL_STEP_SHIFT       (24)
#define FDCAN_CREL_STEP_MASK        (0xF << FDCAN_CREL_STEP_SHIFT)      /*
                                                                         * Step
                                                                         * of
                                                                         * Core
                                                                         * release
                                                                         */
#define FDCAN_CREL_SUBSTEP_SHIFT    (20)
#define FDCAN_CREL_SUBSTEP_MASK     (0xF << FDCAN_CREL_SUBSTEP_SHIFT)   /*
                                                                         * Sub-step
                                                                         * of
                                                                         * Core
                                                                         * release
                                                                         */
#define FDCAN_CREL_YEAR_SHIFT       (16)
#define FDCAN_CREL_YEAR_MASK        (0xF << FDCAN_CREL_YEAR_SHIFT)      /*
                                                                         * Timestamp
                                                                         * Year
                                                                         */
#define FDCAN_CREL_MON_SHIFT        (8)
#define FDCAN_CREL_MON_MASK         (0xFF << FDCAN_CREL_MON_SHIFT)      /*
                                                                         * Timestamp
                                                                         * Month
                                                                         */
#define FDCAN_CREL_DAY_SHIFT        (0)
#define FDCAN_CREL_DAY_MASK         (0xFF << FDCAN_CREL_DAY_SHIFT)      /*
                                                                         * Timestamp
                                                                         * Day
                                                                         */

/******** Bit definition for FDCAN_ENDN register  ********/
#define FDCAN_ENDN_ETV_SHIFT        (0)
#define FDCAN_ENDN_ETV_MASK         (0xFFFFFFFF << FDCAN_ENDN_ETV_SHIFT) /*
                                                                          * Endiannes
                                                                          * Test
                                                                          * value
                                                                          */

/******** Bit definition for FDCAN_DBTP register  ********/
#define FDCAN_DBTP_TDC              (1 << 23)                           /*
                                                                         * Transceiver
                                                                         * Delay
                                                                         * Compensation
                                                                         */
#define FDCAN_DBTP_DBRP_SHIFT       (16)
#define FDCAN_DBTP_DBRP_MASK        (0x1F << FDCAN_DBTP_DBRP_SHIFT)     /*
                                                                         * Data
                                                                         * BIt
                                                                         * Rate
                                                                         * Prescaler
                                                                         */
#define FDCAN_DBTP_DTSEG1_SHIFT     (8)
#define FDCAN_DBTP_DTSEG1_MASK      (0x1F << FDCAN_DBTP_DTSEG1_SHIFT)   /*
                                                                         * Data
                                                                         * time
                                                                         * segment
                                                                         * after
                                                                         * sample
                                                                         * point
                                                                         */
#define FDCAN_DBTP_DTSEG2_SHIFT     (4)
#define FDCAN_DBTP_DTSEG2_MASK      (0xF << FDCAN_DBTP_DTSEG2_SHIFT)    /*
                                                                         * Data
                                                                         * time
                                                                         * segment
                                                                         * after
                                                                         * sample
                                                                         * point
                                                                         */
#define FDCAN_DBTP_DSJW_SHIFT       (0)
#define FDCAN_DBTP_DSJW_MASK        (0xF << FDCAN_DBTP_DSJW_SHIFT)      /*
                                                                         * Synchronization
                                                                         * Jump
                                                                         * Width
                                                                         */

/******** Bit definition for FDCAN_TEST register  ********/
#define FDCAN_TEST_RX               (1 << 7)                        /* Receive
                                                                     * pin */
#define FDCAN_TEST_TX_SHIFT         (5)
#define FDCAN_TEST_TX_MASK          (0x3 << FDCAN_TEST_TX_SHIFT)    /* Control
                                                                     * of
                                                                     * transmit
                                                                     * pin */
#define FDCAN_TEST_LBCK             (1 << 4)                        /* Loop
                                                                     * Back
                                                                     * mode */

/******** Bit definition for FDCAN_RWD register  ********/
#define FDCAN_RWD_WDV_SHIFT         (8)
#define FDCAN_RWD_WDV_MASK          (0xFF << FDCAN_RWD_WDV_SHIFT)   /*
                                                                     * Watchdog
                                                                     * value
                                                                     */
#define FDCAN_RWD_WDC_SHIFT         (0)
#define FDCAN_RWD_WDC_MASK          (0xFF << FDCAN_RWD_WDC_SHIFT)   /*
                                                                     * Watchdog
                                                                     * configuration
                                                                     */

/******** Bit definition for FDCAN_CCCR register  ********/
#define FDCAN_CCCR_NISO             (1 << 15)   /* Non ISO operation */
#define FDCAN_CCCR_TXP              (1 << 14)   /* Transmit Pause */
#define FDCAN_CCCR_EFBI             (1 << 13)   /* Edge Filtering during Bus
                                                 * Integration */
#define FDCAN_CCCR_PXHD             (1 << 12)   /* Protocol Exception Handling
                                                 * Disable */
#define FDCAN_CCCR_WMM              (1 << 11)   /* Wide Message Marker */
#define FDCAN_CCCR_UTSU             (1 << 10)   /* Use Timestamping Unit */
#define FDCAN_CCCR_BRSE             (1 << 9)    /* Bit Rate Switch Enable */
#define FDCAN_CCCR_FDOE             (1 << 8)    /* FD Operation Enable */
#define FDCAN_CCCR_TEST             (1 << 7)    /* Test Mode Enable */
#define FDCAN_CCCR_DAR              (1 << 6)    /* Disable Automatic
                                                 * Retransmission */
#define FDCAN_CCCR_MON              (1 << 5)    /* Bus Monitoring Mode */
#define FDCAN_CCCR_CSR              (1 << 4)    /* Clock Stop Request */
#define FDCAN_CCCR_CSA              (1 << 3)    /* Clock Stop Acknowledge */
#define FDCAN_CCCR_ASM              (1 << 2)    /* ASM Restricted Operation
                                                 * Mode */
#define FDCAN_CCCR_CCE              (1 << 1)    /* Configuration change enable
                                                 */
#define FDCAN_CCCR_INIT             (1 << 0)    /* Initialization */

/******** Bit definition for FDCAN_NBTP register  ********/
#define FDCAN_NBTP_NSJW_SHIFT       (25)
#define FDCAN_NBTP_NSJW_MASK        (0x7F << FDCAN_NBTP_NSJW_SHIFT)     /*
                                                                         * Nominal
                                                                         * (re)synchronization
                                                                         * jump
                                                                         * width
                                                                         */
#define FDCAN_NBTP_NBRP_SHIFT       (16)
#define FDCAN_NBTP_NBRP_MASK        (0x1FF << FDCAN_NBTP_NBRP_SHIFT)    /*
                                                                         * Bitrate
                                                                         * prescaler
                                                                         */
#define FDCAN_NBTP_NTSEG1_SHIFT     (8)
#define FDCAN_NBTP_NTSEG1_MASK      (0xFF << FDCAN_NBTP_NTSEG1_SHIFT)   /*
                                                                         * Nominal
                                                                         * time
                                                                         * segment
                                                                         * before
                                                                         * sample
                                                                         * point
                                                                         */
#define FDCAN_NBTP_NTSEG2_SHIFT     (0)
#define FDCAN_NBTP_NTSEG2_MASK      (0x7F << FDCAN_NBTP_NTSEG2_SHIFT)   /*
                                                                         * Nominal
                                                                         * time
                                                                         * segment
                                                                         * after
                                                                         * sample
                                                                         * point
                                                                         */

/******** Bit definition for FDCAN_TSCC register  ********/
#define FDCAN_TSCC_TCP_SHIFT        (16)
#define FDCAN_TSCC_TCP_MASK         (0xF << FDCAN_TSCC_TCP_SHIFT)   /*
                                                                     * Timestamp
                                                                     * counter
                                                                     * prescaler
                                                                     */
#define FDCAN_TSCC_TSS_SHIFT        (0)
#define FDCAN_TSCC_TSS_MASK         (0x3 << FDCAN_TSCC_TSS_SHIFT)   /*
                                                                     * Timestamp
                                                                     * select
                                                                     */

/******** Bit definition for FDCAN_TSCV register  ********/
#define FDCAN_TSCV_TSC_SHIFT        (0)
#define FDCAN_TSCV_TSC_MASK         (0xFFFF << FDCAN_TSCV_TSC_SHIFT) /*
                                                                      * Timestamp
                                                                      * counter
                                                                      */

/******** Bit definition for FDCAN_TOCC register  ********/
#define FDCAN_TOCC_TOP_SHIFT        (16)
#define FDCAN_TOCC_TOP_MASK         (0xFFFF << FDCAN_TOCC_TOP_SHIFT)    /*
                                                                         * Timeout
                                                                         * period
                                                                         */
#define FDCAN_TOCC_TOS_SHIFT        (1)
#define FDCAN_TOCC_TOS_MASK         (0x3 << FDCAN_TOCC_TOS_SHIFT)       /*
                                                                         * Timeout
                                                                         * select
                                                                         */
#define FDCAN_TOCC_ETOC             (1 << 0)                            /*
                                                                         * Enable
                                                                         * timeout
                                                                         * counter
                                                                         */

/******** Bit definition for FDCAN_TOCV register  ********/
#define FDCAN_TOCV_TOC_SHIFT        (0)
#define FDCAN_TOCV_TOC_MASK         (0xFFFF << FDCAN_TOCV_TOC_SHIFT) /*
                                                                      * Timeout
                                                                      * counter
                                                                      */

/******** Bit definition for FDCAN_ECR register  ********/
#define FDCAN_ECR_CEL_SHIFT         (16)
#define FDCAN_ECR_CEL_MASK          (0xFF << FDCAN_ECR_CEL_SHIFT)   /* CAN
                                                                     * error
                                                                     * logging
                                                                     */
#define FDCAN_ECR_RP                (1 << 15)                       /* Receive
                                                                     * error
                                                                     * passive
                                                                     */
#define FDCAN_ECR_REC_SHIFT         (8)
#define FDCAN_ECR_REC_MASK          (0x7F << FDCAN_ECR_REC_SHIFT)   /* Receive
                                                                     * error
                                                                     * counter
                                                                     */
#define FDCAN_ECR_TEC_SHIFT         (0)
#define FDCAN_ECR_TEC_MASK          (0xFF << FDCAN_ECR_TEC_SHIFT)   /*
                                                                     * Transmit
                                                                     * error
                                                                     * counter
                                                                     */

/******** Bit definition for FDCAN_PSR register  ********/
#define FDCAN_PSR_TDCV_SHIFT        (16)
#define FDCAN_PSR_TDCV_MASK         (0x7F << FDCAN_PSR_TDCV_SHIFT)  /*
                                                                     * Transmitter
                                                                     * Delay
                                                                     * Compensation
                                                                     * value
                                                                     */
#define FDCAN_PSR_PXE               (1 << 14)                       /*
                                                                     * Protocol
                                                                     * exception
                                                                     * event
                                                                     */
#define FDCAN_PSR_RFDF              (1 << 13)                       /*
                                                                     * Received
                                                                     * FDCAN
                                                                     * message
                                                                     */
#define FDCAN_PSR_RBRS              (1 << 12)                       /* BRS
                                                                     * flag of
                                                                     * last
                                                                     * received
                                                                     * FDCAN
                                                                     * message
                                                                     */
#define FDCAN_PSR_RESI              (1 << 11)                       /* ESI
                                                                     * flag of
                                                                     * last
                                                                     * received
                                                                     * FDCAN
                                                                     * message
                                                                     */
#define FDCAN_PSR_DLEC_SHIFT        (8)
#define FDCAN_PSR_DLEC_MASK         (0x7 << FDCAN_PSR_DLEC_SHIFT)   /* Data
                                                                     * Last
                                                                     * error
                                                                     * code */
#define FDCAN_PSR_BO                (1 << 7)                        /* Bus_Off
                                                                     * status
                                                                     */
#define FDCAN_PSR_EW                (1 << 6)                        /* Warning
                                                                     * status
                                                                     */
#define FDCAN_PSR_EP                (1 << 5)                        /* Error
                                                                     * Passive
                                                                     */
#define FDCAN_PSR_ACT_SHIFT         (3)
#define FDCAN_PSR_ACT_MASK          (0x3 << FDCAN_PSR_ACT_SHIFT)    /*
                                                                     * Activity
                                                                     */
#define FDCAN_PSR_LEC_SHIFT         (0)
#define FDCAN_PSR_LEC_MASK          (0x7 << FDCAN_PSR_LEC_SHIFT)    /* Last
                                                                     * error
                                                                     * code */

/******** Bit definition for FDCAN_TDCR register  ********/
#define FDCAN_TDCR_TDCO_SHIFT       (8)
#define FDCAN_TDCR_TDCO_MASK        (0x7F << FDCAN_TDCR_TDCO_SHIFT) /*
                                                                     * Transmitter
                                                                     * delay
                                                                     * compensation
                                                                     * offset
                                                                     */
#define FDCAN_TDCR_TDCF_SHIFT       (0)
#define FDCAN_TDCR_TDCF_MASK        (0x7F << FDCAN_TDCR_TDCF_SHIFT) /*
                                                                     * Transmitter
                                                                     * delay
                                                                     * compensation
                                                                     * filter
                                                                     * window
                                                                     * length
                                                                     */

/******** Bit definition for FDCAN_IR register  ********/
#define FDCAN_IR_ARA                (1 << 29)   /* Access to Reserved address
                                                 */
#define FDCAN_IR_PED                (1 << 28)   /* Protocol error in data
                                                 * phase */
#define FDCAN_IR_PEA                (1 << 27)   /* Protocol error in
                                                 * Arbitration phase */
#define FDCAN_IR_WDI                (1 << 26)   /* Watchdog interrupt */
#define FDCAN_IR_BO                 (1 << 25)   /* Bus_Off status */
#define FDCAN_IR_EW                 (1 << 24)   /* Warning status */
#define FDCAN_IR_EP                 (1 << 23)   /* Error Passive */
#define FDCAN_IR_ELO                (1 << 22)   /* Error logging Overflow */
#define FDCAN_IR_BEU                (1 << 21)   /* Bit Error Uncorrected */
#define FDCAN_IR_BEC                (1 << 20)   /* Bit Error Corrected */
#define FDCAN_IR_DRX                (1 << 19)   /* Message stored to dedicated
                                                 * Rx buffer */
#define FDCAN_IR_TOO                (1 << 18)   /* Timeout occurred */
#define FDCAN_IR_MRAF               (1 << 17)   /* Message RAM Access Failure
                                                 */
#define FDCAN_IR_TSW                (1 << 16)   /* Timestamp wraparound */
#define FDCAN_IR_TEFL               (1 << 15)   /* Tx event FIFO element Lost
                                                 */
#define FDCAN_IR_TEFF               (1 << 14)   /* Tx event FIFO Full */
#define FDCAN_IR_TEFW               (1 << 13)   /* Tx event FIFO Watermark
                                                 * Reached */
#define FDCAN_IR_TEFN               (1 << 12)   /* Tx event FIFO New Entry */
#define FDCAN_IR_TFE                (1 << 11)   /* Tx FIFO Empty */
#define FDCAN_IR_TCF                (1 << 10)   /* Transmission cancellation
                                                 * finished */
#define FDCAN_IR_TC                 (1 << 9)    /* Transmission Completed */
#define FDCAN_IR_HPM                (1 << 8)    /* High priority message */
#define FDCAN_IR_RF1L               (1 << 7)    /* Rx FIFO 1 message Lost */
#define FDCAN_IR_RF1F               (1 << 6)    /* Rx FIFO 1 Full */
#define FDCAN_IR_RF1W               (1 << 5)    /* Rx FIFO 1 Watermark Reached
                                                 */
#define FDCAN_IR_RF1N               (1 << 4)    /* Rx FIFO 1 new message */
#define FDCAN_IR_RF0L               (1 << 3)    /* Rx FIFO 0 message Lost */
#define FDCAN_IR_RF0F               (1 << 2)    /* Rx FIFO 0 Full */
#define FDCAN_IR_RF0W               (1 << 1)    /* Rx FIFO 0 Watermark Reached
                                                 */
#define FDCAN_IR_RF0N               (1 << 0)    /* Rx FIFO 0 New message */

/******** Bit definition for FDCAN_IE register  ********/
#define FDCAN_IE_ARAE               (1 << 29)   /* Access to Reserved address
                                                 * enable */
#define FDCAN_IE_PEDE               (1 << 28)   /* Protocol error in data
                                                 * phase enable */
#define FDCAN_IE_PEAE               (1 << 27)   /* Protocol error in
                                                 * Arbitration phase enable */
#define FDCAN_IE_WDIE               (1 << 26)   /* Watchdog interrupt enable
                                                 */
#define FDCAN_IE_BOE                (1 << 25)   /* Bus_Off status interrupt
                                                 * enable */
#define FDCAN_IE_EWE                (1 << 24)   /* Warning status interrupt
                                                 * enable */
#define FDCAN_IE_EPE                (1 << 23)   /* Error passive interrupt
                                                 * enable */
#define FDCAN_IE_ELOE               (1 << 22)   /* Error logging overflow
                                                 * interrupt enable */
#define FDCAN_IE_BEUE               (1 << 21)   /* Bit Error Uncorrected
                                                 * interrupt enable */
#define FDCAN_IE_BECE               (1 << 20)   /* Bit Error Corrected
                                                 * interrupt enable */
#define FDCAN_IE_DRXE               (1 << 19)   /* Message stored to dedicated
                                                 * Rx buffer interrupt enable
                                                 */
#define FDCAN_IE_TOOE               (1 << 18)   /* Timeout occurred interrupt
                                                 * enable */
#define FDCAN_IE_MRAFE              (1 << 17)   /* Message RAM access failure
                                                 * interrupt enable */
#define FDCAN_IE_TSWE               (1 << 16)   /* Timestamp wraparound
                                                 * interrupt enable */
#define FDCAN_IE_TEFLE              (1 << 15)   /* Tx event FIFO element lost
                                                 * interrupt enable */
#define FDCAN_IE_TEFFE              (1 << 14)   /* Tx event FIFO full
                                                 * interrupt enable */
#define FDCAN_IE_TEFWE              (1 << 13)   /* Tx event FIFO watermark
                                                 * reached interrupt enable */
#define FDCAN_IE_TEFNE              (1 << 12)   /* Tx event FIFO new entry
                                                 * interrupt enable */
#define FDCAN_IE_TFEE               (1 << 11)   /* Tx FIFO empty interrupt
                                                 * enable */
#define FDCAN_IE_TCFE               (1 << 10)   /* Transmission cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_IE_TCE                (1 << 9)    /* Transmission completed
                                                 * interrupt enable */
#define FDCAN_IE_HPME               (1 << 8)    /* High priority message
                                                 * interrupt enable */
#define FDCAN_IE_RF1LE              (1 << 7)    /* Rx FIFO 1 message lost
                                                 * interrupt enable */
#define FDCAN_IE_RF1FE              (1 << 6)    /* Rx FIFO 1 full interrupt
                                                 * enable */
#define FDCAN_IE_RF1WE              (1 << 5)    /* Rx FIFO 1 watermark reached
                                                 * interrupt enable */
#define FDCAN_IE_RF1NE              (1 << 4)    /* Rx FIFO 1 new message
                                                 * interrupt enable */
#define FDCAN_IE_RF0LE              (1 << 3)    /* Rx FIFO 0 message lost
                                                 * interrupt enable */
#define FDCAN_IE_RF0FE              (1 << 2)    /* Rx FIFO 0 full interrupt
                                                 * enable */
#define FDCAN_IE_RF0WE              (1 << 1)    /* Rx FIFO 0 watermark reached
                                                 * interrupt enable */
#define FDCAN_IE_RF0NE              (1 << 0)    /* Rx FIFO 0 new message
                                                 * interrupt enable */

/******** Bit definition for FDCAN_ILS register  ********/
#define FDCAN_ILS_ARAL              (1 << 29)   /* Access to reserved address
                                                 * line */
#define FDCAN_ILS_PEDL              (1 << 28)   /* Protocol error in data
                                                 * phase line */
#define FDCAN_ILS_PEAL              (1 << 27)   /* Protocol error in
                                                 * arbitration phase line */
#define FDCAN_ILS_WDIL              (1 << 26)   /* Watchdog interrupt Line */
#define FDCAN_ILS_BOL               (1 << 25)   /* Bus_Off status intrrupt
                                                 * Line */
#define FDCAN_ILS_EWL               (1 << 24)   /* Warning status interrupt
                                                 * Line */
#define FDCAN_ILS_EPL               (1 << 23)   /* Error passive interrupt
                                                 * line */
#define FDCAN_ILS_ELOL              (1 << 22)   /* Error logging overflow
                                                 * interrupt line */
#define FDCAN_ILS_BEUL              (1 << 21)   /* Bit Error Uncorrected
                                                 * interrupt line */
#define FDCAN_ILS_BECL              (1 << 20)   /* Bit Error Corrected
                                                 * interrupt line */
#define FDCAN_ILS_DRXL              (1 << 19)   /* Message stored to dedicated
                                                 * Rx buffer interrupt line */
#define FDCAN_ILS_TOOL              (1 << 18)   /* Timeout occurred interrupt
                                                 * Line */
#define FDCAN_ILS_MRAFL             (1 << 17)   /* Message RAM access failure
                                                 * interrupt line */
#define FDCAN_ILS_TSWL              (1 << 16)   /* Timestamp wraparound
                                                 * interrupt line */
#define FDCAN_ILS_TEFLL             (1 << 15)   /* Tx event FIFO element Lost
                                                 * interrupt line */
#define FDCAN_ILS_TEFFL             (1 << 14)   /* Tx event FIFO full
                                                 * interrupt line */
#define FDCAN_ILS_TEFWL             (1 << 13)   /* Tx event FIFO watermark
                                                 * reached interrupt line */
#define FDCAN_ILS_TEFNL             (1 << 12)   /* Tx event FIFO new entry
                                                 * interrupt line */
#define FDCAN_ILS_TFEL              (1 << 11)   /* Tx FIFO empty interrupt
                                                 * Line */
#define FDCAN_ILS_TCFL              (1 << 10)   /* Transmission cancellation
                                                 * finished interrupt line */
#define FDCAN_ILS_TCL               (1 << 9)    /* Transmission completed
                                                 * interrupt line */
#define FDCAN_ILS_HPML              (1 << 8)    /* High priority message
                                                 * interrupt line */
#define FDCAN_ILS_RF1LL             (1 << 7)    /* Rx FIFO 1 message lost
                                                 * interrupt line */
#define FDCAN_ILS_RF1FL             (1 << 6)    /* Rx FIFO 1 full interrupt
                                                 * line */
#define FDCAN_ILS_RF1WL             (1 << 5)    /* Rx FIFO 1 watermark reached
                                                 * interrupt line */
#define FDCAN_ILS_RF1NL             (1 << 4)    /* Rx FIFO 1 new message
                                                 * interrupt line */
#define FDCAN_ILS_RF0LL             (1 << 3)    /* Rx FIFO 0 message lost
                                                 * interrupt line */
#define FDCAN_ILS_RF0FL             (1 << 2)    /* Rx FIFO 0 full interrupt
                                                 * line */
#define FDCAN_ILS_RF0WL             (1 << 1)    /* Rx FIFO 0 watermark reached
                                                 * interrupt line */
#define FDCAN_ILS_RF0NL             (1 << 0)    /* Rx FIFO 0 new message
                                                 * interrupt line */

/******** Bit definition for FDCAN_ILE register  ********/
#define FDCAN_ILE_EINT1             (1 << 1)    /* Enable interrupt Line 1 */
#define FDCAN_ILE_EINT0             (1 << 0)    /* Enable interrupt Line 0 */

/******** Bit definition for FDCAN_GFC register  ********/
#define FDCAN_GFC_ANFS_SHIFT        (4)
#define FDCAN_GFC_ANFS_MASK         (0x3 << FDCAN_GFC_ANFS_SHIFT)   /* Accept
                                                                     * non-matching
                                                                     * frames
                                                                     * standard
                                                                     */
#define FDCAN_GFC_ANFE_SHIFT        (2)
#define FDCAN_GFC_ANFE_MASK         (0x3 << FDCAN_GFC_ANFE_SHIFT)   /* Accept
                                                                     * non-matching
                                                                     * frames
                                                                     * extended
                                                                     */
#define FDCAN_GFC_RRFS              (1 << 1)                        /* Reject
                                                                     * remote
                                                                     * frames
                                                                     * standard
                                                                     */
#define FDCAN_GFC_RRFE              (1 << 0)                        /* Reject
                                                                     * remote
                                                                     * frames
                                                                     * extended
                                                                     */

/******** Bit definition for FDCAN_SIDFC register  ********/
#define FDCAN_SIDFC_LSS_SHIFT       (16)
#define FDCAN_SIDFC_LSS_MASK        (0xFF << FDCAN_SIDFC_LSS_SHIFT)     /*
                                                                         * List
                                                                         * size
                                                                         * standard
                                                                         */
#define FDCAN_SIDFC_FLSSA_SHIFT     (2)
#define FDCAN_SIDFC_FLSSA_MASK      (0x3FFF << FDCAN_SIDFC_FLSSA_SHIFT) /*
                                                                         * Filter
                                                                         * list
                                                                         * standard
                                                                         * start
                                                                         * address
                                                                         */

/******** Bit definition for FDCAN_XIDFC register  ********/
#define FDCAN_XIDFC_LSE_SHIFT       (16)
#define FDCAN_XIDFC_LSE_MASK        (0xFF << FDCAN_XIDFC_LSE_SHIFT)     /*
                                                                         * List
                                                                         * size
                                                                         * extended
                                                                         */
#define FDCAN_XIDFC_FLESA_SHIFT     (2)
#define FDCAN_XIDFC_FLESA_MASK      (0x3FFF << FDCAN_XIDFC_FLESA_SHIFT) /*
                                                                         * Filter
                                                                         * list
                                                                         * extended
                                                                         * start
                                                                         * address
                                                                         */

/******** Bit definition for FDCAN_XIDAM register  ********/
#define FDCAN_XIDAM_EIDM_SHIFT      (0)
#define FDCAN_XIDAM_EIDM_MASK       (0x1FFFFFFF << FDCAN_XIDAM_EIDM_SHIFT) /*
                                                                            * Extended
                                                                            * ID
                                                                            * Mask
                                                                            */

/******** Bit definition for FDCAN_HPMS register  ********/
#define FDCAN_HPMS_FLST             (1 << 15)                       /* Filter
                                                                     * list */
#define FDCAN_HPMS_FIDX_SHIFT       (8)
#define FDCAN_HPMS_FIDX_MASK        (0x7F << FDCAN_HPMS_FIDX_SHIFT) /* Filter
                                                                     * index
                                                                     */
#define FDCAN_HPMS_MSI_SHIFT        (6)
#define FDCAN_HPMS_MSI_MASK         (0x3 << FDCAN_HPMS_MSI_SHIFT)   /* Message
                                                                     * Storage
                                                                     * Indicator
                                                                     */
#define FDCAN_HPMS_BIDX_SHIFT       (0)
#define FDCAN_HPMS_BIDX_MASK        (0x3F << FDCAN_HPMS_BIDX_SHIFT) /* Buffer
                                                                     * index
                                                                     */

/******** Bit definition for FDCAN_NDAT1 register  ********/
#define FDCAN_NDAT1_ND31            (1 << 31)   /* New data 31 */
#define FDCAN_NDAT1_ND30            (1 << 30)   /* New data 30 */
#define FDCAN_NDAT1_ND29            (1 << 29)   /* New data 29 */
#define FDCAN_NDAT1_ND28            (1 << 28)   /* New data 28 */
#define FDCAN_NDAT1_ND27            (1 << 27)   /* New data 27 */
#define FDCAN_NDAT1_ND26            (1 << 26)   /* New data 26 */
#define FDCAN_NDAT1_ND25            (1 << 25)   /* New data 25 */
#define FDCAN_NDAT1_ND24            (1 << 24)   /* New data 24 */
#define FDCAN_NDAT1_ND23            (1 << 23)   /* New data 23 */
#define FDCAN_NDAT1_ND22            (1 << 22)   /* New data 22 */
#define FDCAN_NDAT1_ND21            (1 << 21)   /* New data 21 */
#define FDCAN_NDAT1_ND20            (1 << 20)   /* New data 20 */
#define FDCAN_NDAT1_ND19            (1 << 19)   /* New data 19 */
#define FDCAN_NDAT1_ND18            (1 << 18)   /* New data 18 */
#define FDCAN_NDAT1_ND17            (1 << 17)   /* New data 17 */
#define FDCAN_NDAT1_ND16            (1 << 16)   /* New data 16 */
#define FDCAN_NDAT1_ND15            (1 << 15)   /* New data 15 */
#define FDCAN_NDAT1_ND14            (1 << 14)   /* New data 14 */
#define FDCAN_NDAT1_ND13            (1 << 13)   /* New data 13 */
#define FDCAN_NDAT1_ND12            (1 << 12)   /* New data 12 */
#define FDCAN_NDAT1_ND11            (1 << 11)   /* New data 11 */
#define FDCAN_NDAT1_ND10            (1 << 10)   /* New data 10 */
#define FDCAN_NDAT1_ND9             (1 << 9)    /* New data 9 */
#define FDCAN_NDAT1_ND8             (1 << 8)    /* New data 8 */
#define FDCAN_NDAT1_ND7             (1 << 7)    /* New data 7 */
#define FDCAN_NDAT1_ND6             (1 << 6)    /* New data 6 */
#define FDCAN_NDAT1_ND5             (1 << 5)    /* New data 5 */
#define FDCAN_NDAT1_ND4             (1 << 4)    /* New data 4 */
#define FDCAN_NDAT1_ND3             (1 << 3)    /* New data 3 */
#define FDCAN_NDAT1_ND2             (1 << 2)    /* New data 2 */
#define FDCAN_NDAT1_ND1             (1 << 1)    /* New data 1 */
#define FDCAN_NDAT1_ND0             (1 << 0)    /* New data 0 */

/******** Bit definition for FDCAN_NDAT2 register  ********/
#define FDCAN_NDAT2_ND63            (1 << 31)   /* New data 63 */
#define FDCAN_NDAT2_ND62            (1 << 30)   /* New data 62 */
#define FDCAN_NDAT2_ND61            (1 << 29)   /* New data 61 */
#define FDCAN_NDAT2_ND60            (1 << 28)   /* New data 60 */
#define FDCAN_NDAT2_ND59            (1 << 27)   /* New data 59 */
#define FDCAN_NDAT2_ND58            (1 << 26)   /* New data 58 */
#define FDCAN_NDAT2_ND57            (1 << 25)   /* New data 57 */
#define FDCAN_NDAT2_ND56            (1 << 24)   /* New data 56 */
#define FDCAN_NDAT2_ND55            (1 << 23)   /* New data 55 */
#define FDCAN_NDAT2_ND54            (1 << 22)   /* New data 54 */
#define FDCAN_NDAT2_ND53            (1 << 21)   /* New data 53 */
#define FDCAN_NDAT2_ND52            (1 << 20)   /* New data 52 */
#define FDCAN_NDAT2_ND51            (1 << 19)   /* New data 51 */
#define FDCAN_NDAT2_ND50            (1 << 18)   /* New data 50 */
#define FDCAN_NDAT2_ND49            (1 << 17)   /* New data 49 */
#define FDCAN_NDAT2_ND48            (1 << 16)   /* New data 48 */
#define FDCAN_NDAT2_ND47            (1 << 15)   /* New data 47 */
#define FDCAN_NDAT2_ND46            (1 << 14)   /* New data 46 */
#define FDCAN_NDAT2_ND45            (1 << 13)   /* New data 45 */
#define FDCAN_NDAT2_ND44            (1 << 12)   /* New data 44 */
#define FDCAN_NDAT2_ND43            (1 << 11)   /* New data 43 */
#define FDCAN_NDAT2_ND42            (1 << 10)   /* New data 42 */
#define FDCAN_NDAT2_ND41            (1 << 9)    /* New data 41 */
#define FDCAN_NDAT2_ND40            (1 << 8)    /* New data 40 */
#define FDCAN_NDAT2_ND39            (1 << 7)    /* New data 39 */
#define FDCAN_NDAT2_ND38            (1 << 6)    /* New data 38 */
#define FDCAN_NDAT2_ND37            (1 << 5)    /* New data 37 */
#define FDCAN_NDAT2_ND36            (1 << 4)    /* New data 36 */
#define FDCAN_NDAT2_ND35            (1 << 3)    /* New data 35 */
#define FDCAN_NDAT2_ND34            (1 << 2)    /* New data 34 */
#define FDCAN_NDAT2_ND33            (1 << 1)    /* New data 33 */
#define FDCAN_NDAT2_ND32            (1 << 0)    /* New data 32 */

/******** Bit definition for FDCAN_RXF0C register  ********/
#define FDCAN_RXF0C_F0OM            (1 << 31)                           /*
                                                                         * FIFO
                                                                         * 0
                                                                         * operation
                                                                         * mode
                                                                         */
#define FDCAN_RXF0C_F0WM_SHIFT      (24)
#define FDCAN_RXF0C_F0WM_MASK       (0x7F << FDCAN_RXF0C_F0WM_SHIFT)    /*
                                                                         * FIFO
                                                                         * 0
                                                                         * Watermark
                                                                         */
#define FDCAN_RXF0C_F0S_SHIFT       (16)
#define FDCAN_RXF0C_F0S_MASK        (0x7F << FDCAN_RXF0C_F0S_SHIFT)     /* Rx
                                                                         * FIFO
                                                                         * 0
                                                                         * size
                                                                         */
#define FDCAN_RXF0C_F0SA_SHIFT      (2)
#define FDCAN_RXF0C_F0SA_MASK       (0x3FFF << FDCAN_RXF0C_F0SA_SHIFT)  /* Rx
                                                                         * FIFO
                                                                         * 0
                                                                         * start
                                                                         * address
                                                                         */

/******** Bit definition for FDCAN_RXF0S register  ********/
#define FDCAN_RXF0S_RF0L            (1 << 25)                           /* Rx
                                                                         * FIFO
                                                                         * 0
                                                                         * message
                                                                         * Lost
                                                                         */
#define FDCAN_RXF0S_F0F             (1 << 24)                           /* Rx
                                                                         * FIFO
                                                                         * 0
                                                                         * Full
                                                                         */
#define FDCAN_RXF0S_F0PI_SHIFT      (16)
#define FDCAN_RXF0S_F0PI_MASK       (0x3F << FDCAN_RXF0S_F0PI_SHIFT)    /* Rx
                                                                         * FIFO
                                                                         * 0
                                                                         * put
                                                                         * index
                                                                         */
#define FDCAN_RXF0S_F0GI_SHIFT      (8)
#define FDCAN_RXF0S_F0GI_MASK       (0x3F << FDCAN_RXF0S_F0GI_SHIFT)    /* Rx
                                                                         * FIFO
                                                                         * 0
                                                                         * get
                                                                         * index
                                                                         */
#define FDCAN_RXF0S_F0FL_SHIFT      (0)
#define FDCAN_RXF0S_F0FL_MASK       (0x7F << FDCAN_RXF0S_F0FL_SHIFT)    /* Rx
                                                                         * FIFO
                                                                         * 0
                                                                         * fill
                                                                         * level
                                                                         */

/******** Bit definition for FDCAN_RXF0A register  ********/
#define FDCAN_RXF0A_F0AI_SHIFT      (0)
#define FDCAN_RXF0A_F0AI_MASK       (0x3F << FDCAN_RXF0A_F0AI_SHIFT) /* Rx
                                                                      * FIFO 0
                                                                      * acknowledge
                                                                      * index
                                                                      */

/******** Bit definition for FDCAN_RXBC register  ********/
#define FDCAN_RXBC_RBSA_SHIFT       (2)
#define FDCAN_RXBC_RBSA_MASK        (0x3FFF << FDCAN_RXBC_RBSA_SHIFT) /* Rx
                                                                       * buffer
                                                                       * start
                                                                       * address
                                                                       */

/******** Bit definition for FDCAN_RXF1C register  ********/
#define FDCAN_RXF1C_F1OM            (1 << 31)                           /*
                                                                         * FIFO
                                                                         * 1Operation
                                                                         * mode
                                                                         */
#define FDCAN_RXF1C_F1WM_SHIFT      (24)
#define FDCAN_RXF1C_F1WM_MASK       (0x7F << FDCAN_RXF1C_F1WM_SHIFT)    /* Rx
                                                                         * FIFO
                                                                         * 1
                                                                         * Watermark
                                                                         */
#define FDCAN_RXF1C_F1S_SHIFT       (16)
#define FDCAN_RXF1C_F1S_MASK        (0x7F << FDCAN_RXF1C_F1S_SHIFT)     /* Rx
                                                                         * FIFO
                                                                         * 1
                                                                         * size
                                                                         */
#define FDCAN_RXF1C_F1SA_SHIFT      (2)
#define FDCAN_RXF1C_F1SA_MASK       (0x3FFF << FDCAN_RXF1C_F1SA_SHIFT)  /* Rx
                                                                         * FIFO
                                                                         * 1
                                                                         * start
                                                                         * address
                                                                         */

/******** Bit definition for FDCAN_RXF1S register  ********/
#define FDCAN_RXF1S_DMS_SHIFT       (30)
#define FDCAN_RXF1S_DMS_MASK        (0x3 << FDCAN_RXF1S_DMS_SHIFT)      /*
                                                                         * Debug
                                                                         * message
                                                                         * status
                                                                         */
#define FDCAN_RXF1S_RF1L            (1 << 25)                           /* Rx
                                                                         * FIFO
                                                                         * 1
                                                                         * message
                                                                         * Lost
                                                                         */
#define FDCAN_RXF1S_F1F             (1 << 24)                           /* Rx
                                                                         * FIFO
                                                                         * 1
                                                                         * Full
                                                                         */
#define FDCAN_RXF1S_F1PI_SHIFT      (16)
#define FDCAN_RXF1S_F1PI_MASK       (0x3F << FDCAN_RXF1S_F1PI_SHIFT)    /* Rx
                                                                         * FIFO
                                                                         * 1
                                                                         * put
                                                                         * index
                                                                         */
#define FDCAN_RXF1S_F1GI_SHIFT      (8)
#define FDCAN_RXF1S_F1GI_MASK       (0x3F << FDCAN_RXF1S_F1GI_SHIFT)    /* Rx
                                                                         * FIFO
                                                                         * 1
                                                                         * get
                                                                         * index
                                                                         */
#define FDCAN_RXF1S_F1FL_SHIFT      (0)
#define FDCAN_RXF1S_F1FL_MASK       (0x7F << FDCAN_RXF1S_F1FL_SHIFT)    /* Rx
                                                                         * FIFO
                                                                         * 1
                                                                         * fill
                                                                         * level
                                                                         */

/******** Bit definition for FDCAN_RXF1A register  ********/
#define FDCAN_RXF1A_F1AI_SHIFT      (0)
#define FDCAN_RXF1A_F1AI_MASK       (0x3F << FDCAN_RXF1A_F1AI_SHIFT) /* Rx
                                                                      * FIFO 1
                                                                      * acknowledge
                                                                      * index
                                                                      */

/******** Bit definition for FDCAN_RXESC register  ********/
#define FDCAN_RXESC_RBDS_SHIFT      (8)
#define FDCAN_RXESC_RBDS_MASK       (0x7 << FDCAN_RXESC_RBDS_SHIFT) /* Rx
                                                                     * buffer
                                                                     * data
                                                                     * Field
                                                                     * size */
#define FDCAN_RXESC_F1DS_SHIFT      (4)
#define FDCAN_RXESC_F1DS_MASK       (0x7 << FDCAN_RXESC_F1DS_SHIFT) /* Rx FIFO
                                                                     * 1 data
                                                                     * Field
                                                                     * size */
#define FDCAN_RXESC_F0DS_SHIFT      (0)
#define FDCAN_RXESC_F0DS_MASK       (0x7 << FDCAN_RXESC_F0DS_SHIFT) /* Rx FIFO
                                                                     * 0 data
                                                                     * Field
                                                                     * size */

/******** Bit definition for FDCAN_TXBC register  ********/
#define FDCAN_TXBC_TFQM             (1 << 30)                           /* Tx
                                                                         * FIFO/queue
                                                                         * mode
                                                                         */
#define FDCAN_TXBC_TFQS_SHIFT       (24)
#define FDCAN_TXBC_TFQS_MASK        (0x3F << FDCAN_TXBC_TFQS_SHIFT)     /*
                                                                         * Transmit
                                                                         * FIFO/queue
                                                                         * size
                                                                         */
#define FDCAN_TXBC_NDTB_SHIFT       (16)
#define FDCAN_TXBC_NDTB_MASK        (0x3F << FDCAN_TXBC_NDTB_SHIFT)     /*
                                                                         * Number
                                                                         * of
                                                                         * dedicated
                                                                         * transmit
                                                                         * buffers
                                                                         */
#define FDCAN_TXBC_TBSA_SHIFT       (2)
#define FDCAN_TXBC_TBSA_MASK        (0x3FFF << FDCAN_TXBC_TBSA_SHIFT)   /* Tx
                                                                         * buffers
                                                                         * start
                                                                         * address
                                                                         */

/******** Bit definition for FDCAN_TXFQS register  ********/
#define FDCAN_TXFQS_TFQF            (1 << 21)                           /* Tx
                                                                         * FIFO/queue
                                                                         * Full
                                                                         */
#define FDCAN_TXFQS_TFQPI_SHIFT     (16)
#define FDCAN_TXFQS_TFQPI_MASK      (0x1F << FDCAN_TXFQS_TFQPI_SHIFT)   /* Tx
                                                                         * FIFO/queue
                                                                         * put
                                                                         * index
                                                                         */
#define FDCAN_TXFQS_TFGI_SHIFT      (8)
#define FDCAN_TXFQS_TFGI_MASK       (0x1F << FDCAN_TXFQS_TFGI_SHIFT)    /* Tx
                                                                         * FIFO/queue
                                                                         * get
                                                                         * index
                                                                         */
#define FDCAN_TXFQS_TFFL_SHIFT      (0)
#define FDCAN_TXFQS_TFFL_MASK       (0x3F << FDCAN_TXFQS_TFFL_SHIFT)    /* Tx
                                                                         * FIFO
                                                                         * free
                                                                         * level
                                                                         */

/******** Bit definition for FDCAN_TXESC register  ********/
#define FDCAN_TXESC_TBDS_SHIFT      (0)
#define FDCAN_TXESC_TBDS_MASK       (0x7 << FDCAN_TXESC_TBDS_SHIFT) /* Tx
                                                                     * buffer
                                                                     * data
                                                                     * Field
                                                                     * size */

/******** Bit definition for FDCAN_TXBRP register  ********/
#define FDCAN_TXBRP_TRP_SHIFT       (0)
#define FDCAN_TXBRP_TRP_MASK        (0xFFFFFFFF << FDCAN_TXBRP_TRP_SHIFT) /*
                                                                           * Transmission
                                                                           * request
                                                                           * pending
                                                                           */

/******** Bit definition for FDCAN_TXBAR register  ********/
#define FDCAN_TXBAR_AR31            (1 << 31)   /* Add request 31 */
#define FDCAN_TXBAR_AR30            (1 << 30)   /* Add request 30 */
#define FDCAN_TXBAR_AR29            (1 << 29)   /* Add request 29 */
#define FDCAN_TXBAR_AR28            (1 << 28)   /* Add request 28 */
#define FDCAN_TXBAR_AR27            (1 << 27)   /* Add request 27 */
#define FDCAN_TXBAR_AR26            (1 << 26)   /* Add request 26 */
#define FDCAN_TXBAR_AR25            (1 << 25)   /* Add request 25 */
#define FDCAN_TXBAR_AR24            (1 << 24)   /* Add request 24 */
#define FDCAN_TXBAR_AR23            (1 << 23)   /* Add request 23 */
#define FDCAN_TXBAR_AR22            (1 << 22)   /* Add request 22 */
#define FDCAN_TXBAR_AR21            (1 << 21)   /* Add request 21 */
#define FDCAN_TXBAR_AR20            (1 << 20)   /* Add request 20 */
#define FDCAN_TXBAR_AR19            (1 << 19)   /* Add request 19 */
#define FDCAN_TXBAR_AR18            (1 << 18)   /* Add request 18 */
#define FDCAN_TXBAR_AR17            (1 << 17)   /* Add request 17 */
#define FDCAN_TXBAR_AR16            (1 << 16)   /* Add request 16 */
#define FDCAN_TXBAR_AR15            (1 << 15)   /* Add request 15 */
#define FDCAN_TXBAR_AR14            (1 << 14)   /* Add request 14 */
#define FDCAN_TXBAR_AR13            (1 << 13)   /* Add request 13 */
#define FDCAN_TXBAR_AR12            (1 << 12)   /* Add request 12 */
#define FDCAN_TXBAR_AR11            (1 << 11)   /* Add request 11 */
#define FDCAN_TXBAR_AR10            (1 << 10)   /* Add request 10 */
#define FDCAN_TXBAR_AR9             (1 << 9)    /* Add request 9 */
#define FDCAN_TXBAR_AR8             (1 << 8)    /* Add request 8 */
#define FDCAN_TXBAR_AR7             (1 << 7)    /* Add request 7 */
#define FDCAN_TXBAR_AR6             (1 << 6)    /* Add request 6 */
#define FDCAN_TXBAR_AR5             (1 << 5)    /* Add request 5 */
#define FDCAN_TXBAR_AR4             (1 << 4)    /* Add request 4 */
#define FDCAN_TXBAR_AR3             (1 << 3)    /* Add request 3 */
#define FDCAN_TXBAR_AR2             (1 << 2)    /* Add request 2 */
#define FDCAN_TXBAR_AR1             (1 << 1)    /* Add request 1 */
#define FDCAN_TXBAR_AR0             (1 << 0)    /* Add request 0 */

/******** Bit definition for FDCAN_TXBCR register  ********/
#define FDCAN_TXBCR_CR31            (1 << 31)   /* Cancellation request 31 */
#define FDCAN_TXBCR_CR30            (1 << 30)   /* Cancellation request 30 */
#define FDCAN_TXBCR_CR29            (1 << 29)   /* Cancellation request 29 */
#define FDCAN_TXBCR_CR28            (1 << 28)   /* Cancellation request 28 */
#define FDCAN_TXBCR_CR27            (1 << 27)   /* Cancellation request 27 */
#define FDCAN_TXBCR_CR26            (1 << 26)   /* Cancellation request 26 */
#define FDCAN_TXBCR_CR25            (1 << 25)   /* Cancellation request 25 */
#define FDCAN_TXBCR_CR24            (1 << 24)   /* Cancellation request 24 */
#define FDCAN_TXBCR_CR23            (1 << 23)   /* Cancellation request 23 */
#define FDCAN_TXBCR_CR22            (1 << 22)   /* Cancellation request 22 */
#define FDCAN_TXBCR_CR21            (1 << 21)   /* Cancellation request 21 */
#define FDCAN_TXBCR_CR20            (1 << 20)   /* Cancellation request 20 */
#define FDCAN_TXBCR_CR19            (1 << 19)   /* Cancellation request 19 */
#define FDCAN_TXBCR_CR18            (1 << 18)   /* Cancellation request 18 */
#define FDCAN_TXBCR_CR17            (1 << 17)   /* Cancellation request 17 */
#define FDCAN_TXBCR_CR16            (1 << 16)   /* Cancellation request 16 */
#define FDCAN_TXBCR_CR15            (1 << 15)   /* Cancellation request 15 */
#define FDCAN_TXBCR_CR14            (1 << 14)   /* Cancellation request 14 */
#define FDCAN_TXBCR_CR13            (1 << 13)   /* Cancellation request 13 */
#define FDCAN_TXBCR_CR12            (1 << 12)   /* Cancellation request 12 */
#define FDCAN_TXBCR_CR11            (1 << 11)   /* Cancellation request 11 */
#define FDCAN_TXBCR_CR10            (1 << 10)   /* Cancellation request 10 */
#define FDCAN_TXBCR_CR9             (1 << 9)    /* Cancellation request 9 */
#define FDCAN_TXBCR_CR8             (1 << 8)    /* Cancellation request 8 */
#define FDCAN_TXBCR_CR7             (1 << 7)    /* Cancellation request 7 */
#define FDCAN_TXBCR_CR6             (1 << 6)    /* Cancellation request 6 */
#define FDCAN_TXBCR_CR5             (1 << 5)    /* Cancellation request 5 */
#define FDCAN_TXBCR_CR4             (1 << 4)    /* Cancellation request 4 */
#define FDCAN_TXBCR_CR3             (1 << 3)    /* Cancellation request 3 */
#define FDCAN_TXBCR_CR2             (1 << 2)    /* Cancellation request 2 */
#define FDCAN_TXBCR_CR1             (1 << 1)    /* Cancellation request 1 */
#define FDCAN_TXBCR_CR0             (1 << 0)    /* Cancellation request 0 */

/******** Bit definition for FDCAN_TXBTO register  ********/
#define FDCAN_TXBTO_TO_SHIFT        (0)
#define FDCAN_TXBTO_TO_MASK         (0xFFFFFFFF << FDCAN_TXBTO_TO_SHIFT) /*
                                                                          * Transmission
                                                                          * occurred
                                                                          */

/******** Bit definition for FDCAN_TXBCF register  ********/
#define FDCAN_TXBCF_CF_SHIFT        (0)
#define FDCAN_TXBCF_CF_MASK         (0xFFFFFFFF << FDCAN_TXBCF_CF_SHIFT) /*
                                                                          * Cancellation
                                                                          * finished
                                                                          */

/******** Bit definition for FDCAN_TXBTIE register  ********/
#define FDCAN_TXBTIE_TIE31          (1 << 31)   /* Tx buffer 31 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE30          (1 << 30)   /* Tx buffer 30 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE29          (1 << 29)   /* Tx buffer 29 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE28          (1 << 28)   /* Tx buffer 28 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE27          (1 << 27)   /* Tx buffer 27 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE26          (1 << 26)   /* Tx buffer 26 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE25          (1 << 25)   /* Tx buffer 25 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE24          (1 << 24)   /* Tx buffer 24 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE23          (1 << 23)   /* Tx buffer 23 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE22          (1 << 22)   /* Tx buffer 22 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE21          (1 << 21)   /* Tx buffer 21 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE20          (1 << 20)   /* Tx buffer 20 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE19          (1 << 19)   /* Tx buffer 19 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE18          (1 << 18)   /* Tx buffer 18 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE17          (1 << 17)   /* Tx buffer 17 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE16          (1 << 16)   /* Tx buffer 16 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE15          (1 << 15)   /* Tx buffer 15 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE14          (1 << 14)   /* Tx buffer 14 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE13          (1 << 13)   /* Tx buffer 13 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE12          (1 << 12)   /* Tx buffer 12 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE11          (1 << 11)   /* Tx buffer 11 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE10          (1 << 10)   /* Tx buffer 10 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE9           (1 << 9)    /* Tx buffer 9 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE8           (1 << 8)    /* Tx buffer 8 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE7           (1 << 7)    /* Tx buffer 7 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE6           (1 << 6)    /* Tx buffer 6 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE5           (1 << 5)    /* Tx buffer 5 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE4           (1 << 4)    /* Tx buffer 4 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE3           (1 << 3)    /* Tx buffer 3 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE2           (1 << 2)    /* Tx buffer 2 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE1           (1 << 1)    /* Tx buffer 1 Transmission
                                                 * interrupt enable */
#define FDCAN_TXBTIE_TIE0           (1 << 0)    /* Tx buffer 0 Transmission
                                                 * interrupt enable */

/******** Bit definition for FDCAN_TXBCIE register  ********/
#define FDCAN_TXBCIE_CFIE31         (1 << 31)   /* Tx buffer 31 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE30         (1 << 30)   /* Tx buffer 30 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE29         (1 << 29)   /* Tx buffer 29 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE28         (1 << 28)   /* Tx buffer 28 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE27         (1 << 27)   /* Tx buffer 27 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE26         (1 << 26)   /* Tx buffer 26 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE25         (1 << 25)   /* Tx buffer 25 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE24         (1 << 24)   /* Tx buffer 24 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE23         (1 << 23)   /* Tx buffer 23 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE22         (1 << 22)   /* Tx buffer 22 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE21         (1 << 21)   /* Tx buffer 21 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE20         (1 << 20)   /* Tx buffer 20 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE19         (1 << 19)   /* Tx buffer 19 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE18         (1 << 18)   /* Tx buffer 18 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE17         (1 << 17)   /* Tx buffer 17 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE16         (1 << 16)   /* Tx buffer 16 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE15         (1 << 15)   /* Tx buffer 15 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE14         (1 << 14)   /* Tx buffer 14 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE13         (1 << 13)   /* Tx buffer 13 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE12         (1 << 12)   /* Tx buffer 12 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE11         (1 << 11)   /* Tx buffer 11 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE10         (1 << 10)   /* Tx buffer 10 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE9          (1 << 9)    /* Tx buffer 9 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE8          (1 << 8)    /* Tx buffer 8 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE7          (1 << 7)    /* Tx buffer 7 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE6          (1 << 6)    /* Tx buffer 6 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE5          (1 << 5)    /* Tx buffer 5 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE4          (1 << 4)    /* Tx buffer 4 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE3          (1 << 3)    /* Tx buffer 3 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE2          (1 << 2)    /* Tx buffer 2 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE1          (1 << 1)    /* Tx buffer 1 Cancellation
                                                 * finished interrupt enable
                                                 */
#define FDCAN_TXBCIE_CFIE0          (1 << 0)    /* Tx buffer 0 Cancellation
                                                 * finished interrupt enable
                                                 */

/******** Bit definition for FDCAN_TXEFC register  ********/
#define FDCAN_TXEFC_EFWM_SHIFT      (24)
#define FDCAN_TXEFC_EFWM_MASK       (0x3F << FDCAN_TXEFC_EFWM_SHIFT)    /*
                                                                         * Event
                                                                         * FIFO
                                                                         * Watermark
                                                                         */
#define FDCAN_TXEFC_EFS_SHIFT       (16)
#define FDCAN_TXEFC_EFS_MASK        (0x3F << FDCAN_TXEFC_EFS_SHIFT)     /*
                                                                         * Event
                                                                         * FIFO
                                                                         * size
                                                                         */
#define FDCAN_TXEFC_EFSA_SHIFT      (2)
#define FDCAN_TXEFC_EFSA_MASK       (0x3FFF << FDCAN_TXEFC_EFSA_SHIFT)  /*
                                                                         * Event
                                                                         * FIFO
                                                                         * start
                                                                         * address
                                                                         */

/******** Bit definition for FDCAN_TXEFS register  ********/
#define FDCAN_TXEFS_TEFL            (1 << 25)                           /* Tx
                                                                         * event
                                                                         * FIFO
                                                                         * element
                                                                         * Lost
                                                                         */
#define FDCAN_TXEFS_EFF             (1 << 24)                           /*
                                                                         * Event
                                                                         * FIFO
                                                                         * Full
                                                                         */
#define FDCAN_TXEFS_EFPI_SHIFT      (16)
#define FDCAN_TXEFS_EFPI_MASK       (0x1F << FDCAN_TXEFS_EFPI_SHIFT)    /*
                                                                         * Event
                                                                         * FIFO
                                                                         * put
                                                                         * index
                                                                         */
#define FDCAN_TXEFS_EFGI_SHIFT      (8)
#define FDCAN_TXEFS_EFGI_MASK       (0x1F << FDCAN_TXEFS_EFGI_SHIFT)    /*
                                                                         * Event
                                                                         * FIFO
                                                                         * get
                                                                         * index
                                                                         */
#define FDCAN_TXEFS_EFFL_SHIFT      (0)
#define FDCAN_TXEFS_EFFL_MASK       (0x3F << FDCAN_TXEFS_EFFL_SHIFT)    /*
                                                                         * Event
                                                                         * FIFO
                                                                         * fill
                                                                         * level
                                                                         */

/******** Bit definition for FDCAN_TXEFA register  ********/
#define FDCAN_TXEFA_EFAI_SHIFT      (0)
#define FDCAN_TXEFA_EFAI_MASK       (0x1F << FDCAN_TXEFA_EFAI_SHIFT) /* Event
                                                                      * FIFO
                                                                      * acknowledge
                                                                      * index
                                                                      */

/******** Bit definition for FDCAN_TTTMC register  ********/
#define FDCAN_TTTMC_TME_SHIFT       (16)
#define FDCAN_TTTMC_TME_MASK        (0x7F << FDCAN_TTTMC_TME_SHIFT)     /* TME
                                                                         */
#define FDCAN_TTTMC_TMSA_SHIFT      (2)
#define FDCAN_TTTMC_TMSA_MASK       (0x3FFF << FDCAN_TTTMC_TMSA_SHIFT)  /*
                                                                         * TMSA
                                                                         */

/******** Bit definition for FDCAN_TTRMC register  ********/
#define FDCAN_TTRMC_RMPS            (1 << 31)                               /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RMPS
                                                                             */
#define FDCAN_TTRMC_XTD             (1 << 30)                               /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * XTD
                                                                             */
#define FDCAN_TTRMC_RID_SHIFT       (0)
#define FDCAN_TTRMC_RID_MASK        (0x1FFFFFFF << FDCAN_TTRMC_RID_SHIFT)   /*
                                                                             *
                                                                             *
                                                                             *
                                                                             * RID
                                                                             */

/******** Bit definition for FDCAN_TTOCF register  ********/
#define FDCAN_TTOCF_EVTP            (1 << 26)                           /*
                                                                         * EVTP
                                                                         */
#define FDCAN_TTOCF_ECC             (1 << 25)                           /* ECC
                                                                         */
#define FDCAN_TTOCF_EGTF            (1 << 24)                           /*
                                                                         * EGTF
                                                                         */
#define FDCAN_TTOCF_AWL_SHIFT       (16)
#define FDCAN_TTOCF_AWL_MASK        (0xFF << FDCAN_TTOCF_AWL_SHIFT)     /* AWL
                                                                         */
#define FDCAN_TTOCF_EECS            (1 << 15)                           /*
                                                                         * EECS
                                                                         */
#define FDCAN_TTOCF_IRTO_SHIFT      (8)
#define FDCAN_TTOCF_IRTO_MASK       (0x7F << FDCAN_TTOCF_IRTO_SHIFT)    /*
                                                                         * IRTO
                                                                         */
#define FDCAN_TTOCF_LDSDL_SHIFT     (5)
#define FDCAN_TTOCF_LDSDL_MASK      (0x7 << FDCAN_TTOCF_LDSDL_SHIFT)    /*
                                                                         * LDSDL
                                                                         */
#define FDCAN_TTOCF_TM              (1 << 4)                            /* TM
                                                                         */
#define FDCAN_TTOCF_GEN             (1 << 3)                            /* GEN
                                                                         */
#define FDCAN_TTOCF_OM_SHIFT        (0)
#define FDCAN_TTOCF_OM_MASK         (0x3 << FDCAN_TTOCF_OM_SHIFT)       /* OM
                                                                         */

/******** Bit definition for FDCAN_TTMLM register  ********/
#define FDCAN_TTMLM_ENTT_SHIFT      (16)
#define FDCAN_TTMLM_ENTT_MASK       (0xFFF << FDCAN_TTMLM_ENTT_SHIFT)   /*
                                                                         * ENTT
                                                                         */
#define FDCAN_TTMLM_TXEW_SHIFT      (8)
#define FDCAN_TTMLM_TXEW_MASK       (0xF << FDCAN_TTMLM_TXEW_SHIFT)     /*
                                                                         * TXEW
                                                                         */
#define FDCAN_TTMLM_CSS_SHIFT       (6)
#define FDCAN_TTMLM_CSS_MASK        (0x3 << FDCAN_TTMLM_CSS_SHIFT)      /* CSS
                                                                         */
#define FDCAN_TTMLM_CCM_SHIFT       (0)
#define FDCAN_TTMLM_CCM_MASK        (0x3F << FDCAN_TTMLM_CCM_SHIFT)     /* CCM
                                                                         */

/******** Bit definition for FDCAN_TURCF register  ********/
#define FDCAN_TURCF_ELT             (1 << 31)                           /* ELT
                                                                         */
#define FDCAN_TURCF_DC_SHIFT        (16)
#define FDCAN_TURCF_DC_MASK         (0x3FFF << FDCAN_TURCF_DC_SHIFT)    /* DC
                                                                         */
#define FDCAN_TURCF_NCL_SHIFT       (0)
#define FDCAN_TURCF_NCL_MASK        (0xFFFF << FDCAN_TURCF_NCL_SHIFT)   /* NCL
                                                                         */

/******** Bit definition for FDCAN_TTOCN register  ********/
#define FDCAN_TTOCN_LCKC            (1 << 15)                       /* LCKC */
#define FDCAN_TTOCN_ESCN            (1 << 13)                       /* ESCN */
#define FDCAN_TTOCN_NIG             (1 << 12)                       /* NIG */
#define FDCAN_TTOCN_TMG             (1 << 11)                       /* TMG */
#define FDCAN_TTOCN_FGP             (1 << 10)                       /* FGP */
#define FDCAN_TTOCN_GCS             (1 << 9)                        /* GCS */
#define FDCAN_TTOCN_TTIE            (1 << 8)                        /* TTIE */
#define FDCAN_TTOCN_TMC_SHIFT       (6)
#define FDCAN_TTOCN_TMC_MASK        (0x3 << FDCAN_TTOCN_TMC_SHIFT)  /* TMC */
#define FDCAN_TTOCN_RTIE            (1 << 5)                        /* RTIE */
#define FDCAN_TTOCN_SWS_SHIFT       (3)
#define FDCAN_TTOCN_SWS_MASK        (0x3 << FDCAN_TTOCN_SWS_SHIFT)  /* SWS */
#define FDCAN_TTOCN_SWP             (1 << 2)                        /* SWP */
#define FDCAN_TTOCN_ECS             (1 << 1)                        /* ECS */
#define FDCAN_TTOCN_SGT             (1 << 0)                        /* SGT */

/******** Bit definition for FDCAN_TTGTP register  ********/
#define FDCAN_TTGTP_CTP_SHIFT       (16)
#define FDCAN_TTGTP_CTP_MASK        (0xFFFF << FDCAN_TTGTP_CTP_SHIFT)   /* CTP
                                                                         */
#define FDCAN_TTGTP_TP_SHIFT        (0)
#define FDCAN_TTGTP_TP_MASK         (0xFFFF << FDCAN_TTGTP_TP_SHIFT)    /* TP
                                                                         */

/******** Bit definition for FDCAN_TTTMK register  ********/
#define FDCAN_TTTMK_LCKM            (1 << 31)                           /*
                                                                         * LCKM
                                                                         */
#define FDCAN_TTTMK_TICC_SHIFT      (16)
#define FDCAN_TTTMK_TICC_MASK       (0x7F << FDCAN_TTTMK_TICC_SHIFT)    /*
                                                                         * TICC
                                                                         */
#define FDCAN_TTTMK_TM_SHIFT        (0)
#define FDCAN_TTTMK_TM_MASK         (0xFFFF << FDCAN_TTTMK_TM_SHIFT)    /* TM
                                                                         */

/******** Bit definition for FDCAN_TTIR register  ********/
#define FDCAN_TTIR_CER              (1 << 18)   /* CER */
#define FDCAN_TTIR_AW               (1 << 17)   /* AW */
#define FDCAN_TTIR_WT               (1 << 16)   /* WT */
#define FDCAN_TTIR_IWT              (1 << 15)   /* IWT */
#define FDCAN_TTIR_ELC              (1 << 14)   /* ELC */
#define FDCAN_TTIR_SE2              (1 << 13)   /* SE2 */
#define FDCAN_TTIR_SE1              (1 << 12)   /* SE1 */
#define FDCAN_TTIR_TXO              (1 << 11)   /* TXO */
#define FDCAN_TTIR_TXU              (1 << 10)   /* TXU */
#define FDCAN_TTIR_GTE              (1 << 9)    /* GTE */
#define FDCAN_TTIR_GTD              (1 << 8)    /* GTD */
#define FDCAN_TTIR_GTW              (1 << 7)    /* GTW */
#define FDCAN_TTIR_SWE              (1 << 6)    /* SWE */
#define FDCAN_TTIR_TTMI             (1 << 5)    /* TTMI */
#define FDCAN_TTIR_RTMI             (1 << 4)    /* RTMI */
#define FDCAN_TTIR_SOG              (1 << 3)    /* SOG */
#define FDCAN_TTIR_CSM              (1 << 2)    /* CSM */
#define FDCAN_TTIR_SMC              (1 << 1)    /* SMC */
#define FDCAN_TTIR_SBC              (1 << 0)    /* SBC */

/******** Bit definition for FDCAN_TTIE register  ********/
#define FDCAN_TTIE_CERE             (1 << 18)   /* CERE */
#define FDCAN_TTIE_AWE              (1 << 17)   /* AWE */
#define FDCAN_TTIE_WTE              (1 << 16)   /* WTE */
#define FDCAN_TTIE_IWTE             (1 << 15)   /* IWTE */
#define FDCAN_TTIE_ELCE             (1 << 14)   /* ELCE */
#define FDCAN_TTIE_SE2E             (1 << 13)   /* SE2E */
#define FDCAN_TTIE_SE1E             (1 << 12)   /* SE1E */
#define FDCAN_TTIE_TXOE             (1 << 11)   /* TXOE */
#define FDCAN_TTIE_TXUE             (1 << 10)   /* TXUE */
#define FDCAN_TTIE_GTEE             (1 << 9)    /* GTEE */
#define FDCAN_TTIE_GTDE             (1 << 8)    /* GTDE */
#define FDCAN_TTIE_GTWE             (1 << 7)    /* GTWE */
#define FDCAN_TTIE_SWEE             (1 << 6)    /* SWEE */
#define FDCAN_TTIE_TTMIE            (1 << 5)    /* TTMIE */
#define FDCAN_TTIE_RTMIE            (1 << 4)    /* RTMIE */
#define FDCAN_TTIE_SOGE             (1 << 3)    /* SOGE */
#define FDCAN_TTIE_CSME             (1 << 2)    /* CSME */
#define FDCAN_TTIE_SMCE             (1 << 1)    /* SMCE */
#define FDCAN_TTIE_SBCE             (1 << 0)    /* SBCE */

/******** Bit definition for FDCAN_TTILS register  ********/
#define FDCAN_TTILS_CERL            (1 << 18)   /* CERL */
#define FDCAN_TTILS_AWL             (1 << 17)   /* AWL */
#define FDCAN_TTILS_WTL             (1 << 16)   /* WTL */
#define FDCAN_TTILS_IWTL            (1 << 15)   /* IWTL */
#define FDCAN_TTILS_ELCL            (1 << 14)   /* ELCL */
#define FDCAN_TTILS_SE2L            (1 << 13)   /* SE2L */
#define FDCAN_TTILS_SE1L            (1 << 12)   /* SE1L */
#define FDCAN_TTILS_TXOL            (1 << 11)   /* TXOL */
#define FDCAN_TTILS_TXUL            (1 << 10)   /* TXUL */
#define FDCAN_TTILS_GTEL            (1 << 9)    /* GTEL */
#define FDCAN_TTILS_GTDL            (1 << 8)    /* GTDL */
#define FDCAN_TTILS_GTWL            (1 << 7)    /* GTWL */
#define FDCAN_TTILS_SWEL            (1 << 6)    /* SWEL */
#define FDCAN_TTILS_TTMIL           (1 << 5)    /* TTMIL */
#define FDCAN_TTILS_RTMIL           (1 << 4)    /* RTMIL */
#define FDCAN_TTILS_SOGL            (1 << 3)    /* SOGL */
#define FDCAN_TTILS_CSML            (1 << 2)    /* CSML */
#define FDCAN_TTILS_SMCL            (1 << 1)    /* SMCL */
#define FDCAN_TTILS_SBCL            (1 << 0)    /* SBCL */

/******** Bit definition for FDCAN_TTOST register  ********/
#define FDCAN_TTOST_SPL             (1 << 31)                       /* SPL */
#define FDCAN_TTOST_WECS            (1 << 30)                       /* WECS */
#define FDCAN_TTOST_AWE             (1 << 29)                       /* AWE */
#define FDCAN_TTOST_WFE             (1 << 28)                       /* WFE */
#define FDCAN_TTOST_GSI             (1 << 27)                       /* GSI */
#define FDCAN_TTOST_TMP_SHIFT       (24)
#define FDCAN_TTOST_TMP_MASK        (0x7 << FDCAN_TTOST_TMP_SHIFT)  /* TMP */
#define FDCAN_TTOST_GFI             (1 << 23)                       /* GFI */
#define FDCAN_TTOST_WGTD            (1 << 22)                       /* WGTD */
#define FDCAN_TTOST_RTO_SHIFT       (8)
#define FDCAN_TTOST_RTO_MASK        (0xFF << FDCAN_TTOST_RTO_SHIFT) /* RTO */
#define FDCAN_TTOST_QCS             (1 << 7)                        /* QCS */
#define FDCAN_TTOST_QGTP            (1 << 6)                        /* QGTP */
#define FDCAN_TTOST_SYS_SHIFT       (4)
#define FDCAN_TTOST_SYS_MASK        (0x3 << FDCAN_TTOST_SYS_SHIFT)  /* SYS */
#define FDCAN_TTOST_MS_SHIFT        (2)
#define FDCAN_TTOST_MS_MASK         (0x3 << FDCAN_TTOST_MS_SHIFT)   /* MS */
#define FDCAN_TTOST_EL_SHIFT        (0)
#define FDCAN_TTOST_EL_MASK         (0x3 << FDCAN_TTOST_EL_SHIFT)   /* EL */

/******** Bit definition for FDCAN_TURNA register  ********/
#define FDCAN_TURNA_NAV_SHIFT       (0)
#define FDCAN_TURNA_NAV_MASK        (0x3FFFF << FDCAN_TURNA_NAV_SHIFT) /* NAV
                                                                        */

/******** Bit definition for FDCAN_TTLGT register  ********/
#define FDCAN_TTLGT_GT_SHIFT        (16)
#define FDCAN_TTLGT_GT_MASK         (0xFFFF << FDCAN_TTLGT_GT_SHIFT)    /* GT
                                                                         */
#define FDCAN_TTLGT_LT_SHIFT        (0)
#define FDCAN_TTLGT_LT_MASK         (0xFFFF << FDCAN_TTLGT_LT_SHIFT)    /* LT
                                                                         */

/******** Bit definition for FDCAN_TTCTC register  ********/
#define FDCAN_TTCTC_CC_SHIFT        (16)
#define FDCAN_TTCTC_CC_MASK         (0x3F << FDCAN_TTCTC_CC_SHIFT)      /* CC
                                                                         */
#define FDCAN_TTCTC_CT_SHIFT        (0)
#define FDCAN_TTCTC_CT_MASK         (0xFFFF << FDCAN_TTCTC_CT_SHIFT)    /* CT
                                                                         */

/******** Bit definition for FDCAN_TTCPT register  ********/
#define FDCAN_TTCPT_SWV_SHIFT       (16)
#define FDCAN_TTCPT_SWV_MASK        (0xFFFF << FDCAN_TTCPT_SWV_SHIFT)   /* SWV
                                                                         */
#define FDCAN_TTCPT_CCV_SHIFT       (0)
#define FDCAN_TTCPT_CCV_MASK        (0x3F << FDCAN_TTCPT_CCV_SHIFT)     /* CCV
                                                                         */

/******** Bit definition for FDCAN_TTCSM register  ********/
#define FDCAN_TTCSM_CSM_SHIFT       (0)
#define FDCAN_TTCSM_CSM_MASK        (0xFFFF << FDCAN_TTCSM_CSM_SHIFT) /* CSM
                                                                       */

/******** Bit definition for FDCAN_TTTS register  ********/
#define FDCAN_TTTS_RAMSEL           (1 << 9)                            /*
                                                                         * Message
                                                                         * RAM
                                                                         * select
                                                                         */
#define FDCAN_TTTS_TS_EN            (1 << 8)                            /*
                                                                         * External
                                                                         * timestamp
                                                                         * vector
                                                                         * enable
                                                                         */
#define FDCAN_TTTS_TS_SEL_SHIFT     (5)
#define FDCAN_TTTS_TS_SEL_MASK      (0x7 << FDCAN_TTTS_TS_SEL_SHIFT)    /*
                                                                         * Select
                                                                         * external
                                                                         * timestamp’s
                                                                         * clock
                                                                         * divided
                                                                         */
#define FDCAN_TTTS_SEVT_SHIFT       (2)
#define FDCAN_TTTS_SEVT_MASK        (0x3 << FDCAN_TTTS_SEVT_SHIFT)      /*
                                                                         * Select
                                                                         * SEVT
                                                                         */
#define FDCAN_TTTS_SSWT_SHIFT       (0)
#define FDCAN_TTTS_SSWT_MASK        (0x3 << FDCAN_TTTS_SSWT_SHIFT)      /*
                                                                         * Select
                                                                         * SSWT
                                                                         */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_FDCAN_H */
