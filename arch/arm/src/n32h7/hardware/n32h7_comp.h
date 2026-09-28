/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_comp.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_COMP_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_COMP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "n32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define N32_COMP_COMP1_CTRL_OFFSET      0x10    /* COMP1_CTRL */
#define N32_COMP_COMP1_FILC_OFFSET      0x14    /* COMP1_FILC */
#define N32_COMP_COMP1_FILP_OFFSET      0x18    /* COMP1_FILP */
#define N32_COMP_COMP2_CTRL_OFFSET      0x20    /* COMP2_CTRL */
#define N32_COMP_COMP2_FILC_OFFSET      0x24    /* COMP2_FILC */
#define N32_COMP_COMP2_FILP_OFFSET      0x28    /* COMP2_FILP */
#define N32_COMP_COMP3_CTRL_OFFSET      0x30    /* COMP3_CTRL */
#define N32_COMP_COMP3_FILC_OFFSET      0x34    /* COMP3_FILC */
#define N32_COMP_COMP3_FILP_OFFSET      0x38    /* COMP3_FILP */
#define N32_COMP_COMP4_CTRL_OFFSET      0x40    /* COMP4_CTRL */
#define N32_COMP_COMP4_FILC_OFFSET      0x44    /* COMP4_FILC */
#define N32_COMP_COMP4_FILP_OFFSET      0x48    /* COMP4_FILP */
#define N32_COMP_LPMODE_OFFSET          0x50    /* COMP_LPMODE */
#define N32_COMP_WINMODE_OFFSET         0x54    /* COMP_WINMODE */
#define N32_COMP_LOCK_OFFSET            0x5C    /* COMP_LOCK */
#define N32_COMP_INTEN_OFFSET           0x60    /* COMP_INTEN */
#define N32_COMP_INTSTS_OFFSET          0x64    /* COMP_INTSTS */
#define N32_COMP_OTIMEN_OFFSET          0x68    /* COMP_OTIMEN */

#define N32_COMP_COMP1_CTRL             (N32_COMP_BASE + \
                                         N32_COMP_COMP1_CTRL_OFFSET)
#define N32_COMP_COMP1_FILC             (N32_COMP_BASE + \
                                         N32_COMP_COMP1_FILC_OFFSET)
#define N32_COMP_COMP1_FILP             (N32_COMP_BASE + \
                                         N32_COMP_COMP1_FILP_OFFSET)
#define N32_COMP_COMP2_CTRL             (N32_COMP_BASE + \
                                         N32_COMP_COMP2_CTRL_OFFSET)
#define N32_COMP_COMP2_FILC             (N32_COMP_BASE + \
                                         N32_COMP_COMP2_FILC_OFFSET)
#define N32_COMP_COMP2_FILP             (N32_COMP_BASE + \
                                         N32_COMP_COMP2_FILP_OFFSET)
#define N32_COMP_COMP3_CTRL             (N32_COMP_BASE + \
                                         N32_COMP_COMP3_CTRL_OFFSET)
#define N32_COMP_COMP3_FILC             (N32_COMP_BASE + \
                                         N32_COMP_COMP3_FILC_OFFSET)
#define N32_COMP_COMP3_FILP             (N32_COMP_BASE + \
                                         N32_COMP_COMP3_FILP_OFFSET)
#define N32_COMP_COMP4_CTRL             (N32_COMP_BASE + \
                                         N32_COMP_COMP4_CTRL_OFFSET)
#define N32_COMP_COMP4_FILC             (N32_COMP_BASE + \
                                         N32_COMP_COMP4_FILC_OFFSET)
#define N32_COMP_COMP4_FILP             (N32_COMP_BASE + \
                                         N32_COMP_COMP4_FILP_OFFSET)
#define N32_COMP_LPMODE                 (N32_COMP_BASE + \
                                         N32_COMP_LPMODE_OFFSET)
#define N32_COMP_WINMODE                (N32_COMP_BASE + \
                                         N32_COMP_WINMODE_OFFSET)
#define N32_COMP_LOCK                   (N32_COMP_BASE + N32_COMP_LOCK_OFFSET)
#define N32_COMP_INTEN                  (N32_COMP_BASE + \
                                         N32_COMP_INTEN_OFFSET)
#define N32_COMP_INTSTS                 (N32_COMP_BASE + \
                                         N32_COMP_INTSTS_OFFSET)
#define N32_COMP_OTIMEN                 (N32_COMP_BASE + \
                                         N32_COMP_OTIMEN_OFFSET)

/******** Bit definition for COMP1_CTRL register  ********/
#define COMP_COMP1_CTRL_VV1TRM_SHIFT    (23)
#define COMP_COMP1_CTRL_VV1TRM_MASK     (0x3F << COMP_COMP1_CTRL_VV1TRM_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VV1TRM
                                                                                 */
#define COMP_COMP1_CTRL_VV1EN           (1 << 22)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VV1EN
                                                                                 */
#define COMP_COMP1_CTRL_OUT             (1 << 21)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * OUT
                                                                                 */
#define COMP_COMP1_CTRL_BLKINGEN        (1 << 20)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLKINGEN
                                                                                 */
#define COMP_COMP1_CTRL_BLKING_SHIFT    (16)
#define COMP_COMP1_CTRL_BLKING_MASK     (0xF << COMP_COMP1_CTRL_BLKING_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLKING
                                                                                 */
#define COMP_COMP1_CTRL_HYST_SHIFT      (14)
#define COMP_COMP1_CTRL_HYST_MASK       (0x3 << COMP_COMP1_CTRL_HYST_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HYST
                                                                                 */
#define COMP_COMP1_CTRL_POL             (1 << 13)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * POL
                                                                                 */
#define COMP_COMP1_CTRL_INPSEL_SHIFT    (5)
#define COMP_COMP1_CTRL_INPSEL_MASK     (0xF << COMP_COMP1_CTRL_INPSEL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INPSEL
                                                                                 */
#define COMP_COMP1_CTRL_INMSEL_SHIFT    (1)
#define COMP_COMP1_CTRL_INMSEL_MASK     (0x7 << COMP_COMP1_CTRL_INMSEL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INMSEL
                                                                                 */
#define COMP_COMP1_CTRL_EN              (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * EN
                                                                                 */

/******** Bit definition for COMP1_FILC register  ********/
#define COMP_COMP1_FILC_VFNEN           (1 << 12)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VFNEN
                                                                                 */
#define COMP_COMP1_FILC_VFPEN           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VFPEN
                                                                                 */
#define COMP_COMP1_FILC_SAMPW_SHIFT     (6)
#define COMP_COMP1_FILC_SAMPW_MASK      (0x1F << COMP_COMP1_FILC_SAMPW_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SAMPW
                                                                                 */
#define COMP_COMP1_FILC_THRESH_SHIFT    (1)
#define COMP_COMP1_FILC_THRESH_MASK     (0x1F << COMP_COMP1_FILC_THRESH_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * THRESH
                                                                                 */
#define COMP_COMP1_FILC_FLTEN           (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FLTEN
                                                                                 */

/******** Bit definition for COMP1_FILP register  ********/
#define COMP_COMP1_FILP_CLKPSC_SHIFT    (0)
#define COMP_COMP1_FILP_CLKPSC_MASK     (0xFFFF << \
                                         COMP_COMP1_FILP_CLKPSC_SHIFT)       /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * CLKPSC
                                                                              */

/******** Bit definition for COMP2_CTRL register  ********/
#define COMP_COMP2_CTRL_VV2TRM_SHIFT    (23)
#define COMP_COMP2_CTRL_VV2TRM_MASK     (0x3F << COMP_COMP2_CTRL_VV2TRM_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VV2TRM
                                                                                 */
#define COMP_COMP2_CTRL_VV2EN           (1 << 22)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VV2EN
                                                                                 */
#define COMP_COMP2_CTRL_OUT             (1 << 21)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * OUT
                                                                                 */
#define COMP_COMP2_CTRL_BLKINGEN        (1 << 20)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLKINGEN
                                                                                 */
#define COMP_COMP2_CTRL_BLKING_SHIFT    (16)
#define COMP_COMP2_CTRL_BLKING_MASK     (0xF << COMP_COMP2_CTRL_BLKING_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLKING
                                                                                 */
#define COMP_COMP2_CTRL_HYST_SHIFT      (14)
#define COMP_COMP2_CTRL_HYST_MASK       (0x3 << COMP_COMP2_CTRL_HYST_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HYST
                                                                                 */
#define COMP_COMP2_CTRL_POL             (1 << 13)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * POL
                                                                                 */
#define COMP_COMP2_CTRL_INPSEL_SHIFT    (5)
#define COMP_COMP2_CTRL_INPSEL_MASK     (0xF << COMP_COMP2_CTRL_INPSEL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INPSEL
                                                                                 */
#define COMP_COMP2_CTRL_INMSEL_SHIFT    (1)
#define COMP_COMP2_CTRL_INMSEL_MASK     (0xF << COMP_COMP2_CTRL_INMSEL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INMSEL
                                                                                 */
#define COMP_COMP2_CTRL_EN              (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * EN
                                                                                 */

/******** Bit definition for COMP2_FILC register  ********/
#define COMP_COMP2_FILC_VFNEN           (1 << 12)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VFNEN
                                                                                 */
#define COMP_COMP2_FILC_VFPEN           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VFPEN
                                                                                 */
#define COMP_COMP2_FILC_SAMPW_SHIFT     (6)
#define COMP_COMP2_FILC_SAMPW_MASK      (0x1F << COMP_COMP2_FILC_SAMPW_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SAMPW
                                                                                 */
#define COMP_COMP2_FILC_THRESH_SHIFT    (1)
#define COMP_COMP2_FILC_THRESH_MASK     (0x1F << COMP_COMP2_FILC_THRESH_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * THRESH
                                                                                 */
#define COMP_COMP2_FILC_FLTEN           (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FLTEN
                                                                                 */

/******** Bit definition for COMP2_FILP register  ********/
#define COMP_COMP2_FILP_CLKPSC_SHIFT    (0)
#define COMP_COMP2_FILP_CLKPSC_MASK     (0xFFFF << \
                                         COMP_COMP2_FILP_CLKPSC_SHIFT)       /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * CLKPSC
                                                                              */

/******** Bit definition for COMP3_CTRL register  ********/
#define COMP_COMP3_CTRL_OUT             (1 << 21)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * OUT
                                                                                 */
#define COMP_COMP3_CTRL_BLKINGEN        (1 << 20)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLKINGEN
                                                                                 */
#define COMP_COMP3_CTRL_BLKING_SHIFT    (16)
#define COMP_COMP3_CTRL_BLKING_MASK     (0xF << COMP_COMP3_CTRL_BLKING_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLKING
                                                                                 */
#define COMP_COMP3_CTRL_HYST_SHIFT      (14)
#define COMP_COMP3_CTRL_HYST_MASK       (0x3 << COMP_COMP3_CTRL_HYST_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HYST
                                                                                 */
#define COMP_COMP3_CTRL_POL             (1 << 13)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * POL
                                                                                 */
#define COMP_COMP3_CTRL_INPSEL_SHIFT    (5)
#define COMP_COMP3_CTRL_INPSEL_MASK     (0xF << COMP_COMP3_CTRL_INPSEL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INPSEL
                                                                                 */
#define COMP_COMP3_CTRL_INMSEL_SHIFT    (1)
#define COMP_COMP3_CTRL_INMSEL_MASK     (0xF << COMP_COMP3_CTRL_INMSEL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INMSEL
                                                                                 */
#define COMP_COMP3_CTRL_EN              (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * EN
                                                                                 */

/******** Bit definition for COMP3_FILC register  ********/
#define COMP_COMP3_FILC_VFNEN           (1 << 12)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VFNEN
                                                                                 */
#define COMP_COMP3_FILC_VFPEN           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VFPEN
                                                                                 */
#define COMP_COMP3_FILC_SAMPW_SHIFT     (6)
#define COMP_COMP3_FILC_SAMPW_MASK      (0x1F << COMP_COMP3_FILC_SAMPW_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SAMPW
                                                                                 */
#define COMP_COMP3_FILC_THRESH_SHIFT    (1)
#define COMP_COMP3_FILC_THRESH_MASK     (0x1F << COMP_COMP3_FILC_THRESH_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * THRESH
                                                                                 */
#define COMP_COMP3_FILC_FLTEN           (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FLTEN
                                                                                 */

/******** Bit definition for COMP3_FILP register  ********/
#define COMP_COMP3_FILP_CLKPSC_SHIFT    (0)
#define COMP_COMP3_FILP_CLKPSC_MASK     (0xFFFF << \
                                         COMP_COMP3_FILP_CLKPSC_SHIFT)       /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * CLKPSC
                                                                              */

/******** Bit definition for COMP4_CTRL register  ********/
#define COMP_COMP4_CTRL_OUT             (1 << 21)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * OUT
                                                                                 */
#define COMP_COMP4_CTRL_BLKINGEN        (1 << 20)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLKINGEN
                                                                                 */
#define COMP_COMP4_CTRL_BLKING_SHIFT    (16)
#define COMP_COMP4_CTRL_BLKING_MASK     (0xF << COMP_COMP4_CTRL_BLKING_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * BLKING
                                                                                 */
#define COMP_COMP4_CTRL_HYST_SHIFT      (14)
#define COMP_COMP4_CTRL_HYST_MASK       (0x3 << COMP_COMP4_CTRL_HYST_SHIFT)     /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * HYST
                                                                                 */
#define COMP_COMP4_CTRL_POL             (1 << 13)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * POL
                                                                                 */
#define COMP_COMP4_CTRL_INPSEL_SHIFT    (5)
#define COMP_COMP4_CTRL_INPSEL_MASK     (0xF << COMP_COMP4_CTRL_INPSEL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INPSEL
                                                                                 */
#define COMP_COMP4_CTRL_INMSEL_SHIFT    (1)
#define COMP_COMP4_CTRL_INMSEL_MASK     (0xF << COMP_COMP4_CTRL_INMSEL_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * INMSEL
                                                                                 */
#define COMP_COMP4_CTRL_EN              (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * EN
                                                                                 */

/******** Bit definition for COMP4_FILC register  ********/
#define COMP_COMP4_FILC_VFNEN           (1 << 12)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VFNEN
                                                                                 */
#define COMP_COMP4_FILC_VFPEN           (1 << 11)                               /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * VFPEN
                                                                                 */
#define COMP_COMP4_FILC_SAMPW_SHIFT     (6)
#define COMP_COMP4_FILC_SAMPW_MASK      (0x1F << COMP_COMP4_FILC_SAMPW_SHIFT)   /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * SAMPW
                                                                                 */
#define COMP_COMP4_FILC_THRESH_SHIFT    (1)
#define COMP_COMP4_FILC_THRESH_MASK     (0x1F << COMP_COMP4_FILC_THRESH_SHIFT)  /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * THRESH
                                                                                 */
#define COMP_COMP4_FILC_FLTEN           (1 << 0)                                /*
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 *
                                                                                 * FLTEN
                                                                                 */

/******** Bit definition for COMP4_FILP register  ********/
#define COMP_COMP4_FILP_CLKPSC_SHIFT    (0)
#define COMP_COMP4_FILP_CLKPSC_MASK     (0xFFFF << \
                                         COMP_COMP4_FILP_CLKPSC_SHIFT)       /*
                                                                              *
                                                                              *
                                                                              *
                                                                              *
                                                                              * CLKPSC
                                                                              */

/******** Bit definition for COMP_LPMODE register  ********/
#define COMP_LPMODE_LPEN                (1 << 0) /* LPEN */

/******** Bit definition for COMP_WINMODE register  ********/
#define COMP_WINMODE_CMP34MD            (1 << 1)    /* CMP34MD */
#define COMP_WINMODE_CMP12MD            (1 << 0)    /* CMP12MD */

/******** Bit definition for COMP_LOCK register  ********/
#define COMP_LOCK_CMP4LK                (1 << 3)    /* CMP4LK */
#define COMP_LOCK_CMP3LK                (1 << 2)    /* CMP3LK */
#define COMP_LOCK_CMP2LK                (1 << 1)    /* CMP2LK */
#define COMP_LOCK_CMP1LK                (1 << 0)    /* CMP1LK */

/******** Bit definition for COMP_INTEN register  ********/
#define COMP_INTEN_CMP4IEN              (1 << 3)    /* CMP4IEN */
#define COMP_INTEN_CMP3IEN              (1 << 2)    /* CMP3IEN */
#define COMP_INTEN_CMP2IEN              (1 << 1)    /* CMP2IEN */
#define COMP_INTEN_CMP1IEN              (1 << 0)    /* CMP1IEN */

/******** Bit definition for COMP_INTSTS register  ********/
#define COMP_INTSTS_CMP4IS              (1 << 3)    /* CMP4IS */
#define COMP_INTSTS_CMP3IS              (1 << 2)    /* CMP3IS */
#define COMP_INTSTS_CMP2IS              (1 << 1)    /* CMP2IS */
#define COMP_INTSTS_CMP1IS              (1 << 0)    /* CMP1IS */

/******** Bit definition for COMP_OTIMEN register  ********/
#define COMP_OTIMEN_CMP4OEN             (1 << 3)    /* CMP4OEN */
#define COMP_OTIMEN_CMP3OEN             (1 << 2)    /* CMP3OEN */
#define COMP_OTIMEN_CMP2OEN             (1 << 1)    /* CMP2OEN */
#define COMP_OTIMEN_CMP1OEN             (1 << 0)    /* CMP1OEN */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_COMP_H */
