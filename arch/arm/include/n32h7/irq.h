/****************************************************************************
 * arch/arm/include/n32h7/irq.h
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

/* This file should never be included directly but, rather, only indirectly
 * through nuttx/irq.h
 */

#ifndef __ARCH_ARM_INCLUDE_N32H7_IRQ_H
#define __ARCH_ARM_INCLUDE_N32H7_IRQ_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Pre-processor Prototypes
 ****************************************************************************/

/* IRQ numbers.  The IRQ number corresponds vector number and hence map
 * directly to bits in the NVIC.  This does, however, waste several words of
 * memory in the IRQ to handle mapping tables.
 */

/* Processor Exceptions (vectors 0-15) */

#define N32_IRQ_RESERVED       (0) /* Reserved vector (only used with CONFIG_DEBUG_FEATURES) */
                                     /* Vector  0: Reset stack pointer value */
                                     /* Vector  1: Reset (not handler as an IRQ) */
#define N32_IRQ_NMI            (2) /* Vector  2: Non-Maskable Interrupt (NMI) */
#define N32_IRQ_HARDFAULT      (3) /* Vector  3: Hard fault */
#define N32_IRQ_MEMFAULT       (4) /* Vector  4: Memory management (MPU) */
#define N32_IRQ_BUSFAULT       (5) /* Vector  5: Bus fault */
#define N32_IRQ_USAGEFAULT     (6) /* Vector  6: Usage fault */
                                     /* Vectors 7-10: Reserved */
#define N32_IRQ_SVCALL        (11) /* Vector 11: SVC call */
#define N32_IRQ_DBGMONITOR    (12) /* Vector 12: Debug Monitor */
                                     /* Vector 13: Reserved */
#define N32_IRQ_PENDSV        (14) /* Vector 14: Pendable system service request */
#define N32_IRQ_SYSTICK       (15) /* Vector 15: System tick */

/* IRQ numbers.  The IRQ number corresponds vector number and hence map
 * directly to bits in the NVIC.  This does, however, waste several words of
 * memory in the IRQ to handle mapping tables.
 *
 * Processor Exceptions (vectors 0-15).  These common definitions can be
 * found in the file nuttx/arch/arm/include/stm32h7/irq.h which includes
 * this file
 *
 * External interrupts (vectors >= 16)
 */

#define N32_IRQ_FIRST         (16) /* Vector number of the first external interrupt */

#define N32_IRQ_WWDG1         (N32_IRQ_FIRST + 0) /* WWDG1 interrupt */
#define N32_IRQ_WWDG2         (N32_IRQ_FIRST + 0) /* WWDG2 interrupt */
#define N32_IRQ_PVD           (N32_IRQ_FIRST + 1) /* PVD through EXTI line 16 */
#define N32_RTC_TAMPER        (N32_IRQ_FIRST + 2) /* RTC tamper, timestamp or CSS LSE or RTC OVERFLOW or LSICSDS through EXTI line 18 */
#define N32_RTC_WKUP          (N32_IRQ_FIRST + 3) /* RTC Wakeup interrupt through EXTI line 19 */
#define N32_RCC               (N32_IRQ_FIRST + 4)
#define N32_EXTI0             (N32_IRQ_FIRST + 5)
#define N32_EXTI1             (N32_IRQ_FIRST + 6)
#define N32_EXTI2             (N32_IRQ_FIRST + 7)
#define N32_EXTI3             (N32_IRQ_FIRST + 8)
#define N32_EXTI4             (N32_IRQ_FIRST + 9)
#define N32_EXTI9_5           (N32_IRQ_FIRST + 10)
#define N32_EXTI5_10          (N32_IRQ_FIRST + 11)
#define N32_DMA1_CH0          (N32_IRQ_FIRST + 12)
#define N32_DMA1_CH1          (N32_IRQ_FIRST + 13)
#define N32_DMA1_CH2          (N32_IRQ_FIRST + 14)
#define N32_DMA1_CH3          (N32_IRQ_FIRST + 15)
#define N32_DMA1_CH4          (N32_IRQ_FIRST + 16)
#define N32_DMA1_CH5          (N32_IRQ_FIRST + 17)
#define N32_DMA1_CH6          (N32_IRQ_FIRST + 18)
#define N32_DMA1_CH7          (N32_IRQ_FIRST + 19)
#define N32_DMA2_CH0          (N32_IRQ_FIRST + 20)
#define N32_DMA2_CH1          (N32_IRQ_FIRST + 21)
#define N32_DMA2_CH2          (N32_IRQ_FIRST + 22)
#define N32_DMA2_CH3          (N32_IRQ_FIRST + 23)
#define N32_DMA2_CH4          (N32_IRQ_FIRST + 24)
#define N32_DMA2_CH5          (N32_IRQ_FIRST + 25)
#define N32_DMA2_CH6          (N32_IRQ_FIRST + 26)
#define N32_DMA2_CH7          (N32_IRQ_FIRST + 27)
#define N32_DMA3_CH0          (N32_IRQ_FIRST + 28)
#define N32_DMA3_CH1          (N32_IRQ_FIRST + 29)
#define N32_DMA3_CH2          (N32_IRQ_FIRST + 30)
#define N32_DMA3_CH3          (N32_IRQ_FIRST + 31)
#define N32_DMA3_CH4          (N32_IRQ_FIRST + 32)
#define N32_DMA3_CH5          (N32_IRQ_FIRST + 33)
#define N32_DMA3_CH6          (N32_IRQ_FIRST + 34)
#define N32_DMA3_CH7          (N32_IRQ_FIRST + 35)
#define N32_MDMA_CH0          (N32_IRQ_FIRST + 36)
#define N32_MDMA_CH1          (N32_IRQ_FIRST + 37)
#define N32_MDMA_CH2          (N32_IRQ_FIRST + 38)
#define N32_MDMA_CH3          (N32_IRQ_FIRST + 39)
#define N32_MDMA_CH4          (N32_IRQ_FIRST + 40)
#define N32_MDMA_CH5          (N32_IRQ_FIRST + 41)
#define N32_MDMA_CH6          (N32_IRQ_FIRST + 42)
#define N32_MDMA_CH7          (N32_IRQ_FIRST + 43)
#define N32_MDMA_CH8          (N32_IRQ_FIRST + 44)
#define N32_MDMA_CH9          (N32_IRQ_FIRST + 45)
#define N32_MDMA_CH10         (N32_IRQ_FIRST + 46)
#define N32_MDMA_CH11         (N32_IRQ_FIRST + 47)
#define N32_MDMA_CH12         (N32_IRQ_FIRST + 48)
#define N32_MDMA_CH13         (N32_IRQ_FIRST + 49)
#define N32_MDMA_CH14         (N32_IRQ_FIRST + 50)
#define N32_MDMA_CH15         (N32_IRQ_FIRST + 51)
#define N32_SDPU              (N32_IRQ_FIRST + 52)
/* 53-54: Reserved */
#define N32_FPU_CPU1          (N32_IRQ_FIRST + 55)
#define N32_ECCMON            (N32_IRQ_FIRST + 56)
#define N32_RTC_ALARM         (N32_IRQ_FIRST + 57)
#define N32_I2C1_EVENT        (N32_IRQ_FIRST + 58)
#define N32_I2C1_ERR          (N32_IRQ_FIRST + 59)
#define N32_I2C2_EVENT        (N32_IRQ_FIRST + 60)
#define N32_I2C2_ERR          (N32_IRQ_FIRST + 61)
#define N32_I2C3_EVENT        (N32_IRQ_FIRST + 62)
#define N32_I2C3_ERR          (N32_IRQ_FIRST + 63)
#define N32_I2C4_EVENT        (N32_IRQ_FIRST + 64)
#define N32_I2C4_ERR          (N32_IRQ_FIRST + 65)
#define N32_I2C5_EVENT        (N32_IRQ_FIRST + 66)
#define N32_I2C5_ERR          (N32_IRQ_FIRST + 67)
#define N32_I2C6_EVENT        (N32_IRQ_FIRST + 68)
#define N32_I2C6_ERR          (N32_IRQ_FIRST + 69)
#define N32_I2C7_EVENT        (N32_IRQ_FIRST + 70)
#define N32_I2C7_ERR          (N32_IRQ_FIRST + 71)
#define N32_I2C8_EVENT        (N32_IRQ_FIRST + 72)
#define N32_I2C8_ERR          (N32_IRQ_FIRST + 73)
#define N32_I2C9_EVENT        (N32_IRQ_FIRST + 74)
#define N32_I2C9_ERR          (N32_IRQ_FIRST + 75)
#define N32_I2C10_EVENT       (N32_IRQ_FIRST + 76)
#define N32_I2C10_ERR         (N32_IRQ_FIRST + 77)
#define N32_I2S1              (N32_IRQ_FIRST + 78)
#define N32_I2S2              (N32_IRQ_FIRST + 79)
#define N32_I2S3              (N32_IRQ_FIRST + 80)
#define N32_I2S4              (N32_IRQ_FIRST + 81)
#define N32_X_SPI1            (N32_IRQ_FIRST + 82)
#define N32_X_SPI2            (N32_IRQ_FIRST + 83)
#define N32_SPI1              (N32_IRQ_FIRST + 84)
#define N32_SPI2              (N32_IRQ_FIRST + 85)
#define N32_SPI3              (N32_IRQ_FIRST + 86)
#define N32_SPI4              (N32_IRQ_FIRST + 87)
#define N32_SPI5              (N32_IRQ_FIRST + 88)
#define N32_SPI6              (N32_IRQ_FIRST + 89)
#define N32_SPI7              (N32_IRQ_FIRST + 90)
#define N32_LCD_EVENT         (N32_IRQ_FIRST + 91)
#define N32_LCD_ERR           (N32_IRQ_FIRST + 92)
#define N32_DVP1              (N32_IRQ_FIRST + 93)
#define N32_DVP2              (N32_IRQ_FIRST + 94)
#define N32_DMAMUX2           (N32_IRQ_FIRST + 95)
#define N32_USBHS1_HS_EP_OUT  (N32_IRQ_FIRST + 96)
#define N32_USBHS1_HS_EP_IN   (N32_IRQ_FIRST + 97)
#define N32_USBHS1_HS_WKUP    (N32_IRQ_FIRST + 98)
#define N32_USBHS1_HS         (N32_IRQ_FIRST + 99)
#define N32_USBHS2_HS_EP_OUT  (N32_IRQ_FIRST + 100)
#define N32_USBHS2_HS_EP_IN   (N32_IRQ_FIRST + 101)
#define N32_USBHS2_HS_WKUP    (N32_IRQ_FIRST + 102)
#define N32_USBHS2_HS         (N32_IRQ_FIRST + 103)
#define N32_ETH1              (N32_IRQ_FIRST + 104)
#define N32_ETH1_PMT_LPI      (N32_IRQ_FIRST + 105)
#define N32_ETH2              (N32_IRQ_FIRST + 106)
#define N32_ETH2_PMT_LPI      (N32_IRQ_FIRST + 107)
#define N32_FDCAN1_INT0       (N32_IRQ_FIRST + 108)
#define N32_FDCAN2_INT0       (N32_IRQ_FIRST + 109)
#define N32_FDCAN3_INT0       (N32_IRQ_FIRST + 110)
#define N32_FDCAN4_INT0       (N32_IRQ_FIRST + 111)
#define N32_FDCAN1_INT1       (N32_IRQ_FIRST + 112)
#define N32_FDCAN2_INT1       (N32_IRQ_FIRST + 113)
#define N32_FDCAN3_INT1       (N32_IRQ_FIRST + 114)
#define N32_FDCAN4_INT1       (N32_IRQ_FIRST + 115)
#define N32_USART1            (N32_IRQ_FIRST + 116)
#define N32_USART2            (N32_IRQ_FIRST + 117)
#define N32_USART3            (N32_IRQ_FIRST + 118)
#define N32_USART4            (N32_IRQ_FIRST + 119)
#define N32_USART5            (N32_IRQ_FIRST + 120)
#define N32_USART6            (N32_IRQ_FIRST + 121)
#define N32_USART7            (N32_IRQ_FIRST + 122)
#define N32_USART8            (N32_IRQ_FIRST + 123)
#define N32_UART9             (N32_IRQ_FIRST + 124)
#define N32_USART10           (N32_IRQ_FIRST + 125)
#define N32_USART11           (N32_IRQ_FIRST + 126)
#define N32_USART12           (N32_IRQ_FIRST + 127)
#define N32_USART13           (N32_IRQ_FIRST + 128)
#define N32_USART14           (N32_IRQ_FIRST + 129)
#define N32_USART15           (N32_IRQ_FIRST + 130)
#define N32_LPUART1           (N32_IRQ_FIRST + 131)
#define N32_LPUART2           (N32_IRQ_FIRST + 132)
#define N32_GPU               (N32_IRQ_FIRST + 133)
#define N32_SDMMC1            (N32_IRQ_FIRST + 135)
#define N32_SDMMC2            (N32_IRQ_FIRST + 136)
#define N32_ADC1              (N32_IRQ_FIRST + 137)
#define N32_ADC2              (N32_IRQ_FIRST + 138)
#define N32_ADC3              (N32_IRQ_FIRST + 139)
#define N32_COMP12            (N32_IRQ_FIRST + 140)
#define N32_COMP34            (N32_IRQ_FIRST + 141)
#define N32_SHRTIM1_INT1      (N32_IRQ_FIRST + 142)
#define N32_SHRTIM1_INT2      (N32_IRQ_FIRST + 143)
#define N32_SHRTIM1_INT3      (N32_IRQ_FIRST + 144)
#define N32_SHRTIM1_INT4      (N32_IRQ_FIRST + 145)
#define N32_SHRTIM1_INT5      (N32_IRQ_FIRST + 146)
#define N32_SHRTIM1_INT6      (N32_IRQ_FIRST + 147)
#define N32_SHRTIM1_INT7      (N32_IRQ_FIRST + 148)
#define N32_SHRTIM1_INT8      (N32_IRQ_FIRST + 149)
#define N32_SHRTIM2_INT1      (N32_IRQ_FIRST + 150)
#define N32_SHRTIM2_INT2      (N32_IRQ_FIRST + 151)
#define N32_SHRTIM2_INT3      (N32_IRQ_FIRST + 152)
#define N32_SHRTIM2_INT4      (N32_IRQ_FIRST + 153)
#define N32_SHRTIM2_INT5      (N32_IRQ_FIRST + 154)
#define N32_SHRTIM2_INT6      (N32_IRQ_FIRST + 155)
#define N32_SHRTIM2_INT7      (N32_IRQ_FIRST + 156)
#define N32_SHRTIM2_INT8      (N32_IRQ_FIRST + 157)
#define N32_FDCAN5_INT0       (N32_IRQ_FIRST + 158)
#define N32_FDCAN6_INT0       (N32_IRQ_FIRST + 159)
#define N32_FDCAN7_INT0       (N32_IRQ_FIRST + 160)
#define N32_FDCAN8_INT0       (N32_IRQ_FIRST + 161)
#define N32_FDCAN5_INT1       (N32_IRQ_FIRST + 162)
#define N32_FDCAN6_INT1       (N32_IRQ_FIRST + 163)
#define N32_FDCAN7_INT1       (N32_IRQ_FIRST + 164)
#define N32_FDCAN8_INT1       (N32_IRQ_FIRST + 165)
#define N32_DSI               (N32_IRQ_FIRST + 166)
#define N32_AHB_CACHE_PARMON  (N32_IRQ_FIRST + 167)
#define N32_LPTIM5_WKUP       (N32_IRQ_FIRST + 168)
#define N32_JPEG_SGDMA_H2P    (N32_IRQ_FIRST + 169)
#define N32_JPEG_SGDMA_P2H    (N32_IRQ_FIRST + 170)
#define N32_WAKEUP_IO         (N32_IRQ_FIRST + 171)
#define N32_SEMA4_INT1        (N32_IRQ_FIRST + 172)
#define N32_SEMA4_INT2        (N32_IRQ_FIRST + 173)
#define N32_WWDG2_RST         (N32_IRQ_FIRST + 174)
#define N32_WWDG1_RST         (N32_IRQ_FIRST + 174)
#define N32_OTPC              (N32_IRQ_FIRST + 175)
#define N32_FEMC              (N32_IRQ_FIRST + 176)
#define N32_DCMUB             (N32_IRQ_FIRST + 177)
#define N32_DCMUA             (N32_IRQ_FIRST + 177)
#define N32_DAC1              (N32_IRQ_FIRST + 178)
#define N32_DAC2              (N32_IRQ_FIRST + 179)
#define N32_MDMA_AHBS_ERROR   (N32_IRQ_FIRST + 180)
#define N32_CM7_CACHE_ERROR   (N32_IRQ_FIRST + 181)
#define N32_DAC3              (N32_IRQ_FIRST + 182)
#define N32_DAC4              (N32_IRQ_FIRST + 183)
#define N32_FEMC              (N32_IRQ_FIRST + 184)
#define N32_DAC5              (N32_IRQ_FIRST + 185)
#define N32_DAC6              (N32_IRQ_FIRST + 186)
#define N32_ESC_OPB           (N32_IRQ_FIRST + 187)
#define N32_ESC_SYNC0         (N32_IRQ_FIRST + 188)
#define N32_ESC_SYNC1         (N32_IRQ_FIRST + 189)
#define N32_ESC_WRP           (N32_IRQ_FIRST + 190)
#define N32_ATIM1_BRK         (N32_IRQ_FIRST + 192)
#define N32_ATIM1_TRG_COM     (N32_IRQ_FIRST + 193)
#define N32_ATIM1_CC          (N32_IRQ_FIRST + 194)
#define N32_ATIM1_UP          (N32_IRQ_FIRST + 195)
#define N32_ATIM2_BRK         (N32_IRQ_FIRST + 196)
#define N32_ATIM2_TRG_COM     (N32_IRQ_FIRST + 197)
#define N32_ATIM2_CC          (N32_IRQ_FIRST + 198)
#define N32_ATIM2_UP          (N32_IRQ_FIRST + 199)
#define N32_ATIM3_BRK         (N32_IRQ_FIRST + 200)
#define N32_ATIM3_TRG_COM     (N32_IRQ_FIRST + 201)
#define N32_ATIM3_CC          (N32_IRQ_FIRST + 202)
#define N32_ATIM3_UP          (N32_IRQ_FIRST + 203)
#define N32_ATIM4_BRK         (N32_IRQ_FIRST + 204)
#define N32_ATIM4_TRG_COM     (N32_IRQ_FIRST + 205)
#define N32_ATIM4_CC          (N32_IRQ_FIRST + 206)
#define N32_ATIM4_UP          (N32_IRQ_FIRST + 207)
#define N32_GTIMA1            (N32_IRQ_FIRST + 208)
#define N32_GTIMA2            (N32_IRQ_FIRST + 209)
#define N32_GTIMA3            (N32_IRQ_FIRST + 210)
#define N32_GTIMA4            (N32_IRQ_FIRST + 211)
#define N32_GTIMA5            (N32_IRQ_FIRST + 212)
#define N32_GTIMA6            (N32_IRQ_FIRST + 213)
#define N32_GTIMA7            (N32_IRQ_FIRST + 214)
#define N32_GTIMB1            (N32_IRQ_FIRST + 215)
#define N32_GTIMB2            (N32_IRQ_FIRST + 216)
#define N32_GTIMB3            (N32_IRQ_FIRST + 217)
#define N32_BTIM1             (N32_IRQ_FIRST + 218)
#define N32_BTIM2             (N32_IRQ_FIRST + 219)
#define N32_BTIM3             (N32_IRQ_FIRST + 220)
#define N32_BTIM4             (N32_IRQ_FIRST + 221)
#define N32_LPTIM1_WKUP       (N32_IRQ_FIRST + 222)
#define N32_LPTIM2_WKUP       (N32_IRQ_FIRST + 223)
#define N32_LPTIM3_WKUP       (N32_IRQ_FIRST + 224)
#define N32_LPTIM4_WKUP       (N32_IRQ_FIRST + 225)
#define N32_DSMU_FLT0         (N32_IRQ_FIRST + 226)
#define N32_DSMU_FLT1         (N32_IRQ_FIRST + 227)
#define N32_DSMU_FLT2         (N32_IRQ_FIRST + 228)
#define N32_DSMU_FLT3         (N32_IRQ_FIRST + 229)
#define N32_FMAC              (N32_IRQ_FIRST + 230)
#define N32_CORDIC            (N32_IRQ_FIRST + 231)
#define N32_DMAMUX1           (N32_IRQ_FIRST + 232)
#define N32_MMU               (N32_IRQ_FIRST + 233)

#define N32_IRQ_MAX_INTS      233
#define NR_IRQS               (N32_IRT_FIRST + N32_IRQ_MAX_INTS)

#ifndef __ASSEMBLY__
#ifdef __cplusplus
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

#undef EXTERN
#ifdef __cplusplus
}
#endif
#endif

#endif /* __ARCH_ARM_INCLUDE_STM32H7_IRQ_H */
