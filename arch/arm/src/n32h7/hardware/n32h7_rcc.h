/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7x3xx_rcc.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32_RCC_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32_RCC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register Offsets *********************************************************/

#define N32_RCC_PLL1CTRL1_OFFSET                0x0000
#define N32_RCC_PLL1CTRL2_OFFSET                0x0004
#define N32_RCC_PLL2CTRL1_OFFSET                0x0010
#define N32_RCC_PLL2CTRL2_OFFSET                0x0014
#define N32_RCC_PLL3CTRL1_OFFSET                0x0020
#define N32_RCC_PLL3CTRL2_OFFSET                0x0024
#define N32_RCC_SRCCTRL1_OFFSET                 0x0030
#define N32_RCC_PLL1DIV_OFFSET                  0x0034
#define N32_RCC_PLL2DIV_OFFSET                  0x0038
#define N32_RCC_PLL3DIV_OFFSET                  0x003C
#define N32_RCC_SYSBUSDIV1_OFFSET               0x0040
#define N32_RCC_SYSBUSDIV2_OFFSET               0x0044
#define N32_RCC_BOOTMODE_OFFSET                 0x0048
#define N32_RCC_AHB1DIV1_OFFSET                 0x004C
#define N32_RCC_AHB1SEL1_OFFSET                 0x0050
#define N32_RCC_AHB1EN1_OFFSET                  0x0054
#define N32_RCC_AHB1EN2_OFFSET                  0x0058
#define N32_RCC_AHB1EN3_OFFSET                  0x005C
#define N32_RCC_AHB1EN4_OFFSET                  0x0060
#define N32_RCC_AHB1RST1_OFFSET                 0x0064
#define N32_RCC_AHB1RST2_OFFSET                 0x0068 /* TODO: 手册上是0x0064 */
#define N32_RCC_AHB1RST3_OFFSET                 0x006C
#define N32_RCC_AHB1RST4_OFFSET                 0x0070
#define N32_RCC_APB1DIV1_OFFSET                 0x0074
#define N32_RCC_APB1SEL1_OFFSET                 0x0078
#define N32_RCC_APB1SEL2_OFFSET                 0x007C
#define N32_RCC_APB1EN1_OFFSET                  0x0080
#define N32_RCC_APB1EN2_OFFSET                  0x0084
#define N32_RCC_APB1EN3_OFFSET                  0x0088
#define N32_RCC_APB1EN4_OFFSET                  0x008C
#define N32_RCC_APB1EN5_OFFSET                  0x0090
#define N32_RCC_APB1RST1_OFFSET                 0x0094
#define N32_RCC_APB1RST2_OFFSET                 0x0098
#define N32_RCC_APB1RST3_OFFSET                 0x009C
#define N32_RCC_APB1RST4_OFFSET                 0x00A0
#define N32_RCC_APB1RST5_OFFSET                 0x00A4
#define N32_RCC_AHB2DIV1_OFFSET                 0x00A8
#define N32_RCC_AHB2SEL1_OFFSET                 0x00AC
#define N32_RCC_AHB2EN1_OFFSET                  0x00B0
#define N32_RCC_AHB2RST1_OFFSET                 0x00B4
#define N32_RCC_APB2DIV1_OFFSET                 0x00B8
#define N32_RCC_APB2SEL1_OFFSET                 0x00BC
#define N32_RCC_APB2SEL2_OFFSET                 0x00C0
#define N32_RCC_APB2EN1_OFFSET                  0x00C4
#define N32_RCC_APB2EN2_OFFSET                  0x00C8
#define N32_RCC_APB2EN3_OFFSET                  0x00CC
#define N32_RCC_APB2EN4_OFFSET                  0x00D0
#define N32_RCC_APB2RST1_OFFSET                 0x00D4
#define N32_RCC_APB2RST2_OFFSET                 0x00D8
#define N32_RCC_APB2RST3_OFFSET                 0x00DC
#define N32_RCC_APB2RST4_OFFSET                 0x00E0
#define N32_RCC_AHB5EN1_OFFSET                  0x00E4
#define N32_RCC_AHB5EN2_OFFSET                  0x00E8
#define N32_RCC_AHB5RST1_OFFSET                 0x00EC
#define N32_RCC_AHB5RST2_OFFSET                 0x00F0
#define N32_RCC_APB5DIV1_OFFSET                 0x00F4
#define N32_RCC_APB5SEL1_OFFSET                 0x00F8
#define N32_RCC_APB5EN1_OFFSET                  0x00FC
#define N32_RCC_APB5EN2_OFFSET                  0x0100
#define N32_RCC_APB5RST1_OFFSET                 0x0104
#define N32_RCC_APB5RST2_OFFSET                 0x0108
#define N32_RCC_RDDIV1_OFFSET                   0x010C
#define N32_RCC_RDSEL1_OFFSET                   0x0110
#define N32_RCC_RDEN1_OFFSET                    0x0114
#define N32_RCC_RDEN2_OFFSET                    0x0118
#define N32_RCC_RDRST1_OFFSET                   0x011C
#define N32_RCC_RDRST2_OFFSET                   0x0120
#define N32_RCC_BDCTRL_OFFSET                   0x0124
#define N32_RCC_CTRLSTS_OFFSET                  0x0128
#define N32_RCC_CLKINT1_OFFSET                  0x012C
#define N32_RCC_CLKINT2_OFFSET                  0x0130
#define N32_RCC_CFG1_OFFSET                     0x0134
#define N32_RCC_AXIDIV1_OFFSET                  0x0138
#define N32_RCC_AXISEL1_OFFSET                  0x013C
#define N32_RCC_AXIEN1_OFFSET                   0x0140
#define N32_RCC_AXIEN2_OFFSET                   0x0144
#define N32_RCC_AXIEN3_OFFSET                   0x0148
#define N32_RCC_AXIEN4_OFFSET                   0x014C
#define N32_RCC_AXIRST1_OFFSET                  0x0150
#define N32_RCC_AXIRST2_OFFSET                  0x0154
#define N32_RCC_AXIRST3_OFFSET                  0x0158
#define N32_RCC_AXIRST4_OFFSET                  0x015C
#define N32_RCC_CFG2_OFFSET                     0x0160
#define N32_RCC_CFG3_OFFSET                     0x0164
#define N32_RCC_CFG4_OFFSET                     0x0168
#define N32_RCC_SRCCTRL2_OFFSET                 0x016C
#define N32_RCC_CFG5_OFFSET                     0x0170
#define N32_RCC_M4RSTREL_OFFSET                 0x0174
#define N32_RCC_AXIDIV2_OFFSET                  0x0178
#define N32_RCC_AXISEL2_OFFSET                  0x017C
#define N32_RCC_SHRPLLCTRL1_OFFSET              0x018C
#define N32_RCC_SHRPLLCTRL2_OFFSET              0x0190
#define N32_RCC_AHB1DIV2_OFFSET                 0x0194
#define N32_RCC_LSERDDL_OFFSET                  0x0198
#define N32_RCC_MSIRDDL_OFFSET                  0x019C
#define N32_RCC_HSERDDL_OFFSET                  0x01A0
#define N32_RCC_PLLSFTLK_OFFSET                 0x01A4
#define N32_RCC_RDCTRL1_OFFSET                  0x01A8
#define N32_RCC_RDCTRL2_OFFSET                  0x01AC
#define N32_RCC_RDCTRL3_OFFSET                  0x01B0
#define N32_RCC_AHB2EN2_OFFSET                  0x01B4
#define N32_RCC_AHB9DIV1_OFFSET                 0x01B8
#define N32_RCC_AHB9SEL1_OFFSET                 0x01BC
#define N32_RCC_AHB9EN1_OFFSET                  0x01C0
#define N32_RCC_AHB9RST1_OFFSET                 0x01C4
#define N32_RCC_HSEOS_OFFSET                    0x01C8
#define N32_RCC_LSEOS_OFFSET                    0x01CC
#define N32_RCC_HSECAL_OFFSET                   0x01D0
#define N32_RCC_CLKINT3_OFFSET                  0x01D4
#define N32_RCC_PLLFD_OFFSET                    0x01D8
#define N32_RCC_SRCCTRL3_OFFSET                 0x01DC
#define N32_RCC_LSICSSDL_OFFSET                 0x01E0

/* Register Addresses *******************************************************/

#define N32_RCC_PLL1CTRL1                       (N32_RCC_BASE + \
                                                 N32_RCC_PLL1CTRL1_OFFSET)
#define N32_RCC_PLL1CTRL2                       (N32_RCC_BASE + \
                                                 N32_RCC_PLL1CTRL2_OFFSET)
#define N32_RCC_PLL2CTRL1                       (N32_RCC_BASE + \
                                                 N32_RCC_PLL2CTRL1_OFFSET)
#define N32_RCC_PLL2CTRL2                       (N32_RCC_BASE + \
                                                 N32_RCC_PLL2CTRL2_OFFSET)
#define N32_RCC_PLL3CTRL1                       (N32_RCC_BASE + \
                                                 N32_RCC_PLL3CTRL1_OFFSET)
#define N32_RCC_PLL3CTRL2                       (N32_RCC_BASE + \
                                                 N32_RCC_PLL3CTRL2_OFFSET)
#define N32_RCC_SRCCTRL1                        (N32_RCC_BASE + \
                                                 N32_RCC_SRCCTRL1_OFFSET)
#define N32_RCC_PLL1DIV                         (N32_RCC_BASE + \
                                                 N32_RCC_PLL1DIV_OFFSET)
#define N32_RCC_PLL2DIV                         (N32_RCC_BASE + \
                                                 N32_RCC_PLL2DIV_OFFSET)
#define N32_RCC_PLL3DIV                         (N32_RCC_BASE + \
                                                 N32_RCC_PLL3DIV_OFFSET)
#define N32_RCC_SYSBUSDIV1                      (N32_RCC_BASE + \
                                                 N32_RCC_SYSBUSDIV1_OFFSET)
#define N32_RCC_SYSBUSDIV2                      (N32_RCC_BASE + \
                                                 N32_RCC_SYSBUSDIV2_OFFSET)
#define N32_RCC_BOOTMODE                        (N32_RCC_BASE + \
                                                 N32_RCC_BOOTMODE_OFFSET)
#define N32_RCC_AHB1DIV1                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB1DIV1_OFFSET)
#define N32_RCC_AHB1SEL1                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB1SEL1_OFFSET)
#define N32_RCC_AHB1EN1                         (N32_RCC_BASE + \
                                                 N32_RCC_AHB1EN1_OFFSET)
#define N32_RCC_AHB1EN2                         (N32_RCC_BASE + \
                                                 N32_RCC_AHB1EN2_OFFSET)
#define N32_RCC_AHB1EN3                         (N32_RCC_BASE + \
                                                 N32_RCC_AHB1EN3_OFFSET)
#define N32_RCC_AHB1EN4                         (N32_RCC_BASE + \
                                                 N32_RCC_AHB1EN4_OFFSET)
#define N32_RCC_AHB1RST1                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB1RST1_OFFSET)
#define N32_RCC_AHB1RST2                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB1RST2_OFFSET) /*
                                                                           * TODO:
                                                                           * 手册上是0x0064
                                                                           */
#define N32_RCC_AHB1RST3                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB1RST3_OFFSET)
#define N32_RCC_AHB1RST4                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB1RST4_OFFSET)
#define N32_RCC_APB1DIV1                        (N32_RCC_BASE + \
                                                 N32_RCC_APB1DIV1_OFFSET)
#define N32_RCC_APB1SEL1                        (N32_RCC_BASE + \
                                                 N32_RCC_APB1SEL1_OFFSET)
#define N32_RCC_APB1SEL2                        (N32_RCC_BASE + \
                                                 N32_RCC_APB1SEL2_OFFSET)
#define N32_RCC_APB1EN1                         (N32_RCC_BASE + \
                                                 N32_RCC_APB1EN1_OFFSET)
#define N32_RCC_APB1EN2                         (N32_RCC_BASE + \
                                                 N32_RCC_APB1EN2_OFFSET)
#define N32_RCC_APB1EN3                         (N32_RCC_BASE + \
                                                 N32_RCC_APB1EN3_OFFSET)
#define N32_RCC_APB1EN4                         (N32_RCC_BASE + \
                                                 N32_RCC_APB1EN4_OFFSET)
#define N32_RCC_APB1EN5                         (N32_RCC_BASE + \
                                                 N32_RCC_APB1EN5_OFFSET)
#define N32_RCC_APB1RST1                        (N32_RCC_BASE + \
                                                 N32_RCC_APB1RST1_OFFSET)
#define N32_RCC_APB1RST2                        (N32_RCC_BASE + \
                                                 N32_RCC_APB1RST2_OFFSET)
#define N32_RCC_APB1RST3                        (N32_RCC_BASE + \
                                                 N32_RCC_APB1RST3_OFFSET)
#define N32_RCC_APB1RST4                        (N32_RCC_BASE + \
                                                 N32_RCC_APB1RST4_OFFSET)
#define N32_RCC_APB1RST5                        (N32_RCC_BASE + \
                                                 N32_RCC_APB1RST5_OFFSET)
#define N32_RCC_AHB2DIV1                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB2DIV1_OFFSET)
#define N32_RCC_AHB2SEL1                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB2SEL1_OFFSET)
#define N32_RCC_AHB2EN1                         (N32_RCC_BASE + \
                                                 N32_RCC_AHB2EN1_OFFSET)
#define N32_RCC_AHB2RST1                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB2RST1_OFFSET)
#define N32_RCC_APB2DIV1                        (N32_RCC_BASE + \
                                                 N32_RCC_APB2DIV1_OFFSET)
#define N32_RCC_APB2SEL1                        (N32_RCC_BASE + \
                                                 N32_RCC_APB2SEL1_OFFSET)
#define N32_RCC_APB2SEL2                        (N32_RCC_BASE + \
                                                 N32_RCC_APB2SEL2_OFFSET)
#define N32_RCC_APB2EN1                         (N32_RCC_BASE + \
                                                 N32_RCC_APB2EN1_OFFSET)
#define N32_RCC_APB2EN2                         (N32_RCC_BASE + \
                                                 N32_RCC_APB2EN2_OFFSET)
#define N32_RCC_APB2EN3                         (N32_RCC_BASE + \
                                                 N32_RCC_APB2EN3_OFFSET)
#define N32_RCC_APB2EN4                         (N32_RCC_BASE + \
                                                 N32_RCC_APB2EN4_OFFSET)
#define N32_RCC_APB2RST1                        (N32_RCC_BASE + \
                                                 N32_RCC_APB2RST1_OFFSET)
#define N32_RCC_APB2RST2                        (N32_RCC_BASE + \
                                                 N32_RCC_APB2RST2_OFFSET)
#define N32_RCC_APB2RST3                        (N32_RCC_BASE + \
                                                 N32_RCC_APB2RST3_OFFSET)
#define N32_RCC_APB2RST4                        (N32_RCC_BASE + \
                                                 N32_RCC_APB2RST4_OFFSET)
#define N32_RCC_AHB5EN1                         (N32_RCC_BASE + \
                                                 N32_RCC_AHB5EN1_OFFSET)
#define N32_RCC_AHB5EN2                         (N32_RCC_BASE + \
                                                 N32_RCC_AHB5EN2_OFFSET)
#define N32_RCC_AHB5RST1                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB5RST1_OFFSET)
#define N32_RCC_AHB5RST2                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB5RST2_OFFSET)
#define N32_RCC_APB5DIV1                        (N32_RCC_BASE + \
                                                 N32_RCC_APB5DIV1_OFFSET)
#define N32_RCC_APB5SEL1                        (N32_RCC_BASE + \
                                                 N32_RCC_APB5SEL1_OFFSET)
#define N32_RCC_APB5EN1                         (N32_RCC_BASE + \
                                                 N32_RCC_APB5EN1_OFFSET)
#define N32_RCC_APB5EN2                         (N32_RCC_BASE + \
                                                 N32_RCC_APB5EN2_OFFSET)
#define N32_RCC_APB5RST1                        (N32_RCC_BASE + \
                                                 N32_RCC_APB5RST1_OFFSET)
#define N32_RCC_APB5RST2                        (N32_RCC_BASE + \
                                                 N32_RCC_APB5RST2_OFFSET)
#define N32_RCC_RDDIV1                          (N32_RCC_BASE + \
                                                 N32_RCC_RDDIV1_OFFSET)
#define N32_RCC_RDSEL1                          (N32_RCC_BASE + \
                                                 N32_RCC_RDSEL1_OFFSET)
#define N32_RCC_RDEN1                           (N32_RCC_BASE + \
                                                 N32_RCC_RDEN1_OFFSET)
#define N32_RCC_RDEN2                           (N32_RCC_BASE + \
                                                 N32_RCC_RDEN2_OFFSET)
#define N32_RCC_RDRST1                          (N32_RCC_BASE + \
                                                 N32_RCC_RDRST1_OFFSET)
#define N32_RCC_RDRST2                          (N32_RCC_BASE + \
                                                 N32_RCC_RDRST2_OFFSET)
#define N32_RCC_BDCTRL                          (N32_RCC_BASE + \
                                                 N32_RCC_BDCTRL_OFFSET)
#define N32_RCC_CTRLSTS                         (N32_RCC_BASE + \
                                                 N32_RCC_CTRLSTS_OFFSET)
#define N32_RCC_CLKINT1                         (N32_RCC_BASE + \
                                                 N32_RCC_CLKINT1_OFFSET)
#define N32_RCC_CLKINT2                         (N32_RCC_BASE + \
                                                 N32_RCC_CLKINT2_OFFSET)
#define N32_RCC_CFG1                            (N32_RCC_BASE + \
                                                 N32_RCC_CFG1_OFFSET)
#define N32_RCC_AXIDIV1                         (N32_RCC_BASE + \
                                                 N32_RCC_AXIDIV1_OFFSET)
#define N32_RCC_AXISEL1                         (N32_RCC_BASE + \
                                                 N32_RCC_AXISEL1_OFFSET)
#define N32_RCC_AXIEN1                          (N32_RCC_BASE + \
                                                 N32_RCC_AXIEN1_OFFSET)
#define N32_RCC_AXIEN2                          (N32_RCC_BASE + \
                                                 N32_RCC_AXIEN2_OFFSET)
#define N32_RCC_AXIEN3                          (N32_RCC_BASE + \
                                                 N32_RCC_AXIEN3_OFFSET)
#define N32_RCC_AXIEN4                          (N32_RCC_BASE + \
                                                 N32_RCC_AXIEN4_OFFSET)
#define N32_RCC_AXIRST1                         (N32_RCC_BASE + \
                                                 N32_RCC_AXIRST1_OFFSET)
#define N32_RCC_AXIRST2                         (N32_RCC_BASE + \
                                                 N32_RCC_AXIRST2_OFFSET)
#define N32_RCC_AXIRST3                         (N32_RCC_BASE + \
                                                 N32_RCC_AXIRST3_OFFSET)
#define N32_RCC_AXIRST4                         (N32_RCC_BASE + \
                                                 N32_RCC_AXIRST4_OFFSET)
#define N32_RCC_CFG2                            (N32_RCC_BASE + \
                                                 N32_RCC_CFG2_OFFSET)
#define N32_RCC_CFG3                            (N32_RCC_BASE + \
                                                 N32_RCC_CFG3_OFFSET)
#define N32_RCC_CFG4                            (N32_RCC_BASE + \
                                                 N32_RCC_CFG4_OFFSET)
#define N32_RCC_SRCCTRL2                        (N32_RCC_BASE + \
                                                 N32_RCC_SRCCTRL2_OFFSET)
#define N32_RCC_CFG5                            (N32_RCC_BASE + \
                                                 N32_RCC_CFG5_OFFSET)
#define N32_RCC_M4RSTREL                        (N32_RCC_BASE + \
                                                 N32_RCC_M4RSTREL_OFFSET)
#define N32_RCC_AXIDIV2                         (N32_RCC_BASE + \
                                                 N32_RCC_AXIDIV2_OFFSET)
#define N32_RCC_AXISEL2                         (N32_RCC_BASE + \
                                                 N32_RCC_AXISEL2_OFFSET)
#define N32_RCC_SHRPLLCTRL1                     (N32_RCC_BASE + \
                                                 N32_RCC_SHRPLLCTRL1_OFFSET)
#define N32_RCC_SHRPLLCTRL2                     (N32_RCC_BASE + \
                                                 N32_RCC_SHRPLLCTRL2_OFFSET)
#define N32_RCC_AHB1DIV2                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB1DIV2_OFFSET)
#define N32_RCC_LSERDDL                         (N32_RCC_BASE + \
                                                 N32_RCC_LSERDDL_OFFSET)
#define N32_RCC_MSIRDDL                         (N32_RCC_BASE + \
                                                 N32_RCC_MSIRDDL_OFFSET)
#define N32_RCC_HSERDDL                         (N32_RCC_BASE + \
                                                 N32_RCC_HSERDDL_OFFSET)
#define N32_RCC_PLLSFTLK                        (N32_RCC_BASE + \
                                                 N32_RCC_PLLSFTLK_OFFSET)
#define N32_RCC_RDCTRL1                         (N32_RCC_BASE + \
                                                 N32_RCC_RDCTRL1_OFFSET)
#define N32_RCC_RDCTRL2                         (N32_RCC_BASE + \
                                                 N32_RCC_RDCTRL2_OFFSET)
#define N32_RCC_RDCTRL3                         (N32_RCC_BASE + \
                                                 N32_RCC_RDCTRL3_OFFSET)
#define N32_RCC_AHB2EN2                         (N32_RCC_BASE + \
                                                 N32_RCC_AHB2EN2_OFFSET)
#define N32_RCC_AHB9DIV1                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB9DIV1_OFFSET)
#define N32_RCC_AHB9SEL1                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB9SEL1_OFFSET)
#define N32_RCC_AHB9EN1                         (N32_RCC_BASE + \
                                                 N32_RCC_AHB9EN1_OFFSET)
#define N32_RCC_AHB9RST1                        (N32_RCC_BASE + \
                                                 N32_RCC_AHB9RST1_OFFSET)
#define N32_RCC_HSEOS                           (N32_RCC_BASE + \
                                                 N32_RCC_HSEOS_OFFSET)
#define N32_RCC_LSEOS                           (N32_RCC_BASE + \
                                                 N32_RCC_LSEOS_OFFSET)
#define N32_RCC_HSECAL                          (N32_RCC_BASE + \
                                                 N32_RCC_HSECAL_OFFSET)
#define N32_RCC_CLKINT3                         (N32_RCC_BASE + \
                                                 N32_RCC_CLKINT3_OFFSET)
#define N32_RCC_PLLFD                           (N32_RCC_BASE + \
                                                 N32_RCC_PLLFD_OFFSET)
#define N32_RCC_SRCCTRL3                        (N32_RCC_BASE + \
                                                 N32_RCC_SRCCTRL3_OFFSET)
#define N32_RCC_LSICSSDL                        (N32_RCC_BASE + \
                                                 N32_RCC_LSICSSDL_OFFSET)

/* Register Bitfield Definitions ********************************************/

#define RCC_PLL1CTRL1_PLL1SRC_MASK              (3 << 28)
#define RCC_PLL1CTRL1_PLL1SRC_HSI               (0 << 28)
#define RCC_PLL1CTRL1_PLL1SRC_MSI               (2 << 28)
#define RCC_PLL1CTRL1_PLL1SRC_HSE               (3 << 28)
#define RCC_PLL1CTRL1_PLL1SRC                   (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_PLL1CTRL1_PLL1SRC_0                 (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_PLL1CTRL1_PLL1SRC_1                 (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_PLL1CTRL1_PLL1PHLK                  (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_PLL1CTRL1_PLL1LDOEN                 (1 << 19)                   /*
                                                                             * Bit19
                                                                             */
#define RCC_PLL1CTRL1_PLL1EN                    (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_PLL1CTRL1_PLL1RST                   (1 << 17)                   /*
                                                                             * Bit17
                                                                             */
#define RCC_PLL1CTRL1_PLL1PD                    (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_PLL1CTRL1_PLL1BWAJ_MASK             (0xFFFU)
#define RCC_PLL1CTRL1_PLL1BWAJ_0                (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_PLL1CTRL1_PLL1BWAJ_1                (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_PLL1CTRL1_PLL1BWAJ_2                (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_PLL1CTRL1_PLL1BWAJ_3                (1 << 3)                    /*
                                                                             * Bit3*/
#define RCC_PLL1CTRL1_PLL1BWAJ_4                (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_PLL1CTRL1_PLL1BWAJ_5                (1 << 5)                    /*
                                                                             * Bit5*/
#define RCC_PLL1CTRL1_PLL1BWAJ_6                (1 << 6)                    /*
                                                                             * Bit6*/
#define RCC_PLL1CTRL1_PLL1BWAJ_7                (1 << 7)                    /*
                                                                             * Bit7*/
#define RCC_PLL1CTRL1_PLL1BWAJ_8                (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_PLL1CTRL1_PLL1BWAJ_9                (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_PLL1CTRL1_PLL1BWAJ_10               (1 << 10)                   /*
                                                                             * Bit10*/
#define RCC_PLL1CTRL1_PLL1BWAJ_11               (1 << 11)                   /*
                                                                             * Bit11*/

/******** Bit definition for RCC_PLL1CTRL2 register  ********/

#define RCC_PLL1CTRL2_PLL1CLKR_SHIFT            (26)
#define RCC_PLL1CTRL2_PLL1CLKR_MASK             (0x3f <<       \
  RCC_PLL1CTRL2_PLL1CLKR_SHIFT)                                                             /*
                                                                                             * Bit26
                                                                                             */
#define RCC_PLL1CTRL2_PLL1CLKF_MASK             ((uint32_t)0x03FFFFFFU)                     /*
                                                                                             * Bit
                                                                                             */

/******** Bit definition for RCC_PLL2CTRL1 register  ********/
#define RCC_PLL2CTRL1_PLL2SRC                   (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_PLL2CTRL1_PLL2SRC_0                 (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_PLL2CTRL1_PLL2SRC_1                 (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_PLL2CTRL1_PLL2PHLK                  (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_PLL2CTRL1_PLL2LDOEN                 (1 << 19)                   /*
                                                                             * Bit19
                                                                             */
#define RCC_PLL2CTRL1_PLL2EN                    (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_PLL2CTRL1_PLL2RST                   (1 << 17)                   /*
                                                                             * Bit17
                                                                             */
#define RCC_PLL2CTRL1_PLL2PD                    (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_PLL2CTRL1_PLL2BWAJ_MASK             ((uint32_t)0x00000FFFU)     /*
                                                                             * Bit
                                                                             */
#define RCC_PLL2CTRL1_PLL2BWAJ_0                (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_PLL2CTRL1_PLL2BWAJ_1                (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_PLL2CTRL1_PLL2BWAJ_2                (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_PLL2CTRL1_PLL2BWAJ_3                (1 << 3)                    /*
                                                                             * Bit3*/
#define RCC_PLL2CTRL1_PLL2BWAJ_4                (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_PLL2CTRL1_PLL2BWAJ_5                (1 << 5)                    /*
                                                                             * Bit5*/
#define RCC_PLL2CTRL1_PLL2BWAJ_6                (1 << 6)                    /*
                                                                             * Bit6*/
#define RCC_PLL2CTRL1_PLL2BWAJ_7                (1 << 7)                    /*
                                                                             * Bit7*/
#define RCC_PLL2CTRL1_PLL2BWAJ_8                (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_PLL2CTRL1_PLL2BWAJ_9                (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_PLL2CTRL1_PLL2BWAJ_10               (1 << 10)                   /*
                                                                             * Bit10*/
#define RCC_PLL2CTRL1_PLL2BWAJ_11               (1 << 11)                   /*
                                                                             * Bit11*/

/******** Bit definition for RCC_PLL2CTRL2 register  ********/
#define RCC_PLL2CTRL2_PLL2CLKR                  (1 << 26)                   /*
                                                                             * Bit26
                                                                             */
#define RCC_PLL2CTRL2_PLL2CLKR_0                (1 << 26)                   /*
                                                                             * Bit26*/
#define RCC_PLL2CTRL2_PLL2CLKR_1                (1 << 27)                   /*
                                                                             * Bit27*/
#define RCC_PLL2CTRL2_PLL2CLKR_2                (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_PLL2CTRL2_PLL2CLKR_3                (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_PLL2CTRL2_PLL2CLKR_4                (1 << 30)                   /*
                                                                             * Bit30*/
#define RCC_PLL2CTRL2_PLL2CLKR_5                (1 << 31)                   /*
                                                                             * Bit31*/
#define RCC_PLL2CTRL2_PLL2CLKF_MASK             ((uint32_t)0x03FFFFFFU)     /*
                                                                             * Bit
                                                                             */
#define RCC_PLL2CTRL2_PLL2CLKF_0                (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_PLL2CTRL2_PLL2CLKF_1                (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_PLL2CTRL2_PLL2CLKF_2                (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_PLL2CTRL2_PLL2CLKF_3                (1 << 3)                    /*
                                                                             * Bit3*/
#define RCC_PLL2CTRL2_PLL2CLKF_4                (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_PLL2CTRL2_PLL2CLKF_5                (1 << 5)                    /*
                                                                             * Bit5*/
#define RCC_PLL2CTRL2_PLL2CLKF_6                (1 << 6)                    /*
                                                                             * Bit6*/
#define RCC_PLL2CTRL2_PLL2CLKF_7                (1 << 7)                    /*
                                                                             * Bit7*/
#define RCC_PLL2CTRL2_PLL2CLKF_8                (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_PLL2CTRL2_PLL2CLKF_9                (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_PLL2CTRL2_PLL2CLKF_10               (1 << 10)                   /*
                                                                             * Bit10*/
#define RCC_PLL2CTRL2_PLL2CLKF_11               (1 << 11)                   /*
                                                                             * Bit11*/
#define RCC_PLL2CTRL2_PLL2CLKF_12               (1 << 12)                   /*
                                                                             * Bit12*/
#define RCC_PLL2CTRL2_PLL2CLKF_13               (1 << 13)                   /*
                                                                             * Bit13*/
#define RCC_PLL2CTRL2_PLL2CLKF_14               (1 << 14)                   /*
                                                                             * Bit14*/
#define RCC_PLL2CTRL2_PLL2CLKF_15               (1 << 15)                   /*
                                                                             * Bit15*/
#define RCC_PLL2CTRL2_PLL2CLKF_16               (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_PLL2CTRL2_PLL2CLKF_17               (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_PLL2CTRL2_PLL2CLKF_18               (1 << 18)                   /*
                                                                             * Bit18*/
#define RCC_PLL2CTRL2_PLL2CLKF_19               (1 << 19)                   /*
                                                                             * Bit19*/
#define RCC_PLL2CTRL2_PLL2CLKF_20               (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_PLL2CTRL2_PLL2CLKF_21               (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_PLL2CTRL2_PLL2CLKF_22               (1 << 22)                   /*
                                                                             * Bit22*/
#define RCC_PLL2CTRL2_PLL2CLKF_23               (1 << 23)                   /*
                                                                             * Bit23*/
#define RCC_PLL2CTRL2_PLL2CLKF_24               (1 << 24)                   /*
                                                                             * Bit24*/
#define RCC_PLL2CTRL2_PLL2CLKF_25               (1 << 25)                   /*
                                                                             * Bit25*/

/******** Bit definition for RCC_PLL3CTRL1 register  ********/
#define RCC_PLL3CTRL1_PLL3SRC                   (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_PLL3CTRL1_PLL3SRC_0                 (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_PLL3CTRL1_PLL3SRC_1                 (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_PLL3CTRL1_PLL3PHLK                  (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_PLL3CTRL1_PLL3LDOEN                 (1 << 19)                   /*
                                                                             * Bit19
                                                                             */
#define RCC_PLL3CTRL1_PLL3EN                    (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_PLL3CTRL1_PLL3RST                   (1 << 17)                   /*
                                                                             * Bit17
                                                                             */
#define RCC_PLL3CTRL1_PLL3PD                    (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_PLL3CTRL1_PLL3BWAJ_MASK             ((uint32_t)0x00000FFFU)     /*
                                                                             * Bit
                                                                             */
#define RCC_PLL3CTRL1_PLL3BWAJ_0                (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_PLL3CTRL1_PLL3BWAJ_1                (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_PLL3CTRL1_PLL3BWAJ_2                (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_PLL3CTRL1_PLL3BWAJ_3                (1 << 3)                    /*
                                                                             * Bit3*/
#define RCC_PLL3CTRL1_PLL3BWAJ_4                (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_PLL3CTRL1_PLL3BWAJ_5                (1 << 5)                    /*
                                                                             * Bit5*/
#define RCC_PLL3CTRL1_PLL3BWAJ_6                (1 << 6)                    /*
                                                                             * Bit6*/
#define RCC_PLL3CTRL1_PLL3BWAJ_7                (1 << 7)                    /*
                                                                             * Bit7*/
#define RCC_PLL3CTRL1_PLL3BWAJ_8                (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_PLL3CTRL1_PLL3BWAJ_9                (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_PLL3CTRL1_PLL3BWAJ_10               (1 << 10)                   /*
                                                                             * Bit10*/
#define RCC_PLL3CTRL1_PLL3BWAJ_11               (1 << 11)                   /*
                                                                             * Bit11*/

/******** Bit definition for RCC_PLL3CTRL2 register  ********/
#define RCC_PLL3CTRL2_PLL3CLKR                  (1 << 26)                   /*
                                                                             * Bit26
                                                                             */
#define RCC_PLL3CTRL2_PLL3CLKR_0                (1 << 26)                   /*
                                                                             * Bit26*/
#define RCC_PLL3CTRL2_PLL3CLKR_1                (1 << 27)                   /*
                                                                             * Bit27*/
#define RCC_PLL3CTRL2_PLL3CLKR_2                (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_PLL3CTRL2_PLL3CLKR_3                (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_PLL3CTRL2_PLL3CLKR_4                (1 << 30)                   /*
                                                                             * Bit30*/
#define RCC_PLL3CTRL2_PLL3CLKR_5                (1 << 31)                   /*
                                                                             * Bit31*/
#define RCC_PLL3CTRL2_PLL3CLKF_MASK             ((uint32_t)0x03FFFFFFU)     /*
                                                                             * Bit
                                                                             */
#define RCC_PLL3CTRL2_PLL3CLKF_0                (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_PLL3CTRL2_PLL3CLKF_1                (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_PLL3CTRL2_PLL3CLKF_2                (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_PLL3CTRL2_PLL3CLKF_3                (1 << 3)                    /*
                                                                             * Bit3*/
#define RCC_PLL3CTRL2_PLL3CLKF_4                (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_PLL3CTRL2_PLL3CLKF_5                (1 << 5)                    /*
                                                                             * Bit5*/
#define RCC_PLL3CTRL2_PLL3CLKF_6                (1 << 6)                    /*
                                                                             * Bit6*/
#define RCC_PLL3CTRL2_PLL3CLKF_7                (1 << 7)                    /*
                                                                             * Bit7*/
#define RCC_PLL3CTRL2_PLL3CLKF_8                (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_PLL3CTRL2_PLL3CLKF_9                (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_PLL3CTRL2_PLL3CLKF_10               (1 << 10)                   /*
                                                                             * Bit10*/
#define RCC_PLL3CTRL2_PLL3CLKF_11               (1 << 11)                   /*
                                                                             * Bit11*/
#define RCC_PLL3CTRL2_PLL3CLKF_12               (1 << 12)                   /*
                                                                             * Bit12*/
#define RCC_PLL3CTRL2_PLL3CLKF_13               (1 << 13)                   /*
                                                                             * Bit13*/
#define RCC_PLL3CTRL2_PLL3CLKF_14               (1 << 14)                   /*
                                                                             * Bit14*/
#define RCC_PLL3CTRL2_PLL3CLKF_15               (1 << 15)                   /*
                                                                             * Bit15*/
#define RCC_PLL3CTRL2_PLL3CLKF_16               (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_PLL3CTRL2_PLL3CLKF_17               (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_PLL3CTRL2_PLL3CLKF_18               (1 << 18)                   /*
                                                                             * Bit18*/
#define RCC_PLL3CTRL2_PLL3CLKF_19               (1 << 19)                   /*
                                                                             * Bit19*/
#define RCC_PLL3CTRL2_PLL3CLKF_20               (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_PLL3CTRL2_PLL3CLKF_21               (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_PLL3CTRL2_PLL3CLKF_22               (1 << 22)                   /*
                                                                             * Bit22*/
#define RCC_PLL3CTRL2_PLL3CLKF_23               (1 << 23)                   /*
                                                                             * Bit23*/
#define RCC_PLL3CTRL2_PLL3CLKF_24               (1 << 24)                   /*
                                                                             * Bit24*/
#define RCC_PLL3CTRL2_PLL3CLKF_25               (1 << 25)                   /*
                                                                             * Bit25*/

/******** Bit definition for RCC_SHRPLLCTRL1 register  ********/
#define RCC_SHRPLLCTRL1_SHRPLLSRC_SHIFT         (28)                 /* Bit28
                                                                      * ~ 29
                                                                      */
#define RCC_SHRPLLCTRL1_SHRPLLSRC_MASK          (0x3 <<      \
  RCC_SHRPLLCTRL1_SHRPLLSRC_SHIFT)
#define RCC_SHRPLLCTRL1_SHRPLLSRC_HSI           (0x0 <<      \
  RCC_SHRPLLCTRL1_SHRPLLSRC_SHIFT)
#define RCC_SHRPLLCTRL1_SHRPLLSRC_NONE          (0x1 <<      \
  RCC_SHRPLLCTRL1_SHRPLLSRC_SHIFT)
#define RCC_SHRPLLCTRL1_SHRPLLSRC_MSI           (0x2 <<      \
  RCC_SHRPLLCTRL1_SHRPLLSRC_SHIFT)
#define RCC_SHRPLLCTRL1_SHRPLLSRC_HSE           (0x3 <<      \
  RCC_SHRPLLCTRL1_SHRPLLSRC_SHIFT)
#define RCC_SHRPLLCTRL1_SHRPLLPHLK              (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_SHRPLLCTRL1_SHRPLLLDOEN             (1 << 19)                   /*
                                                                             * Bit19
                                                                             */
#define RCC_SHRPLLCTRL1_SHRPLLEN                (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_SHRPLLCTRL1_SHRPLLRST               (1 << 17)                   /*
                                                                             * Bit17
                                                                             */
#define RCC_SHRPLLCTRL1_SHRPLLPD                (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_SHRPLLCTRL1_SHRPLLBWAJ_MASK         ((uint32_t)0x00000FFFU)     /*
                                                                             * Bit
                                                                             * 0
                                                                             * ~
                                                                             * 11
                                                                             */

/******** Bit definition for RCC_SHRPLLCTRL2 register  ********/
#define RCC_SHRPLLCTRL2_SHRPLLCLKR_SHIFT        (26)                    /*
                                                                         * Bit26
                                                                         * ~ 31
                                                                         */
#define RCC_SHRPLLCTRL2_SHRPLLCLKR_MASK         (0x3f <<          \
  RCC_SHRPLLCTRL2_SHRPLLCLKR_SHIFT)                                     /*
                                                                         * Bit26
                                                                         */

#define RCC_SHRPLLCTRL2_SHRPLLCLKF_SHIFT        (0)                     /*
                                                                         * Bit0
                                                                         * ~ 25
                                                                         */
#define RCC_SHRPLLCTRL2_SHRPLLCLKF_MASK         ((uint32_t)0x03FFFFFFU)

/******** Bit definition for RCC_SRCCTRL1 register  ********/
#define RCC_SRCCTRL1_AFEMSIRDF                  (1 << 31)               /*
                                                                         * Bit31
                                                                         */
#define RCC_SRCCTRL1_AFEHSIRDF                  (1 << 30)               /*
                                                                         * Bit30
                                                                         */

#define RCC_SRCCTRL1_SCLKSTS_SHIFT              (26)                    /*
                                                                         * Bit26
                                                                         */
#define RCC_SRCCTRL1_SCLKSTS_MASK               (0x3 <<      \
  RCC_SRCCTRL1_SCLKSTS_SHIFT)
#define RCC_SRCCTRL1_SCLKSTS_HSI                ((uint32_t)0x00000000U)
#define RCC_SRCCTRL1_SCLKSTS_MSI                ((uint32_t)0x04000000U)
#define RCC_SRCCTRL1_SCLKSTS_HSE                ((uint32_t)0x08000000U)
#define RCC_SRCCTRL1_SCLKSTS_PLL1               ((uint32_t)0x0C000000U)

#define RCC_SRCCTRL1_SCLKSW                     (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_SRCCTRL1_SCLKSW_0                   (1 << 24)                   /*
                                                                             * Bit24*/
#define RCC_SRCCTRL1_SCLKSW_1                   (1 << 25)                   /*
                                                                             * Bit25*/
#define RCC_SRCCTRL1_SCLKSW_MASK                (3 << 24)
#define RCC_SRCCTRL1_SCLKSW_HSI                 ((uint32_t)0x00000000U)
#define RCC_SRCCTRL1_SCLKSW_MSI                 ((uint32_t)0x01000000U)
#define RCC_SRCCTRL1_SCLKSW_HSE                 ((uint32_t)0x02000000U)
#define RCC_SRCCTRL1_SCLKSW_PLL1                ((uint32_t)0x03000000U)

#define RCC_SRCCTRL1_HSERDCNTEN                 (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_SRCCTRL1_MSIRDF                     (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_SRCCTRL1_MSIEN                      (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_SRCCTRL1_HSECSSEN                   (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_SRCCTRL1_HSEBP                      (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_SRCCTRL1_HSERDF                     (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_SRCCTRL1_HSEEN                      (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_SRCCTRL1_HSIRDF                     (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_SRCCTRL1_HSIEN                      (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_SRCCTRL2 register  ********/
#define RCC_SRCCTRL2_BORF                       (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_SRCCTRL2_HSICALEF                   (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_SRCCTRL2_MSICALEF                   (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_SRCCTRL2_M7HYPSEL_MASK              (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_SRCCTRL2_M7HYPSEL_PLL1A             (0)
#define RCC_SRCCTRL2_M7HYPSEL_PLL2A             RCC_SRCCTRL2_M7HYPSEL_MASK
#define RCC_SRCCTRL2_AXIHYPSEL_MASK             (1 << 16)                 /*
                                                                           * Bit16
                                                                           */
#define RCC_SRCCTRL2_AXIHYPSEL_PLL1A            (0)
#define RCC_SRCCTRL2_AXIHYPSEL_PLL2A            RCC_SRCCTRL2_AXIHYPSEL_MASK
#define RCC_SRCCTRL2_MSICAL                     (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_SRCCTRL2_MSICAL_0                   (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_SRCCTRL2_MSICAL_1                   (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_SRCCTRL2_MSICAL_2                   (1 << 10)                   /*
                                                                             * Bit10*/
#define RCC_SRCCTRL2_MSICAL_3                   (1 << 11)                   /*
                                                                             * Bit11*/
#define RCC_SRCCTRL2_MSICAL_4                   (1 << 12)                   /*
                                                                             * Bit12*/
#define RCC_SRCCTRL2_MSITRIM                    ((uint32_t)0x0000001FU)     /*
                                                                             * Bit
                                                                             */
#define RCC_SRCCTRL2_MSITRIM_0                  (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_SRCCTRL2_MSITRIM_1                  (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_SRCCTRL2_MSITRIM_2                  (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_SRCCTRL2_MSITRIM_3                  (1 << 3)                    /*
                                                                             * Bit3*/
#define RCC_SRCCTRL2_MSITRIM_4                  (1 << 4)                    /*
                                                                             * Bit4*/

/******** Bit definition for RCC_SRCCTRL3 register  ********/
#define RCC_SRCCTRL3_HSICAL                     (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_SRCCTRL3_HSICAL_0                   (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_SRCCTRL3_HSICAL_1                   (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_SRCCTRL3_HSICAL_2                   (1 << 18)                   /*
                                                                             * Bit18*/
#define RCC_SRCCTRL3_HSICAL_3                   (1 << 19)                   /*
                                                                             * Bit19*/
#define RCC_SRCCTRL3_HSICAL_4                   (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_SRCCTRL3_HSICAL_5                   (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_SRCCTRL3_HSICAL_6                   (1 << 22)                   /*
                                                                             * Bit22*/
#define RCC_SRCCTRL3_HSICAL_7                   (1 << 23)                   /*
                                                                             * Bit23*/
#define RCC_SRCCTRL3_HSICAL_8                   (1 << 24)                   /*
                                                                             * Bit24*/
#define RCC_SRCCTRL3_HSITRIM                    ((uint32_t)0x000001FFU)     /*
                                                                             * Bit
                                                                             */
#define RCC_SRCCTRL3_HSITRIM_0                  (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_SRCCTRL3_HSITRIM_1                  (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_SRCCTRL3_HSITRIM_2                  (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_SRCCTRL3_HSITRIM_3                  (1 << 3)                    /*
                                                                             * Bit3*/
#define RCC_SRCCTRL3_HSITRIM_4                  (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_SRCCTRL3_HSITRIM_5                  (1 << 5)                    /*
                                                                             * Bit5*/
#define RCC_SRCCTRL3_HSITRIM_6                  (1 << 6)                    /*
                                                                             * Bit6*/
#define RCC_SRCCTRL3_HSITRIM_7                  (1 << 7)                    /*
                                                                             * Bit7*/
#define RCC_SRCCTRL3_HSITRIM_8                  (1 << 8)                    /*
                                                                             * Bit8*/

/******** Bit definition for RCC_PLL1DIV register  ********/
#define RCC_PLL1DIV_PLL1CDIV                    (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_PLL1DIV_PLL1CDIV_0                  (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_PLL1DIV_PLL1CDIV_1                  (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_PLL1DIV_PLL1CDIV_2                  (1 << 18)                   /*
                                                                             * Bit18*/
#define RCC_PLL1DIV_PLL1CDIV_3                  (1 << 19)                   /*
                                                                             * Bit19*/
#define RCC_PLL1DIV_PLL1CDIV_4                  (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_PLL1DIV_PLL1CDIV_5                  (1 << 21)                   /*
                                                                             * Bit21*/

#define RCC_PLL1DIV_PLL1CDIV_DIV1               ((uint32_t)0x00010000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV2               ((uint32_t)0x00020000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV3               ((uint32_t)0x00030000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV4               ((uint32_t)0x00040000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV5               ((uint32_t)0x00050000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV6               ((uint32_t)0x00060000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV7               ((uint32_t)0x00070000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV8               ((uint32_t)0x00080000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV9               ((uint32_t)0x00090000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV10              ((uint32_t)0x000A0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV11              ((uint32_t)0x000B0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV12              ((uint32_t)0x000C0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV13              ((uint32_t)0x000D0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV14              ((uint32_t)0x000E0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV15              ((uint32_t)0x000F0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV16              ((uint32_t)0x00100000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV17              ((uint32_t)0x00110000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV18              ((uint32_t)0x00120000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV19              ((uint32_t)0x00130000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV20              ((uint32_t)0x00140000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV21              ((uint32_t)0x00150000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV22              ((uint32_t)0x00160000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV23              ((uint32_t)0x00170000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV24              ((uint32_t)0x00180000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV25              ((uint32_t)0x00190000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV26              ((uint32_t)0x001A0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV27              ((uint32_t)0x001B0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV28              ((uint32_t)0x001C0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV29              ((uint32_t)0x001D0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV30              ((uint32_t)0x001E0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV31              ((uint32_t)0x001F0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV32              ((uint32_t)0x00200000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV33              ((uint32_t)0x00210000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV34              ((uint32_t)0x00220000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV35              ((uint32_t)0x00230000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV36              ((uint32_t)0x00240000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV37              ((uint32_t)0x00250000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV38              ((uint32_t)0x00260000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV39              ((uint32_t)0x00270000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV40              ((uint32_t)0x00280000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV41              ((uint32_t)0x00290000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV42              ((uint32_t)0x002A0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV43              ((uint32_t)0x002B0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV44              ((uint32_t)0x002C0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV45              ((uint32_t)0x002D0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV46              ((uint32_t)0x002E0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV47              ((uint32_t)0x002F0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV48              ((uint32_t)0x00300000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV49              ((uint32_t)0x00310000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV50              ((uint32_t)0x00320000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV51              ((uint32_t)0x00330000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV52              ((uint32_t)0x00340000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV53              ((uint32_t)0x00350000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV54              ((uint32_t)0x00360000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV55              ((uint32_t)0x00370000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV56              ((uint32_t)0x00380000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV57              ((uint32_t)0x00390000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV58              ((uint32_t)0x003A0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV59              ((uint32_t)0x003B0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV60              ((uint32_t)0x003C0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV61              ((uint32_t)0x003D0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV62              ((uint32_t)0x003E0000U)
#define RCC_PLL1DIV_PLL1CDIV_DIV63              ((uint32_t)0x003F0000U)

#define RCC_PLL1DIV_PLL1BDIV                    (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_PLL1DIV_PLL1BDIV_0                  (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_PLL1DIV_PLL1BDIV_1                  (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_PLL1DIV_PLL1BDIV_2                  (1 << 10)               /*
                                                                         * Bit10*/
#define RCC_PLL1DIV_PLL1BDIV_3                  (1 << 11)               /*
                                                                         * Bit11*/
#define RCC_PLL1DIV_PLL1BDIV_4                  (1 << 12)               /*
                                                                         * Bit12*/
#define RCC_PLL1DIV_PLL1BDIV_5                  (1 << 13)               /*
                                                                         * Bit13*/

#define RCC_PLL1DIV_PLL1BDIV_DIV1               ((uint32_t)0x00000100U)
#define RCC_PLL1DIV_PLL1BDIV_DIV2               ((uint32_t)0x00000200U)
#define RCC_PLL1DIV_PLL1BDIV_DIV3               ((uint32_t)0x00000300U)
#define RCC_PLL1DIV_PLL1BDIV_DIV4               ((uint32_t)0x00000400U)
#define RCC_PLL1DIV_PLL1BDIV_DIV5               ((uint32_t)0x00000500U)
#define RCC_PLL1DIV_PLL1BDIV_DIV6               ((uint32_t)0x00000600U)
#define RCC_PLL1DIV_PLL1BDIV_DIV7               ((uint32_t)0x00000700U)
#define RCC_PLL1DIV_PLL1BDIV_DIV8               ((uint32_t)0x00000800U)
#define RCC_PLL1DIV_PLL1BDIV_DIV9               ((uint32_t)0x00000900U)
#define RCC_PLL1DIV_PLL1BDIV_DIV10              ((uint32_t)0x00000A00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV11              ((uint32_t)0x00000B00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV12              ((uint32_t)0x00000C00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV13              ((uint32_t)0x00000D00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV14              ((uint32_t)0x00000E00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV15              ((uint32_t)0x00000F00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV16              ((uint32_t)0x00001000U)
#define RCC_PLL1DIV_PLL1BDIV_DIV17              ((uint32_t)0x00001100U)
#define RCC_PLL1DIV_PLL1BDIV_DIV18              ((uint32_t)0x00001200U)
#define RCC_PLL1DIV_PLL1BDIV_DIV19              ((uint32_t)0x00001300U)
#define RCC_PLL1DIV_PLL1BDIV_DIV20              ((uint32_t)0x00001400U)
#define RCC_PLL1DIV_PLL1BDIV_DIV21              ((uint32_t)0x00001500U)
#define RCC_PLL1DIV_PLL1BDIV_DIV22              ((uint32_t)0x00001600U)
#define RCC_PLL1DIV_PLL1BDIV_DIV23              ((uint32_t)0x00001700U)
#define RCC_PLL1DIV_PLL1BDIV_DIV24              ((uint32_t)0x00001800U)
#define RCC_PLL1DIV_PLL1BDIV_DIV25              ((uint32_t)0x00001900U)
#define RCC_PLL1DIV_PLL1BDIV_DIV26              ((uint32_t)0x00001A00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV27              ((uint32_t)0x00001B00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV28              ((uint32_t)0x00001C00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV29              ((uint32_t)0x00001D00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV30              ((uint32_t)0x00001E00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV31              ((uint32_t)0x00001F00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV32              ((uint32_t)0x00002000U)
#define RCC_PLL1DIV_PLL1BDIV_DIV33              ((uint32_t)0x00002100U)
#define RCC_PLL1DIV_PLL1BDIV_DIV34              ((uint32_t)0x00002200U)
#define RCC_PLL1DIV_PLL1BDIV_DIV35              ((uint32_t)0x00002300U)
#define RCC_PLL1DIV_PLL1BDIV_DIV36              ((uint32_t)0x00002400U)
#define RCC_PLL1DIV_PLL1BDIV_DIV37              ((uint32_t)0x00002500U)
#define RCC_PLL1DIV_PLL1BDIV_DIV38              ((uint32_t)0x00002600U)
#define RCC_PLL1DIV_PLL1BDIV_DIV39              ((uint32_t)0x00002700U)
#define RCC_PLL1DIV_PLL1BDIV_DIV40              ((uint32_t)0x00002800U)
#define RCC_PLL1DIV_PLL1BDIV_DIV41              ((uint32_t)0x00002900U)
#define RCC_PLL1DIV_PLL1BDIV_DIV42              ((uint32_t)0x00002A00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV43              ((uint32_t)0x00002B00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV44              ((uint32_t)0x00002C00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV45              ((uint32_t)0x00002D00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV46              ((uint32_t)0x00002E00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV47              ((uint32_t)0x00002F00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV48              ((uint32_t)0x00003000U)
#define RCC_PLL1DIV_PLL1BDIV_DIV49              ((uint32_t)0x00003100U)
#define RCC_PLL1DIV_PLL1BDIV_DIV50              ((uint32_t)0x00003200U)
#define RCC_PLL1DIV_PLL1BDIV_DIV51              ((uint32_t)0x00003300U)
#define RCC_PLL1DIV_PLL1BDIV_DIV52              ((uint32_t)0x00003400U)
#define RCC_PLL1DIV_PLL1BDIV_DIV53              ((uint32_t)0x00003500U)
#define RCC_PLL1DIV_PLL1BDIV_DIV54              ((uint32_t)0x00003600U)
#define RCC_PLL1DIV_PLL1BDIV_DIV55              ((uint32_t)0x00003700U)
#define RCC_PLL1DIV_PLL1BDIV_DIV56              ((uint32_t)0x00003800U)
#define RCC_PLL1DIV_PLL1BDIV_DIV57              ((uint32_t)0x00003900U)
#define RCC_PLL1DIV_PLL1BDIV_DIV58              ((uint32_t)0x00003A00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV59              ((uint32_t)0x00003B00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV60              ((uint32_t)0x00003C00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV61              ((uint32_t)0x00003D00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV62              ((uint32_t)0x00003E00U)
#define RCC_PLL1DIV_PLL1BDIV_DIV63              ((uint32_t)0x00003F00U)

#define RCC_PLL1DIV_PLL1ADIV                    ((uint32_t)0x0000003FU) /* Bit
                                                                         */
#define RCC_PLL1DIV_PLL1ADIV_0                  (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_PLL1DIV_PLL1ADIV_1                  (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_PLL1DIV_PLL1ADIV_2                  (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_PLL1DIV_PLL1ADIV_3                  (1 << 3)                /*
                                                                         * Bit3*/
#define RCC_PLL1DIV_PLL1ADIV_4                  (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_PLL1DIV_PLL1ADIV_5                  (1 << 5)                /*
                                                                         * Bit5*/

#define RCC_PLL1DIV_PLL1ADIV_DIV1               ((uint32_t)0x00000001U)
#define RCC_PLL1DIV_PLL1ADIV_DIV2               ((uint32_t)0x00000002U)
#define RCC_PLL1DIV_PLL1ADIV_DIV3               ((uint32_t)0x00000003U)
#define RCC_PLL1DIV_PLL1ADIV_DIV4               ((uint32_t)0x00000004U)
#define RCC_PLL1DIV_PLL1ADIV_DIV5               ((uint32_t)0x00000005U)
#define RCC_PLL1DIV_PLL1ADIV_DIV6               ((uint32_t)0x00000006U)
#define RCC_PLL1DIV_PLL1ADIV_DIV7               ((uint32_t)0x00000007U)
#define RCC_PLL1DIV_PLL1ADIV_DIV8               ((uint32_t)0x00000008U)
#define RCC_PLL1DIV_PLL1ADIV_DIV9               ((uint32_t)0x00000009U)
#define RCC_PLL1DIV_PLL1ADIV_DIV10              ((uint32_t)0x0000000AU)
#define RCC_PLL1DIV_PLL1ADIV_DIV11              ((uint32_t)0x0000000BU)
#define RCC_PLL1DIV_PLL1ADIV_DIV12              ((uint32_t)0x0000000CU)
#define RCC_PLL1DIV_PLL1ADIV_DIV13              ((uint32_t)0x0000000DU)
#define RCC_PLL1DIV_PLL1ADIV_DIV14              ((uint32_t)0x0000000EU)
#define RCC_PLL1DIV_PLL1ADIV_DIV15              ((uint32_t)0x0000000FU)
#define RCC_PLL1DIV_PLL1ADIV_DIV16              ((uint32_t)0x00000010U)
#define RCC_PLL1DIV_PLL1ADIV_DIV17              ((uint32_t)0x00000011U)
#define RCC_PLL1DIV_PLL1ADIV_DIV18              ((uint32_t)0x00000012U)
#define RCC_PLL1DIV_PLL1ADIV_DIV19              ((uint32_t)0x00000013U)
#define RCC_PLL1DIV_PLL1ADIV_DIV20              ((uint32_t)0x00000014U)
#define RCC_PLL1DIV_PLL1ADIV_DIV21              ((uint32_t)0x00000015U)
#define RCC_PLL1DIV_PLL1ADIV_DIV22              ((uint32_t)0x00000016U)
#define RCC_PLL1DIV_PLL1ADIV_DIV23              ((uint32_t)0x00000017U)
#define RCC_PLL1DIV_PLL1ADIV_DIV24              ((uint32_t)0x00000018U)
#define RCC_PLL1DIV_PLL1ADIV_DIV25              ((uint32_t)0x00000019U)
#define RCC_PLL1DIV_PLL1ADIV_DIV26              ((uint32_t)0x0000001AU)
#define RCC_PLL1DIV_PLL1ADIV_DIV27              ((uint32_t)0x0000001BU)
#define RCC_PLL1DIV_PLL1ADIV_DIV28              ((uint32_t)0x0000001CU)
#define RCC_PLL1DIV_PLL1ADIV_DIV29              ((uint32_t)0x0000001DU)
#define RCC_PLL1DIV_PLL1ADIV_DIV30              ((uint32_t)0x0000001EU)
#define RCC_PLL1DIV_PLL1ADIV_DIV31              ((uint32_t)0x0000001FU)
#define RCC_PLL1DIV_PLL1ADIV_DIV32              ((uint32_t)0x00000020U)
#define RCC_PLL1DIV_PLL1ADIV_DIV33              ((uint32_t)0x00000021U)
#define RCC_PLL1DIV_PLL1ADIV_DIV34              ((uint32_t)0x00000022U)
#define RCC_PLL1DIV_PLL1ADIV_DIV35              ((uint32_t)0x00000023U)
#define RCC_PLL1DIV_PLL1ADIV_DIV36              ((uint32_t)0x00000024U)
#define RCC_PLL1DIV_PLL1ADIV_DIV37              ((uint32_t)0x00000025U)
#define RCC_PLL1DIV_PLL1ADIV_DIV38              ((uint32_t)0x00000026U)
#define RCC_PLL1DIV_PLL1ADIV_DIV39              ((uint32_t)0x00000027U)
#define RCC_PLL1DIV_PLL1ADIV_DIV40              ((uint32_t)0x00000028U)
#define RCC_PLL1DIV_PLL1ADIV_DIV41              ((uint32_t)0x00000029U)
#define RCC_PLL1DIV_PLL1ADIV_DIV42              ((uint32_t)0x0000002AU)
#define RCC_PLL1DIV_PLL1ADIV_DIV43              ((uint32_t)0x0000002BU)
#define RCC_PLL1DIV_PLL1ADIV_DIV44              ((uint32_t)0x0000002CU)
#define RCC_PLL1DIV_PLL1ADIV_DIV45              ((uint32_t)0x0000002DU)
#define RCC_PLL1DIV_PLL1ADIV_DIV46              ((uint32_t)0x0000002EU)
#define RCC_PLL1DIV_PLL1ADIV_DIV47              ((uint32_t)0x0000002FU)
#define RCC_PLL1DIV_PLL1ADIV_DIV48              ((uint32_t)0x00000030U)
#define RCC_PLL1DIV_PLL1ADIV_DIV49              ((uint32_t)0x00000031U)
#define RCC_PLL1DIV_PLL1ADIV_DIV50              ((uint32_t)0x00000032U)
#define RCC_PLL1DIV_PLL1ADIV_DIV51              ((uint32_t)0x00000033U)
#define RCC_PLL1DIV_PLL1ADIV_DIV52              ((uint32_t)0x00000034U)
#define RCC_PLL1DIV_PLL1ADIV_DIV53              ((uint32_t)0x00000035U)
#define RCC_PLL1DIV_PLL1ADIV_DIV54              ((uint32_t)0x00000036U)
#define RCC_PLL1DIV_PLL1ADIV_DIV55              ((uint32_t)0x00000037U)
#define RCC_PLL1DIV_PLL1ADIV_DIV56              ((uint32_t)0x00000038U)
#define RCC_PLL1DIV_PLL1ADIV_DIV57              ((uint32_t)0x00000039U)
#define RCC_PLL1DIV_PLL1ADIV_DIV58              ((uint32_t)0x0000003AU)
#define RCC_PLL1DIV_PLL1ADIV_DIV59              ((uint32_t)0x0000003BU)
#define RCC_PLL1DIV_PLL1ADIV_DIV60              ((uint32_t)0x0000003CU)
#define RCC_PLL1DIV_PLL1ADIV_DIV61              ((uint32_t)0x0000003DU)
#define RCC_PLL1DIV_PLL1ADIV_DIV62              ((uint32_t)0x0000003EU)
#define RCC_PLL1DIV_PLL1ADIV_DIV63              ((uint32_t)0x0000003FU)

/******** Bit definition for RCC_PLL2DIV register  ********/
#define RCC_PLL2DIV_PLL2CDIV                    (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_PLL2DIV_PLL2CDIV_0                  (1 << 16)                       /*
                                                                                 * Bit16*/
#define RCC_PLL2DIV_PLL2CDIV_1                  (1 << 17)                       /*
                                                                                 * Bit17*/
#define RCC_PLL2DIV_PLL2CDIV_2                  (1 << 18)                       /*
                                                                                 * Bit18*/
#define RCC_PLL2DIV_PLL2CDIV_3                  (1 << 19)                       /*
                                                                                 * Bit19*/
#define RCC_PLL2DIV_PLL2CDIV_4                  (1 << 20)                       /*
                                                                                 * Bit20*/
#define RCC_PLL2DIV_PLL2CDIV_5                  (1 << 21)                       /*
                                                                                 * Bit21*/
#define RCC_PLL2DIV_PLL2BDIV                    (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_PLL2DIV_PLL2BDIV_0                  (1 << 8)                        /*
                                                                                 * Bit8*/
#define RCC_PLL2DIV_PLL2BDIV_1                  (1 << 9)                        /*
                                                                                 * Bit9*/
#define RCC_PLL2DIV_PLL2BDIV_2                  (1 << 10)                       /*
                                                                                 * Bit10*/
#define RCC_PLL2DIV_PLL2BDIV_3                  (1 << 11)                       /*
                                                                                 * Bit11*/
#define RCC_PLL2DIV_PLL2BDIV_4                  (1 << 12)                       /*
                                                                                 * Bit12*/
#define RCC_PLL2DIV_PLL2BDIV_5                  (1 << 13)                       /*
                                                                                 * Bit13*/
#define RCC_PLL2DIV_PLL2ADIV                    ((uint32_t)0x0000003FU)         /*
                                                                                 * Bit
                                                                                 */
#define RCC_PLL2DIV_PLL2ADIV_0                  (1 << 0)                        /*
                                                                                 * Bit0*/
#define RCC_PLL2DIV_PLL2ADIV_1                  (1 << 1)                        /*
                                                                                 * Bit1*/
#define RCC_PLL2DIV_PLL2ADIV_2                  (1 << 2)                        /*
                                                                                 * Bit2*/
#define RCC_PLL2DIV_PLL2ADIV_3                  (1 << 3)                        /*
                                                                                 * Bit3*/
#define RCC_PLL2DIV_PLL2ADIV_4                  (1 << 4)                        /*
                                                                                 * Bit4*/
#define RCC_PLL2DIV_PLL2ADIV_5                  (1 << 5)                        /*
                                                                                 * Bit5*/

/******** Bit definition for RCC_PLL3DIV register  ********/
#define RCC_PLL3DIV_PLL3CDIV                    (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_PLL3DIV_PLL3CDIV_0                  (1 << 16)                       /*
                                                                                 * Bit16*/
#define RCC_PLL3DIV_PLL3CDIV_1                  (1 << 17)                       /*
                                                                                 * Bit17*/
#define RCC_PLL3DIV_PLL3CDIV_2                  (1 << 18)                       /*
                                                                                 * Bit18*/
#define RCC_PLL3DIV_PLL3CDIV_3                  (1 << 19)                       /*
                                                                                 * Bit19*/
#define RCC_PLL3DIV_PLL3CDIV_4                  (1 << 20)                       /*
                                                                                 * Bit20*/
#define RCC_PLL3DIV_PLL3CDIV_5                  (1 << 21)                       /*
                                                                                 * Bit21*/
#define RCC_PLL3DIV_PLL3BDIV                    (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_PLL3DIV_PLL3BDIV_0                  (1 << 8)                        /*
                                                                                 * Bit8*/
#define RCC_PLL3DIV_PLL3BDIV_1                  (1 << 9)                        /*
                                                                                 * Bit9*/
#define RCC_PLL3DIV_PLL3BDIV_2                  (1 << 10)                       /*
                                                                                 * Bit10*/
#define RCC_PLL3DIV_PLL3BDIV_3                  (1 << 11)                       /*
                                                                                 * Bit11*/
#define RCC_PLL3DIV_PLL3BDIV_4                  (1 << 12)                       /*
                                                                                 * Bit12*/
#define RCC_PLL3DIV_PLL3BDIV_5                  (1 << 13)                       /*
                                                                                 * Bit13*/
#define RCC_PLL3DIV_PLL3ADIV                    ((uint32_t)0x0000003FU)         /*
                                                                                 * Bit
                                                                                 */
#define RCC_PLL3DIV_PLL3ADIV_0                  (1 << 0)                        /*
                                                                                 * Bit0*/
#define RCC_PLL3DIV_PLL3ADIV_1                  (1 << 1)                        /*
                                                                                 * Bit1*/
#define RCC_PLL3DIV_PLL3ADIV_2                  (1 << 2)                        /*
                                                                                 * Bit2*/
#define RCC_PLL3DIV_PLL3ADIV_3                  (1 << 3)                        /*
                                                                                 * Bit3*/
#define RCC_PLL3DIV_PLL3ADIV_4                  (1 << 4)                        /*
                                                                                 * Bit4*/
#define RCC_PLL3DIV_PLL3ADIV_5                  (1 << 5)                        /*
                                                                                 * Bit5*/

/******** Bit definition for RCC_SYSBUSDIV1 register  ********/
#define RCC_SYSBUSDIV1_AXIHYPDIV                (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_SYSBUSDIV1_AXIHYPDIV_0              (1 << 24)                   /*
                                                                             * Bit24*/
#define RCC_SYSBUSDIV1_AXIHYPDIV_1              (1 << 25)                   /*
                                                                             * Bit25*/
#define RCC_SYSBUSDIV1_AXIHYPDIV_2              (1 << 26)                   /*
                                                                             * Bit26*/
#define RCC_SYSBUSDIV1_AXIHYPDIV_3              (1 << 27)                   /*
                                                                             * Bit27*/

#define RCC_SYSBUSDIV1_AXIHYPDIV_DIV1           ((uint32_t)0x00000000U)
#define RCC_SYSBUSDIV1_AXIHYPDIV_DIV2           ((uint32_t)0x01000000U)
#define RCC_SYSBUSDIV1_AXIHYPDIV_DIV4           ((uint32_t)0x02000000U)
#define RCC_SYSBUSDIV1_AXIHYPDIV_DIV8           ((uint32_t)0x04000000U)
#define RCC_SYSBUSDIV1_AXIHYPDIV_DIV16          ((uint32_t)0x07000000U)
#define RCC_SYSBUSDIV1_AXIHYPDIV_DIV32          ((uint32_t)0x08000000U)
#define RCC_SYSBUSDIV1_AXIHYPDIV_DIV64          ((uint32_t)0x09000000U)
#define RCC_SYSBUSDIV1_AXIHYPDIV_DIV128         ((uint32_t)0x0A000000U)
#define RCC_SYSBUSDIV1_AXIHYPDIV_DIV256         ((uint32_t)0x0B000000U)
#define RCC_SYSBUSDIV1_AXIHYPDIV_DIV512         ((uint32_t)0x0C000000U)

#define RCC_SYSBUSDIV1_HSIDIV                   (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_SYSBUSDIV1_HSIDIV_0                 (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_SYSBUSDIV1_HSIDIV_1                 (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_SYSBUSDIV1_HSIDIV_2                 (1 << 22)                   /*
                                                                             * Bit22*/
#define RCC_SYSBUSDIV1_HSIDIV_3                 (1 << 23)                   /*
                                                                             * Bit23*/

#define RCC_SYSBUSDIV1_HSIDIV_DIV1              ((uint32_t)0x00000000U)
#define RCC_SYSBUSDIV1_HSIDIV_DIV2              ((uint32_t)0x00100000U)
#define RCC_SYSBUSDIV1_HSIDIV_DIV4              ((uint32_t)0x00200000U)
#define RCC_SYSBUSDIV1_HSIDIV_DIV8              ((uint32_t)0x00400000U)
#define RCC_SYSBUSDIV1_HSIDIV_DIV16             ((uint32_t)0x00700000U)
#define RCC_SYSBUSDIV1_HSIDIV_DIV32             ((uint32_t)0x00800000U)
#define RCC_SYSBUSDIV1_HSIDIV_DIV64             ((uint32_t)0x00900000U)
#define RCC_SYSBUSDIV1_HSIDIV_DIV128            ((uint32_t)0x00A00000U)
#define RCC_SYSBUSDIV1_HSIDIV_DIV256            ((uint32_t)0x00B00000U)
#define RCC_SYSBUSDIV1_HSIDIV_DIV512            ((uint32_t)0x00C00000U)

#define RCC_SYSBUSDIV1_M7HYPDIV                 (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_SYSBUSDIV1_M7HYPDIV_0               (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_SYSBUSDIV1_M7HYPDIV_1               (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_SYSBUSDIV1_M7HYPDIV_2               (1 << 18)                   /*
                                                                             * Bit18*/
#define RCC_SYSBUSDIV1_M7HYPDIV_3               (1 << 19)                   /*
                                                                             * Bit19*/

#define RCC_SYSBUSDIV1_M7HYPDIV_DIV1            ((uint32_t)0x00000000U)
#define RCC_SYSBUSDIV1_M7HYPDIV_DIV2            ((uint32_t)0x00010000U)
#define RCC_SYSBUSDIV1_M7HYPDIV_DIV4            ((uint32_t)0x00020000U)
#define RCC_SYSBUSDIV1_M7HYPDIV_DIV8            ((uint32_t)0x00040000U)
#define RCC_SYSBUSDIV1_M7HYPDIV_DIV16           ((uint32_t)0x00070000U)
#define RCC_SYSBUSDIV1_M7HYPDIV_DIV32           ((uint32_t)0x00080000U)
#define RCC_SYSBUSDIV1_M7HYPDIV_DIV64           ((uint32_t)0x00090000U)
#define RCC_SYSBUSDIV1_M7HYPDIV_DIV128          ((uint32_t)0x000A0000U)
#define RCC_SYSBUSDIV1_M7HYPDIV_DIV256          ((uint32_t)0x000B0000U)
#define RCC_SYSBUSDIV1_M7HYPDIV_DIV512          ((uint32_t)0x000C0000U)

#define RCC_SYSBUSDIV1_AXIDIV_SHIFT             (12)                   /*
                                                                        * Bit12
                                                                        */
#define RCC_SYSBUSDIV1_AXIDIV_MASK              ((uint32_t)0xf <<        \
  RCC_SYSBUSDIV1_AXIDIV_SHIFT)
#define RCC_SYSBUSDIV1_AXIDIV_DIV1              ((uint32_t)0x00000000U)
#define RCC_SYSBUSDIV1_AXIDIV_DIV2              ((uint32_t)0x00001000U)
#define RCC_SYSBUSDIV1_AXIDIV_DIV4              ((uint32_t)0x00002000U)
#define RCC_SYSBUSDIV1_AXIDIV_DIV8              ((uint32_t)0x00004000U)
#define RCC_SYSBUSDIV1_AXIDIV_DIV16             ((uint32_t)0x00007000U)
#define RCC_SYSBUSDIV1_AXIDIV_DIV32             ((uint32_t)0x00008000U)
#define RCC_SYSBUSDIV1_AXIDIV_DIV64             ((uint32_t)0x00009000U)
#define RCC_SYSBUSDIV1_AXIDIV_DIV128            ((uint32_t)0x0000A000U)
#define RCC_SYSBUSDIV1_AXIDIV_DIV256            ((uint32_t)0x0000B000U)
#define RCC_SYSBUSDIV1_AXIDIV_DIV512            ((uint32_t)0x0000C000U)

#define RCC_SYSBUSDIV1_BUSDIV                   (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_SYSBUSDIV1_BUSDIV_0                 (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_SYSBUSDIV1_BUSDIV_1                 (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_SYSBUSDIV1_BUSDIV_2                 (1 << 10)                   /*
                                                                             * Bit10*/
#define RCC_SYSBUSDIV1_BUSDIV_3                 (1 << 11)                   /*
                                                                             * Bit11*/

#define RCC_SYSBUSDIV1_BUSDIV_DIV1              ((uint32_t)0x00000000U)
#define RCC_SYSBUSDIV1_BUSDIV_DIV2              ((uint32_t)0x00000100U)
#define RCC_SYSBUSDIV1_BUSDIV_DIV4              ((uint32_t)0x00000200U)
#define RCC_SYSBUSDIV1_BUSDIV_DIV8              ((uint32_t)0x00000400U)
#define RCC_SYSBUSDIV1_BUSDIV_DIV16             ((uint32_t)0x00000700U)
#define RCC_SYSBUSDIV1_BUSDIV_DIV32             ((uint32_t)0x00000800U)
#define RCC_SYSBUSDIV1_BUSDIV_DIV64             ((uint32_t)0x00000900U)
#define RCC_SYSBUSDIV1_BUSDIV_DIV128            ((uint32_t)0x00000A00U)
#define RCC_SYSBUSDIV1_BUSDIV_DIV256            ((uint32_t)0x00000B00U)
#define RCC_SYSBUSDIV1_BUSDIV_DIV512            ((uint32_t)0x00000C00U)

#define RCC_SYSBUSDIV1_MSIDIV                   (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_SYSBUSDIV1_MSIDIV_0                 (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_SYSBUSDIV1_MSIDIV_1                 (1 << 5)                    /*
                                                                             * Bit5*/
#define RCC_SYSBUSDIV1_MSIDIV_2                 (1 << 6)                    /*
                                                                             * Bit6*/
#define RCC_SYSBUSDIV1_MSIDIV_3                 (1 << 7)                    /*
                                                                             * Bit7*/

#define RCC_SYSBUSDIV1_MSIDIV_DIV1              ((uint32_t)0x00000000U)
#define RCC_SYSBUSDIV1_MSIDIV_DIV2              ((uint32_t)0x00000010U)
#define RCC_SYSBUSDIV1_MSIDIV_DIV4              ((uint32_t)0x00000020U)
#define RCC_SYSBUSDIV1_MSIDIV_DIV8              ((uint32_t)0x00000040U)
#define RCC_SYSBUSDIV1_MSIDIV_DIV16             ((uint32_t)0x00000070U)
#define RCC_SYSBUSDIV1_MSIDIV_DIV32             ((uint32_t)0x00000080U)
#define RCC_SYSBUSDIV1_MSIDIV_DIV64             ((uint32_t)0x00000090U)
#define RCC_SYSBUSDIV1_MSIDIV_DIV128            ((uint32_t)0x000000A0U)
#define RCC_SYSBUSDIV1_MSIDIV_DIV256            ((uint32_t)0x000000B0U)
#define RCC_SYSBUSDIV1_MSIDIV_DIV512            ((uint32_t)0x000000C0U)

#define RCC_SYSBUSDIV1_SCLKDIV                  ((uint32_t)0x0000000FU)     /*
                                                                             * Bit
                                                                             */
#define RCC_SYSBUSDIV1_SCLKDIV_0                (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_SYSBUSDIV1_SCLKDIV_1                (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_SYSBUSDIV1_SCLKDIV_2                (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_SYSBUSDIV1_SCLKDIV_3                (1 << 3)                    /*
                                                                             * Bit3*/

#define RCC_SYSBUSDIV1_SCLKDIV_DIV1             ((uint32_t)0x00000000U)
#define RCC_SYSBUSDIV1_SCLKDIV_DIV2             ((uint32_t)0x00000001U)
#define RCC_SYSBUSDIV1_SCLKDIV_DIV4             ((uint32_t)0x00000002U)
#define RCC_SYSBUSDIV1_SCLKDIV_DIV8             ((uint32_t)0x00000004U)
#define RCC_SYSBUSDIV1_SCLKDIV_DIV16            ((uint32_t)0x00000007U)
#define RCC_SYSBUSDIV1_SCLKDIV_DIV32            ((uint32_t)0x00000008U)
#define RCC_SYSBUSDIV1_SCLKDIV_DIV64            ((uint32_t)0x00000009U)
#define RCC_SYSBUSDIV1_SCLKDIV_DIV128           ((uint32_t)0x0000000AU)
#define RCC_SYSBUSDIV1_SCLKDIV_DIV256           ((uint32_t)0x0000000BU)
#define RCC_SYSBUSDIV1_SCLKDIV_DIV512           ((uint32_t)0x0000000CU)

/******** Bit definition for RCC_SYSBUSDIV2 register  ********/
#define RCC_SYSBUSDIV2_APB6DIV                  (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_SYSBUSDIV2_APB6DIV_0                (1 << 24)                   /*
                                                                             * Bit24*/
#define RCC_SYSBUSDIV2_APB6DIV_1                (1 << 25)                   /*
                                                                             * Bit25*/
#define RCC_SYSBUSDIV2_APB6DIV_2                (1 << 26)                   /*
                                                                             * Bit26*/

#define RCC_SYSBUSDIV2_APB6DIV_DIV1             ((uint32_t)0x00000000U)
#define RCC_SYSBUSDIV2_APB6DIV_DIV2             ((uint32_t)0x04000000U)
#define RCC_SYSBUSDIV2_APB6DIV_DIV4             ((uint32_t)0x05000000U)
#define RCC_SYSBUSDIV2_APB6DIV_DIV8             ((uint32_t)0x06000000U)
#define RCC_SYSBUSDIV2_APB6DIV_DIV16            ((uint32_t)0x07000000U)

#define RCC_SYSBUSDIV2_APB5DIV                  (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_SYSBUSDIV2_APB5DIV_0                (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_SYSBUSDIV2_APB5DIV_1                (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_SYSBUSDIV2_APB5DIV_2                (1 << 18)                   /*
                                                                             * Bit18*/

#define RCC_SYSBUSDIV2_APB5DIV_DIV1             ((uint32_t)0x00000000U)
#define RCC_SYSBUSDIV2_APB5DIV_DIV2             ((uint32_t)0x00040000U)
#define RCC_SYSBUSDIV2_APB5DIV_DIV4             ((uint32_t)0x00050000U)
#define RCC_SYSBUSDIV2_APB5DIV_DIV8             ((uint32_t)0x00060000U)
#define RCC_SYSBUSDIV2_APB5DIV_DIV16            ((uint32_t)0x00070000U)

#define RCC_SYSBUSDIV2_APB2DIV                  (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_SYSBUSDIV2_APB2DIV_0                (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_SYSBUSDIV2_APB2DIV_1                (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_SYSBUSDIV2_APB2DIV_2                (1 << 10)                   /*
                                                                             * Bit10*/

#define RCC_SYSBUSDIV2_APB2DIV_DIV1             ((uint32_t)0x00000000U)
#define RCC_SYSBUSDIV2_APB2DIV_DIV2             ((uint32_t)0x00000400U)
#define RCC_SYSBUSDIV2_APB2DIV_DIV4             ((uint32_t)0x00000500U)
#define RCC_SYSBUSDIV2_APB2DIV_DIV8             ((uint32_t)0x00000600U)
#define RCC_SYSBUSDIV2_APB2DIV_DIV16            ((uint32_t)0x00000700U)

#define RCC_SYSBUSDIV2_APB1DIV                  ((uint32_t)0x00000007U)     /*
                                                                             * Bit
                                                                             */
#define RCC_SYSBUSDIV2_APB1DIV_0                (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_SYSBUSDIV2_APB1DIV_1                (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_SYSBUSDIV2_APB1DIV_2                (1 << 2)                    /*
                                                                             * Bit2*/

#define RCC_SYSBUSDIV2_APB1DIV_DIV1             ((uint32_t)0x00000000U)
#define RCC_SYSBUSDIV2_APB1DIV_DIV2             ((uint32_t)0x00000004U)
#define RCC_SYSBUSDIV2_APB1DIV_DIV4             ((uint32_t)0x00000005U)
#define RCC_SYSBUSDIV2_APB1DIV_DIV8             ((uint32_t)0x00000006U)
#define RCC_SYSBUSDIV2_APB1DIV_DIV16            ((uint32_t)0x00000007U)

/******** Bit definition for RCC_BOOTMODE register  ********/
#define RCC_BOOTMODE_MODE                       ((uint32_t)0xFFFFFFFFU) /* Bit
                                                                         */
#define RCC_BOOTMODE_MODE_0                     (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_BOOTMODE_MODE_1                     (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_BOOTMODE_MODE_2                     (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_BOOTMODE_MODE_3                     (1 << 3)                /*
                                                                         * Bit3*/
#define RCC_BOOTMODE_MODE_4                     (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_BOOTMODE_MODE_5                     (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_BOOTMODE_MODE_6                     (1 << 6)                /*
                                                                         * Bit6*/
#define RCC_BOOTMODE_MODE_7                     (1 << 7)                /*
                                                                         * Bit7*/
#define RCC_BOOTMODE_MODE_8                     (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_BOOTMODE_MODE_9                     (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_BOOTMODE_MODE_10                    (1 << 10)               /*
                                                                         * Bit10*/
#define RCC_BOOTMODE_MODE_11                    (1 << 11)               /*
                                                                         * Bit11*/
#define RCC_BOOTMODE_MODE_12                    (1 << 12)               /*
                                                                         * Bit12*/
#define RCC_BOOTMODE_MODE_13                    (1 << 13)               /*
                                                                         * Bit13*/
#define RCC_BOOTMODE_MODE_14                    (1 << 14)               /*
                                                                         * Bit14*/
#define RCC_BOOTMODE_MODE_15                    (1 << 15)               /*
                                                                         * Bit15*/
#define RCC_BOOTMODE_MODE_16                    (1 << 16)               /*
                                                                         * Bit16*/
#define RCC_BOOTMODE_MODE_17                    (1 << 17)               /*
                                                                         * Bit17*/
#define RCC_BOOTMODE_MODE_18                    (1 << 18)               /*
                                                                         * Bit18*/
#define RCC_BOOTMODE_MODE_19                    (1 << 19)               /*
                                                                         * Bit19*/
#define RCC_BOOTMODE_MODE_20                    (1 << 20)               /*
                                                                         * Bit20*/
#define RCC_BOOTMODE_MODE_21                    (1 << 21)               /*
                                                                         * Bit21*/
#define RCC_BOOTMODE_MODE_22                    (1 << 22)               /*
                                                                         * Bit22*/
#define RCC_BOOTMODE_MODE_23                    (1 << 23)               /*
                                                                         * Bit23*/
#define RCC_BOOTMODE_MODE_24                    (1 << 24)               /*
                                                                         * Bit24*/
#define RCC_BOOTMODE_MODE_25                    (1 << 25)               /*
                                                                         * Bit25*/
#define RCC_BOOTMODE_MODE_26                    (1 << 26)               /*
                                                                         * Bit26*/
#define RCC_BOOTMODE_MODE_27                    (1 << 27)               /*
                                                                         * Bit27*/
#define RCC_BOOTMODE_MODE_28                    (1 << 28)               /*
                                                                         * Bit28*/
#define RCC_BOOTMODE_MODE_29                    (1 << 29)               /*
                                                                         * Bit29*/
#define RCC_BOOTMODE_MODE_30                    (1 << 30)               /*
                                                                         * Bit30*/
#define RCC_BOOTMODE_MODE_31                    (1 << 31)               /*
                                                                         * Bit31*/

/******** Bit definition for RCC_AHB1DIV1 register  ********/
#define RCC_AHB1DIV1_ETH2SYSDIV_SHIFT           (28)                    /*
                                                                         * Bit28
                                                                         */
#define RCC_AHB1DIV1_ETH2SYSDIV_MASK            (0x0f <<      \
  RCC_AHB1DIV1_ETH2SYSDIV_SHIFT)                                        /*
                                                                         * Bit28
                                                                         */
#define RCC_AHB1DIV1_ETH2SYSDIV_DIV1            (0x00 <<      \
  RCC_AHB1DIV1_ETH2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_ETH2SYSDIV_DIV2            (0x01 <<      \
  RCC_AHB1DIV1_ETH2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_ETH2SYSDIV_DIV4            (0x02 <<      \
  RCC_AHB1DIV1_ETH2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_ETH2SYSDIV_DIV8            (0x04 <<      \
  RCC_AHB1DIV1_ETH2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_ETH2SYSDIV_DIV16           (0x07 <<      \
  RCC_AHB1DIV1_ETH2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_ETH2SYSDIV_DIV32           (0x08 <<      \
  RCC_AHB1DIV1_ETH2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_ETH2SYSDIV_DIV64           (0x09 <<      \
  RCC_AHB1DIV1_ETH2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_ETH2SYSDIV_DIV128          (0x0a <<      \
  RCC_AHB1DIV1_ETH2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_ETH2SYSDIV_DIV256          (0x0b <<      \
  RCC_AHB1DIV1_ETH2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_ETH2SYSDIV_DIV512          (0x0c <<      \
  RCC_AHB1DIV1_ETH2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT         (24)                    /*
                                                                         * Bit24
                                                                         */
#define RCC_AHB1DIV1_SDMMC2SYSDIV_MASK          (0x0f <<      \
  RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT)                                      /*
                                                                         * Bit24
                                                                         */
#define RCC_AHB1DIV1_SDMMC2SYSDIV_DIV1          (0x00 <<      \
  RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_SDMMC2SYSDIV_DIV2          (0x01 <<      \
  RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_SDMMC2SYSDIV_DIV4          (0x02 <<      \
  RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_SDMMC2SYSDIV_DIV8          (0x04 <<      \
  RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_SDMMC2SYSDIV_DIV16         (0x07 <<      \
  RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_SDMMC2SYSDIV_DIV32         (0x08 <<      \
  RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_SDMMC2SYSDIV_DIV64         (0x09 <<      \
  RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_SDMMC2SYSDIV_DIV128        (0x0A <<      \
  RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_SDMMC2SYSDIV_DIV256        (0x0B <<      \
  RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT)
#define RCC_AHB1DIV1_SDMMC2SYSDIV_DIV512        (0x0C <<      \
  RCC_AHB1DIV1_SDMMC2SYSDIV_SHIFT)
/******** Bit definition for RCC_AHB1DIV2 register  ********/
#define RCC_AHB1DIV2_ADC3SYSDIV                 (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_AHB1DIV2_ADC3SYSDIV_0               (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_AHB1DIV2_ADC3SYSDIV_1               (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_AHB1DIV2_ADC3SYSDIV_2               (1 << 18)                   /*
                                                                             * Bit18*/
#define RCC_AHB1DIV2_ADC3SYSDIV_3               (1 << 19)                   /*
                                                                             * Bit19*/
#define RCC_AHB1DIV2_ADC3SYSDIV_4               (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_AHB1DIV2_ADC3SYSDIV_5               (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_AHB1DIV2_ADC2SYSDIV                 (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_AHB1DIV2_ADC2SYSDIV_0               (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_AHB1DIV2_ADC2SYSDIV_1               (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_AHB1DIV2_ADC2SYSDIV_2               (1 << 10)                   /*
                                                                             * Bit10*/
#define RCC_AHB1DIV2_ADC2SYSDIV_3               (1 << 11)                   /*
                                                                             * Bit11*/
#define RCC_AHB1DIV2_ADC2SYSDIV_4               (1 << 12)                   /*
                                                                             * Bit12*/
#define RCC_AHB1DIV2_ADC2SYSDIV_5               (1 << 13)                   /*
                                                                             * Bit13*/

#define RCC_AHB1DIV2_ADC1SYSDIV                 ((uint32_t)0x0000003FU)     /*
                                                                             * Bit
                                                                             */
#define RCC_AHB1DIV2_ADC1SYSDIV_0               (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_AHB1DIV2_ADC1SYSDIV_1               (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_AHB1DIV2_ADC1SYSDIV_2               (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_AHB1DIV2_ADC1SYSDIV_3               (1 << 3)                    /*
                                                                             * Bit3*/
#define RCC_AHB1DIV2_ADC1SYSDIV_4               (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_AHB1DIV2_ADC1SYSDIV_5               (1 << 5)                    /*
                                                                             * Bit5*/

#define RCC_AHB1DIV2_ADC1SYSDIV_DIV1            ((uint32_t)0x00000001U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV2            ((uint32_t)0x00000002U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV3            ((uint32_t)0x00000003U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV4            ((uint32_t)0x00000004U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV5            ((uint32_t)0x00000005U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV6            ((uint32_t)0x00000006U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV7            ((uint32_t)0x00000007U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV8            ((uint32_t)0x00000008U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV9            ((uint32_t)0x00000009U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV10           ((uint32_t)0x0000000AU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV11           ((uint32_t)0x0000000BU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV12           ((uint32_t)0x0000000CU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV13           ((uint32_t)0x0000000DU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV14           ((uint32_t)0x0000000EU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV15           ((uint32_t)0x0000000FU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV16           ((uint32_t)0x00000010U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV17           ((uint32_t)0x00000011U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV18           ((uint32_t)0x00000012U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV19           ((uint32_t)0x00000013U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV20           ((uint32_t)0x00000014U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV21           ((uint32_t)0x00000015U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV22           ((uint32_t)0x00000016U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV23           ((uint32_t)0x00000017U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV24           ((uint32_t)0x00000018U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV25           ((uint32_t)0x00000019U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV26           ((uint32_t)0x0000001AU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV27           ((uint32_t)0x0000001BU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV28           ((uint32_t)0x0000001CU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV29           ((uint32_t)0x0000001DU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV30           ((uint32_t)0x0000001EU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV31           ((uint32_t)0x0000001FU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV32           ((uint32_t)0x00000020U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV33           ((uint32_t)0x00000021U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV34           ((uint32_t)0x00000022U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV35           ((uint32_t)0x00000023U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV36           ((uint32_t)0x00000024U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV37           ((uint32_t)0x00000025U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV38           ((uint32_t)0x00000026U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV39           ((uint32_t)0x00000027U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV40           ((uint32_t)0x00000028U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV41           ((uint32_t)0x00000029U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV42           ((uint32_t)0x0000002AU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV43           ((uint32_t)0x0000002BU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV44           ((uint32_t)0x0000002CU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV45           ((uint32_t)0x0000002DU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV46           ((uint32_t)0x0000002EU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV47           ((uint32_t)0x0000002FU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV48           ((uint32_t)0x00000030U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV49           ((uint32_t)0x00000031U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV50           ((uint32_t)0x00000032U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV51           ((uint32_t)0x00000033U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV52           ((uint32_t)0x00000034U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV53           ((uint32_t)0x00000035U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV54           ((uint32_t)0x00000036U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV55           ((uint32_t)0x00000037U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV56           ((uint32_t)0x00000038U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV57           ((uint32_t)0x00000039U)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV58           ((uint32_t)0x0000003AU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV59           ((uint32_t)0x0000003BU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV60           ((uint32_t)0x0000003CU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV61           ((uint32_t)0x0000003DU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV62           ((uint32_t)0x0000003EU)
#define RCC_AHB1DIV2_ADC1SYSDIV_DIV63           ((uint32_t)0x0000003FU)
/******** Bit definition for RCC_AHB1SEL1 register  ********/
#define RCC_AHB1SEL1_ETH2PTPSEL_SHIFT           (20)
#define RCC_AHB1SEL1_ETH2PTPSEL_MASK            (0x3 <<      \
  RCC_AHB1SEL1_ETH2PTPSEL_SHIFT)                                                                       /*
                                                                                                        * Bit20
                                                                                                        */
#define RCC_AHB1SEL1_ETH2PTPSEL_SYSBUSDIV       (0x0 <<      \
  RCC_AHB1SEL1_ETH2PTPSEL_SHIFT)
#define RCC_AHB1SEL1_ETH2PTPSEL_PERIPH          (0x1 <<      \
  RCC_AHB1SEL1_ETH2PTPSEL_SHIFT)
#define RCC_AHB1SEL1_ETH2PTPSEL_PLL2C           (0x2 <<      \
  RCC_AHB1SEL1_ETH2PTPSEL_SHIFT)
#define RCC_AHB1SEL1_ETH2PTPSEL_PLL3A           (0x3 <<      \
  RCC_AHB1SEL1_ETH2PTPSEL_SHIFT)
#define RCC_AHB1SEL1_SDMMC2KERSEL_SHIFT         (12)                    /*
                                                                         * Bit12
                                                                         */
#define RCC_AHB1SEL1_SDMMC2KERSEL_MASK          (0x7 <<      \
  RCC_AHB1SEL1_SDMMC2KERSEL_SHIFT)                                      /*
                                                                         * Bit12
                                                                         */
#define RCC_AHB1SEL1_SDMMC2KERSEL_SYSBUSDIV     ((uint32_t)0x00000000U)
#define RCC_AHB1SEL1_SDMMC2KERSEL_PERIPH        ((uint32_t)0x00001000U)
#define RCC_AHB1SEL1_SDMMC2KERSEL_PLL2A         ((uint32_t)0x00002000U)
#define RCC_AHB1SEL1_SDMMC2KERSEL_PLL3A         ((uint32_t)0x00003000U)
#define RCC_AHB1SEL1_SDMMC2KERSEL_PLL1B         ((uint32_t)0x00004000U)

#define RCC_AHB1SEL1_ADC3PLLSEL                 (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_AHB1SEL1_ADC3PLLSEL_0               (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_AHB1SEL1_ADC3PLLSEL_1               (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_AHB1SEL1_ADC2PLLSEL                 (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_AHB1SEL1_ADC2PLLSEL_0               (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_AHB1SEL1_ADC2PLLSEL_1               (1 << 5)                    /*
                                                                             * Bit5*/

#define RCC_AHB1SEL1_ADC1PLLSEL                 ((uint32_t)0x00000003U)     /*
                                                                             * Bit
                                                                             */
#define RCC_AHB1SEL1_ADC1PLLSEL_0               (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_AHB1SEL1_ADC1PLLSEL_1               (1 << 1)                    /*
                                                                             * Bit1*/

#define RCC_AHB1SEL1_ADC1PLLSEL_PLL2B           ((uint32_t)0x00000000U)     /*
                                                                             * Bit
                                                                             */
#define RCC_AHB1SEL1_ADC1PLLSEL_PLL1B           (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_AHB1SEL1_ADC1PLLSEL_PLL3B           ((uint32_t)0x00000002U)
#define RCC_AHB1SEL1_ADC1PLLSEL_PLL3C           ((uint32_t)0x00000003U)
/******** Bit definition for RCC_AHB1EN1 register  ********/
#define RCC_AHB1EN1_M7SDMMC2EN                  (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_AHB1EN1_M4SDMMC2EN                  (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_AHB1EN1_M7SDMMC2LPEN                (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_AHB1EN1_M4SDMMC2LPEN                (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_AHB1EN1_M7USB2EN                    (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_AHB1EN1_M4USB2EN                    (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_AHB1EN1_M7USB2LPEN                  (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_AHB1EN1_M4USB2LPEN                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_AHB1EN1_M7DMAMUX1EN                 (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_AHB1EN1_M4DMAMUX1EN                 (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_AHB1EN1_M7DMAMUX1LPEN               (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_AHB1EN1_M4DMAMUX1LPEN               (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AHB1EN1_M7ADC1PLLEN                 (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_AHB1EN1_M4ADC1PLLEN                 (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_AHB1EN1_M7ADC1PLLLPEN               (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_AHB1EN1_M4ADC1PLLLPEN               (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_AHB1EN1_M7ADC1SYSEN                 (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_AHB1EN1_M4ADC1SYSEN                 (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_AHB1EN1_M7ADC1SYSLPEN               (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_AHB1EN1_M4ADC1SYSLPEN               (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB1EN1_M7ADC1BUSEN                 (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_AHB1EN1_M4ADC1BUSEN                 (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_AHB1EN1_M7ADC1BUSLPEN               (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_AHB1EN1_M4ADC1BUSLPEN               (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AHB1EN2 register  ********/
#define RCC_AHB1EN2_M7ETH2TXEN                  (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_AHB1EN2_M4ETH2TXEN                  (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_AHB1EN2_M7ETH2TXLPEN                (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_AHB1EN2_M4ETH2TXLPEN                (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB1EN2_M7ETH2RXEN                  (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_AHB1EN2_M4ETH2RXEN                  (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_AHB1EN2_M7ETH2RXLPEN                (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_AHB1EN2_M4ETH2RXLPEN                (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_AHB1EN2_M7ETH2MACEN                 (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_AHB1EN2_M4ETH2MACEN                 (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_AHB1EN2_M7ETH2MACLPEN               (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_AHB1EN2_M4ETH2MACLPEN               (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AHB1EN3 register  ********/
#define RCC_AHB1EN3_M7ECCMACEN                  (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_AHB1EN3_M4ECCMACEN                  (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_AHB1EN3_M7ECCMACLPEN                (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_AHB1EN3_M4ECCMACLPEN                (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_AHB1EN3_M7DMA1EN                    (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_AHB1EN3_M4DMA1EN                    (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_AHB1EN3_M7DMA1LPEN                  (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_AHB1EN3_M4DMA1LPEN                  (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AHB1EN3_M7DMA2EN                    (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_AHB1EN3_M4DMA2EN                    (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_AHB1EN3_M7DMA2LPEN                  (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_AHB1EN3_M4DMA2LPEN                  (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB1EN3_M7DMA3EN                    (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_AHB1EN3_M4DMA3EN                    (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_AHB1EN3_M7DMA3LPEN                  (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_AHB1EN3_M4DMA3LPEN                  (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AHB1EN4 register  ********/
#define RCC_AHB1EN4_M7ADC2PLLEN                 (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_AHB1EN4_M4ADC2PLLEN                 (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_AHB1EN4_M7ADC2PLLLPEN               (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_AHB1EN4_M4ADC2PLLLPEN               (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_AHB1EN4_M7ADC2SYSEN                 (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_AHB1EN4_M4ADC2SYSEN                 (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_AHB1EN4_M7ADC2SYSLPEN               (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_AHB1EN4_M4ADC2SYSLPEN               (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_AHB1EN4_M7ADC2BUSEN                 (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_AHB1EN4_M4ADC2BUSEN                 (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_AHB1EN4_M7ADC2BUSLPEN               (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_AHB1EN4_M4ADC2BUSLPEN               (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AHB1EN4_M7ADC3PLLEN                 (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_AHB1EN4_M4ADC3PLLEN                 (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_AHB1EN4_M7ADC3PLLLPEN               (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_AHB1EN4_M4ADC3PLLLPEN               (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_AHB1EN4_M7ADC3SYSEN                 (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_AHB1EN4_M4ADC3SYSEN                 (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_AHB1EN4_M7ADC3SYSLPEN               (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_AHB1EN4_M4ADC3SYSLPEN               (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB1EN4_M7ADC3BUSEN                 (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_AHB1EN4_M4ADC3BUSEN                 (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_AHB1EN4_M7ADC3BUSLPEN               (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_AHB1EN4_M4ADC3BUSLPEN               (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AHB1RST1 register  ********/
#define RCC_AHB1RST1_SDMMC2RST                  (1 << 29)                   /*
                                                                             * Bit29
                                                                             */
#define RCC_AHB1RST1_SDHOST2RST                 (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_AHB1RST1_USB2WRAPRST                (1 << 22)                   /*
                                                                             * Bit22
                                                                             */
#define RCC_AHB1RST1_USB2PORRST                 (1 << 21)                   /*
                                                                             * Bit21
                                                                             */
#define RCC_AHB1RST1_USB2RST                    (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_AHB1RST1_DMAMUX1RST                 (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_AHB1RST1_ADC1RST                    (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

/******** Bit definition for RCC_AHB1RST2 register  ********/
#define RCC_AHB1RST2_ETH2RST                    (1 << 0)                      /*
                                                                               * Bit0
                                                                               */

/******** Bit definition for RCC_AHB1RST3 register  ********/
#define RCC_AHB1RST3_ECCMACRST                  (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_AHB1RST3_DMA1RST                    (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AHB1RST3_DMA2RST                    (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB1RST3_DMA3RST                    (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AHB1RST4 register  ********/
#define RCC_AHB1RST4_ADC2RST                    (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AHB1RST4_ADC3RST                    (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_APB1DIV1 register  ********/
#define RCC_APB1DIV1_APB1USARTDIV               (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_APB1DIV1_APB1USARTDIV_0             (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_APB1DIV1_APB1USARTDIV_1             (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_APB1DIV1_APB1USARTDIV_2             (1 << 30)                   /*
                                                                             * Bit30*/
#define RCC_APB1DIV1_APB1USARTDIV_MASK          (7 << 28)
#define RCC_APB1DIV1_APB1USARTDIV_DIV1          ((uint32_t)0x00000000U)
#define RCC_APB1DIV1_APB1USARTDIV_DIV2          ((uint32_t)0x40000000U)
#define RCC_APB1DIV1_APB1USARTDIV_DIV4          ((uint32_t)0x50000000U)
#define RCC_APB1DIV1_APB1USARTDIV_DIV8          ((uint32_t)0x60000000U)
#define RCC_APB1DIV1_APB1USARTDIV_DIV16         ((uint32_t)0x70000000U)

#define RCC_APB1DIV1_APB1BTIMDIV_SHIFT          (24)                    /*
                                                                         * Bit24
                                                                         * ~ 26
                                                                         */
#define RCC_APB1DIV1_APB1BTIMDIV_MASK           (0x07 <<      \
  RCC_APB1DIV1_APB1BTIMDIV_SHIFT)                                       /*
                                                                         * Bit24
                                                                         * ~ 26
                                                                         */
#define RCC_APB1DIV1_APB1BTIMDIV_DIV1           ((uint32_t)0x00000000U)
#define RCC_APB1DIV1_APB1BTIMDIV_DIV2           ((uint32_t)0x04000000U)
#define RCC_APB1DIV1_APB1BTIMDIV_DIV4           ((uint32_t)0x05000000U)
#define RCC_APB1DIV1_APB1BTIMDIV_DIV8           ((uint32_t)0x06000000U)
#define RCC_APB1DIV1_APB1BTIMDIV_DIV16          ((uint32_t)0x07000000U)

#define RCC_APB1DIV1_APB1GTIMDIV_SHIFT          (16)                    /*
                                                                         * Bit16
                                                                         */
#define RCC_APB1DIV1_APB1GTIMDIV_MASK           (0x07 <<      \
  RCC_APB1DIV1_APB1GTIMDIV_SHIFT)                                       /*
                                                                         * Bit16
                                                                         */
#define RCC_APB1DIV1_APB1GTIMDIV_DIV1           ((uint32_t)0x00000000U)
#define RCC_APB1DIV1_APB1GTIMDIV_DIV2           ((uint32_t)0x00040000U)
#define RCC_APB1DIV1_APB1GTIMDIV_DIV4           ((uint32_t)0x00050000U)
#define RCC_APB1DIV1_APB1GTIMDIV_DIV8           ((uint32_t)0x00060000U)
#define RCC_APB1DIV1_APB1GTIMDIV_DIV16          ((uint32_t)0x00070000U)

#define RCC_APB1DIV1_APB1I2SDIV                 (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_APB1DIV1_APB1I2SDIV_0               (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_APB1DIV1_APB1I2SDIV_1               (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_APB1DIV1_APB1I2SDIV_2               (1 << 10)                   /*
                                                                             * Bit10*/

#define RCC_APB1DIV1_APB1I2SDIV_DIV1            ((uint32_t)0x00000000U)
#define RCC_APB1DIV1_APB1I2SDIV_DIV2            ((uint32_t)0x00000400U)
#define RCC_APB1DIV1_APB1I2SDIV_DIV4            ((uint32_t)0x00000500U)
#define RCC_APB1DIV1_APB1I2SDIV_DIV8            ((uint32_t)0x00000600U)
#define RCC_APB1DIV1_APB1I2SDIV_DIV16           ((uint32_t)0x00000700U)

#define RCC_APB1DIV1_APB1FDCANDIV               (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_APB1DIV1_APB1FDCANDIV_0             (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_APB1DIV1_APB1FDCANDIV_1             (1 << 5)                    /*
                                                                             * Bit5*/
#define RCC_APB1DIV1_APB1FDCANDIV_2             (1 << 6)                    /*
                                                                             * Bit6*/

#define RCC_APB1DIV1_APB1FDCANDIV_DIV1          ((uint32_t)0x00000000U)
#define RCC_APB1DIV1_APB1FDCANDIV_DIV2          ((uint32_t)0x00000040U)
#define RCC_APB1DIV1_APB1FDCANDIV_DIV4          ((uint32_t)0x00000050U)
#define RCC_APB1DIV1_APB1FDCANDIV_DIV8          ((uint32_t)0x00000060U)
#define RCC_APB1DIV1_APB1FDCANDIV_DIV16         ((uint32_t)0x00000070U)

#define RCC_APB1DIV1_APB1I2CDIV                 ((uint32_t)0x00000007U)     /*
                                                                             * Bit
                                                                             */
#define RCC_APB1DIV1_APB1I2CDIV_0               (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_APB1DIV1_APB1I2CDIV_1               (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_APB1DIV1_APB1I2CDIV_2               (1 << 2)                    /*
                                                                             * Bit2*/

#define RCC_APB1DIV1_APB1I2CDIV_DIV1            ((uint32_t)0x00000000U)
#define RCC_APB1DIV1_APB1I2CDIV_DIV2            ((uint32_t)0x00000004U)
#define RCC_APB1DIV1_APB1I2CDIV_DIV4            ((uint32_t)0x00000005U)
#define RCC_APB1DIV1_APB1I2CDIV_DIV8            ((uint32_t)0x00000006U)
#define RCC_APB1DIV1_APB1I2CDIV_DIV16           ((uint32_t)0x00000007U)
/******** Bit definition for RCC_APB1SEL1 register  ********/
#define RCC_APB1SEL1_I2C1KERSEL                 (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_APB1SEL1_I2C1KERSEL_0               (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_APB1SEL1_I2C1KERSEL_1               (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_APB1SEL1_I2C1KERSEL_2               (1 << 30)                   /*
                                                                             * Bit30*/
#define RCC_APB1SEL1_I2C2KERSEL                 (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_APB1SEL1_I2C2KERSEL_0               (1 << 24)                   /*
                                                                             * Bit24*/
#define RCC_APB1SEL1_I2C2KERSEL_1               (1 << 25)                   /*
                                                                             * Bit25*/
#define RCC_APB1SEL1_I2C2KERSEL_2               (1 << 26)                   /*
                                                                             * Bit26*/

#define RCC_APB1SEL1_I2C3KERSEL                 (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_APB1SEL1_I2C3KERSEL_0               (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_APB1SEL1_I2C3KERSEL_1               (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_APB1SEL1_I2C3KERSEL_2               (1 << 22)                   /*
                                                                             * Bit22*/

#define RCC_APB1SEL1_I2C3KERSEL_SYSBUSDIV       ((uint32_t)0x00000000U)
#define RCC_APB1SEL1_I2C3KERSEL_PLL3C           ((uint32_t)0x00100000U)
#define RCC_APB1SEL1_I2C3KERSEL_HSI             ((uint32_t)0x00200000U)
#define RCC_APB1SEL1_I2C3KERSEL_MSI             ((uint32_t)0x00300000U)

#define RCC_APB1SEL1_FDCAN1KERSEL               (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_APB1SEL1_FDCAN1KERSEL_0             (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_APB1SEL1_FDCAN1KERSEL_1             (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_APB1SEL1_FDCAN1KERSEL_2             (1 << 18)                   /*
                                                                             * Bit18*/

#define RCC_APB1SEL1_FDCAN2KERSEL               (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_APB1SEL1_FDCAN2KERSEL_0             (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_APB1SEL1_FDCAN2KERSEL_1             (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_APB1SEL1_FDCAN2KERSEL_2             (1 << 10)                   /*
                                                                             * Bit10*/

#define RCC_APB1SEL1_FDCAN2KERSEL_SYSBUSDIV     ((uint32_t)0x00000000U)
#define RCC_APB1SEL1_FDCAN2KERSEL_PLL1C         ((uint32_t)0x00000100U)
#define RCC_APB1SEL1_FDCAN2KERSEL_PLL2C         ((uint32_t)0x00000200U)
#define RCC_APB1SEL1_FDCAN2KERSEL_PLL3B         ((uint32_t)0x00000300U)
#define RCC_APB1SEL1_FDCAN2KERSEL_PERIPH        ((uint32_t)0x00000400U)

#define RCC_APB1SEL1_I2S4KERSEL                 (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_APB1SEL1_I2S4KERSEL_0               (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_APB1SEL1_I2S4KERSEL_1               (1 << 3)                    /*
                                                                             * Bit3*/
#define RCC_APB1SEL1_I2S3KERSEL                 ((uint32_t)0x00000003U)     /*
                                                                             * Bit
                                                                             */
#define RCC_APB1SEL1_I2S3KERSEL_0               (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_APB1SEL1_I2S3KERSEL_1               (1 << 1)                    /*
                                                                             * Bit1*/

/******** Bit definition for RCC_APB1SEL2 register  ********/
#define RCC_APB1SEL2_FDCAN5KERSEL               (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_APB1SEL2_FDCAN5KERSEL_0             (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_APB1SEL2_FDCAN5KERSEL_1             (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_APB1SEL2_FDCAN5KERSEL_2             (1 << 30)                   /*
                                                                             * Bit30*/
#define RCC_APB1SEL2_FDCAN6KERSEL               (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_APB1SEL2_FDCAN6KERSEL_0             (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_APB1SEL2_FDCAN6KERSEL_1             (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_APB1SEL2_FDCAN6KERSEL_2             (1 << 22)                   /*
                                                                             * Bit22*/

/******** Bit definition for RCC_APB1EN1 register  ********/
#define RCC_APB1EN1_M7BTIM1EN                   (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_APB1EN1_M4BTIM1EN                   (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_APB1EN1_M7BTIM1LPEN                 (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_APB1EN1_M4BTIM1LPEN                 (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB1EN1_M7BTIM2EN                   (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_APB1EN1_M4BTIM2EN                   (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_APB1EN1_M7BTIM2LPEN                 (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_APB1EN1_M4BTIM2LPEN                 (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB1EN1_M7BTIM3EN                   (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_APB1EN1_M4BTIM3EN                   (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_APB1EN1_M7BTIM3LPEN                 (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_APB1EN1_M4BTIM3LPEN                 (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB1EN1_M7BTIM4EN                   (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_APB1EN1_M4BTIM4EN                   (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_APB1EN1_M7BTIM4LPEN                 (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_APB1EN1_M4BTIM4LPEN                 (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB1EN1_M7GTIMB1EN                  (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_APB1EN1_M4GTIMB1EN                  (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_APB1EN1_M7GTIMB1LPEN                (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_APB1EN1_M4GTIMB1LPEN                (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB1EN1_M7GTIMB2EN                  (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_APB1EN1_M4GTIMB2EN                  (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_APB1EN1_M7GTIMB2LPEN                (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_APB1EN1_M4GTIMB2LPEN                (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB1EN1_M7GTIMB3EN                  (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_APB1EN1_M4GTIMB3EN                  (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_APB1EN1_M7GTIMB3LPEN                (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_APB1EN1_M4GTIMB3LPEN                (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_APB1EN1_M7GTIMA4EN                  (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_APB1EN1_M4GTIMA4EN                  (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_APB1EN1_M7GTIMA4LPEN                (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_APB1EN1_M4GTIMA4LPEN                (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_APB1EN2 register  ********/
#define RCC_APB1EN2_M7GTIMA5EN                  (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_APB1EN2_M4GTIMA5EN                  (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_APB1EN2_M7GTIMA5LPEN                (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_APB1EN2_M4GTIMA5LPEN                (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB1EN2_M7GTIMA6EN                  (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_APB1EN2_M4GTIMA6EN                  (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_APB1EN2_M7GTIMA6LPEN                (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_APB1EN2_M4GTIMA6LPEN                (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB1EN2_M7GTIMA7EN                  (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_APB1EN2_M4GTIMA7EN                  (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_APB1EN2_M7GTIMA7LPEN                (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_APB1EN2_M4GTIMA7LPEN                (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB1EN2_M7SPI3EN                    (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_APB1EN2_M4SPI3EN                    (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_APB1EN2_M7SPI3LPEN                  (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_APB1EN2_M4SPI3LPEN                  (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB1EN2_M7DAC12EN                   (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_APB1EN2_M4DAC12EN                   (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_APB1EN2_M7DAC12LPEN                 (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_APB1EN2_M4DAC12LPEN                 (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB1EN2_M7WWDG2EN                   (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_APB1EN2_M4WWDG2EN                   (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_APB1EN2_M7WWDG2LPEN                 (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_APB1EN2_M4WWDG2LPEN                 (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */

/******** Bit definition for RCC_APB1EN3 register  ********/
#define RCC_APB1EN3_M7USART1EN                  (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_APB1EN3_M4USART1EN                  (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_APB1EN3_M7USART1LPEN                (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_APB1EN3_M4USART1LPEN                (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB1EN3_M7USART2EN                  (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_APB1EN3_M4USART2EN                  (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_APB1EN3_M7USART2LPEN                (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_APB1EN3_M4USART2LPEN                (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB1EN3_M7USART3EN                  (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_APB1EN3_M4USART3EN                  (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_APB1EN3_M7USART3LPEN                (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_APB1EN3_M4USART3LPEN                (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB1EN3_M7USART4EN                  (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_APB1EN3_M4USART4EN                  (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_APB1EN3_M7USART4LPEN                (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_APB1EN3_M4USART4LPEN                (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB1EN3_M7UART9EN                   (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_APB1EN3_M4UART9EN                   (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_APB1EN3_M7UART9LPEN                 (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_APB1EN3_M4UART9LPEN                 (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB1EN3_M7UART10EN                  (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_APB1EN3_M4UART10EN                  (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_APB1EN3_M7UART10LPEN                (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_APB1EN3_M4UART10LPEN                (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB1EN3_M7UART11EN                  (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_APB1EN3_M4UART11EN                  (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_APB1EN3_M7UART11LPEN                (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_APB1EN3_M4UART11LPEN                (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_APB1EN3_M7UART12EN                  (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_APB1EN3_M4UART12EN                  (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_APB1EN3_M7UART12LPEN                (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_APB1EN3_M4UART12LPEN                (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_APB1EN4 register  ********/
#define RCC_APB1EN4_M7I2S3EN                    (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_APB1EN4_M4I2S3EN                    (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_APB1EN4_M7I2S3LPEN                  (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_APB1EN4_M4I2S3LPEN                  (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB1EN4_M7I2S4EN                    (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_APB1EN4_M4I2S4EN                    (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_APB1EN4_M7I2S4LPEN                  (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_APB1EN4_M4I2S4LPEN                  (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB1EN4_M7I2C1EN                    (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_APB1EN4_M4I2C1EN                    (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_APB1EN4_M7I2C1LPEN                  (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_APB1EN4_M4I2C1LPEN                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB1EN4_M7I2C2EN                    (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_APB1EN4_M4I2C2EN                    (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_APB1EN4_M7I2C2LPEN                  (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_APB1EN4_M4I2C2LPEN                  (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB1EN4_M7I2C3EN                    (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_APB1EN4_M4I2C3EN                    (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_APB1EN4_M7I2C3LPEN                  (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_APB1EN4_M4I2C3LPEN                  (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */

/******** Bit definition for RCC_APB1EN5 register  ********/
#define RCC_APB1EN5_M7FDCAN1EN                  (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_APB1EN5_M4FDCAN1EN                  (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_APB1EN5_M7FDCAN1LPEN                (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_APB1EN5_M4FDCAN1LPEN                (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB1EN5_M7FDCAN2EN                  (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_APB1EN5_M4FDCAN2EN                  (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_APB1EN5_M7FDCAN2LPEN                (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_APB1EN5_M4FDCAN2LPEN                (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB1EN5_M7FDCAN5EN                  (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_APB1EN5_M4FDCAN5EN                  (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_APB1EN5_M7FDCAN5LPEN                (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_APB1EN5_M4FDCAN5LPEN                (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB1EN5_M7FDCAN6EN                  (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_APB1EN5_M4FDCAN6EN                  (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_APB1EN5_M7FDCAN6LPEN                (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_APB1EN5_M4FDCAN6LPEN                (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB1EN5_FDCAN1STPREQ                (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_APB1EN5_FDCAN1STPACK                (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_APB1EN5_FDCAN2STPREQ                (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_APB1EN5_FDCAN2STPACK                (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_APB1EN5_FDCAN5STPREQ                (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_APB1EN5_FDCAN5STPACK                (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_APB1EN5_FDCAN6STPREQ                (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_APB1EN5_FDCAN6STPACK                (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */

/******** Bit definition for RCC_APB1RST1 register  ********/
#define RCC_APB1RST1_BTIM1RST                   (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB1RST1_BTIM2RST                   (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB1RST1_BTIM3RST                   (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB1RST1_BTIM4RST                   (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB1RST1_GTIMB1RST                  (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB1RST1_GTIMB2RST                  (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB1RST1_GTIMB3RST                  (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_APB1RST1_GTIMA4RST                  (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_APB1RST2 register  ********/
#define RCC_APB1RST2_GTIMA5RST                  (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB1RST2_GTIMA6RST                  (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB1RST2_GTIMA7RST                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB1RST2_SPI3RST                    (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB1RST2_DAC12RST                   (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB1RST2_WWDG2RST                   (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */

/******** Bit definition for RCC_APB1RST3 register  ********/
#define RCC_APB1RST3_USART1RST                  (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB1RST3_USART2RST                  (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB1RST3_USART3RST                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB1RST3_USART4RST                  (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB1RST3_UART9RST                   (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB1RST3_UART10RST                  (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB1RST3_UART11RST                  (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_APB1RST3_UART12RST                  (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_APB1RST4 register  ********/
#define RCC_APB1RST4_I2S3RST                    (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB1RST4_I2S4RST                    (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB1RST4_I2C1RST                    (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB1RST4_I2C2RST                    (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB1RST4_I2C3RST                    (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */

/******** Bit definition for RCC_APB1RST5 register  ********/
#define RCC_APB1RST5_FDCAN1RST                  (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB1RST5_FDCAN2RST                  (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB1RST5_FDCAN5RST                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB1RST5_FDCAN6RST                  (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB1RST5_CAHIRST                    (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_APB1RST5_CAHDRST                    (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AHB2DIV1 register  ********/
#define RCC_AHB2DIV1_ETH1SYSDIV                 (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_AHB2DIV1_ETH1SYSDIV_0               (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_AHB2DIV1_ETH1SYSDIV_1               (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_AHB2DIV1_ETH1SYSDIV_2               (1 << 30)                   /*
                                                                             * Bit30*/
#define RCC_AHB2DIV1_ETH1SYSDIV_3               (1 << 31)                   /*
                                                                             * Bit31*/

#define RCC_AHB2DIV1_ETH1SYSDIV_DIV1            ((uint32_t)0x00000000U)
#define RCC_AHB2DIV1_ETH1SYSDIV_DIV2            ((uint32_t)0x10000000U)
#define RCC_AHB2DIV1_ETH1SYSDIV_DIV4            ((uint32_t)0x20000000U)
#define RCC_AHB2DIV1_ETH1SYSDIV_DIV8            ((uint32_t)0x40000000U)
#define RCC_AHB2DIV1_ETH1SYSDIV_DIV16           ((uint32_t)0x70000000U)
#define RCC_AHB2DIV1_ETH1SYSDIV_DIV32           ((uint32_t)0x80000000U)
#define RCC_AHB2DIV1_ETH1SYSDIV_DIV64           ((uint32_t)0x90000000U)
#define RCC_AHB2DIV1_ETH1SYSDIV_DIV128          ((uint32_t)0xA0000000U)
#define RCC_AHB2DIV1_ETH1SYSDIV_DIV256          ((uint32_t)0xB0000000U)
#define RCC_AHB2DIV1_ETH1SYSDIV_DIV512          ((uint32_t)0xC0000000U)

#define RCC_AHB2DIV1_USBHSEDIV                  ((uint32_t)0x0000000FU)     /*
                                                                             * Bit
                                                                             */
#define RCC_AHB2DIV1_USBHSEDIV_0                (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_AHB2DIV1_USBHSEDIV_1                (1 << 1)                    /*
                                                                             * Bit1*/
#define RCC_AHB2DIV1_USBHSEDIV_2                (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_AHB2DIV1_USBHSEDIV_3                (1 << 3)                    /*
                                                                             * Bit3*/

#define RCC_AHB2DIV1_USBHSEDIV_DIV1             ((uint32_t)0x00000000U)     /*
                                                                             * Bit
                                                                             */
#define RCC_AHB2DIV1_USBHSEDIV_DIV2             ((uint32_t)0x00000001U)
/******** Bit definition for RCC_AHB2SEL1 register  ********/
#define RCC_AHB2SEL1_ETH1PTPSEL                 (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_AHB2SEL1_ETH1PTPSEL_0               (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_AHB2SEL1_ETH1PTPSEL_1               (1 << 21)                   /*
                                                                             * Bit21*/

#define RCC_AHB2SEL1_ETH1PTPSEL_SYSBUSDIV       ((uint32_t)0x00000000U)
#define RCC_AHB2SEL1_ETH1PTPSEL_PERIPH          ((uint32_t)0x00100000U)
#define RCC_AHB2SEL1_ETH1PTPSEL_PLL2C           ((uint32_t)0x00200000U)
#define RCC_AHB2SEL1_ETH1PTPSEL_PLL3A           ((uint32_t)0x00300000U)

#define RCC_AHB2SEL1_ETH1GMIITXSEL              (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_AHB2SEL1_ETH1GMIITXSEL_0            (1 << 18)                   /*
                                                                             * Bit18*/
#define RCC_AHB2SEL1_ETH1GMIITXSEL_1            (1 << 19)                   /*
                                                                             * Bit19*/

#define RCC_AHB2SEL1_ETH1GMIITXSEL_PLL3A        ((uint32_t)0x00000000U)
#define RCC_AHB2SEL1_ETH1GMIITXSEL_PLL2B        ((uint32_t)0x00040000U)
#define RCC_AHB2SEL1_ETH1GMIITXSEL_IOM          ((uint32_t)0x00080000U)
#define RCC_AHB2SEL1_ETH1GMIITXSEL_PLL1C        ((uint32_t)0x000C0000U)
/******** Bit definition for RCC_AHB2EN1 register  ********/
#define RCC_AHB2EN1_M7USB1EN                    (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_AHB2EN1_M4USB1EN                    (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_AHB2EN1_M7USB1LPEN                  (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_AHB2EN1_M4USB1LPEN                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_AHB2EN1_M7ECCM2EN                   (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_AHB2EN1_M4ECCM2EN                   (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_AHB2EN1_M7ECCM2LPEN                 (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_AHB2EN1_M4ECCM2LPEN                 (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_AHB2EN1_M7CORDICEN                  (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_AHB2EN1_M4CORDICEN                  (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_AHB2EN1_M7CORDICLPEN                (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_AHB2EN1_M4CORDICLPEN                (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB2EN1_M7SDPUEN                    (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_AHB2EN1_M4SDPUEN                    (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_AHB2EN1_M7SDPULPEN                  (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_AHB2EN1_M4SDPULPEN                  (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_AHB2EN1_M7FMACEN                    (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_AHB2EN1_M4FMACEN                    (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_AHB2EN1_M7FMACLPEN                  (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_AHB2EN1_M4FMACLPEN                  (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AHB2EN2 register  ********/
#define RCC_AHB2EN2_M7DAC56EN                   (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_AHB2EN2_M4DAC56EN                   (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_AHB2EN2_M7DAC56LPEN                 (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_AHB2EN2_M4DAC56LPEN                 (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_AHB2EN2_M7DAC34EN                   (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_AHB2EN2_M4DAC34EN                   (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_AHB2EN2_M7DAC34LPEN                 (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_AHB2EN2_M4DAC34LPEN                 (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AHB2EN2_M7ETH1TXEN                  (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_AHB2EN2_M4ETH1TXEN                  (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_AHB2EN2_M7ETH1TXLPEN                (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_AHB2EN2_M4ETH1TXLPEN                (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB2EN2_M7ETH1RXEN                  (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_AHB2EN2_M4ETH1RXEN                  (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_AHB2EN2_M7ETH1RXLPEN                (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_AHB2EN2_M4ETH1RXLPEN                (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_AHB2EN2_M7ETH1MACEN                 (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_AHB2EN2_M4ETH1MACEN                 (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_AHB2EN2_M7ETH1MACLPEN               (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_AHB2EN2_M4ETH1MACLPEN               (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AHB2RST1 register  ********/
#define RCC_AHB2RST1_DAC56RST                   (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_AHB2RST1_DAC34RST                   (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_AHB2RST1_USB1WRAPRST                (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_AHB2RST1_USB1PORRST                 (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_AHB2RST1_USB1RST                    (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_AHB2RST1_ETH1RST                    (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AHB2RST1_ECCM2RST                   (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_AHB2RST1_CORDICRST                  (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB2RST1_SDPURST                    (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_AHB2RST1_FMACRST                    (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_APB2DIV1 register  ********/
#define RCC_APB2DIV1_APB2ATIMDIV_SHIFT          (28)                        /*
                                                                             * Bit28
                                                                             * ~
                                                                             * 31
                                                                             */
#define RCC_APB2DIV1_APB2ATIMDIV_MASK           (0x0f <<           \
  RCC_APB2DIV1_APB2ATIMDIV_SHIFT)                                           /*
                                                                             * Bit28
                                                                             */
#define RCC_APB2DIV1_APB2ATIMDIV_DIV1           ((uint32_t)0x00000000U)
#define RCC_APB2DIV1_APB2ATIMDIV_DIV2           ((uint32_t)0x40000000U)
#define RCC_APB2DIV1_APB2ATIMDIV_DIV4           ((uint32_t)0x50000000U)
#define RCC_APB2DIV1_APB2ATIMDIV_DIV8           ((uint32_t)0x60000000U)
#define RCC_APB2DIV1_APB2ATIMDIV_DIV16          ((uint32_t)0x70000000U)

#define RCC_APB2DIV1_APB2GTIMDIV_SHIFT          (24)                    /*
                                                                         * Bit24
                                                                         * ~ 26
                                                                         */
#define RCC_APB2DIV1_APB2GTIMDIV_MASK           (0x07 <<      \
  RCC_APB2DIV1_APB2GTIMDIV_SHIFT)                                       /*
                                                                         * Bit24
                                                                         * ~ 26
                                                                         */
#define RCC_APB2DIV1_APB2GTIMDIV_DIV1           ((uint32_t)0x00000000U)
#define RCC_APB2DIV1_APB2GTIMDIV_DIV2           ((uint32_t)0x04000000U)
#define RCC_APB2DIV1_APB2GTIMDIV_DIV4           ((uint32_t)0x05000000U)
#define RCC_APB2DIV1_APB2GTIMDIV_DIV8           ((uint32_t)0x06000000U)
#define RCC_APB2DIV1_APB2GTIMDIV_DIV16          ((uint32_t)0x07000000U)

#define RCC_APB2DIV1_APB2I2SDIV                 (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_APB2DIV1_APB2I2SDIV_0               (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_APB2DIV1_APB2I2SDIV_1               (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_APB2DIV1_APB2I2SDIV_2               (1 << 18)                   /*
                                                                             * Bit18*/

#define RCC_APB2DIV1_APB2DSMUDIV                (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_APB2DIV1_APB2DSMUDIV_0              (1 << 12)                   /*
                                                                             * Bit12*/
#define RCC_APB2DIV1_APB2DSMUDIV_1              (1 << 13)                   /*
                                                                             * Bit13*/
#define RCC_APB2DIV1_APB2DSMUDIV_2              (1 << 14)                   /*
                                                                             * Bit14*/

#define RCC_APB2DIV1_APB2DSMUDIV_DIV1           ((uint32_t)0x00000000U)
#define RCC_APB2DIV1_APB2DSMUDIV_DIV2           ((uint32_t)0x00004000U)
#define RCC_APB2DIV1_APB2DSMUDIV_DIV4           ((uint32_t)0x00005000U)
#define RCC_APB2DIV1_APB2DSMUDIV_DIV8           ((uint32_t)0x00006000U)
#define RCC_APB2DIV1_APB2DSMUDIV_DIV16          ((uint32_t)0x00007000U)

#define RCC_APB2DIV1_APB2I2CDIV                 (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_APB2DIV1_APB2I2CDIV_0               (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_APB2DIV1_APB2I2CDIV_1               (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_APB2DIV1_APB2I2CDIV_2               (1 << 10)                   /*
                                                                             * Bit10*/

#define RCC_APB2DIV1_APB2FDCANDIV               (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_APB2DIV1_APB2FDCANDIV_0             (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_APB2DIV1_APB2FDCANDIV_1             (1 << 5)                    /*
                                                                             * Bit5*/
#define RCC_APB2DIV1_APB2FDCANDIV_2             (1 << 6)                    /*
                                                                             * Bit6*/

/******** Bit definition for RCC_APB2SEL1 register  ********/
#define RCC_APB2SEL1_DSMUKERSEL                 (1 << 20)                      /*
                                                                                * Bit20
                                                                                */

#define RCC_APB2SEL1_DSMUKERSEL_APB2            ((uint32_t)0x00000000U)
#define RCC_APB2SEL1_DSMUKERSEL_SYSBUSDIV       ((uint32_t)0x00100000U)

#define RCC_APB2SEL1_DSMUKERASEL                (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_APB2SEL1_DSMUKERASEL_0              (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_APB2SEL1_DSMUKERASEL_1              (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_APB2SEL1_DSMUKERASEL_2              (1 << 18)                   /*
                                                                             * Bit18*/

#define RCC_APB2SEL1_DSMUKERASEL_APB2           ((uint32_t)0x00000000U)
#define RCC_APB2SEL1_DSMUKERASEL_PLL1B          ((uint32_t)0x00010000U)
#define RCC_APB2SEL1_DSMUKERASEL_PLL2B          ((uint32_t)0x00020000U)
#define RCC_APB2SEL1_DSMUKERASEL_PLL3A          ((uint32_t)0x00030000U)
#define RCC_APB2SEL1_DSMUKERASEL_CKIN           ((uint32_t)0x00040000U)
#define RCC_APB2SEL1_DSMUKERASEL_PERIPH         ((uint32_t)0x00050000U)

#define RCC_APB2SEL1_I2C4KERSEL                 (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_APB2SEL1_I2C4KERSEL_0               (1 << 12)                   /*
                                                                             * Bit12*/
#define RCC_APB2SEL1_I2C4KERSEL_1               (1 << 13)                   /*
                                                                             * Bit13*/
#define RCC_APB2SEL1_I2C4KERSEL_2               (1 << 14)                   /*
                                                                             * Bit14*/
#define RCC_APB2SEL1_I2C5KERSEL                 (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_APB2SEL1_I2C5KERSEL_0               (1 << 8)                    /*
                                                                             * Bit8*/
#define RCC_APB2SEL1_I2C5KERSEL_1               (1 << 9)                    /*
                                                                             * Bit9*/
#define RCC_APB2SEL1_I2C5KERSEL_2               (1 << 10)                   /*
                                                                             * Bit10*/
#define RCC_APB2SEL1_I2C6KERSEL                 (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_APB2SEL1_I2C6KERSEL_0               (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_APB2SEL1_I2C6KERSEL_1               (1 << 5)                    /*
                                                                             * Bit5*/
#define RCC_APB2SEL1_I2C6KERSEL_2               (1 << 6)                    /*
                                                                             * Bit6*/

#define RCC_APB2SEL1_I2S2KERSEL                 (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_APB2SEL1_I2S2KERSEL_0               (1 << 2)                    /*
                                                                             * Bit2*/
#define RCC_APB2SEL1_I2S2KERSEL_1               (1 << 3)                    /*
                                                                             * Bit3*/

#define RCC_APB2SEL1_I2S1KERSEL                 ((uint32_t)0x00000003U)     /*
                                                                             * Bit
                                                                             */
#define RCC_APB2SEL1_I2S1KERSEL_0               (1 << 0)                    /*
                                                                             * Bit0*/
#define RCC_APB2SEL1_I2S1KERSEL_1               (1 << 1)                    /*
                                                                             * Bit1*/

#define RCC_APB2SEL1_I2S1KERSEL_SYSBUSDIV       ((uint32_t)0x00000000U)
#define RCC_APB2SEL1_I2S1KERSEL_PLL3B           ((uint32_t)0x00000001U)
#define RCC_APB2SEL1_I2S1KERSEL_HSI             ((uint32_t)0x00000002U)
#define RCC_APB2SEL1_I2S1KERSEL_CLKIN           ((uint32_t)0x00000003U)
/******** Bit definition for RCC_APB2SEL2 register  ********/
#define RCC_APB2SEL2_FDCAN3KERSEL               (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_APB2SEL2_FDCAN3KERSEL_0             (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_APB2SEL2_FDCAN3KERSEL_1             (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_APB2SEL2_FDCAN3KERSEL_2             (1 << 30)                   /*
                                                                             * Bit30*/
#define RCC_APB2SEL2_FDCAN4KERSEL               (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_APB2SEL2_FDCAN4KERSEL_0             (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_APB2SEL2_FDCAN4KERSEL_1             (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_APB2SEL2_FDCAN4KERSEL_2             (1 << 22)                   /*
                                                                             * Bit22*/
#define RCC_APB2SEL2_FDCAN7KERSEL               (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_APB2SEL2_FDCAN7KERSEL_0             (1 << 12)                   /*
                                                                             * Bit12*/
#define RCC_APB2SEL2_FDCAN7KERSEL_1             (1 << 13)                   /*
                                                                             * Bit13*/
#define RCC_APB2SEL2_FDCAN7KERSEL_2             (1 << 14)                   /*
                                                                             * Bit14*/
#define RCC_APB2SEL2_FDCAN8KERSEL               (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_APB2SEL2_FDCAN8KERSEL_0             (1 << 4)                    /*
                                                                             * Bit4*/
#define RCC_APB2SEL2_FDCAN8KERSEL_1             (1 << 5)                    /*
                                                                             * Bit5*/
#define RCC_APB2SEL2_FDCAN8KERSEL_2             (1 << 6)                    /*
                                                                             * Bit6*/

/******** Bit definition for RCC_APB2EN1 register  ********/
#define RCC_APB2EN1_M7ATIM1EN                   (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_APB2EN1_M4ATIM1EN                   (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_APB2EN1_M7ATIM1LPEN                 (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_APB2EN1_M4ATIM1LPEN                 (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB2EN1_M7ATIM2EN                   (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_APB2EN1_M4ATIM2EN                   (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_APB2EN1_M7ATIM2LPEN                 (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_APB2EN1_M4ATIM2LPEN                 (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB2EN1_M7GTIMA1EN                  (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_APB2EN1_M4GTIMA1EN                  (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_APB2EN1_M7GTIMA1LPEN                (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_APB2EN1_M4GTIMA1LPEN                (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB2EN1_M7GTIMA2EN                  (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_APB2EN1_M4GTIMA2EN                  (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_APB2EN1_M7GTIMA2LPEN                (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_APB2EN1_M4GTIMA2LPEN                (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB2EN1_M7GTIMA3EN                  (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_APB2EN1_M4GTIMA3EN                  (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_APB2EN1_M7GTIMA3LPEN                (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_APB2EN1_M4GTIMA3LPEN                (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB2EN1_M7SHRTIM1EN                 (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_APB2EN1_M4SHRTIM1EN                 (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_APB2EN1_M7SHRTIM1LPEN               (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_APB2EN1_M4SHRTIM1LPEN               (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB2EN1_M7SHRTIM2EN                 (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_APB2EN1_M4SHRTIM2EN                 (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_APB2EN1_M7SHRTIM2LPEN               (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_APB2EN1_M4SHRTIM2LPEN               (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */

/******** Bit definition for RCC_APB2EN2 register  ********/
#define RCC_APB2EN2_M7I2S1EN                    (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_APB2EN2_M4I2S1EN                    (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_APB2EN2_M7I2S1LPEN                  (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_APB2EN2_M4I2S1LPEN                  (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB2EN2_M7I2S2EN                    (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_APB2EN2_M4I2S2EN                    (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_APB2EN2_M7I2S2LPEN                  (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_APB2EN2_M4I2S2LPEN                  (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB2EN2_M7SPI1EN                    (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_APB2EN2_M4SPI1EN                    (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_APB2EN2_M7SPI1LPEN                  (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_APB2EN2_M4SPI1LPEN                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB2EN2_M7SPI2EN                    (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_APB2EN2_M4SPI2EN                    (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_APB2EN2_M7SPI2LPEN                  (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_APB2EN2_M4SPI2LPEN                  (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB2EN2_M7DSMUEN                    (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_APB2EN2_M4DSMUEN                    (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_APB2EN2_M7DSMULPEN                  (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_APB2EN2_M4DSMULPEN                  (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB2EN2_M7I2C4EN                    (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_APB2EN2_M4I2C4EN                    (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_APB2EN2_M7I2C4LPEN                  (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_APB2EN2_M4I2C4LPEN                  (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB2EN2_M7I2C5EN                    (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_APB2EN2_M4I2C5EN                    (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_APB2EN2_M7I2C5LPEN                  (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_APB2EN2_M4I2C5LPEN                  (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_APB2EN2_M7I2C6EN                    (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_APB2EN2_M4I2C6EN                    (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_APB2EN2_M7I2C6LPEN                  (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_APB2EN2_M4I2C6LPEN                  (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_APB2EN3 register  ********/
#define RCC_APB2EN3_M7USART5EN                  (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_APB2EN3_M4USART5EN                  (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_APB2EN3_M7USART5LPEN                (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_APB2EN3_M4USART5LPEN                (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB2EN3_M7USART6EN                  (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_APB2EN3_M4USART6EN                  (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_APB2EN3_M7USART6LPEN                (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_APB2EN3_M4USART6LPEN                (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB2EN3_M7USART7EN                  (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_APB2EN3_M4USART7EN                  (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_APB2EN3_M7USART7LPEN                (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_APB2EN3_M4USART7LPEN                (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB2EN3_M7USART8EN                  (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_APB2EN3_M4USART8EN                  (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_APB2EN3_M7USART8LPEN                (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_APB2EN3_M4USART8LPEN                (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB2EN3_M7UART13EN                  (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_APB2EN3_M4UART13EN                  (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_APB2EN3_M7UART13LPEN                (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_APB2EN3_M4UART13LPEN                (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB2EN3_M7UART14EN                  (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_APB2EN3_M4UART14EN                  (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_APB2EN3_M7UART14LPEN                (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_APB2EN3_M4UART14LPEN                (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB2EN3_M7UART15EN                  (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_APB2EN3_M4UART15EN                  (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_APB2EN3_M7UART15LPEN                (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_APB2EN3_M4UART15LPEN                (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */

/******** Bit definition for RCC_APB2EN4 register  ********/
#define RCC_APB2EN4_M7FDCAN3EN                  (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_APB2EN4_M4FDCAN3EN                  (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_APB2EN4_M7FDCAN3LPEN                (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_APB2EN4_M4FDCAN3LPEN                (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB2EN4_M7FDCAN4EN                  (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_APB2EN4_M4FDCAN4EN                  (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_APB2EN4_M7FDCAN4LPEN                (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_APB2EN4_M4FDCAN4LPEN                (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB2EN4_M7FDCAN7EN                  (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_APB2EN4_M4FDCAN7EN                  (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_APB2EN4_M7FDCAN7LPEN                (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_APB2EN4_M4FDCAN7LPEN                (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB2EN4_M7FDCAN8EN                  (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_APB2EN4_M4FDCAN8EN                  (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_APB2EN4_M7FDCAN8LPEN                (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_APB2EN4_M4FDCAN8LPEN                (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB2EN4_FDCAN3STPREQ                (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_APB2EN4_FDCAN3STPACK                (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_APB2EN4_FDCAN4STPREQ                (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_APB2EN4_FDCAN4STPACK                (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_APB2EN4_FDCAN7STPREQ                (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_APB2EN4_FDCAN7STPACK                (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_APB2EN4_FDCAN8STPREQ                (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_APB2EN4_FDCAN8STPACK                (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */

/******** Bit definition for RCC_APB2RST1 register  ********/
#define RCC_APB2RST1_ATIM1RST                   (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB2RST1_ATIM2RST                   (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB2RST1_GTIMA1RST                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB2RST1_GTIMA2RST                  (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB2RST1_GTIMA3RST                  (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB2RST1_SHRTIM1RST                 (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB2RST1_SHRTIM2RST                 (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */

/******** Bit definition for RCC_APB2RST2 register  ********/
#define RCC_APB2RST2_I2S1RST                    (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB2RST2_I2S2RST                    (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB2RST2_SPI1RST                    (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB2RST2_SPI2RST                    (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB2RST2_DSMURST                    (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB2RST2_I2C4RST                    (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB2RST2_I2C5RST                    (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_APB2RST2_I2C6RST                    (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_APB2RST3 register  ********/
#define RCC_APB2RST3_USART5RST                  (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB2RST3_USART6RST                  (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB2RST3_USART7RST                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB2RST3_USART8RST                  (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB2RST3_UART13RST                  (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB2RST3_UART14RST                  (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB2RST3_UART15RST                  (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */

/******** Bit definition for RCC_APB2RST4 register  ********/
#define RCC_APB2RST4_FDCAN3RST                  (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB2RST4_FDCAN4RST                  (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB2RST4_FDCAN7RST                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB2RST4_FDCAN8RST                  (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */

/******** Bit definition for RCC_AHB5EN1 register  ********/
#define RCC_AHB5EN1_M7GPIOAEN                   (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_AHB5EN1_M4GPIOAEN                   (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_AHB5EN1_M7GPIOALPEN                 (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_AHB5EN1_M4GPIOALPEN                 (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_AHB5EN1_M7GPIOBEN                   (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_AHB5EN1_M4GPIOBEN                   (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_AHB5EN1_M7GPIOBLPEN                 (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_AHB5EN1_M4GPIOBLPEN                 (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_AHB5EN1_M7GPIOCEN                   (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_AHB5EN1_M4GPIOCEN                   (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_AHB5EN1_M7GPIOCLPEN                 (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_AHB5EN1_M4GPIOCLPEN                 (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_AHB5EN1_M7GPIODEN                   (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_AHB5EN1_M4GPIODEN                   (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_AHB5EN1_M7GPIODLPEN                 (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_AHB5EN1_M4GPIODLPEN                 (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AHB5EN1_M7GPIOEEN                   (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_AHB5EN1_M4GPIOEEN                   (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_AHB5EN1_M7GPIOELPEN                 (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_AHB5EN1_M4GPIOELPEN                 (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_AHB5EN1_M7GPIOFEN                   (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_AHB5EN1_M4GPIOFEN                   (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_AHB5EN1_M7GPIOFLPEN                 (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_AHB5EN1_M4GPIOFLPEN                 (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB5EN1_M7GPIOGEN                   (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_AHB5EN1_M4GPIOGEN                   (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_AHB5EN1_M7GPIOGLPEN                 (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_AHB5EN1_M4GPIOGLPEN                 (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_AHB5EN1_M7GPIOHEN                   (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_AHB5EN1_M4GPIOHEN                   (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_AHB5EN1_M7GPIOHLPEN                 (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_AHB5EN1_M4GPIOHLPEN                 (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AHB5EN2 register  ********/
#define RCC_AHB5EN2_M7GPIOIEN                   (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_AHB5EN2_M4GPIOIEN                   (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_AHB5EN2_M7GPIOILPEN                 (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_AHB5EN2_M4GPIOILPEN                 (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_AHB5EN2_M7GPIOJEN                   (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_AHB5EN2_M4GPIOJEN                   (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_AHB5EN2_M7GPIOJLPEN                 (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_AHB5EN2_M4GPIOJLPEN                 (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_AHB5EN2_M7GPIOKEN                   (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_AHB5EN2_M4GPIOKEN                   (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_AHB5EN2_M7GPIOKLPEN                 (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_AHB5EN2_M4GPIOKLPEN                 (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_AHB5EN2_M7ECCM3EN                   (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_AHB5EN2_M4ECCM3EN                   (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_AHB5EN2_M7ECCM3LPEN                 (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_AHB5EN2_M4ECCM3LPEN                 (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AHB5EN2_PWREN_SHIFT                 (15)
#define RCC_AHB5EN2_PWREN_MASK                  (1 << RCC_AHB5EN2_PWREN_SHIFT)  /*
                                                                                 * Bit15
                                                                                 */
#define RCC_AHB5EN2_PWREN_DISABLE               (0)
#define RCC_AHB5EN2_PWREN_ENABLE                RCC_AHB5EN2_PWREN_MASK
#define RCC_AHB5EN2_PWRLPEN                     (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_AHB5EN2_M7CRCEN                     (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_AHB5EN2_M4CRCEN                     (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_AHB5EN2_M7CRCLPEN                   (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_AHB5EN2_M4CRCLPEN                   (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB5EN2_M7SEMA4EN                   (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_AHB5EN2_M4SEMA4EN                   (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_AHB5EN2_M7SEMA4LPEN                 (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_AHB5EN2_M4SEMA4LPEN                 (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_AHB5EN2_M7AFIOEN                    (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_AHB5EN2_M4AFIOEN                    (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_AHB5EN2_M7AFIOLPEN                  (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_AHB5EN2_M4AFIOLPEN                  (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AHB5RST1 register  ********/
#define RCC_AHB5RST1_GPIOARST                   (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_AHB5RST1_GPIOBRST                   (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_AHB5RST1_GPIOCRST                   (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_AHB5RST1_GPIODRST                   (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AHB5RST1_GPIOERST                   (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_AHB5RST1_GPIOFRST                   (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB5RST1_GPIOGRST                   (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_AHB5RST1_GPIOHRST                   (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AHB5RST2 register  ********/
#define RCC_AHB5RST2_GPIOIRST                   (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_AHB5RST2_GPIOJRST                   (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_AHB5RST2_GPIOKRST                   (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_AHB5RST2_ECCM3RST                   (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AHB5RST2_PWRRST                     (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_AHB5RST2_CRCRST                     (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AHB5RST2_SEMA4RST                   (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_AHB5RST2_AFIORST                    (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_APB5DIV1 register  ********/
#define RCC_APB5DIV1_APB5ATIMDIV_SHIFT          (28)                        /*
                                                                             * Bit28
                                                                             */
#define RCC_APB5DIV1_APB5ATIMDIV_MASK           (0x07 <<           \
  RCC_APB5DIV1_APB5ATIMDIV_SHIFT)                                           /*
                                                                             * Bit28
                                                                             */
#define RCC_APB5DIV1_APB5ATIMDIV_DIV1           ((uint32_t)0x00000000U)
#define RCC_APB5DIV1_APB5ATIMDIV_DIV2           ((uint32_t)0x40000000U)
#define RCC_APB5DIV1_APB5ATIMDIV_DIV4           ((uint32_t)0x50000000U)
#define RCC_APB5DIV1_APB5ATIMDIV_DIV8           ((uint32_t)0x60000000U)
#define RCC_APB5DIV1_APB5ATIMDIV_DIV16          ((uint32_t)0x70000000U)

#define RCC_APB5DIV1_APB5I2CDIV                 (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_APB5DIV1_APB5I2CDIV_0               (1 << 24)                   /*
                                                                             * Bit24*/
#define RCC_APB5DIV1_APB5I2CDIV_1               (1 << 25)                   /*
                                                                             * Bit25*/
#define RCC_APB5DIV1_APB5I2CDIV_2               (1 << 26)                   /*
                                                                             * Bit26*/

#define RCC_APB5DIV1_APB5EXTIDIV                (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_APB5DIV1_APB5EXTIDIV_0              (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_APB5DIV1_APB5EXTIDIV_1              (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_APB5DIV1_APB5EXTIDIV_2              (1 << 22)                   /*
                                                                             * Bit22*/

#define RCC_APB5DIV1_APB5EXTIDIV_DIV1           ((uint32_t)0x00000000U)
#define RCC_APB5DIV1_APB5EXTIDIV_DIV2           ((uint32_t)0x00400000U)
#define RCC_APB5DIV1_APB5EXTIDIV_DIV4           ((uint32_t)0x00500000U)
#define RCC_APB5DIV1_APB5EXTIDIV_DIV8           ((uint32_t)0x00600000U)
#define RCC_APB5DIV1_APB5EXTIDIV_DIV16          ((uint32_t)0x00700000U)
/******** Bit definition for RCC_APB5SEL1 register  ********/
#define RCC_APB5SEL1_I2C7KERSEL                 (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_APB5SEL1_I2C7KERSEL_0               (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_APB5SEL1_I2C7KERSEL_1               (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_APB5SEL1_I2C7KERSEL_2               (1 << 30)                   /*
                                                                             * Bit30*/
#define RCC_APB5SEL1_I2C8KERSEL                 (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_APB5SEL1_I2C8KERSEL_0               (1 << 24)                   /*
                                                                             * Bit24*/
#define RCC_APB5SEL1_I2C8KERSEL_1               (1 << 25)                   /*
                                                                             * Bit25*/
#define RCC_APB5SEL1_I2C8KERSEL_2               (1 << 26)                   /*
                                                                             * Bit26*/
#define RCC_APB5SEL1_I2C9KERSEL                 (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_APB5SEL1_I2C9KERSEL_0               (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_APB5SEL1_I2C9KERSEL_1               (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_APB5SEL1_I2C9KERSEL_2               (1 << 22)                   /*
                                                                             * Bit22*/
#define RCC_APB5SEL1_I2C10KERSEL                (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_APB5SEL1_I2C10KERSEL_0              (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_APB5SEL1_I2C10KERSEL_1              (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_APB5SEL1_I2C10KERSEL_2              (1 << 18)                   /*
                                                                             * Bit18*/

/******** Bit definition for RCC_APB5EN1 register  ********/
#define RCC_APB5EN1_M7ATIM3EN                   (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_APB5EN1_M4ATIM3EN                   (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_APB5EN1_M7ATIM3LPEN                 (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_APB5EN1_M4ATIM3LPEN                 (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB5EN1_M7ATIM4EN                   (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_APB5EN1_M4ATIM4EN                   (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_APB5EN1_M7ATIM4LPEN                 (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_APB5EN1_M4ATIM4LPEN                 (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB5EN1_M7AFECEN                    (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_APB5EN1_M4AFECEN                    (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_APB5EN1_M7AFECLPEN                  (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_APB5EN1_M4AFECLPEN                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB5EN1_M7SPI4EN                    (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_APB5EN1_M4SPI4EN                    (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_APB5EN1_M7SPI4LPEN                  (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_APB5EN1_M4SPI4LPEN                  (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB5EN1_M7SPI5EN                    (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_APB5EN1_M4SPI5EN                    (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_APB5EN1_M7SPI5LPEN                  (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_APB5EN1_M4SPI5LPEN                  (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB5EN1_M7SPI6EN                    (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_APB5EN1_M4SPI6EN                    (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_APB5EN1_M7SPI6LPEN                  (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_APB5EN1_M4SPI6LPEN                  (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_APB5EN1_M7SPI7EN                    (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_APB5EN1_M4SPI7EN                    (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_APB5EN1_M7SPI7LPEN                  (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_APB5EN1_M4SPI7LPEN                  (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_APB5EN2 register  ********/
#define RCC_APB5EN2_M7I2C7EN                    (1 << 31)                       /*
                                                                                 * Bit31
                                                                                 */
#define RCC_APB5EN2_M4I2C7EN                    (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_APB5EN2_M7I2C7LPEN                  (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_APB5EN2_M4I2C7LPEN                  (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB5EN2_M7I2C8EN                    (1 << 27)                       /*
                                                                                 * Bit27
                                                                                 */
#define RCC_APB5EN2_M4I2C8EN                    (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_APB5EN2_M7I2C8LPEN                  (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_APB5EN2_M4I2C8LPEN                  (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB5EN2_M7I2C9EN                    (1 << 23)                       /*
                                                                                 * Bit23
                                                                                 */
#define RCC_APB5EN2_M4I2C9EN                    (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_APB5EN2_M7I2C9LPEN                  (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_APB5EN2_M4I2C9LPEN                  (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB5EN2_M7I2C10EN                   (1 << 19)                       /*
                                                                                 * Bit19
                                                                                 */
#define RCC_APB5EN2_M4I2C10EN                   (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_APB5EN2_M7I2C10LPEN                 (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_APB5EN2_M4I2C10LPEN                 (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_APB5EN2_EXTIEN                      (1 << 15)                       /*
                                                                                 * Bit15
                                                                                 */
#define RCC_APB5EN2_EXTILPEN                    (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_APB5EN2_M7RTCPCLKEN                 (1 << 11)                       /*
                                                                                 * Bit11
                                                                                 */
#define RCC_APB5EN2_M4RTCPCLKEN                 (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_APB5EN2_M7RTCPCLKLPEN               (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_APB5EN2_M4RTCPCLKLPEN               (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB5EN2_IWDG1PCLKEN                 (1 << 7)                        /*
                                                                                 * Bit7
                                                                                 */
#define RCC_APB5EN2_IWDG1PCLKLPEN               (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_APB5EN2_IWDG2PCLKEN                 (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_APB5EN2_IWDG2PCLKLPEN               (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */

/******** Bit definition for RCC_APB5RST1 register  ********/
#define RCC_APB5RST1_ATIM3RST                   (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB5RST1_ATIM4RST                   (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB5RST1_AFECRST                    ((uint32_t)0x00100000U)
#define RCC_APB5RST1_SPI4RST                    (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_APB5RST1_SPI5RST                    (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_APB5RST1_SPI6RST                    (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_APB5RST1_SPI7RST                    (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_APB5RST2 register  ********/
#define RCC_APB5RST2_I2C7RST                    (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_APB5RST2_I2C8RST                    (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_APB5RST2_I2C9RST                    (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_APB5RST2_I2C10RST                   (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */

/******** Bit definition for RCC_AHB9DIV1 register  ********/
#define RCC_AHB9DIV1_ESCSYSDIV                  ((uint32_t)0x0000000FU) /* Bit
                                                                         */
#define RCC_AHB9DIV1_ESCSYSDIV_0                (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_AHB9DIV1_ESCSYSDIV_1                (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_AHB9DIV1_ESCSYSDIV_2                (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_AHB9DIV1_ESCSYSDIV_3                (1 << 3)                /*
                                                                         * Bit3*/

#define RCC_AHB9DIV1_ESCSYSDIV_DIV1             ((uint32_t)0x00000000U)
#define RCC_AHB9DIV1_ESCSYSDIV_DIV2             ((uint32_t)0x00000001U)
#define RCC_AHB9DIV1_ESCSYSDIV_DIV4             ((uint32_t)0x00000002U)
#define RCC_AHB9DIV1_ESCSYSDIV_DIV8             ((uint32_t)0x00000004U)
#define RCC_AHB9DIV1_ESCSYSDIV_DIV16            ((uint32_t)0x00000007U)
#define RCC_AHB9DIV1_ESCSYSDIV_DIV32            ((uint32_t)0x00000008U)
#define RCC_AHB9DIV1_ESCSYSDIV_DIV64            ((uint32_t)0x00000009U)
#define RCC_AHB9DIV1_ESCSYSDIV_DIV128           ((uint32_t)0x0000000AU)
#define RCC_AHB9DIV1_ESCSYSDIV_DIV256           ((uint32_t)0x0000000BU)
#define RCC_AHB9DIV1_ESCSYSDIV_DIV512           ((uint32_t)0x0000000CU)
/******** Bit definition for RCC_AHB9SEL1 register  ********/
#define RCC_AHB9SEL1_ESCKERSEL                  ((uint32_t)0x00000007U) /* Bit
                                                                         */
#define RCC_AHB9SEL1_ESCKERSEL_0                (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_AHB9SEL1_ESCKERSEL_1                (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_AHB9SEL1_ESCKERSEL_2                (1 << 2)                /*
                                                                         * Bit2*/

#define RCC_AHB9SEL1_ESCKERSEL_SYSBUSDIV        ((uint32_t)0x00000000U)
#define RCC_AHB9SEL1_ESCKERSEL_PLL2B            ((uint32_t)0x00000001U)
#define RCC_AHB9SEL1_ESCKERSEL_PLL3A            ((uint32_t)0x00000002U)
#define RCC_AHB9SEL1_ESCKERSEL_PLL3C            ((uint32_t)0x00000003U)
#define RCC_AHB9SEL1_ESCKERSEL_PLL1B            ((uint32_t)0x00000004U)
/******** Bit definition for RCC_AHB9EN1 register  ********/
#define RCC_AHB9EN1_M7ESCEN                     (1 << 3)                    /*
                                                                             * Bit3
                                                                             */
#define RCC_AHB9EN1_M4ESCEN                     (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_AHB9EN1_M7ESCLPEN                   (1 << 1)                    /*
                                                                             * Bit1
                                                                             */
#define RCC_AHB9EN1_M4ESCLPEN                   (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

/******** Bit definition for RCC_AHB9RST1 register  ********/
#define RCC_AHB9RST1_ESCRST                     (1 << 0)                     /*
                                                                              * Bit0
                                                                              */

/******** Bit definition for RCC_RDDIV1 register  ********/
#define RCC_RDDIV1_COMPDIV                      (1 << 28)               /*
                                                                         * Bit28
                                                                         */
#define RCC_RDDIV1_COMPDIV_0                    (1 << 28)               /*
                                                                         * Bit28*/
#define RCC_RDDIV1_COMPDIV_1                    (1 << 29)               /*
                                                                         * Bit29*/
#define RCC_RDDIV1_COMPDIV_2                    (1 << 30)               /*
                                                                         * Bit30*/

#define RCC_RDDIV1_COMPDIV_DIV1                 ((uint32_t)0x00000000U)
#define RCC_RDDIV1_COMPDIV_DIV2                 ((uint32_t)0x40000000U)
#define RCC_RDDIV1_COMPDIV_DIV4                 ((uint32_t)0x50000000U)
#define RCC_RDDIV1_COMPDIV_DIV8                 ((uint32_t)0x60000000U)
#define RCC_RDDIV1_COMPDIV_DIV16                ((uint32_t)0x70000000U)

#define RCC_RDDIV1_LPUARTDIV_SHIFT              (24)                /* Bit24
                                                                     */
#define RCC_RDDIV1_LPUARTDIV_MASK               (0x07 <<    \
  RCC_RDDIV1_LPUARTDIV_SHIFT)                                       /* Bit24
                                                                     */
#define RCC_RDDIV1_LPUARTDIV_DIV1               ((uint32_t)0x00000000U)
#define RCC_RDDIV1_LPUARTDIV_DIV2               ((uint32_t)0x04000000U)
#define RCC_RDDIV1_LPUARTDIV_DIV4               ((uint32_t)0x05000000U)
#define RCC_RDDIV1_LPUARTDIV_DIV8               ((uint32_t)0x06000000U)
#define RCC_RDDIV1_LPUARTDIV_DIV16              ((uint32_t)0x07000000U)
/******** Bit definition for RCC_RDSEL1 register  ********/
#define RCC_RDSEL1_LPTIM1SEL_SHIFT              (28)                    /*
                                                                         * Bit28
                                                                         * ~ 31
                                                                         */
#define RCC_RDSEL1_LPTIM1SEL_MASK               (0xf <<      \
  RCC_RDSEL1_LPTIM1SEL_SHIFT)                                           /*
                                                                         * Bit28
                                                                         * ~ 31
                                                                         */
#define RCC_RDSEL1_LPTIM1SEL_APB5               (0x0 <<      \
  RCC_RDSEL1_LPTIM1SEL_SHIFT)
#define RCC_RDSEL1_LPTIM1SEL_LSI                (0x1 <<      \
  RCC_RDSEL1_LPTIM1SEL_SHIFT)
#define RCC_RDSEL1_LPTIM1SEL_LSE                (0x2 <<      \
  RCC_RDSEL1_LPTIM1SEL_SHIFT)
#define RCC_RDSEL1_LPTIM1SEL_HSE                (0x3 <<      \
  RCC_RDSEL1_LPTIM1SEL_SHIFT)
#define RCC_RDSEL1_LPTIM1SEL_HSI                (0x4 <<      \
  RCC_RDSEL1_LPTIM1SEL_SHIFT)
#define RCC_RDSEL1_LPTIM1SEL_MSI                (0x5 <<      \
  RCC_RDSEL1_LPTIM1SEL_SHIFT)
#define RCC_RDSEL1_LPTIM1SEL_COMP1              (0x8 <<      \
  RCC_RDSEL1_LPTIM1SEL_SHIFT)
#define RCC_RDSEL1_LPTIM1SEL_COMP2              (0x9 <<      \
  RCC_RDSEL1_LPTIM1SEL_SHIFT)
#define RCC_RDSEL1_LPTIM1SEL_COMP3              (0xa <<      \
  RCC_RDSEL1_LPTIM1SEL_SHIFT)
#define RCC_RDSEL1_LPTIM1SEL_COMP4              (0xb <<      \
  RCC_RDSEL1_LPTIM1SEL_SHIFT)

#define RCC_RDSEL1_LPTIM2SEL_SHIFT              (24)                    /*
                                                                         * Bit24
                                                                         * ~ 27
                                                                         */
#define RCC_RDSEL1_LPTIM2SEL_MASK               (0xf <<      \
  RCC_RDSEL1_LPTIM2SEL_SHIFT)                                           /*
                                                                         * Bit24
                                                                         */
#define RCC_RDSEL1_LPTIM2SEL_APB5               (0x0 <<      \
  RCC_RDSEL1_LPTIM2SEL_SHIFT)
#define RCC_RDSEL1_LPTIM2SEL_LSI                (0x1 <<      \
  RCC_RDSEL1_LPTIM2SEL_SHIFT)
#define RCC_RDSEL1_LPTIM2SEL_LSE                (0x2 <<      \
  RCC_RDSEL1_LPTIM2SEL_SHIFT)
#define RCC_RDSEL1_LPTIM2SEL_HSE                (0x3 <<      \
  RCC_RDSEL1_LPTIM2SEL_SHIFT)
#define RCC_RDSEL1_LPTIM2SEL_HSI                (0x4 <<      \
  RCC_RDSEL1_LPTIM2SEL_SHIFT)
#define RCC_RDSEL1_LPTIM2SEL_MSI                (0x5 <<      \
  RCC_RDSEL1_LPTIM2SEL_SHIFT)
#define RCC_RDSEL1_LPTIM2SEL_COMP1              (0x8 <<      \
  RCC_RDSEL1_LPTIM2SEL_SHIFT)
#define RCC_RDSEL1_LPTIM2SEL_COMP2              (0x9 <<      \
  RCC_RDSEL1_LPTIM2SEL_SHIFT)
#define RCC_RDSEL1_LPTIM2SEL_COMP3              (0xa <<      \
  RCC_RDSEL1_LPTIM2SEL_SHIFT)
#define RCC_RDSEL1_LPTIM2SEL_COMP4              (0xb <<      \
  RCC_RDSEL1_LPTIM2SEL_SHIFT)

#define RCC_RDSEL1_LPTIM3SEL_SHIFT              (20)                    /*
                                                                         * Bit20
                                                                         * ~ 23
                                                                         */
#define RCC_RDSEL1_LPTIM3SEL_MASK               (0xf <<      \
  RCC_RDSEL1_LPTIM3SEL_SHIFT)                                           /*
                                                                         * Bit20
                                                                         */
#define RCC_RDSEL1_LPTIM3SEL_APB5               (0x0 <<      \
  RCC_RDSEL1_LPTIM3SEL_SHIFT)
#define RCC_RDSEL1_LPTIM3SEL_LSI                (0x1 <<      \
  RCC_RDSEL1_LPTIM3SEL_SHIFT)
#define RCC_RDSEL1_LPTIM3SEL_LSE                (0x2 <<      \
  RCC_RDSEL1_LPTIM3SEL_SHIFT)
#define RCC_RDSEL1_LPTIM3SEL_HSE                (0x3 <<      \
  RCC_RDSEL1_LPTIM3SEL_SHIFT)
#define RCC_RDSEL1_LPTIM3SEL_HSI                (0x4 <<      \
  RCC_RDSEL1_LPTIM3SEL_SHIFT)
#define RCC_RDSEL1_LPTIM3SEL_MSI                (0x5 <<      \
  RCC_RDSEL1_LPTIM3SEL_SHIFT)
#define RCC_RDSEL1_LPTIM3SEL_COMP1              (0x8 <<      \
  RCC_RDSEL1_LPTIM3SEL_SHIFT)
#define RCC_RDSEL1_LPTIM3SEL_COMP2              (0x9 <<      \
  RCC_RDSEL1_LPTIM3SEL_SHIFT)
#define RCC_RDSEL1_LPTIM3SEL_COMP3              (0xa <<      \
  RCC_RDSEL1_LPTIM3SEL_SHIFT)
#define RCC_RDSEL1_LPTIM3SEL_COMP4              (0xb <<      \
  RCC_RDSEL1_LPTIM3SEL_SHIFT)

#define RCC_RDSEL1_LPTIM4SEL_SHIFT              (16)                    /*
                                                                         * Bit16
                                                                         * ~ 19
                                                                         */
#define RCC_RDSEL1_LPTIM4SEL_MASK               (0xf <<      \
  RCC_RDSEL1_LPTIM4SEL_SHIFT)                                           /*
                                                                         * Bit16
                                                                         */
#define RCC_RDSEL1_LPTIM4SEL_APB5               (0x0 <<      \
  RCC_RDSEL1_LPTIM4SEL_SHIFT)
#define RCC_RDSEL1_LPTIM4SEL_LSI                (0x1 <<      \
  RCC_RDSEL1_LPTIM4SEL_SHIFT)
#define RCC_RDSEL1_LPTIM4SEL_LSE                (0x2 <<      \
  RCC_RDSEL1_LPTIM4SEL_SHIFT)
#define RCC_RDSEL1_LPTIM4SEL_HSE                (0x3 <<      \
  RCC_RDSEL1_LPTIM4SEL_SHIFT)
#define RCC_RDSEL1_LPTIM4SEL_HSI                (0x4 <<      \
  RCC_RDSEL1_LPTIM4SEL_SHIFT)
#define RCC_RDSEL1_LPTIM4SEL_MSI                (0x5 <<      \
  RCC_RDSEL1_LPTIM4SEL_SHIFT)
#define RCC_RDSEL1_LPTIM4SEL_COMP1              (0x8 <<      \
  RCC_RDSEL1_LPTIM4SEL_SHIFT)
#define RCC_RDSEL1_LPTIM4SEL_COMP2              (0x9 <<      \
  RCC_RDSEL1_LPTIM4SEL_SHIFT)
#define RCC_RDSEL1_LPTIM4SEL_COMP3              (0xa <<      \
  RCC_RDSEL1_LPTIM4SEL_SHIFT)
#define RCC_RDSEL1_LPTIM4SEL_COMP4              (0xb <<      \
  RCC_RDSEL1_LPTIM4SEL_SHIFT)

#define RCC_RDSEL1_LPTIM5SEL_SHIFT              (12)                    /*
                                                                         * Bit12
                                                                         */
#define RCC_RDSEL1_LPTIM5SEL_MASK               (0xf <<      \
  RCC_RDSEL1_LPTIM5SEL_SHIFT)                                           /*
                                                                         * Bit12
                                                                         */
#define RCC_RDSEL1_LPTIM5SEL_APB5               (0x0 <<      \
  RCC_RDSEL1_LPTIM5SEL_SHIFT)
#define RCC_RDSEL1_LPTIM5SEL_LSI                (0x1 <<      \
  RCC_RDSEL1_LPTIM5SEL_SHIFT)
#define RCC_RDSEL1_LPTIM5SEL_LSE                (0x2 <<      \
  RCC_RDSEL1_LPTIM5SEL_SHIFT)
#define RCC_RDSEL1_LPTIM5SEL_HSE                (0x3 <<      \
  RCC_RDSEL1_LPTIM5SEL_SHIFT)
#define RCC_RDSEL1_LPTIM5SEL_HSI                (0x4 <<      \
  RCC_RDSEL1_LPTIM5SEL_SHIFT)
#define RCC_RDSEL1_LPTIM5SEL_MSI                (0x5 <<      \
  RCC_RDSEL1_LPTIM5SEL_SHIFT)
#define RCC_RDSEL1_LPTIM5SEL_COMP1              (0x8 <<      \
  RCC_RDSEL1_LPTIM5SEL_SHIFT)
#define RCC_RDSEL1_LPTIM5SEL_COMP2              (0x9 <<      \
  RCC_RDSEL1_LPTIM5SEL_SHIFT)
#define RCC_RDSEL1_LPTIM5SEL_COMP3              (0xa <<      \
  RCC_RDSEL1_LPTIM5SEL_SHIFT)
#define RCC_RDSEL1_LPTIM5SEL_COMP4              (0xb <<      \
  RCC_RDSEL1_LPTIM5SEL_SHIFT)

#define RCC_RDSEL1_LPUART1SEL_SHIFT             (8)                 /* Bit8 */
#define RCC_RDSEL1_LPUART1SEL_MASK              (0x07 <<      \
  RCC_RDSEL1_LPUART1SEL_SHIFT)
#define RCC_RDSEL1_LPUART1SEL_SYSBUSDIV         (0x0 <<      \
  RCC_RDSEL1_LPUART1SEL_SHIFT)
#define RCC_RDSEL1_LPUART1SEL_HSI               (0x1 <<      \
  RCC_RDSEL1_LPUART1SEL_SHIFT)
#define RCC_RDSEL1_LPUART1SEL_LSE               (0x2 <<      \
  RCC_RDSEL1_LPUART1SEL_SHIFT)
#define RCC_RDSEL1_LPUART1SEL_HSE               (0x3 <<      \
  RCC_RDSEL1_LPUART1SEL_SHIFT)
#define RCC_RDSEL1_LPUART1SEL_MSI               (0x4 <<      \
  RCC_RDSEL1_LPUART1SEL_SHIFT)

#define RCC_RDSEL1_LPUART2SEL_SHIFT             (4)                 /* Bit4 */
#define RCC_RDSEL1_LPUART2SEL_MASK              (0x07 <<      \
  RCC_RDSEL1_LPUART2SEL_SHIFT)                                      /* Bit4 */
#define RCC_RDSEL1_LPUART2SEL_SYSBUSDIV         (0x00 <<      \
  RCC_RDSEL1_LPUART2SEL_SHIFT)
#define RCC_RDSEL1_LPUART2SEL_HSI               (0x01 <<      \
  RCC_RDSEL1_LPUART2SEL_SHIFT)
#define RCC_RDSEL1_LPUART2SEL_LSE               (0x02 <<      \
  RCC_RDSEL1_LPUART2SEL_SHIFT)
#define RCC_RDSEL1_LPUART2SEL_HSE               (0x03 <<      \
  RCC_RDSEL1_LPUART2SEL_SHIFT)
#define RCC_RDSEL1_LPUART2SEL_MSI               (0x04 <<      \
  RCC_RDSEL1_LPUART2SEL_SHIFT)

#define RCC_RDSEL1_COMPSEL                      (1 << 0)                 /*
                                                                          * Bit0
                                                                          */

/******** Bit definition for RCC_RDCTRL1 register  ********/
#define RCC_RDCTRL1_LPTIM2FLTEN                 (1 << 29)               /*
                                                                         * Bit29
                                                                         */
#define RCC_RDCTRL1_LPTIM2FLTSEL                (1 << 28)               /*
                                                                         * Bit28
                                                                         */
#define RCC_RDCTRL1_LPTIM2COMP4EN               (1 << 27)               /*
                                                                         * Bit27
                                                                         */
#define RCC_RDCTRL1_LPTIM2COMP3EN               (1 << 26)               /*
                                                                         * Bit26
                                                                         */
#define RCC_RDCTRL1_LPTIM2COMP2EN               (1 << 25)               /*
                                                                         * Bit25
                                                                         */
#define RCC_RDCTRL1_LPTIM2COMP1EN               (1 << 24)               /*
                                                                         * Bit24
                                                                         */
#define RCC_RDCTRL1_LPTIM2FLTDFC                (1 << 16)               /*
                                                                         * Bit16
                                                                         */
#define RCC_RDCTRL1_LPTIM2FLTDFC_0              (1 << 16)               /*
                                                                         * Bit16*/
#define RCC_RDCTRL1_LPTIM2FLTDFC_1              (1 << 17)               /*
                                                                         * Bit17*/
#define RCC_RDCTRL1_LPTIM2FLTDFC_2              (1 << 18)               /*
                                                                         * Bit18*/
#define RCC_RDCTRL1_LPTIM2FLTDFC_3              (1 << 19)               /*
                                                                         * Bit19*/
#define RCC_RDCTRL1_LPTIM2FLTDFC_4              (1 << 20)               /*
                                                                         * Bit20*/
#define RCC_RDCTRL1_LPTIM1FLTEN                 (1 << 13)               /*
                                                                         * Bit13
                                                                         */
#define RCC_RDCTRL1_LPTIM1FLTSEL                (1 << 12)               /*
                                                                         * Bit12
                                                                         */
#define RCC_RDCTRL1_LPTIM1COMP4EN               (1 << 11)               /*
                                                                         * Bit11
                                                                         */
#define RCC_RDCTRL1_LPTIM1COMP3EN               (1 << 10)               /*
                                                                         * Bit10
                                                                         */
#define RCC_RDCTRL1_LPTIM1COMP2EN               (1 << 9)                /*
                                                                         * Bit9
                                                                         */
#define RCC_RDCTRL1_LPTIM1COMP1EN               (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_RDCTRL1_LPTIM1FLTDFC                ((uint32_t)0x0000001FU) /* Bit
                                                                         */
#define RCC_RDCTRL1_LPTIM1FLTDFC_0              (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_RDCTRL1_LPTIM1FLTDFC_1              (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_RDCTRL1_LPTIM1FLTDFC_2              (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_RDCTRL1_LPTIM1FLTDFC_3              (1 << 3)                /*
                                                                         * Bit3*/
#define RCC_RDCTRL1_LPTIM1FLTDFC_4              (1 << 4)                /*
                                                                         * Bit4*/

/******** Bit definition for RCC_RDCTRL2 register  ********/
#define RCC_RDCTRL2_LPTIM4FLTEN                 (1 << 29)               /*
                                                                         * Bit29
                                                                         */
#define RCC_RDCTRL2_LPTIM4FLTSEL                (1 << 28)               /*
                                                                         * Bit28
                                                                         */
#define RCC_RDCTRL2_LPTIM4COMP4EN               (1 << 27)               /*
                                                                         * Bit27
                                                                         */
#define RCC_RDCTRL2_LPTIM4COMP3EN               (1 << 26)               /*
                                                                         * Bit26
                                                                         */
#define RCC_RDCTRL2_LPTIM4COMP2EN               (1 << 25)               /*
                                                                         * Bit25
                                                                         */
#define RCC_RDCTRL2_LPTIM4COMP1EN               (1 << 24)               /*
                                                                         * Bit24
                                                                         */
#define RCC_RDCTRL2_LPTIM4FLTDFC                (1 << 16)               /*
                                                                         * Bit16
                                                                         */
#define RCC_RDCTRL2_LPTIM4FLTDFC_0              (1 << 16)               /*
                                                                         * Bit16*/
#define RCC_RDCTRL2_LPTIM4FLTDFC_1              (1 << 17)               /*
                                                                         * Bit17*/
#define RCC_RDCTRL2_LPTIM4FLTDFC_2              (1 << 18)               /*
                                                                         * Bit18*/
#define RCC_RDCTRL2_LPTIM4FLTDFC_3              (1 << 19)               /*
                                                                         * Bit19*/
#define RCC_RDCTRL2_LPTIM4FLTDFC_4              (1 << 20)               /*
                                                                         * Bit20*/
#define RCC_RDCTRL2_LPTIM3FLTEN                 (1 << 13)               /*
                                                                         * Bit13
                                                                         */
#define RCC_RDCTRL2_LPTIM3FLTSEL                (1 << 12)               /*
                                                                         * Bit12
                                                                         */
#define RCC_RDCTRL2_LPTIM3COMP4EN               (1 << 11)               /*
                                                                         * Bit11
                                                                         */
#define RCC_RDCTRL2_LPTIM3COMP3EN               (1 << 10)               /*
                                                                         * Bit10
                                                                         */
#define RCC_RDCTRL2_LPTIM3COMP2EN               (1 << 9)                /*
                                                                         * Bit9
                                                                         */
#define RCC_RDCTRL2_LPTIM3COMP1EN               (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_RDCTRL2_LPTIM3FLTDFC                ((uint32_t)0x0000001FU) /* Bit
                                                                         */
#define RCC_RDCTRL2_LPTIM3FLTDFC_0              (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_RDCTRL2_LPTIM3FLTDFC_1              (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_RDCTRL2_LPTIM3FLTDFC_2              (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_RDCTRL2_LPTIM3FLTDFC_3              (1 << 3)                /*
                                                                         * Bit3*/
#define RCC_RDCTRL2_LPTIM3FLTDFC_4              (1 << 4)                /*
                                                                         * Bit4*/

/******** Bit definition for RCC_RDCTRL3 register  ********/
#define RCC_RDCTRL3_LPTIM5FLTEN                 (1 << 13)               /*
                                                                         * Bit13
                                                                         */
#define RCC_RDCTRL3_LPTIM5FLTSEL                (1 << 12)               /*
                                                                         * Bit12
                                                                         */
#define RCC_RDCTRL3_LPTIM5COMP4EN               (1 << 11)               /*
                                                                         * Bit11
                                                                         */
#define RCC_RDCTRL3_LPTIM5COMP3EN               (1 << 10)               /*
                                                                         * Bit10
                                                                         */
#define RCC_RDCTRL3_LPTIM5COMP2EN               (1 << 9)                /*
                                                                         * Bit9
                                                                         */
#define RCC_RDCTRL3_LPTIM5COMP1EN               (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_RDCTRL3_LPTIM5FLTDFC                ((uint32_t)0x0000001FU) /* Bit
                                                                         */
#define RCC_RDCTRL3_LPTIM5FLTDFC_0              (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_RDCTRL3_LPTIM5FLTDFC_1              (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_RDCTRL3_LPTIM5FLTDFC_2              (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_RDCTRL3_LPTIM5FLTDFC_3              (1 << 3)                /*
                                                                         * Bit3*/
#define RCC_RDCTRL3_LPTIM5FLTDFC_4              (1 << 4)                /*
                                                                         * Bit4*/

/******** Bit definition for RCC_RDEN1 register  ********/
#define RCC_RDEN1_M7LPTIM1EN                    (1 << 31)                   /*
                                                                             * Bit31
                                                                             */
#define RCC_RDEN1_M4LPTIM1EN                    (1 << 30)                   /*
                                                                             * Bit30
                                                                             */
#define RCC_RDEN1_M7LPTIM1LPEN                  (1 << 29)                   /*
                                                                             * Bit29
                                                                             */
#define RCC_RDEN1_M4LPTIM1LPEN                  (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_RDEN1_M7LPTIM2EN                    (1 << 27)                   /*
                                                                             * Bit27
                                                                             */
#define RCC_RDEN1_M4LPTIM2EN                    (1 << 26)                   /*
                                                                             * Bit26
                                                                             */
#define RCC_RDEN1_M7LPTIM2LPEN                  (1 << 25)                   /*
                                                                             * Bit25
                                                                             */
#define RCC_RDEN1_M4LPTIM2LPEN                  (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_RDEN1_M7LPTIM3EN                    (1 << 23)                   /*
                                                                             * Bit23
                                                                             */
#define RCC_RDEN1_M4LPTIM3EN                    (1 << 22)                   /*
                                                                             * Bit22
                                                                             */
#define RCC_RDEN1_M7LPTIM3LPEN                  (1 << 21)                   /*
                                                                             * Bit21
                                                                             */
#define RCC_RDEN1_M4LPTIM3LPEN                  (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_RDEN1_M7LPTIM4EN                    (1 << 19)                   /*
                                                                             * Bit19
                                                                             */
#define RCC_RDEN1_M4LPTIM4EN                    (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_RDEN1_M7LPTIM4LPEN                  (1 << 17)                   /*
                                                                             * Bit17
                                                                             */
#define RCC_RDEN1_M4LPTIM4LPEN                  (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_RDEN1_M7LPTIM5EN                    (1 << 15)                   /*
                                                                             * Bit15
                                                                             */
#define RCC_RDEN1_M4LPTIM5EN                    (1 << 14)                   /*
                                                                             * Bit14
                                                                             */
#define RCC_RDEN1_M7LPTIM5LPEN                  (1 << 13)                   /*
                                                                             * Bit13
                                                                             */
#define RCC_RDEN1_M4LPTIM5LPEN                  (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_RDEN1_M7LPUART1EN                   (1 << 11)                   /*
                                                                             * Bit11
                                                                             */
#define RCC_RDEN1_M4LPUART1EN                   (1 << 10)                   /*
                                                                             * Bit10
                                                                             */
#define RCC_RDEN1_M7LPUART1LPEN                 (1 << 9)                    /*
                                                                             * Bit9
                                                                             */
#define RCC_RDEN1_M4LPUART1LPEN                 (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_RDEN1_M7LPUART2EN                   (1 << 7)                    /*
                                                                             * Bit7
                                                                             */
#define RCC_RDEN1_M4LPUART2EN                   (1 << 6)                    /*
                                                                             * Bit6
                                                                             */
#define RCC_RDEN1_M7LPUART2LPEN                 (1 << 5)                    /*
                                                                             * Bit5
                                                                             */
#define RCC_RDEN1_M4LPUART2LPEN                 (1 << 4)                    /*
                                                                             * Bit4
                                                                             */

/******** Bit definition for RCC_RDEN2 register  ********/
#define RCC_RDEN2_M7COMPEN                      (1 << 31)                   /*
                                                                             * Bit31
                                                                             */
#define RCC_RDEN2_M4COMPEN                      (1 << 30)                   /*
                                                                             * Bit30
                                                                             */
#define RCC_RDEN2_M7COMPLPEN                    (1 << 29)                   /*
                                                                             * Bit29
                                                                             */
#define RCC_RDEN2_M4COMPLPEN                    (1 << 28)                   /*
                                                                             * Bit28
                                                                             */

/******** Bit definition for RCC_RDRST1 register  ********/
#define RCC_RDRST1_LPTIM1RST                    (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_RDRST1_LPTIM2RST                    (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_RDRST1_LPTIM3RST                    (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_RDRST1_LPTIM4RST                    (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_RDRST1_LPTIM5RST                    (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_RDRST1_LPUART1RST                   (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_RDRST1_LPUART2RST                   (1 << 4)                    /*
                                                                             * Bit4
                                                                             */

/******** Bit definition for RCC_RDRST2 register  ********/
#define RCC_RDRST2_COMPRST                      (1 << 28)                    /*
                                                                              * Bit28
                                                                              */

/******** Bit definition for RCC_BDCTRL register  ********/
#define RCC_BDCTRL_AFELSERDF                    (1 << 31)               /*
                                                                         * Bit31
                                                                         */
#define RCC_BDCTRL_AFELSIRDF                    (1 << 30)               /*
                                                                         * Bit30
                                                                         */
#define RCC_BDCTRL_LSELDOEN                     (1 << 28)               /*
                                                                         * Bit28
                                                                         */
#define RCC_BDCTRL_LSIOVREN                     (1 << 27)               /*
                                                                         * Bit27
                                                                         */
#define RCC_BDCTRL_LSIPFACK                     (1 << 26)               /*
                                                                         * Bit26
                                                                         */
#define RCC_BDCTRL_LSIPFF                       (1 << 25)               /*
                                                                         * Bit25
                                                                         */
#define RCC_BDCTRL_LSICSSEN                     (1 << 24)               /*
                                                                         * Bit24
                                                                         */
#define RCC_BDCTRL_LSERDCNTEN                   (1 << 22)               /*
                                                                         * Bit22
                                                                         */
#define RCC_BDCTRL_RTCLSFSW                     (1 << 21)               /*
                                                                         * Bit21
                                                                         */
#define RCC_BDCTRL_RTCHSFSW                     (1 << 20)               /*
                                                                         * Bit20
                                                                         */
#define RCC_BDCTRL_LSISECRDF                    (1 << 19)               /*
                                                                         * Bit19
                                                                         */

#define RCC_BDCTRL_RTCEN                        (1 << 18)               /*
                                                                         * Bit18
                                                                         */

#define RCC_BDCTRL_RTCSEL_SHIFT                 (16)                    /*
                                                                         * Bit16
                                                                         */
#define RCC_BDCTRL_RTCSEL_MASK                  (0x03 <<         \
  RCC_BDCTRL_RTCSEL_SHIFT)                                              /*
                                                                         * Bit16
                                                                         */
#define RCC_BDCTRL_RTCSEL_LSE                   ((uint32_t)0x00010000U)
#define RCC_BDCTRL_RTCSEL_LSI                   ((uint32_t)0x00020000U)
#define RCC_BDCTRL_RTCSEL_HSEDIV                ((uint32_t)0x00030000U)

#define RCC_BDCTRL_BORRSTEN                     (1 << 15)                   /*
                                                                             * Bit15
                                                                             */
#define RCC_BDCTRL_C1LPRSTEN                    (1 << 14)                   /*
                                                                             * Bit14
                                                                             */
#define RCC_BDCTRL_C2LPRSTEN                    (1 << 13)                   /*
                                                                             * Bit13
                                                                             */
#define RCC_BDCTRL_BDRST                        (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_BDCTRL_BKPEMCRSTEN                  (1 << 11)                   /*
                                                                             * Bit11
                                                                             */
#define RCC_BDCTRL_RETEMCRSTEN                  (1 << 10)                   /*
                                                                             * Bit10
                                                                             */
#define RCC_BDCTRL_LSECSSF                      (1 << 9)                    /*
                                                                             * Bit9
                                                                             */
#define RCC_BDCTRL_LSECSSEN                     (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_BDCTRL_LSERDEN                      (1 << 7)                    /*
                                                                             * Bit7
                                                                             */
#define RCC_BDCTRL_LSEBP                        (1 << 6)                    /*
                                                                             * Bit6
                                                                             */
#define RCC_BDCTRL_LSERDF                       (1 << 5)                    /*
                                                                             * Bit5
                                                                             */
#define RCC_BDCTRL_LSEEN                        (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_BDCTRL_LSIRDEN                      (1 << 3)                    /*
                                                                             * Bit3
                                                                             */
#define RCC_BDCTRL_LSISECEN                     (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_BDCTRL_LSIRDF                       (1 << 1)                    /*
                                                                             * Bit1
                                                                             */
#define RCC_BDCTRL_LSIEN                        (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

/******** Bit definition for RCC_LSICSSDL register  ********/
#define RCC_LSICSSDL_DELAY                      ((uint32_t)0xFFFFFFFFU) /* Bit
                                                                         */
#define RCC_LSICSSDL_DELAY_0                    (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_LSICSSDL_DELAY_1                    (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_LSICSSDL_DELAY_2                    (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_LSICSSDL_DELAY_3                    (1 << 3)                /*
                                                                         * Bit3*/
#define RCC_LSICSSDL_DELAY_4                    (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_LSICSSDL_DELAY_5                    (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_LSICSSDL_DELAY_6                    (1 << 6)                /*
                                                                         * Bit6*/
#define RCC_LSICSSDL_DELAY_7                    (1 << 7)                /*
                                                                         * Bit7*/
#define RCC_LSICSSDL_DELAY_8                    (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_LSICSSDL_DELAY_9                    (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_LSICSSDL_DELAY_10                   (1 << 10)               /*
                                                                         * Bit10*/
#define RCC_LSICSSDL_DELAY_11                   (1 << 11)               /*
                                                                         * Bit11*/
#define RCC_LSICSSDL_DELAY_12                   (1 << 12)               /*
                                                                         * Bit12*/
#define RCC_LSICSSDL_DELAY_13                   (1 << 13)               /*
                                                                         * Bit13*/
#define RCC_LSICSSDL_DELAY_14                   (1 << 14)               /*
                                                                         * Bit14*/
#define RCC_LSICSSDL_DELAY_15                   (1 << 15)               /*
                                                                         * Bit15*/
#define RCC_LSICSSDL_DELAY_16                   (1 << 16)               /*
                                                                         * Bit16*/
#define RCC_LSICSSDL_DELAY_17                   (1 << 17)               /*
                                                                         * Bit17*/
#define RCC_LSICSSDL_DELAY_18                   (1 << 18)               /*
                                                                         * Bit18*/
#define RCC_LSICSSDL_DELAY_19                   (1 << 19)               /*
                                                                         * Bit19*/
#define RCC_LSICSSDL_DELAY_20                   (1 << 20)               /*
                                                                         * Bit20*/
#define RCC_LSICSSDL_DELAY_21                   (1 << 21)               /*
                                                                         * Bit21*/
#define RCC_LSICSSDL_DELAY_22                   (1 << 22)               /*
                                                                         * Bit22*/
#define RCC_LSICSSDL_DELAY_23                   (1 << 23)               /*
                                                                         * Bit23*/
#define RCC_LSICSSDL_DELAY_24                   (1 << 24)               /*
                                                                         * Bit24*/
#define RCC_LSICSSDL_DELAY_25                   (1 << 25)               /*
                                                                         * Bit25*/
#define RCC_LSICSSDL_DELAY_26                   (1 << 26)               /*
                                                                         * Bit26*/
#define RCC_LSICSSDL_DELAY_27                   (1 << 27)               /*
                                                                         * Bit27*/
#define RCC_LSICSSDL_DELAY_28                   (1 << 28)               /*
                                                                         * Bit28*/
#define RCC_LSICSSDL_DELAY_29                   (1 << 29)               /*
                                                                         * Bit29*/
#define RCC_LSICSSDL_DELAY_30                   (1 << 30)               /*
                                                                         * Bit30*/
#define RCC_LSICSSDL_DELAY_31                   (1 << 31)               /*
                                                                         * Bit31*/

/******** Bit definition for RCC_CTRLSTS register  ********/
#define RCC_CTRLSTS_RMRSTF                      (1 << 31)                   /*
                                                                             * Bit31
                                                                             */
#define RCC_CTRLSTS_C1LPRSTF                    (1 << 15)                   /*
                                                                             * Bit15
                                                                             */
#define RCC_CTRLSTS_C2LPRSTF                    (1 << 14)                   /*
                                                                             * Bit14
                                                                             */
#define RCC_CTRLSTS_RETEMCRSTF                  (1 << 13)                   /*
                                                                             * Bit13
                                                                             */
#define RCC_CTRLSTS_BKPEMCRSTF                  (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_CTRLSTS_BORRSTF                     (1 << 11)                   /*
                                                                             * Bit11
                                                                             */
#define RCC_CTRLSTS_MMURSTF                     (1 << 9)                    /*
                                                                             * Bit9
                                                                             */
#define RCC_CTRLSTS_WWDG1RSTF                   (1 << 7)                    /*
                                                                             * Bit7
                                                                             */
#define RCC_CTRLSTS_WWDG2RSTF                   (1 << 6)                    /*
                                                                             * Bit6
                                                                             */
#define RCC_CTRLSTS_IWDG1RSTF                   (1 << 5)                    /*
                                                                             * Bit5
                                                                             */
#define RCC_CTRLSTS_IWDG2RSTF                   (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_CTRLSTS_CM4SFTRSTF                  (1 << 3)                    /*
                                                                             * Bit3
                                                                             */
#define RCC_CTRLSTS_CM7SFTRSTF                  (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_CTRLSTS_PORRSTF                     (1 << 1)                    /*
                                                                             * Bit1
                                                                             */
#define RCC_CTRLSTS_PINRSTF                     (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

/******** Bit definition for RCC_CLKINT1 register  ********/
#define RCC_CLKINT1_LSECSSIE                    (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_CLKINT1_LSECSSIF                    (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_CLKINT1_LSECSSIC                    (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_CLKINT1_HSECSSIF                    (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_CLKINT1_HSECSSIC                    (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_CLKINT1_BORIE                       (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_CLKINT1_BORIF                       (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_CLKINT1_BORIC                       (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_CLKINT1_PLL1RDIE                    (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_CLKINT1_PLL1RDIF                    (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_CLKINT1_PLL1RDIC                    (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_CLKINT1_PLL2RDIE                    (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_CLKINT1_PLL2RDIF                    (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_CLKINT1_PLL2RDIC                    (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_CLKINT1_PLL3RDIE                    (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_CLKINT1_PLL3RDIF                    (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_CLKINT1_PLL3RDIC                    (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_CLKINT1_SHRPLLRDIE                  (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_CLKINT1_SHRPLLRDIF                  (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_CLKINT1_SHRPLLRDIC                  (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */

/******** Bit definition for RCC_CLKINT2 register  ********/
#define RCC_CLKINT2_HSERDIE                     (1 << 30)                       /*
                                                                                 * Bit30
                                                                                 */
#define RCC_CLKINT2_HSERDIF                     (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_CLKINT2_HSERDIC                     (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_CLKINT2_HSIRDIE                     (1 << 26)                       /*
                                                                                 * Bit26
                                                                                 */
#define RCC_CLKINT2_HSIRDIF                     (1 << 25)                       /*
                                                                                 * Bit25
                                                                                 */
#define RCC_CLKINT2_HSIRDIC                     (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_CLKINT2_MSIRDIE                     (1 << 22)                       /*
                                                                                 * Bit22
                                                                                 */
#define RCC_CLKINT2_MSIRDIF                     (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_CLKINT2_MSIRDIC                     (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_CLKINT2_LSERDIE                     (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_CLKINT2_LSERDIF                     (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_CLKINT2_LSERDIC                     (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_CLKINT2_LSIRDIE                     (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_CLKINT2_LSIRDIF                     (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_CLKINT2_LSIRDIC                     (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_CLKINT2_HSICALEIE                   (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_CLKINT2_HSICALEIF                   (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_CLKINT2_HSICALEIC                   (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_CLKINT2_MSICALEIE                   (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_CLKINT2_MSICALEIF                   (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_CLKINT2_MSICALEIC                   (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */

/******** Bit definition for RCC_CLKINT3 register  ********/
#define RCC_CLKINT3_PLL1LKFIE                   (1 << 18)                       /*
                                                                                 * Bit18
                                                                                 */
#define RCC_CLKINT3_PLL1LKFIF                   (1 << 17)                       /*
                                                                                 * Bit17
                                                                                 */
#define RCC_CLKINT3_PLL1LKFIC                   (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_CLKINT3_PLL2LKFIE                   (1 << 14)                       /*
                                                                                 * Bit14
                                                                                 */
#define RCC_CLKINT3_PLL2LKFIF                   (1 << 13)                       /*
                                                                                 * Bit13
                                                                                 */
#define RCC_CLKINT3_PLL2LKFIC                   (1 << 12)                       /*
                                                                                 * Bit12
                                                                                 */
#define RCC_CLKINT3_PLL3LKFIE                   (1 << 10)                       /*
                                                                                 * Bit10
                                                                                 */
#define RCC_CLKINT3_PLL3LKFIF                   (1 << 9)                        /*
                                                                                 * Bit9
                                                                                 */
#define RCC_CLKINT3_PLL3LKFIC                   (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_CLKINT3_SHRPLLLKFIE                 (1 << 6)                        /*
                                                                                 * Bit6
                                                                                 */
#define RCC_CLKINT3_SHRPLLLKFIF                 (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_CLKINT3_SHRPLLLKFIC                 (1 << 4)                        /*
                                                                                 * Bit4
                                                                                 */
#define RCC_CLKINT3_LSIFIE                      (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_CLKINT3_LSIFIF                      (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_CLKINT3_LSIFIC                      (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_CFG1 register  ********/
#define RCC_CFG1_WWDG2RSTDLCNT                  (1 << 20)               /*
                                                                         * Bit20
                                                                         */
#define RCC_CFG1_WWDG2RSTDLCNT_0                (1 << 20)               /*
                                                                         * Bit20*/
#define RCC_CFG1_WWDG2RSTDLCNT_1                (1 << 21)               /*
                                                                         * Bit21*/
#define RCC_CFG1_WWDG2RSTDLCNT_2                (1 << 22)               /*
                                                                         * Bit22*/
#define RCC_CFG1_WWDG2RSTDLCNT_3                (1 << 23)               /*
                                                                         * Bit23*/
#define RCC_CFG1_WWDG1RSTDLCNT                  (1 << 16)               /*
                                                                         * Bit16
                                                                         */
#define RCC_CFG1_WWDG1RSTDLCNT_0                (1 << 16)               /*
                                                                         * Bit16*/
#define RCC_CFG1_WWDG1RSTDLCNT_1                (1 << 17)               /*
                                                                         * Bit17*/
#define RCC_CFG1_WWDG1RSTDLCNT_2                (1 << 18)               /*
                                                                         * Bit18*/
#define RCC_CFG1_WWDG1RSTDLCNT_3                (1 << 19)               /*
                                                                         * Bit19*/
#define RCC_CFG1_WWDG2RSTEN                     (1 << 9)                /*
                                                                         * Bit9
                                                                         */
#define RCC_CFG1_WWDG1RSTEN                     (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_CFG1_M7TRACEDIV                     (1 << 4)                /*
                                                                         * Bit4
                                                                         */
#define RCC_CFG1_M7TRACEDIV_0                   (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_CFG1_M7TRACEDIV_1                   (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_CFG1_M7TRACEDIV_2                   (1 << 6)                /*
                                                                         * Bit6*/
#define RCC_CFG1_M7TRACEDIV_3                   (1 << 7)                /*
                                                                         * Bit7*/

#define RCC_CFG1_M7TRACEDIV_DIV1                ((uint32_t)0x00000000U)
#define RCC_CFG1_M7TRACEDIV_DIV2                ((uint32_t)0x00000010U)
#define RCC_CFG1_M7TRACEDIV_DIV4                ((uint32_t)0x00000020U)
#define RCC_CFG1_M7TRACEDIV_DIV8                ((uint32_t)0x00000040U)
#define RCC_CFG1_M7TRACEDIV_DIV16               ((uint32_t)0x00000070U)
#define RCC_CFG1_M7TRACEDIV_DIV32               ((uint32_t)0x00000080U)
#define RCC_CFG1_M7TRACEDIV_DIV64               ((uint32_t)0x00000090U)
#define RCC_CFG1_M7TRACEDIV_DIV128              ((uint32_t)0x000000A0U)
#define RCC_CFG1_M7TRACEDIV_DIV256              ((uint32_t)0x000000B0U)
#define RCC_CFG1_M7TRACEDIV_DIV512              ((uint32_t)0x000000C0U)

#define RCC_CFG1_M4TRACEDIV                     ((uint32_t)0x0000000FU) /* Bit
                                                                         */
#define RCC_CFG1_M4TRACEDIV_0                   (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_CFG1_M4TRACEDIV_1                   (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_CFG1_M4TRACEDIV_2                   (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_CFG1_M4TRACEDIV_3                   (1 << 3)                /*
                                                                         * Bit3*/

/******** Bit definition for RCC_AXIDIV1 register  ********/
#define RCC_AXIDIV1_JPEGAXIDIV                  (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_AXIDIV1_JPEGAXIDIV_0                (1 << 28)                   /*
                                                                             * Bit28*/
#define RCC_AXIDIV1_JPEGAXIDIV_1                (1 << 29)                   /*
                                                                             * Bit29*/
#define RCC_AXIDIV1_JPEGAXIDIV_2                (1 << 30)                   /*
                                                                             * Bit30*/
#define RCC_AXIDIV1_JPEGAXIDIV_3                (1 << 31)                   /*
                                                                             * Bit31*/
#define RCC_AXIDIV1_JPEGSGDMADIV                (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_AXIDIV1_JPEGSGDMADIV_0              (1 << 24)                   /*
                                                                             * Bit24*/
#define RCC_AXIDIV1_JPEGSGDMADIV_1              (1 << 25)                   /*
                                                                             * Bit25*/
#define RCC_AXIDIV1_JPEGSGDMADIV_2              (1 << 26)                   /*
                                                                             * Bit26*/
#define RCC_AXIDIV1_JPEGSGDMADIV_3              (1 << 27)                   /*
                                                                             * Bit27*/

#define RCC_AXIDIV1_SDMMC1AXIDIV                (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_AXIDIV1_SDMMC1AXIDIV_0              (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_AXIDIV1_SDMMC1AXIDIV_1              (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_AXIDIV1_SDMMC1AXIDIV_2              (1 << 22)                   /*
                                                                             * Bit22*/
#define RCC_AXIDIV1_SDMMC1AXIDIV_3              (1 << 23)                   /*
                                                                             * Bit23*/

#define RCC_AXIDIV1_SDMMC1AXIDIV_DIV1           ((uint32_t)0x00000000U)
#define RCC_AXIDIV1_SDMMC1AXIDIV_DIV2           ((uint32_t)0x00100000U)
#define RCC_AXIDIV1_SDMMC1AXIDIV_DIV4           ((uint32_t)0x00200000U)
#define RCC_AXIDIV1_SDMMC1AXIDIV_DIV8           ((uint32_t)0x00400000U)
#define RCC_AXIDIV1_SDMMC1AXIDIV_DIV16          ((uint32_t)0x00700000U)
#define RCC_AXIDIV1_SDMMC1AXIDIV_DIV32          ((uint32_t)0x00800000U)
#define RCC_AXIDIV1_SDMMC1AXIDIV_DIV64          ((uint32_t)0x00900000U)
#define RCC_AXIDIV1_SDMMC1AXIDIV_DIV128         ((uint32_t)0x00A00000U)
#define RCC_AXIDIV1_SDMMC1AXIDIV_DIV256         ((uint32_t)0x00B00000U)
#define RCC_AXIDIV1_SDMMC1AXIDIV_DIV512         ((uint32_t)0x00C00000U)

#define RCC_AXIDIV1_DSIREFDIV                   (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_AXIDIV1_DSIREFDIV_0                 (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_AXIDIV1_DSIREFDIV_1                 (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_AXIDIV1_DSIREFDIV_2                 (1 << 18)                   /*
                                                                             * Bit18*/
#define RCC_AXIDIV1_DSIREFDIV_3                 (1 << 19)                   /*
                                                                             * Bit19*/

#define RCC_AXIDIV1_DSIREFDIV_DIV1              ((uint32_t)0x00000000U)
#define RCC_AXIDIV1_DSIREFDIV_DIV2              ((uint32_t)0x00010000U)
#define RCC_AXIDIV1_DSIREFDIV_DIV4              ((uint32_t)0x00020000U)
#define RCC_AXIDIV1_DSIREFDIV_DIV8              ((uint32_t)0x00040000U)
#define RCC_AXIDIV1_DSIREFDIV_DIV16             ((uint32_t)0x00070000U)
#define RCC_AXIDIV1_DSIREFDIV_DIV32             ((uint32_t)0x00080000U)
#define RCC_AXIDIV1_DSIREFDIV_DIV64             ((uint32_t)0x00090000U)
#define RCC_AXIDIV1_DSIREFDIV_DIV128            ((uint32_t)0x000A0000U)
#define RCC_AXIDIV1_DSIREFDIV_DIV256            ((uint32_t)0x000B0000U)
#define RCC_AXIDIV1_DSIREFDIV_DIV512            ((uint32_t)0x000C0000U)

#define RCC_AXIDIV1_LCDCAXIDIV                  (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_AXIDIV1_LCDCAXIDIV_0                (1 << 12)                   /*
                                                                             * Bit12*/
#define RCC_AXIDIV1_LCDCAXIDIV_1                (1 << 13)                   /*
                                                                             * Bit13*/
#define RCC_AXIDIV1_LCDCAXIDIV_2                (1 << 14)                   /*
                                                                             * Bit14*/
#define RCC_AXIDIV1_LCDCAXIDIV_3                (1 << 15)                   /*
                                                                             * Bit15*/

#define RCC_AXIDIV1_LCDCAXIDIV_DIV1             ((uint32_t)0x00000000U)
#define RCC_AXIDIV1_LCDCAXIDIV_DIV2             ((uint32_t)0x00001000U)
#define RCC_AXIDIV1_LCDCAXIDIV_DIV4             ((uint32_t)0x00002000U)
#define RCC_AXIDIV1_LCDCAXIDIV_DIV8             ((uint32_t)0x00004000U)
#define RCC_AXIDIV1_LCDCAXIDIV_DIV16            ((uint32_t)0x00007000U)
#define RCC_AXIDIV1_LCDCAXIDIV_DIV32            ((uint32_t)0x00008000U)
#define RCC_AXIDIV1_LCDCAXIDIV_DIV64            ((uint32_t)0x00009000U)
#define RCC_AXIDIV1_LCDCAXIDIV_DIV128           ((uint32_t)0x0000A000U)
#define RCC_AXIDIV1_LCDCAXIDIV_DIV256           ((uint32_t)0x0000B000U)
#define RCC_AXIDIV1_LCDCAXIDIV_DIV512           ((uint32_t)0x0000C000U)

#define RCC_AXIDIV1_DVPMAXIDIV                  (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_AXIDIV1_DVPMAXIDIV_0                (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_AXIDIV1_DVPMAXIDIV_1                (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_AXIDIV1_DVPMAXIDIV_2                (1 << 10)               /*
                                                                         * Bit10*/
#define RCC_AXIDIV1_DVPMAXIDIV_3                (1 << 11)               /*
                                                                         * Bit11*/

#define RCC_AXIDIV1_DVPMAXIDIV_DIV1             ((uint32_t)0x00000000U)
#define RCC_AXIDIV1_DVPMAXIDIV_DIV2             ((uint32_t)0x00000100U)
#define RCC_AXIDIV1_DVPMAXIDIV_DIV4             ((uint32_t)0x00000200U)
#define RCC_AXIDIV1_DVPMAXIDIV_DIV8             ((uint32_t)0x00000400U)
#define RCC_AXIDIV1_DVPMAXIDIV_DIV16            ((uint32_t)0x00000700U)
#define RCC_AXIDIV1_DVPMAXIDIV_DIV32            ((uint32_t)0x00000800U)
#define RCC_AXIDIV1_DVPMAXIDIV_DIV64            ((uint32_t)0x00000900U)
#define RCC_AXIDIV1_DVPMAXIDIV_DIV128           ((uint32_t)0x00000A00U)
#define RCC_AXIDIV1_DVPMAXIDIV_DIV256           ((uint32_t)0x00000B00U)
#define RCC_AXIDIV1_DVPMAXIDIV_DIV512           ((uint32_t)0x00000C00U)
/******** Bit definition for RCC_AXIDIV2 register  ********/
#define RCC_AXIDIV2_DSIAXIPPIDIV                (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_AXIDIV2_DSIAXIPPIDIV_0              (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_AXIDIV2_DSIAXIPPIDIV_1              (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_AXIDIV2_DSIAXIPPIDIV_2              (1 << 22)                   /*
                                                                             * Bit22*/
#define RCC_AXIDIV2_DSIAXIPPIDIV_3              (1 << 23)                   /*
                                                                             * Bit23*/

#define RCC_AXIDIV2_DSIREFULPSDIV               (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_AXIDIV2_DSIREFULPSDIV_0             (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_AXIDIV2_DSIREFULPSDIV_1             (1 << 17)                   /*
                                                                             * Bit17*/
#define RCC_AXIDIV2_DSIREFULPSDIV_2             (1 << 18)                   /*
                                                                             * Bit18*/
#define RCC_AXIDIV2_DSIREFULPSDIV_3             (1 << 19)                   /*
                                                                             * Bit19*/

#define RCC_AXIDIV2_DSIREFULPSDIV_DIV1          ((uint32_t)0x00000000U)
#define RCC_AXIDIV2_DSIREFULPSDIV_DIV2          ((uint32_t)0x00010000U)
#define RCC_AXIDIV2_DSIREFULPSDIV_DIV4          ((uint32_t)0x00020000U)
#define RCC_AXIDIV2_DSIREFULPSDIV_DIV8          ((uint32_t)0x00040000U)
#define RCC_AXIDIV2_DSIREFULPSDIV_DIV16         ((uint32_t)0x00070000U)
#define RCC_AXIDIV2_DSIREFULPSDIV_DIV32         ((uint32_t)0x00080000U)
#define RCC_AXIDIV2_DSIREFULPSDIV_DIV64         ((uint32_t)0x00090000U)
#define RCC_AXIDIV2_DSIREFULPSDIV_DIV128        ((uint32_t)0x000A0000U)
#define RCC_AXIDIV2_DSIREFULPSDIV_DIV256        ((uint32_t)0x000B0000U)
#define RCC_AXIDIV2_DSIREFULPSDIV_DIV512        ((uint32_t)0x000C0000U)

#define RCC_AXIDIV2_SDRAMMEMDIV                 (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_AXIDIV2_SDRAMMEMDIV_0               (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_AXIDIV2_SDRAMMEMDIV_1               (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_AXIDIV2_SDRAMMEMDIV_2               (1 << 10)               /*
                                                                         * Bit10*/
#define RCC_AXIDIV2_SDRAMMEMDIV_3               (1 << 11)               /*
                                                                         * Bit11*/

#define RCC_AXIDIV2_SDRAMMEMDIV_DIV1            ((uint32_t)0x00000000U)
#define RCC_AXIDIV2_SDRAMMEMDIV_DIV2            ((uint32_t)0x00000100U)
#define RCC_AXIDIV2_SDRAMMEMDIV_DIV4            ((uint32_t)0x00000200U)
#define RCC_AXIDIV2_SDRAMMEMDIV_DIV8            ((uint32_t)0x00000400U)
#define RCC_AXIDIV2_SDRAMMEMDIV_DIV16           ((uint32_t)0x00000700U)
#define RCC_AXIDIV2_SDRAMMEMDIV_DIV32           ((uint32_t)0x00000800U)
#define RCC_AXIDIV2_SDRAMMEMDIV_DIV64           ((uint32_t)0x00000900U)
#define RCC_AXIDIV2_SDRAMMEMDIV_DIV128          ((uint32_t)0x00000A00U)
#define RCC_AXIDIV2_SDRAMMEMDIV_DIV256          ((uint32_t)0x00000B00U)
#define RCC_AXIDIV2_SDRAMMEMDIV_DIV512          ((uint32_t)0x00000C00U)

#define RCC_AXIDIV2_FEMCM1AXIDIV                (1 << 4)                /*
                                                                         * Bit4
                                                                         */
#define RCC_AXIDIV2_FEMCM1AXIDIV_0              (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_AXIDIV2_FEMCM1AXIDIV_1              (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_AXIDIV2_FEMCM1AXIDIV_2              (1 << 6)                /*
                                                                         * Bit6*/
#define RCC_AXIDIV2_FEMCM1AXIDIV_3              (1 << 7)                /*
                                                                         * Bit7*/

#define RCC_AXIDIV2_FEMCM0AXIDIV                ((uint32_t)0x0000000FU) /* Bit
                                                                         */
#define RCC_AXIDIV2_FEMCM0AXIDIV_0              (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_AXIDIV2_FEMCM0AXIDIV_1              (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_AXIDIV2_FEMCM0AXIDIV_2              (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_AXIDIV2_FEMCM0AXIDIV_3              (1 << 3)                /*
                                                                         * Bit3*/

#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV1           ((uint32_t)0x00000001U)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV2           ((uint32_t)0x00000002U)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV3           ((uint32_t)0x00000003U)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV4           ((uint32_t)0x00000004U)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV5           ((uint32_t)0x00000005U)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV6           ((uint32_t)0x00000006U)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV7           ((uint32_t)0x00000007U)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV8           ((uint32_t)0x00000008U)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV9           ((uint32_t)0x00000009U)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV10          ((uint32_t)0x0000000AU)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV11          ((uint32_t)0x0000000BU)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV12          ((uint32_t)0x0000000CU)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV13          ((uint32_t)0x0000000DU)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV14          ((uint32_t)0x0000000EU)
#define RCC_AXIDIV2_FEMCM0AXIDIV_DIV15          ((uint32_t)0x0000000FU)
/******** Bit definition for RCC_AXISEL1 register  ********/
#define RCC_AXISEL1_DSIULPSSEL                  (1 << 26)                   /*
                                                                             * Bit26
                                                                             */
#define RCC_AXISEL1_DSIULPSSEL_0                (1 << 26)                   /*
                                                                             * Bit26*/
#define RCC_AXISEL1_DSIULPSSEL_1                (1 << 27)                   /*
                                                                             * Bit27*/
#define RCC_AXISEL1_DSIKERSEL                   (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_AXISEL1_DSIKERSEL_0                 (1 << 24)                   /*
                                                                             * Bit24*/
#define RCC_AXISEL1_DSIKERSEL_1                 (1 << 25)                   /*
                                                                             * Bit25*/

#define RCC_AXISEL1_SDMMC1KERSEL                (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_AXISEL1_SDMMC1KERSEL_0              (1 << 20)                   /*
                                                                             * Bit20*/
#define RCC_AXISEL1_SDMMC1KERSEL_1              (1 << 21)                   /*
                                                                             * Bit21*/
#define RCC_AXISEL1_SDMMC1KERSEL_2              (1 << 22)                   /*
                                                                             * Bit22*/

#define RCC_AXISEL1_SDMMC1KERSEL_AXIDIV         ((uint32_t)0x00000000U)
#define RCC_AXISEL1_SDMMC1KERSEL_PERIPH         ((uint32_t)0x00100000U)
#define RCC_AXISEL1_SDMMC1KERSEL_PLL2A          ((uint32_t)0x00200000U)
#define RCC_AXISEL1_SDMMC1KERSEL_PLL3A          ((uint32_t)0x00300000U)
#define RCC_AXISEL1_SDMMC1KERSEL_PLL1B          ((uint32_t)0x00400000U)

#define RCC_AXISEL1_DSIPPITXSEL                 (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_AXISEL1_DSIPPITXSEL_0               (1 << 16)                   /*
                                                                             * Bit16*/
#define RCC_AXISEL1_DSIPPITXSEL_1               (1 << 17)                   /*
                                                                             * Bit17*/

#define RCC_AXISEL1_DSIPPITXSEL_REFDIV          ((uint32_t)0x00000000U)
#define RCC_AXISEL1_DSIPPITXSEL_PLL2B           ((uint32_t)0x00010000U)
#define RCC_AXISEL1_DSIPPITXSEL_PERIPH          ((uint32_t)0x00020000U)
#define RCC_AXISEL1_DSIPPITXSEL_AXIDIV          ((uint32_t)0x00030000U)

#define RCC_AXISEL1_LCDCKERSEL                  (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_AXISEL1_LCDCKERSEL_0                (1 << 12)                   /*
                                                                             * Bit12*/
#define RCC_AXISEL1_LCDCKERSEL_1                (1 << 13)                   /*
                                                                             * Bit13*/

#define RCC_AXISEL1_LCDCKERSEL_AXIDIV           ((uint32_t)0x00000000U)
#define RCC_AXISEL1_LCDCKERSEL_PERIPH           ((uint32_t)0x00001000U)
#define RCC_AXISEL1_LCDCKERSEL_PLL2C            ((uint32_t)0x00002000U)
#define RCC_AXISEL1_LCDCKERSEL_PLL3B            ((uint32_t)0x00003000U)

#define RCC_AXISEL1_DVP1MSEL                    (1 << 10)                   /*
                                                                             * Bit10
                                                                             */
#define RCC_AXISEL1_DVP1MSEL_0                  (1 << 10)                   /*
                                                                             * Bit10*/
#define RCC_AXISEL1_DVP1MSEL_1                  (1 << 11)                   /*
                                                                             * Bit11*/

#define RCC_AXISEL1_DVP1MSEL_AXIDIV             ((uint32_t)0x00000000U)
#define RCC_AXISEL1_DVP1MSEL_PERIPH             ((uint32_t)0x00000400U)
#define RCC_AXISEL1_DVP1MSEL_PLL2C              ((uint32_t)0x00000800U)
#define RCC_AXISEL1_DVP1MSEL_PLL3A              ((uint32_t)0x00000C00U)

#define RCC_AXISEL1_DVP2MSEL                    (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_AXISEL1_DVP2MSEL_0                  (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_AXISEL1_DVP2MSEL_1                  (1 << 9)                /*
                                                                         * Bit9*/

#define RCC_AXISEL1_XSPI1SSISEL                 (1 << 4)                /*
                                                                         * Bit4
                                                                         */
#define RCC_AXISEL1_XSPI1SSISEL_0               (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_AXISEL1_XSPI1SSISEL_1               (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_AXISEL1_XSPI1SSISEL_2               (1 << 6)                /*
                                                                         * Bit6*/

#define RCC_AXISEL1_XSPI1SSISEL_AXI             ((uint32_t)0x00000000U)
#define RCC_AXISEL1_XSPI1SSISEL_PLL3C           ((uint32_t)0x00000010U)
#define RCC_AXISEL1_XSPI1SSISEL_PLL1B           ((uint32_t)0x00000020U)
#define RCC_AXISEL1_XSPI1SSISEL_PLL2A           ((uint32_t)0x00000030U)
#define RCC_AXISEL1_XSPI1SSISEL_PLL2C           ((uint32_t)0x00000040U)

#define RCC_AXISEL1_XSPI2SSISEL                 ((uint32_t)0x00000007U) /* Bit
                                                                         */
#define RCC_AXISEL1_XSPI2SSISEL_0               (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_AXISEL1_XSPI2SSISEL_1               (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_AXISEL1_XSPI2SSISEL_2               (1 << 2)                /*
                                                                         * Bit2*/

/******** Bit definition for RCC_AXISEL2 register  ********/
#define RCC_AXISEL2_SDRAMMEMSEL                 (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_AXISEL2_SDRAMMEMSEL_0               (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_AXISEL2_SDRAMMEMSEL_1               (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_AXISEL2_SDRAMMEMSEL_2               (1 << 10)               /*
                                                                         * Bit10*/

#define RCC_AXISEL2_SDRAMMEMSEL_AXIDIV          ((uint32_t)0x00000000U)
#define RCC_AXISEL2_SDRAMMEMSEL_PERIPH          ((uint32_t)0x00000100U)
#define RCC_AXISEL2_SDRAMMEMSEL_PLL2A           ((uint32_t)0x00000200U)
#define RCC_AXISEL2_SDRAMMEMSEL_PLL3A           ((uint32_t)0x00000300U)
#define RCC_AXISEL2_SDRAMMEMSEL_PLL1B           ((uint32_t)0x00000400U)

#define RCC_AXISEL2_FEMCM1SEL                   (1 << 4)                /*
                                                                         * Bit4
                                                                         */
#define RCC_AXISEL2_FEMCM1SEL_0                 (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_AXISEL2_FEMCM1SEL_1                 (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_AXISEL2_FEMCM1SEL_2                 (1 << 6)                /*
                                                                         * Bit6*/

#define RCC_AXISEL2_FEMCM0SEL                   ((uint32_t)0x00000007U) /* Bit
                                                                         */
#define RCC_AXISEL2_FEMCM0SEL_0                 (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_AXISEL2_FEMCM0SEL_1                 (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_AXISEL2_FEMCM0SEL_2                 (1 << 2)                /*
                                                                         * Bit2*/

#define RCC_AXISEL2_FEMCM0SEL_AXIDIV            ((uint32_t)0x00000000U)
#define RCC_AXISEL2_FEMCM0SEL_PERIPH            ((uint32_t)0x00000001U)
#define RCC_AXISEL2_FEMCM0SEL_PLL2C             ((uint32_t)0x00000002U)
#define RCC_AXISEL2_FEMCM0SEL_PLL3B             ((uint32_t)0x00000003U)
#define RCC_AXISEL2_FEMCM0SEL_PLL1B             ((uint32_t)0x00000004U)
/******** Bit definition for RCC_AXIEN1 register  ********/
#define RCC_AXIEN1_M7JPEGDEN                    (1 << 31)                   /*
                                                                             * Bit31
                                                                             */
#define RCC_AXIEN1_M4JPEGDEN                    (1 << 30)                   /*
                                                                             * Bit30
                                                                             */
#define RCC_AXIEN1_M7JPEGDLPEN                  (1 << 29)                   /*
                                                                             * Bit29
                                                                             */
#define RCC_AXIEN1_M4JPEGDLPEN                  (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_AXIEN1_M7JPEGEEN                    (1 << 23)                   /*
                                                                             * Bit23
                                                                             */
#define RCC_AXIEN1_M4JPEGEEN                    (1 << 22)                   /*
                                                                             * Bit22
                                                                             */
#define RCC_AXIEN1_M7JPEGELPEN                  (1 << 21)                   /*
                                                                             * Bit21
                                                                             */
#define RCC_AXIEN1_M4JPEGELPEN                  (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_AXIEN1_M7DMAMUX2EN                  (1 << 19)                   /*
                                                                             * Bit19
                                                                             */
#define RCC_AXIEN1_M4DMAMUX2EN                  (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_AXIEN1_M7DMAMUX2LPEN                (1 << 17)                   /*
                                                                             * Bit17
                                                                             */
#define RCC_AXIEN1_M4DMAMUX2LPEN                (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_AXIEN1_M7MDMAEN                     (1 << 15)                   /*
                                                                             * Bit15
                                                                             */
#define RCC_AXIEN1_M4MDMAEN                     (1 << 14)                   /*
                                                                             * Bit14
                                                                             */
#define RCC_AXIEN1_M7MDMALPEN                   (1 << 13)                   /*
                                                                             * Bit13
                                                                             */
#define RCC_AXIEN1_M4MDMALPEN                   (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_AXIEN1_M7SDMMC1EN                   (1 << 11)                   /*
                                                                             * Bit11
                                                                             */
#define RCC_AXIEN1_M4SDMMC1EN                   (1 << 10)                   /*
                                                                             * Bit10
                                                                             */
#define RCC_AXIEN1_M7SDMMC1LPEN                 (1 << 9)                    /*
                                                                             * Bit9
                                                                             */
#define RCC_AXIEN1_M4SDMMC1LPEN                 (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_AXIEN1_M7ECCM1EN                    (1 << 7)                    /*
                                                                             * Bit7
                                                                             */
#define RCC_AXIEN1_M4ECCM1EN                    (1 << 6)                    /*
                                                                             * Bit6
                                                                             */
#define RCC_AXIEN1_M7ECCM1LPEN                  (1 << 5)                    /*
                                                                             * Bit5
                                                                             */
#define RCC_AXIEN1_M4ECCM1LPEN                  (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_AXIEN1_M7OTPCEN                     (1 << 3)                    /*
                                                                             * Bit3
                                                                             */
#define RCC_AXIEN1_M4OTPCEN                     (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_AXIEN1_M7OTPCLPEN                   (1 << 1)                    /*
                                                                             * Bit1
                                                                             */
#define RCC_AXIEN1_M4OTPCLPEN                   (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

/******** Bit definition for RCC_AXIEN2 register  ********/
#define RCC_AXIEN2_M7DSIEN                      (1 << 31)                   /*
                                                                             * Bit31
                                                                             */
#define RCC_AXIEN2_M4DSIEN                      (1 << 30)                   /*
                                                                             * Bit30
                                                                             */
#define RCC_AXIEN2_M7DSILPEN                    (1 << 29)                   /*
                                                                             * Bit29
                                                                             */
#define RCC_AXIEN2_M4DSILPEN                    (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_AXIEN2_M7LCDCEN                     (1 << 27)                   /*
                                                                             * Bit27
                                                                             */
#define RCC_AXIEN2_M4LCDCEN                     (1 << 26)                   /*
                                                                             * Bit26
                                                                             */
#define RCC_AXIEN2_M7LCDCLPEN                   (1 << 25)                   /*
                                                                             * Bit25
                                                                             */
#define RCC_AXIEN2_M4LCDCLPEN                   (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_AXIEN2_M7LCDCAPBEN                  (1 << 23)                   /*
                                                                             * Bit23
                                                                             */
#define RCC_AXIEN2_M4LCDCAPBEN                  (1 << 22)                   /*
                                                                             * Bit22
                                                                             */
#define RCC_AXIEN2_M7LCDCAPBLPEN                (1 << 21)                   /*
                                                                             * Bit21
                                                                             */
#define RCC_AXIEN2_M4LCDCAPBLPEN                (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_AXIEN2_M7DVP1EN                     (1 << 19)                   /*
                                                                             * Bit19
                                                                             */
#define RCC_AXIEN2_M4DVP1EN                     (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_AXIEN2_M7DVP1LPEN                   (1 << 17)                   /*
                                                                             * Bit17
                                                                             */
#define RCC_AXIEN2_M4DVP1LPEN                   (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_AXIEN2_M7DVP1APBEN                  (1 << 15)                   /*
                                                                             * Bit15
                                                                             */
#define RCC_AXIEN2_M4DVP1APBEN                  (1 << 14)                   /*
                                                                             * Bit14
                                                                             */
#define RCC_AXIEN2_M7DVP1APBLPEN                (1 << 13)                   /*
                                                                             * Bit13
                                                                             */
#define RCC_AXIEN2_M4DVP1APBLPEN                (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_AXIEN2_M7DVP2EN                     (1 << 11)                   /*
                                                                             * Bit11
                                                                             */
#define RCC_AXIEN2_M4DVP2EN                     (1 << 10)                   /*
                                                                             * Bit10
                                                                             */
#define RCC_AXIEN2_M7DVP2LPEN                   (1 << 9)                    /*
                                                                             * Bit9
                                                                             */
#define RCC_AXIEN2_M4DVP2LPEN                   (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_AXIEN2_M7DVP2APBEN                  (1 << 7)                    /*
                                                                             * Bit7
                                                                             */
#define RCC_AXIEN2_M4DVP2APBEN                  (1 << 6)                    /*
                                                                             * Bit6
                                                                             */
#define RCC_AXIEN2_M7DVP2APBLPEN                (1 << 5)                    /*
                                                                             * Bit5
                                                                             */
#define RCC_AXIEN2_M4DVP2APBLPEN                (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_AXIEN2_M7WWDG1EN                    (1 << 3)                    /*
                                                                             * Bit3
                                                                             */
#define RCC_AXIEN2_M4WWDG1EN                    (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_AXIEN2_M7WWDG1LPEN                  (1 << 1)                    /*
                                                                             * Bit1
                                                                             */
#define RCC_AXIEN2_M4WWDG1LPEN                  (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

/******** Bit definition for RCC_AXIEN3 register  ********/
#define RCC_AXIEN3_M7TASRAM2EN                  (1 << 31)                   /*
                                                                             * Bit31
                                                                             */
#define RCC_AXIEN3_M4TASRAM2EN                  (1 << 30)                   /*
                                                                             * Bit30
                                                                             */
#define RCC_AXIEN3_M7TASRAM2LPEN                (1 << 29)                   /*
                                                                             * Bit29
                                                                             */
#define RCC_AXIEN3_M4TASRAM2LPEN                (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_AXIEN3_M7TASRAM3EN                  (1 << 27)                   /*
                                                                             * Bit27
                                                                             */
#define RCC_AXIEN3_M4TASRAM3EN                  (1 << 26)                   /*
                                                                             * Bit26
                                                                             */
#define RCC_AXIEN3_M7TASRAM3LPEN                (1 << 25)                   /*
                                                                             * Bit25
                                                                             */
#define RCC_AXIEN3_M4TASRAM3LPEN                (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_AXIEN3_M7TCMEN                      (1 << 23)                   /*
                                                                             * Bit23
                                                                             */
#define RCC_AXIEN3_M4TCMEN                      (1 << 22)                   /*
                                                                             * Bit22
                                                                             */
#define RCC_AXIEN3_M7TCMLPEN                    (1 << 21)                   /*
                                                                             * Bit21
                                                                             */
#define RCC_AXIEN3_M4TCMLPEN                    (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_AXIEN3_M7TCMAXIEN                   (1 << 19)                   /*
                                                                             * Bit19
                                                                             */
#define RCC_AXIEN3_M4TCMAXIEN                   (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_AXIEN3_M7TCMAXILPEN                 (1 << 17)                   /*
                                                                             * Bit17
                                                                             */
#define RCC_AXIEN3_M4TCMAXILPEN                 (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_AXIEN3_M7TCMAPBEN                   (1 << 15)                   /*
                                                                             * Bit15
                                                                             */
#define RCC_AXIEN3_M4TCMAPBEN                   (1 << 14)                   /*
                                                                             * Bit14
                                                                             */
#define RCC_AXIEN3_M7TCMAPBLPEN                 (1 << 13)                   /*
                                                                             * Bit13
                                                                             */
#define RCC_AXIEN3_M4TCMAPBLPEN                 (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_AXIEN3_M7ASRAM1EN                   (1 << 11)                   /*
                                                                             * Bit11
                                                                             */
#define RCC_AXIEN3_M4ASRAM1EN                   (1 << 10)                   /*
                                                                             * Bit10
                                                                             */
#define RCC_AXIEN3_M7ASRAM1LPEN                 (1 << 9)                    /*
                                                                             * Bit9
                                                                             */
#define RCC_AXIEN3_M4ASRAM1LPEN                 (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_AXIEN3_M7AXIROMEN                   (1 << 7)                    /*
                                                                             * Bit7
                                                                             */
#define RCC_AXIEN3_M4AXIROMEN                   (1 << 6)                    /*
                                                                             * Bit6
                                                                             */
#define RCC_AXIEN3_M7AXIROMLPEN                 (1 << 5)                    /*
                                                                             * Bit5
                                                                             */
#define RCC_AXIEN3_M4AXIROMLPEN                 (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_AXIEN3_M7GPUEN                      (1 << 3)                    /*
                                                                             * Bit3
                                                                             */
#define RCC_AXIEN3_M4GPUEN                      (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_AXIEN3_M7GPULPEN                    (1 << 1)                    /*
                                                                             * Bit1
                                                                             */
#define RCC_AXIEN3_M4GPULPEN                    (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

/******** Bit definition for RCC_AXIEN4 register  ********/
#define RCC_AXIEN4_M7XSPI1EN                    (1 << 31)                   /*
                                                                             * Bit31
                                                                             */
#define RCC_AXIEN4_M4XSPI1EN                    (1 << 30)                   /*
                                                                             * Bit30
                                                                             */
#define RCC_AXIEN4_M7XSPI1LPEN                  (1 << 29)                   /*
                                                                             * Bit29
                                                                             */
#define RCC_AXIEN4_M4XSPI1LPEN                  (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_AXIEN4_M7XSPI2EN                    (1 << 27)                   /*
                                                                             * Bit27
                                                                             */
#define RCC_AXIEN4_M4XSPI2EN                    (1 << 26)                   /*
                                                                             * Bit26
                                                                             */
#define RCC_AXIEN4_M7XSPI2LPEN                  (1 << 25)                   /*
                                                                             * Bit25
                                                                             */
#define RCC_AXIEN4_M4XSPI2LPEN                  (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_AXIEN4_M7FEMCEN                     (1 << 23)                   /*
                                                                             * Bit23
                                                                             */
#define RCC_AXIEN4_M4FEMCEN                     (1 << 22)                   /*
                                                                             * Bit22
                                                                             */
#define RCC_AXIEN4_M7FEMCLPEN                   (1 << 21)                   /*
                                                                             * Bit21
                                                                             */
#define RCC_AXIEN4_M4FEMCLPEN                   (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_AXIEN4_M7SDRAMEN                    (1 << 19)                   /*
                                                                             * Bit19
                                                                             */
#define RCC_AXIEN4_M4SDRAMEN                    (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_AXIEN4_M7SDRAMLPEN                  (1 << 17)                   /*
                                                                             * Bit17
                                                                             */
#define RCC_AXIEN4_M4SDRAMLPEN                  (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_AXIEN4_M7DSIULPSEN                  (1 << 3)                    /*
                                                                             * Bit3
                                                                             */
#define RCC_AXIEN4_M4DSIULPSEN                  (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_AXIEN4_M7DSIULPSLPEN                (1 << 1)                    /*
                                                                             * Bit1
                                                                             */
#define RCC_AXIEN4_M4DSIULPSLPEN                (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

/******** Bit definition for RCC_AXIRST1 register  ********/
#define RCC_AXIRST1_JPEGDRST                    (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_AXIRST1_JPEGERST                    (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_AXIRST1_DMAMUX2RST                  (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_AXIRST1_MDMARST                     (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_AXIRST1_SDMMC1RST                   (1 << 9)                    /*
                                                                             * Bit9
                                                                             */
#define RCC_AXIRST1_SDHOST1RST                  (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_AXIRST1_ECCM1RST                    (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_AXIRST1_OTPCRST                     (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

/******** Bit definition for RCC_AXIRST2 register  ********/
#define RCC_AXIRST2_DSICFGRST                   (1 << 29)                       /*
                                                                                 * Bit29
                                                                                 */
#define RCC_AXIRST2_DSIRST                      (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_AXIRST2_LCDCRST                     (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_AXIRST2_DVP1RST                     (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */
#define RCC_AXIRST2_DVP2RST                     (1 << 8)                        /*
                                                                                 * Bit8
                                                                                 */
#define RCC_AXIRST2_WWDG1RST                    (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_AXIRST3 register  ********/
#define RCC_AXIRST3_GPURST                      (1 << 0)                     /*
                                                                              * Bit0
                                                                              */

/******** Bit definition for RCC_AXIRST4 register  ********/
#define RCC_AXIRST4_XSPI1RST                    (1 << 28)                       /*
                                                                                 * Bit28
                                                                                 */
#define RCC_AXIRST4_XSPI2RST                    (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_AXIRST4_FEMCCFGRST                  (1 << 21)                       /*
                                                                                 * Bit21
                                                                                 */
#define RCC_AXIRST4_FEMCRST                     (1 << 20)                       /*
                                                                                 * Bit20
                                                                                 */
#define RCC_AXIRST4_SDRAMRST                    (1 << 16)                       /*
                                                                                 * Bit16
                                                                                 */

/******** Bit definition for RCC_CFG2 register  ********/
#define RCC_CFG2_M4CAHIEN                       (1 << 30)                   /*
                                                                             * Bit30
                                                                             */
#define RCC_CFG2_M4CAHIPCLKEN                   (1 << 28)                   /*
                                                                             * Bit28
                                                                             */
#define RCC_CFG2_M4CAHDEN                       (1 << 26)                   /*
                                                                             * Bit26
                                                                             */
#define RCC_CFG2_M4CAHDPCLKEN                   (1 << 24)                   /*
                                                                             * Bit24
                                                                             */
#define RCC_CFG2_M7MMUEN                        (1 << 23)                   /*
                                                                             * Bit23
                                                                             */
#define RCC_CFG2_M7MMULPEN                      (1 << 22)                   /*
                                                                             * Bit22
                                                                             */
#define RCC_CFG2_M4MMUEN                        (1 << 21)                   /*
                                                                             * Bit21
                                                                             */
#define RCC_CFG2_M4MMULPEN                      (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_CFG2_M7SRAMBKPEN                    (1 << 19)                   /*
                                                                             * Bit19
                                                                             */
#define RCC_CFG2_M4SRAMBKPEN                    (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_CFG2_M7SRAMBKPLPEN                  (1 << 17)                   /*
                                                                             * Bit17
                                                                             */
#define RCC_CFG2_M4SRAMBKPLPEN                  (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_CFG2_M7SRAM1EN                      (1 << 15)                   /*
                                                                             * Bit15
                                                                             */
#define RCC_CFG2_M4SRAM1EN                      (1 << 14)                   /*
                                                                             * Bit14
                                                                             */
#define RCC_CFG2_M7SRAM1LPEN                    (1 << 13)                   /*
                                                                             * Bit13
                                                                             */
#define RCC_CFG2_M4SRAM1LPEN                    (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_CFG2_M7SRAM2EN                      (1 << 11)                   /*
                                                                             * Bit11
                                                                             */
#define RCC_CFG2_M4SRAM2EN                      (1 << 10)                   /*
                                                                             * Bit10
                                                                             */
#define RCC_CFG2_M7SRAM2LPEN                    (1 << 9)                    /*
                                                                             * Bit9
                                                                             */
#define RCC_CFG2_M4SRAM2LPEN                    (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_CFG2_M7SRAM3EN                      (1 << 7)                    /*
                                                                             * Bit7
                                                                             */
#define RCC_CFG2_M4SRAM3EN                      (1 << 6)                    /*
                                                                             * Bit6
                                                                             */
#define RCC_CFG2_M7SRAM3LPEN                    (1 << 5)                    /*
                                                                             * Bit5
                                                                             */
#define RCC_CFG2_M4SRAM3LPEN                    (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_CFG2_M7SRAM4EN                      (1 << 3)                    /*
                                                                             * Bit3
                                                                             */
#define RCC_CFG2_M4SRAM4EN                      (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_CFG2_M7SRAM4LPEN                    (1 << 1)                    /*
                                                                             * Bit1
                                                                             */
#define RCC_CFG2_M4SRAM4LPEN                    (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

/******** Bit definition for RCC_CFG3 register  ********/
#define RCC_CFG3_MCO1SEL                        (1 << 28)               /*
                                                                         * Bit28
                                                                         */
#define RCC_CFG3_MCO1SEL_0                      (1 << 28)               /*
                                                                         * Bit28*/
#define RCC_CFG3_MCO1SEL_1                      (1 << 29)               /*
                                                                         * Bit29*/
#define RCC_CFG3_MCO1SEL_2                      (1 << 30)               /*
                                                                         * Bit30*/
#define RCC_CFG3_MCO1SEL_3                      (1 << 31)               /*
                                                                         * Bit31*/

#define RCC_CFG3_MCO1SEL_LSI                    ((uint32_t)0x80000000U)
#define RCC_CFG3_MCO1SEL_HSI                    ((uint32_t)0x90000000U)
#define RCC_CFG3_MCO1SEL_MSI                    ((uint32_t)0xA0000000U)
#define RCC_CFG3_MCO1SEL_LSE                    ((uint32_t)0xB0000000U)
#define RCC_CFG3_MCO1SEL_HSE                    ((uint32_t)0xC0000000U)
#define RCC_CFG3_MCO1SEL_PLL3B                  ((uint32_t)0xD0000000U)

#define RCC_CFG3_MCO1DIV                        (1 << 24)               /*
                                                                         * Bit24
                                                                         */
#define RCC_CFG3_MCO1DIV_0                      (1 << 24)               /*
                                                                         * Bit24*/
#define RCC_CFG3_MCO1DIV_1                      (1 << 25)               /*
                                                                         * Bit25*/
#define RCC_CFG3_MCO1DIV_2                      (1 << 26)               /*
                                                                         * Bit26*/
#define RCC_CFG3_MCO1DIV_3                      (1 << 27)               /*
                                                                         * Bit27*/

#define RCC_CFG3_MCO1DIV_DIV1                   ((uint32_t)0x00000000U)
#define RCC_CFG3_MCO1DIV_DIV2                   ((uint32_t)0x01000000U)
#define RCC_CFG3_MCO1DIV_DIV4                   ((uint32_t)0x02000000U)
#define RCC_CFG3_MCO1DIV_DIV8                   ((uint32_t)0x04000000U)
#define RCC_CFG3_MCO1DIV_DIV16                  ((uint32_t)0x07000000U)
#define RCC_CFG3_MCO1DIV_DIV32                  ((uint32_t)0x08000000U)
#define RCC_CFG3_MCO1DIV_DIV64                  ((uint32_t)0x09000000U)
#define RCC_CFG3_MCO1DIV_DIV128                 ((uint32_t)0x0A000000U)

#define RCC_CFG3_MCO2SEL                        (1 << 20)               /*
                                                                         * Bit20
                                                                         */
#define RCC_CFG3_MCO2SEL_0                      (1 << 20)               /*
                                                                         * Bit20*/
#define RCC_CFG3_MCO2SEL_1                      (1 << 21)               /*
                                                                         * Bit21*/
#define RCC_CFG3_MCO2SEL_2                      (1 << 22)               /*
                                                                         * Bit22*/
#define RCC_CFG3_MCO2SEL_3                      (1 << 23)               /*
                                                                         * Bit23*/

#define RCC_CFG3_MCO2SEL_SYSCLK                 ((uint32_t)0x00800000U)
#define RCC_CFG3_MCO2SEL_PLL1A                  ((uint32_t)0x00900000U)
#define RCC_CFG3_MCO2SEL_PLL2A                  ((uint32_t)0x00A00000U)
#define RCC_CFG3_MCO2SEL_PLL3A                  ((uint32_t)0x00B00000U)
#define RCC_CFG3_MCO2SEL_SHRPLL                 ((uint32_t)0x00C00000U)
#define RCC_CFG3_MCO2SEL_LSE                    ((uint32_t)0x00D00000U)

#define RCC_CFG3_MCO2DIV                        (1 << 16)               /*
                                                                         * Bit16
                                                                         */
#define RCC_CFG3_MCO2DIV_0                      (1 << 16)               /*
                                                                         * Bit16*/
#define RCC_CFG3_MCO2DIV_1                      (1 << 17)               /*
                                                                         * Bit17*/
#define RCC_CFG3_MCO2DIV_2                      (1 << 18)               /*
                                                                         * Bit18*/
#define RCC_CFG3_MCO2DIV_3                      (1 << 19)               /*
                                                                         * Bit19*/

#define RCC_CFG3_MCO2DIV_DIV1                   ((uint32_t)0x00000000U)
#define RCC_CFG3_MCO2DIV_DIV2                   ((uint32_t)0x00010000U)
#define RCC_CFG3_MCO2DIV_DIV4                   ((uint32_t)0x00020000U)
#define RCC_CFG3_MCO2DIV_DIV8                   ((uint32_t)0x00040000U)
#define RCC_CFG3_MCO2DIV_DIV16                  ((uint32_t)0x00070000U)
#define RCC_CFG3_MCO2DIV_DIV32                  ((uint32_t)0x00080000U)
#define RCC_CFG3_MCO2DIV_DIV64                  ((uint32_t)0x00090000U)
#define RCC_CFG3_MCO2DIV_DIV128                 ((uint32_t)0x000A0000U)

#define RCC_CFG3_I2SSEL                         (1 << 14)               /*
                                                                         * Bit14
                                                                         */
#define RCC_CFG3_I2SSEL_0                       (1 << 14)               /*
                                                                         * Bit14*/
#define RCC_CFG3_I2SSEL_1                       (1 << 15)               /*
                                                                         * Bit15*/

#define RCC_CFG3_I2SSEL_I2S1                    ((uint32_t)0x00000000U)
#define RCC_CFG3_I2SSEL_I2S2                    ((uint32_t)0x00004000U)
#define RCC_CFG3_I2SSEL_I2S3                    ((uint32_t)0x00008000U)
#define RCC_CFG3_I2SSEL_I2S4                    ((uint32_t)0x0000C000U)

#define RCC_CFG3_PERSW                          (1 << 12)               /*
                                                                         * Bit12
                                                                         */
#define RCC_CFG3_PERSW_0                        (1 << 12)               /*
                                                                         * Bit12*/
#define RCC_CFG3_PERSW_1                        (1 << 13)               /*
                                                                         * Bit13*/
#define RCC_CFG3_PERSW_HSI                      (1 << 12)
#define RCC_CFG3_PERSW_MSI                      (2 << 12)
#define RCC_CFG3_PERSW_HSE                      (3 << 12)
#define RCC_CFG3_M7STCLKDIV_MASK                (0xf << 4)
#define RCC_CFG3_M7STCLKDIV                     (1 << 4)                /*
                                                                         * Bit4
                                                                         */
#define RCC_CFG3_M7STCLKDIV_0                   (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_CFG3_M7STCLKDIV_1                   (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_CFG3_M7STCLKDIV_2                   (1 << 6)                /*
                                                                         * Bit6*/
#define RCC_CFG3_M7STCLKDIV_3                   (1 << 7)                /*
                                                                         * Bit7*/

#define RCC_CFG3_M7STCLKDIV_DIV1                ((uint32_t)0x00000000U)
#define RCC_CFG3_M7STCLKDIV_DIV2                ((uint32_t)0x00000010U)
#define RCC_CFG3_M7STCLKDIV_DIV4                ((uint32_t)0x00000020U)
#define RCC_CFG3_M7STCLKDIV_DIV8                ((uint32_t)0x00000040U)
#define RCC_CFG3_M7STCLKDIV_DIV16               ((uint32_t)0x00000070U)
#define RCC_CFG3_M7STCLKDIV_DIV32               ((uint32_t)0x00000080U)
#define RCC_CFG3_M7STCLKDIV_DIV64               ((uint32_t)0x00000090U)
#define RCC_CFG3_M7STCLKDIV_DIV128              ((uint32_t)0x000000A0U)
#define RCC_CFG3_M7STCLKDIV_DIV256              ((uint32_t)0x000000B0U)
#define RCC_CFG3_M7STCLKDIV_DIV512              ((uint32_t)0x000000C0U)

#define RCC_CFG3_M4STCLKDIV                     ((uint32_t)0x0000000FU) /* Bit
                                                                         */
#define RCC_CFG3_M4STCLKDIV_0                   (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_CFG3_M4STCLKDIV_1                   (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_CFG3_M4STCLKDIV_2                   (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_CFG3_M4STCLKDIV_3                   (1 << 3)                /*
                                                                         * Bit3*/

/******** Bit definition for RCC_CFG4 register  ********/
#define RCC_CFG4_AHB1CLKEN                      (1 << 31)                   /*
                                                                             * Bit31
                                                                             */
#define RCC_CFG4_AHB2CLKEN                      (1 << 30)                   /*
                                                                             * Bit30
                                                                             */
#define RCC_CFG4_AHB3CLKEN                      (1 << 29)                   /*
                                                                             * Bit29
                                                                             */
#define RCC_CFG4_AHB5CLKEN                      (1 << 27)                   /*
                                                                             * Bit27
                                                                             */
#define RCC_CFG4_AHB6CLKEN                      (1 << 26)                   /*
                                                                             * Bit26
                                                                             */
#define RCC_CFG4_AXICLKEN                       (1 << 23)                   /*
                                                                             * Bit23
                                                                             */
#define RCC_CFG4_APB1CLKEN                      (1 << 22)                   /*
                                                                             * Bit22
                                                                             */
#define RCC_CFG4_APB2CLKEN                      (1 << 21)                   /*
                                                                             * Bit21
                                                                             */
#define RCC_CFG4_APB5CLKEN                      (1 << 20)                   /*
                                                                             * Bit20
                                                                             */
#define RCC_CFG4_APB6CLKEN                      (1 << 19)                   /*
                                                                             * Bit19
                                                                             */
#define RCC_CFG4_AHB9CLKEN                      (1 << 18)                   /*
                                                                             * Bit18
                                                                             */
#define RCC_CFG4_AXIMM7GCLKEN                   (1 << 17)                   /*
                                                                             * Bit17
                                                                             */
#define RCC_CFG4_AXIMM4GCLKEN                   (1 << 16)                   /*
                                                                             * Bit16
                                                                             */
#define RCC_CFG4_HSICGEN                        (1 << 15)                   /*
                                                                             * Bit15
                                                                             */
#define RCC_CFG4_HSIKERCGEN                     (1 << 14)                   /*
                                                                             * Bit14
                                                                             */
#define RCC_CFG4_HSECGEN                        (1 << 13)                   /*
                                                                             * Bit13
                                                                             */
#define RCC_CFG4_HSEKERCGEN                     (1 << 12)                   /*
                                                                             * Bit12
                                                                             */
#define RCC_CFG4_MSICGEN                        (1 << 11)                   /*
                                                                             * Bit11
                                                                             */
#define RCC_CFG4_MSIKERCGEN                     (1 << 10)                   /*
                                                                             * Bit10
                                                                             */
#define RCC_CFG4_AXIMM7CLKEN                    (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_CFG4_AXIGCLKEN                      (1 << 7)                    /*
                                                                             * Bit7
                                                                             */
#define RCC_CFG4_AXIMM4CLKEN                    (1 << 6)                    /*
                                                                             * Bit6
                                                                             */
#define RCC_CFG4_DCMUM7CLKEN                    (1 << 5)                    /*
                                                                             * Bit5
                                                                             */
#define RCC_CFG4_DCMUM4CLKEN                    (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_CFG4_AHBM1CLKEN                     (1 << 3)                    /*
                                                                             * Bit3
                                                                             */
#define RCC_CFG4_AHBM2CLKEN                     (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_CFG4_AHBM3CLKEN                     (1 << 1)                    /*
                                                                             * Bit1
                                                                             */
#define RCC_CFG4_DCMURST                        (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

/******** Bit definition for RCC_CFG5 register  ********/
#define RCC_CFG5_RTCHSEDIV                      (1 << 24)               /*
                                                                         * Bit24
                                                                         */
#define RCC_CFG5_RTCHSEDIV_0                    (1 << 24)               /*
                                                                         * Bit24*/
#define RCC_CFG5_RTCHSEDIV_1                    (1 << 25)               /*
                                                                         * Bit25*/
#define RCC_CFG5_RTCHSEDIV_2                    (1 << 26)               /*
                                                                         * Bit26*/
#define RCC_CFG5_RTCHSEDIV_3                    (1 << 27)               /*
                                                                         * Bit27*/
#define RCC_CFG5_RTCHSEDIV_4                    (1 << 28)               /*
                                                                         * Bit28*/
#define RCC_CFG5_RTCHSEDIV_5                    (1 << 29)               /*
                                                                         * Bit29*/

#define RCC_CFG5_RTCHSEDIV_DIV1                 ((uint32_t)0x01000000U)
#define RCC_CFG5_RTCHSEDIV_DIV2                 ((uint32_t)0x02000000U)
#define RCC_CFG5_RTCHSEDIV_DIV3                 ((uint32_t)0x03000000U)
#define RCC_CFG5_RTCHSEDIV_DIV4                 ((uint32_t)0x04000000U)
#define RCC_CFG5_RTCHSEDIV_DIV5                 ((uint32_t)0x05000000U)
#define RCC_CFG5_RTCHSEDIV_DIV6                 ((uint32_t)0x06000000U)
#define RCC_CFG5_RTCHSEDIV_DIV7                 ((uint32_t)0x07000000U)
#define RCC_CFG5_RTCHSEDIV_DIV8                 ((uint32_t)0x08000000U)
#define RCC_CFG5_RTCHSEDIV_DIV9                 ((uint32_t)0x09000000U)
#define RCC_CFG5_RTCHSEDIV_DIV10                ((uint32_t)0x0A000000U)
#define RCC_CFG5_RTCHSEDIV_DIV11                ((uint32_t)0x0B000000U)
#define RCC_CFG5_RTCHSEDIV_DIV12                ((uint32_t)0x0C000000U)
#define RCC_CFG5_RTCHSEDIV_DIV13                ((uint32_t)0x0D000000U)
#define RCC_CFG5_RTCHSEDIV_DIV14                ((uint32_t)0x0E000000U)
#define RCC_CFG5_RTCHSEDIV_DIV15                ((uint32_t)0x0F000000U)
#define RCC_CFG5_RTCHSEDIV_DIV16                ((uint32_t)0x10000000U)
#define RCC_CFG5_RTCHSEDIV_DIV17                ((uint32_t)0x11000000U)
#define RCC_CFG5_RTCHSEDIV_DIV18                ((uint32_t)0x12000000U)
#define RCC_CFG5_RTCHSEDIV_DIV19                ((uint32_t)0x13000000U)
#define RCC_CFG5_RTCHSEDIV_DIV20                ((uint32_t)0x14000000U)
#define RCC_CFG5_RTCHSEDIV_DIV21                ((uint32_t)0x15000000U)
#define RCC_CFG5_RTCHSEDIV_DIV22                ((uint32_t)0x16000000U)
#define RCC_CFG5_RTCHSEDIV_DIV23                ((uint32_t)0x17000000U)
#define RCC_CFG5_RTCHSEDIV_DIV24                ((uint32_t)0x18000000U)
#define RCC_CFG5_RTCHSEDIV_DIV25                ((uint32_t)0x19000000U)
#define RCC_CFG5_RTCHSEDIV_DIV26                ((uint32_t)0x1A000000U)
#define RCC_CFG5_RTCHSEDIV_DIV27                ((uint32_t)0x1B000000U)
#define RCC_CFG5_RTCHSEDIV_DIV28                ((uint32_t)0x1C000000U)
#define RCC_CFG5_RTCHSEDIV_DIV29                ((uint32_t)0x1D000000U)
#define RCC_CFG5_RTCHSEDIV_DIV30                ((uint32_t)0x1E000000U)
#define RCC_CFG5_RTCHSEDIV_DIV31                ((uint32_t)0x1F000000U)
#define RCC_CFG5_RTCHSEDIV_DIV32                ((uint32_t)0x20000000U)
#define RCC_CFG5_RTCHSEDIV_DIV33                ((uint32_t)0x21000000U)
#define RCC_CFG5_RTCHSEDIV_DIV34                ((uint32_t)0x22000000U)
#define RCC_CFG5_RTCHSEDIV_DIV35                ((uint32_t)0x23000000U)
#define RCC_CFG5_RTCHSEDIV_DIV36                ((uint32_t)0x24000000U)
#define RCC_CFG5_RTCHSEDIV_DIV37                ((uint32_t)0x25000000U)
#define RCC_CFG5_RTCHSEDIV_DIV38                ((uint32_t)0x26000000U)
#define RCC_CFG5_RTCHSEDIV_DIV39                ((uint32_t)0x27000000U)
#define RCC_CFG5_RTCHSEDIV_DIV40                ((uint32_t)0x28000000U)
#define RCC_CFG5_RTCHSEDIV_DIV41                ((uint32_t)0x29000000U)
#define RCC_CFG5_RTCHSEDIV_DIV42                ((uint32_t)0x2A000000U)
#define RCC_CFG5_RTCHSEDIV_DIV43                ((uint32_t)0x2B000000U)
#define RCC_CFG5_RTCHSEDIV_DIV44                ((uint32_t)0x2C000000U)
#define RCC_CFG5_RTCHSEDIV_DIV45                ((uint32_t)0x2D000000U)
#define RCC_CFG5_RTCHSEDIV_DIV46                ((uint32_t)0x2E000000U)
#define RCC_CFG5_RTCHSEDIV_DIV47                ((uint32_t)0x2F000000U)
#define RCC_CFG5_RTCHSEDIV_DIV48                ((uint32_t)0x30000000U)
#define RCC_CFG5_RTCHSEDIV_DIV49                ((uint32_t)0x31000000U)
#define RCC_CFG5_RTCHSEDIV_DIV50                ((uint32_t)0x32000000U)
#define RCC_CFG5_RTCHSEDIV_DIV51                ((uint32_t)0x33000000U)
#define RCC_CFG5_RTCHSEDIV_DIV52                ((uint32_t)0x34000000U)
#define RCC_CFG5_RTCHSEDIV_DIV53                ((uint32_t)0x35000000U)
#define RCC_CFG5_RTCHSEDIV_DIV54                ((uint32_t)0x36000000U)
#define RCC_CFG5_RTCHSEDIV_DIV55                ((uint32_t)0x37000000U)
#define RCC_CFG5_RTCHSEDIV_DIV56                ((uint32_t)0x38000000U)
#define RCC_CFG5_RTCHSEDIV_DIV57                ((uint32_t)0x39000000U)
#define RCC_CFG5_RTCHSEDIV_DIV58                ((uint32_t)0x3A000000U)
#define RCC_CFG5_RTCHSEDIV_DIV59                ((uint32_t)0x3B000000U)
#define RCC_CFG5_RTCHSEDIV_DIV60                ((uint32_t)0x3C000000U)
#define RCC_CFG5_RTCHSEDIV_DIV61                ((uint32_t)0x3D000000U)
#define RCC_CFG5_RTCHSEDIV_DIV62                ((uint32_t)0x3E000000U)
#define RCC_CFG5_RTCHSEDIV_DIV63                ((uint32_t)0x3F000000U)

#define RCC_CFG5_M7SRAM5EN                      (1 << 23)               /*
                                                                         * Bit23
                                                                         */
#define RCC_CFG5_M4SRAM5EN                      (1 << 22)               /*
                                                                         * Bit22
                                                                         */
#define RCC_CFG5_M7SRAM5LPEN                    (1 << 21)               /*
                                                                         * Bit21
                                                                         */
#define RCC_CFG5_M4SRAM5LPEN                    (1 << 20)               /*
                                                                         * Bit20
                                                                         */
#define RCC_CFG5_DCDCLKEN                       (1 << 16)               /*
                                                                         * Bit16
                                                                         */
#define RCC_CFG5_TRNGEN                         (1 << 13)               /*
                                                                         * Bit13
                                                                         */
#define RCC_CFG5_TRNGSEL                        (1 << 12)               /*
                                                                         * Bit12
                                                                         */

#define RCC_CFG5_TRNGDIV                        (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_CFG5_TRNGDIV_0                      (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_CFG5_TRNGDIV_1                      (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_CFG5_TRNGDIV_2                      (1 << 10)               /*
                                                                         * Bit10*/
#define RCC_CFG5_TRNGDIV_3                      (1 << 11)               /*
                                                                         * Bit11*/

#define RCC_CFG5_TRNGDIV_DIV1                   ((uint32_t)0x00000000U)
#define RCC_CFG5_TRNGDIV_DIV2                   ((uint32_t)0x00000100U)
#define RCC_CFG5_TRNGDIV_DIV4                   ((uint32_t)0x00000200U)
#define RCC_CFG5_TRNGDIV_DIV8                   ((uint32_t)0x00000400U)
#define RCC_CFG5_TRNGDIV_DIV16                  ((uint32_t)0x00000700U)
#define RCC_CFG5_TRNGDIV_DIV32                  ((uint32_t)0x00000800U)
#define RCC_CFG5_TRNGDIV_DIV64                  ((uint32_t)0x00000900U)
#define RCC_CFG5_TRNGDIV_DIV128                 ((uint32_t)0x00000A00U)
#define RCC_CFG5_TRNGDIV_DIV256                 ((uint32_t)0x00000B00U)
#define RCC_CFG5_TRNGDIV_DIV512                 ((uint32_t)0x00000C00U)

#define RCC_CFG5_DSIHSEDIV                      (1 << 4)                /*
                                                                         * Bit4
                                                                         */
#define RCC_CFG5_DSIHSEDIV_0                    (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_CFG5_DSIHSEDIV_1                    (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_CFG5_DSIHSEDIV_2                    (1 << 6)                /*
                                                                         * Bit6*/
#define RCC_CFG5_DSIHSEDIV_3                    (1 << 7)                /*
                                                                         * Bit7*/

#define RCC_CFG5_RTCHSIDIV                      ((uint32_t)0x0000000FU) /* Bit
                                                                         */
#define RCC_CFG5_RTCHSIDIV_0                    (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_CFG5_RTCHSIDIV_1                    (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_CFG5_RTCHSIDIV_2                    (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_CFG5_RTCHSIDIV_3                    (1 << 3)                /*
                                                                         * Bit3*/

#define RCC_CFG5_RTCHSIDIV_DIV1                 ((uint32_t)0x00000000U)
#define RCC_CFG5_RTCHSIDIV_DIV2                 ((uint32_t)0x00000001U)
#define RCC_CFG5_RTCHSIDIV_DIV4                 ((uint32_t)0x00000002U)
#define RCC_CFG5_RTCHSIDIV_DIV8                 ((uint32_t)0x00000004U)
#define RCC_CFG5_RTCHSIDIV_DIV16                ((uint32_t)0x00000007U)
#define RCC_CFG5_RTCHSIDIV_DIV32                ((uint32_t)0x00000008U)
#define RCC_CFG5_RTCHSIDIV_DIV64                ((uint32_t)0x00000009U)
#define RCC_CFG5_RTCHSIDIV_DIV128               ((uint32_t)0x0000000AU)
#define RCC_CFG5_RTCHSIDIV_DIV256               ((uint32_t)0x0000000BU)
#define RCC_CFG5_RTCHSIDIV_DIV512               ((uint32_t)0x0000000CU)
/******** Bit definition for RCC_M4RSTREL register  ********/
#define RCC_M4RSTREL_EN                         (1 << 0)                      /*
                                                                               * Bit0
                                                                               */

/******** Bit definition for RCC_LSERDDL register  ********/
#define RCC_LSERDDL_DELAY                       ((uint32_t)0xFFFFFFFFU) /* Bit
                                                                         */
#define RCC_LSERDDL_DELAY_0                     (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_LSERDDL_DELAY_1                     (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_LSERDDL_DELAY_2                     (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_LSERDDL_DELAY_3                     (1 << 3)                /*
                                                                         * Bit3*/
#define RCC_LSERDDL_DELAY_4                     (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_LSERDDL_DELAY_5                     (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_LSERDDL_DELAY_6                     (1 << 6)                /*
                                                                         * Bit6*/
#define RCC_LSERDDL_DELAY_7                     (1 << 7)                /*
                                                                         * Bit7*/
#define RCC_LSERDDL_DELAY_8                     (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_LSERDDL_DELAY_9                     (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_LSERDDL_DELAY_10                    (1 << 10)               /*
                                                                         * Bit10*/
#define RCC_LSERDDL_DELAY_11                    (1 << 11)               /*
                                                                         * Bit11*/
#define RCC_LSERDDL_DELAY_12                    (1 << 12)               /*
                                                                         * Bit12*/
#define RCC_LSERDDL_DELAY_13                    (1 << 13)               /*
                                                                         * Bit13*/
#define RCC_LSERDDL_DELAY_14                    (1 << 14)               /*
                                                                         * Bit14*/
#define RCC_LSERDDL_DELAY_15                    (1 << 15)               /*
                                                                         * Bit15*/
#define RCC_LSERDDL_DELAY_16                    (1 << 16)               /*
                                                                         * Bit16*/
#define RCC_LSERDDL_DELAY_17                    (1 << 17)               /*
                                                                         * Bit17*/
#define RCC_LSERDDL_DELAY_18                    (1 << 18)               /*
                                                                         * Bit18*/
#define RCC_LSERDDL_DELAY_19                    (1 << 19)               /*
                                                                         * Bit19*/
#define RCC_LSERDDL_DELAY_20                    (1 << 20)               /*
                                                                         * Bit20*/
#define RCC_LSERDDL_DELAY_21                    (1 << 21)               /*
                                                                         * Bit21*/
#define RCC_LSERDDL_DELAY_22                    (1 << 22)               /*
                                                                         * Bit22*/
#define RCC_LSERDDL_DELAY_23                    (1 << 23)               /*
                                                                         * Bit23*/
#define RCC_LSERDDL_DELAY_24                    (1 << 24)               /*
                                                                         * Bit24*/
#define RCC_LSERDDL_DELAY_25                    (1 << 25)               /*
                                                                         * Bit25*/
#define RCC_LSERDDL_DELAY_26                    (1 << 26)               /*
                                                                         * Bit26*/
#define RCC_LSERDDL_DELAY_27                    (1 << 27)               /*
                                                                         * Bit27*/
#define RCC_LSERDDL_DELAY_28                    (1 << 28)               /*
                                                                         * Bit28*/
#define RCC_LSERDDL_DELAY_29                    (1 << 29)               /*
                                                                         * Bit29*/
#define RCC_LSERDDL_DELAY_30                    (1 << 30)               /*
                                                                         * Bit30*/
#define RCC_LSERDDL_DELAY_31                    (1 << 31)               /*
                                                                         * Bit31*/

/******** Bit definition for RCC_MSIRDDL register  ********/
#define RCC_MSIRDDL_DELAY                       ((uint32_t)0xFFFFFFFFU) /* Bit
                                                                         */
#define RCC_MSIRDDL_DELAY_0                     (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_MSIRDDL_DELAY_1                     (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_MSIRDDL_DELAY_2                     (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_MSIRDDL_DELAY_3                     (1 << 3)                /*
                                                                         * Bit3*/
#define RCC_MSIRDDL_DELAY_4                     (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_MSIRDDL_DELAY_5                     (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_MSIRDDL_DELAY_6                     (1 << 6)                /*
                                                                         * Bit6*/
#define RCC_MSIRDDL_DELAY_7                     (1 << 7)                /*
                                                                         * Bit7*/
#define RCC_MSIRDDL_DELAY_8                     (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_MSIRDDL_DELAY_9                     (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_MSIRDDL_DELAY_10                    (1 << 10)               /*
                                                                         * Bit10*/
#define RCC_MSIRDDL_DELAY_11                    (1 << 11)               /*
                                                                         * Bit11*/
#define RCC_MSIRDDL_DELAY_12                    (1 << 12)               /*
                                                                         * Bit12*/
#define RCC_MSIRDDL_DELAY_13                    (1 << 13)               /*
                                                                         * Bit13*/
#define RCC_MSIRDDL_DELAY_14                    (1 << 14)               /*
                                                                         * Bit14*/
#define RCC_MSIRDDL_DELAY_15                    (1 << 15)               /*
                                                                         * Bit15*/
#define RCC_MSIRDDL_DELAY_16                    (1 << 16)               /*
                                                                         * Bit16*/
#define RCC_MSIRDDL_DELAY_17                    (1 << 17)               /*
                                                                         * Bit17*/
#define RCC_MSIRDDL_DELAY_18                    (1 << 18)               /*
                                                                         * Bit18*/
#define RCC_MSIRDDL_DELAY_19                    (1 << 19)               /*
                                                                         * Bit19*/
#define RCC_MSIRDDL_DELAY_20                    (1 << 20)               /*
                                                                         * Bit20*/
#define RCC_MSIRDDL_DELAY_21                    (1 << 21)               /*
                                                                         * Bit21*/
#define RCC_MSIRDDL_DELAY_22                    (1 << 22)               /*
                                                                         * Bit22*/
#define RCC_MSIRDDL_DELAY_23                    (1 << 23)               /*
                                                                         * Bit23*/
#define RCC_MSIRDDL_DELAY_24                    (1 << 24)               /*
                                                                         * Bit24*/
#define RCC_MSIRDDL_DELAY_25                    (1 << 25)               /*
                                                                         * Bit25*/
#define RCC_MSIRDDL_DELAY_26                    (1 << 26)               /*
                                                                         * Bit26*/
#define RCC_MSIRDDL_DELAY_27                    (1 << 27)               /*
                                                                         * Bit27*/
#define RCC_MSIRDDL_DELAY_28                    (1 << 28)               /*
                                                                         * Bit28*/
#define RCC_MSIRDDL_DELAY_29                    (1 << 29)               /*
                                                                         * Bit29*/
#define RCC_MSIRDDL_DELAY_30                    (1 << 30)               /*
                                                                         * Bit30*/
#define RCC_MSIRDDL_DELAY_31                    (1 << 31)               /*
                                                                         * Bit31*/

/******** Bit definition for RCC_HSERDDL register  ********/
#define RCC_HSERDDL_DELAY                       ((uint32_t)0xFFFFFFFFU) /* Bit
                                                                         */
#define RCC_HSERDDL_DELAY_0                     (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_HSERDDL_DELAY_1                     (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_HSERDDL_DELAY_2                     (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_HSERDDL_DELAY_3                     (1 << 3)                /*
                                                                         * Bit3*/
#define RCC_HSERDDL_DELAY_4                     (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_HSERDDL_DELAY_5                     (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_HSERDDL_DELAY_6                     (1 << 6)                /*
                                                                         * Bit6*/
#define RCC_HSERDDL_DELAY_7                     (1 << 7)                /*
                                                                         * Bit7*/
#define RCC_HSERDDL_DELAY_8                     (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_HSERDDL_DELAY_9                     (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_HSERDDL_DELAY_10                    (1 << 10)               /*
                                                                         * Bit10*/
#define RCC_HSERDDL_DELAY_11                    (1 << 11)               /*
                                                                         * Bit11*/
#define RCC_HSERDDL_DELAY_12                    (1 << 12)               /*
                                                                         * Bit12*/
#define RCC_HSERDDL_DELAY_13                    (1 << 13)               /*
                                                                         * Bit13*/
#define RCC_HSERDDL_DELAY_14                    (1 << 14)               /*
                                                                         * Bit14*/
#define RCC_HSERDDL_DELAY_15                    (1 << 15)               /*
                                                                         * Bit15*/
#define RCC_HSERDDL_DELAY_16                    (1 << 16)               /*
                                                                         * Bit16*/
#define RCC_HSERDDL_DELAY_17                    (1 << 17)               /*
                                                                         * Bit17*/
#define RCC_HSERDDL_DELAY_18                    (1 << 18)               /*
                                                                         * Bit18*/
#define RCC_HSERDDL_DELAY_19                    (1 << 19)               /*
                                                                         * Bit19*/
#define RCC_HSERDDL_DELAY_20                    (1 << 20)               /*
                                                                         * Bit20*/
#define RCC_HSERDDL_DELAY_21                    (1 << 21)               /*
                                                                         * Bit21*/
#define RCC_HSERDDL_DELAY_22                    (1 << 22)               /*
                                                                         * Bit22*/
#define RCC_HSERDDL_DELAY_23                    (1 << 23)               /*
                                                                         * Bit23*/
#define RCC_HSERDDL_DELAY_24                    (1 << 24)               /*
                                                                         * Bit24*/
#define RCC_HSERDDL_DELAY_25                    (1 << 25)               /*
                                                                         * Bit25*/
#define RCC_HSERDDL_DELAY_26                    (1 << 26)               /*
                                                                         * Bit26*/
#define RCC_HSERDDL_DELAY_27                    (1 << 27)               /*
                                                                         * Bit27*/
#define RCC_HSERDDL_DELAY_28                    (1 << 28)               /*
                                                                         * Bit28*/
#define RCC_HSERDDL_DELAY_29                    (1 << 29)               /*
                                                                         * Bit29*/
#define RCC_HSERDDL_DELAY_30                    (1 << 30)               /*
                                                                         * Bit30*/
#define RCC_HSERDDL_DELAY_31                    (1 << 31)               /*
                                                                         * Bit31*/

/******** Bit definition for RCC_PLLSFTLK register  ********/
#define RCC_PLLSFTLK_SDRAMDLSEL                 (1 << 25)                   /*
                                                                             * Bit25
                                                                             */
#define RCC_PLLSFTLK_SDRAMDLSEL_0               (1 << 25)                   /*
                                                                             * Bit25*/
#define RCC_PLLSFTLK_SDRAMDLSEL_1               (1 << 26)                   /*
                                                                             * Bit26*/
#define RCC_PLLSFTLK_SDRAMDLSEL_2               (1 << 27)                   /*
                                                                             * Bit27*/
#define RCC_PLLSFTLK_SDRAMDLSEL_3               (1 << 28)                   /*
                                                                             * Bit28*/

#define RCC_PLLSFTLK_SDRAMDLSEL_0_2NS           ((uint32_t)0x00000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_0_4NS           ((uint32_t)0x02000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_0_6NS           ((uint32_t)0x04000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_0_8NS           ((uint32_t)0x06000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_1_0NS           ((uint32_t)0x08000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_1_2NS           ((uint32_t)0x0A000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_1_4NS           ((uint32_t)0x0C000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_1_6NS           ((uint32_t)0x0E000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_1_8NS           ((uint32_t)0x10000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_2_0NS           ((uint32_t)0x12000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_2_2NS           ((uint32_t)0x14000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_2_4NS           ((uint32_t)0x16000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_2_6NS           ((uint32_t)0x18000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_2_8NS           ((uint32_t)0x1A000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_3_0NS           ((uint32_t)0x1C000000U)
#define RCC_PLLSFTLK_SDRAMDLSEL_3_2NS           ((uint32_t)0x1E000000U)

#define RCC_PLLSFTLK_SDRAMDLEN                  (1 << 24)                       /*
                                                                                 * Bit24
                                                                                 */
#define RCC_PLLSFTLK_SHRTIMAFERST               (1 << 5)                        /*
                                                                                 * Bit5
                                                                                 */
#define RCC_PLLSFTLK_SHRPLLSFTLK                (1 << 3)                        /*
                                                                                 * Bit3
                                                                                 */
#define RCC_PLLSFTLK_PLL3SFTLK                  (1 << 2)                        /*
                                                                                 * Bit2
                                                                                 */
#define RCC_PLLSFTLK_PLL2SFTLK                  (1 << 1)                        /*
                                                                                 * Bit1
                                                                                 */
#define RCC_PLLSFTLK_PLL1SFTLK                  (1 << 0)                        /*
                                                                                 * Bit0
                                                                                 */

/******** Bit definition for RCC_HSEOS register  ********/
#define RCC_HSEOS_HSEMAXPDTHR                   (1 << 24)               /*
                                                                         * Bit24
                                                                         */
#define RCC_HSEOS_HSEMAXPDTHR_0                 (1 << 24)               /*
                                                                         * Bit24*/
#define RCC_HSEOS_HSEMAXPDTHR_1                 (1 << 25)               /*
                                                                         * Bit25*/
#define RCC_HSEOS_HSEMAXPDTHR_2                 (1 << 26)               /*
                                                                         * Bit26*/
#define RCC_HSEOS_HSEMAXPDTHR_3                 (1 << 27)               /*
                                                                         * Bit27*/
#define RCC_HSEOS_HSEMAXPDTHR_4                 (1 << 28)               /*
                                                                         * Bit28*/
#define RCC_HSEOS_HSEMAXPDTHR_5                 (1 << 29)               /*
                                                                         * Bit29*/
#define RCC_HSEOS_HSEMAXPDTHR_6                 (1 << 30)               /*
                                                                         * Bit30*/
#define RCC_HSEOS_HSEMAXPDTHR_7                 (1 << 31)               /*
                                                                         * Bit31*/
#define RCC_HSEOS_HSEMINNDTHR                   (1 << 16)               /*
                                                                         * Bit16
                                                                         */
#define RCC_HSEOS_HSEMINNDTHR_0                 (1 << 16)               /*
                                                                         * Bit16*/
#define RCC_HSEOS_HSEMINNDTHR_1                 (1 << 17)               /*
                                                                         * Bit17*/
#define RCC_HSEOS_HSEMINNDTHR_2                 (1 << 18)               /*
                                                                         * Bit18*/
#define RCC_HSEOS_HSEMINNDTHR_3                 (1 << 19)               /*
                                                                         * Bit19*/
#define RCC_HSEOS_HSEMINNDTHR_4                 (1 << 20)               /*
                                                                         * Bit20*/
#define RCC_HSEOS_HSEMINNDTHR_5                 (1 << 21)               /*
                                                                         * Bit21*/
#define RCC_HSEOS_HSEMINNDTHR_6                 (1 << 22)               /*
                                                                         * Bit22*/
#define RCC_HSEOS_HSEMINNDTHR_7                 (1 << 23)               /*
                                                                         * Bit23*/
#define RCC_HSEOS_HSEOSTHR                      (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_HSEOS_HSEOSTHR_0                    (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_HSEOS_HSEOSTHR_1                    (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_HSEOS_HSEOSTHR_2                    (1 << 10)               /*
                                                                         * Bit10*/
#define RCC_HSEOS_HSEOSTHR_3                    (1 << 11)               /*
                                                                         * Bit11*/
#define RCC_HSEOS_HSEOSTHR_4                    (1 << 12)               /*
                                                                         * Bit12*/
#define RCC_HSEOS_HSEOSTHR_5                    (1 << 13)               /*
                                                                         * Bit13*/
#define RCC_HSEOS_HSEOSTHR_6                    (1 << 14)               /*
                                                                         * Bit14*/
#define RCC_HSEOS_HSEOSTHR_7                    (1 << 15)               /*
                                                                         * Bit15*/
#define RCC_HSEOS_HSEMAXPDF                     (1 << 6)                /*
                                                                         * Bit6
                                                                         */
#define RCC_HSEOS_HSEMINNDF                     (1 << 5)                /*
                                                                         * Bit5
                                                                         */
#define RCC_HSEOS_HSEOSF                        (1 << 4)                /*
                                                                         * Bit4
                                                                         */
#define RCC_HSEOS_HSEMAXPDEN                    (1 << 2)                /*
                                                                         * Bit2
                                                                         */
#define RCC_HSEOS_HSEMINNDEN                    (1 << 1)                /*
                                                                         * Bit1
                                                                         */
#define RCC_HSEOS_HSEOSEN                       (1 << 0)                /*
                                                                         * Bit0
                                                                         */

/******** Bit definition for RCC_HSECAL register  ********/
#define RCC_HSECAL_HSECALCNTEN                  (1 << 17)               /*
                                                                         * Bit17
                                                                         */
#define RCC_HSECAL_HSECALCNTF                   (1 << 16)               /*
                                                                         * Bit16
                                                                         */
#define RCC_HSECAL_HSECALCNT                    (1 << 0)                /*
                                                                         * Bit0
                                                                         */
#define RCC_HSECAL_HSECALCNT_0                  (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_HSECAL_HSECALCNT_1                  (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_HSECAL_HSECALCNT_2                  (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_HSECAL_HSECALCNT_3                  (1 << 3)                /*
                                                                         * Bit3*/
#define RCC_HSECAL_HSECALCNT_4                  (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_HSECAL_HSECALCNT_5                  (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_HSECAL_HSECALCNT_6                  (1 << 6)                /*
                                                                         * Bit6*/
#define RCC_HSECAL_HSECALCNT_7                  (1 << 7)                /*
                                                                         * Bit7*/
#define RCC_HSECAL_HSECALCNT_8                  (1 << 8)                /*
                                                                         * Bit8*/
#define RCC_HSECAL_HSECALCNT_9                  (1 << 9)                /*
                                                                         * Bit9*/
#define RCC_HSECAL_HSECALCNT_10                 (1 << 10)               /*
                                                                         * Bit10*/
#define RCC_HSECAL_HSECALCNT_11                 (1 << 11)               /*
                                                                         * Bit11*/
#define RCC_HSECAL_HSECALCNT_12                 (1 << 12)               /*
                                                                         * Bit12*/
#define RCC_HSECAL_HSECALCNT_13                 (1 << 13)               /*
                                                                         * Bit13*/
#define RCC_HSECAL_HSECALCNT_14                 (1 << 14)               /*
                                                                         * Bit14*/
#define RCC_HSECAL_HSECALCNT_15                 (1 << 15)               /*
                                                                         * Bit15*/

/******** Bit definition for RCC_LSEOS register  ********/
#define RCC_LSEOS_LSECALCNTEN                   (1 << 25)               /*
                                                                         * Bit25
                                                                         */
#define RCC_LSEOS_LSECALCNTF                    (1 << 24)               /*
                                                                         * Bit24
                                                                         */
#define RCC_LSEOS_LSECALCNT                     (1 << 16)               /*
                                                                         * Bit16
                                                                         */
#define RCC_LSEOS_LSECALCNT_0                   (1 << 16)               /*
                                                                         * Bit16*/
#define RCC_LSEOS_LSECALCNT_1                   (1 << 17)               /*
                                                                         * Bit17*/
#define RCC_LSEOS_LSECALCNT_2                   (1 << 18)               /*
                                                                         * Bit18*/
#define RCC_LSEOS_LSECALCNT_3                   (1 << 19)               /*
                                                                         * Bit19*/
#define RCC_LSEOS_LSECALCNT_4                   (1 << 20)               /*
                                                                         * Bit20*/
#define RCC_LSEOS_LSECALCNT_5                   (1 << 21)               /*
                                                                         * Bit21*/
#define RCC_LSEOS_LSECALCNT_6                   (1 << 22)               /*
                                                                         * Bit22*/
#define RCC_LSEOS_LSECALCNT_7                   (1 << 23)               /*
                                                                         * Bit23*/
#define RCC_LSEOS_LSEOSF                        (1 << 9)                /*
                                                                         * Bit9
                                                                         */
#define RCC_LSEOS_LSEOSEN                       (1 << 8)                /*
                                                                         * Bit8
                                                                         */
#define RCC_LSEOS_LSEOSTHR                      ((uint32_t)0x000000FFU) /* Bit
                                                                         */
#define RCC_LSEOS_LSEOSTHR_0                    (1 << 0)                /*
                                                                         * Bit0*/
#define RCC_LSEOS_LSEOSTHR_1                    (1 << 1)                /*
                                                                         * Bit1*/
#define RCC_LSEOS_LSEOSTHR_2                    (1 << 2)                /*
                                                                         * Bit2*/
#define RCC_LSEOS_LSEOSTHR_3                    (1 << 3)                /*
                                                                         * Bit3*/
#define RCC_LSEOS_LSEOSTHR_4                    (1 << 4)                /*
                                                                         * Bit4*/
#define RCC_LSEOS_LSEOSTHR_5                    (1 << 5)                /*
                                                                         * Bit5*/
#define RCC_LSEOS_LSEOSTHR_6                    (1 << 6)                /*
                                                                         * Bit6*/
#define RCC_LSEOS_LSEOSTHR_7                    (1 << 7)                /*
                                                                         * Bit7*/

/******** Bit definition for RCC_PLLFD register  ********/
#define RCC_PLLFD_SHRPLLGF                      (1 << 11)                   /*
                                                                             * Bit11
                                                                             */
#define RCC_PLLFD_PLL3GF                        (1 << 10)                   /*
                                                                             * Bit10
                                                                             */
#define RCC_PLLFD_PLL2GF                        (1 << 9)                    /*
                                                                             * Bit9
                                                                             */
#define RCC_PLLFD_PLL1GF                        (1 << 8)                    /*
                                                                             * Bit8
                                                                             */
#define RCC_PLLFD_SHRPLLFF                      (1 << 7)                    /*
                                                                             * Bit7
                                                                             */
#define RCC_PLLFD_PLL3FF                        (1 << 6)                    /*
                                                                             * Bit6
                                                                             */
#define RCC_PLLFD_PLL2FF                        (1 << 5)                    /*
                                                                             * Bit5
                                                                             */
#define RCC_PLLFD_PLL1FF                        (1 << 4)                    /*
                                                                             * Bit4
                                                                             */
#define RCC_PLLFD_SHRPLLFEN                     (1 << 3)                    /*
                                                                             * Bit3
                                                                             */
#define RCC_PLLFD_PLL3FEN                       (1 << 2)                    /*
                                                                             * Bit2
                                                                             */
#define RCC_PLLFD_PLL2FEN                       (1 << 1)                    /*
                                                                             * Bit1
                                                                             */
#define RCC_PLLFD_PLL1FEN                       (1 << 0)                    /*
                                                                             * Bit0
                                                                             */

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_RCC_H */
