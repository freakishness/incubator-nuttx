/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32_pinmap.h
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

#ifndef __ARCH_ARM_SRC_STM32H7_HARDWARE_N32_PINMAP_H
#define __ARCH_ARM_SRC_STM32H7_HARDWARE_N32_PINMAP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "n32_gpio.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define GPIO_MCO1_PA8                           (GPIO_ALT | GPIO_AF15 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_MCO2_PC9                           (GPIO_ALT | GPIO_AF15 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)

#define GPIO_RTC_TS_PC13                        (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN13)
#define GPIO_RTC_TS_PC14                        (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN14)
#define GPIO_RTC_TS_PC15                        (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN15)

#define GPIO_JTMS_SWDIO_PA13                    (GPIO_ALT | GPIO_AF15 |                \
                                                 GPIO_PORTPA | GPIO_PIN13)
#define GPIO_JTCK_SWCLK_PA14                    (GPIO_ALT | GPIO_AF15 |                \
                                                 GPIO_PORTPA | GPIO_PIN14)
#define GPIO_JTDI_PA15                          (GPIO_ALT | GPIO_AF15 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)
#define GPIO_JTDO_PB3                           (GPIO_ALT | GPIO_AF15 |                \
                                                 GPIO_PORTPB | GPIO_PIN3)
#define GPIO_NJTRST_PB4                         (GPIO_ALT | GPIO_AF15 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)

#define GPIO_SHRTIM1_CHA1_PC6                   (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_SHRTIM1_CHA2_PC7                   (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_SHRTIM1_CHB1_PC8                   (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN8)
#define GPIO_SHRTIM1_CHB2_PA8                   (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_SHRTIM1_CHC1_PA9                   (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN9)
#define GPIO_SHRTIM1_CHC2_PA10                  (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPA | GPIO_PIN10)
#define GPIO_SHRTIM1_CHD1_PA11                  (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_SHRTIM1_CHD2_PA12                  (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)
#define GPIO_SHRTIM1_CHE1_PG6                   (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN6)
#define GPIO_SHRTIM1_CHE2_PG7                   (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN7)
#define GPIO_SHRTIM1_CHF1_PG4                   (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_SHRTIM1_CHF2_PG5                   (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN5)
#define GPIO_SHRTIM1_SCIN_PB11                  (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN11)
#define GPIO_SHRTIM1_SCIN_PE0                   (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN0)
#define GPIO_SHRTIM1_SCOUT_PB10                 (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN10)
#define GPIO_SHRTIM1_SCOUT_PE1                  (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN1)

#define GPIO_SHRTIM2_CHA1_PF0                   (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_SHRTIM2_CHA2_PF1                   (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)
#define GPIO_SHRTIM2_CHB1_PF2                   (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN2)
#define GPIO_SHRTIM2_CHB2_PF3                   (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN3)
#define GPIO_SHRTIM2_CHC1_PF4                   (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_SHRTIM2_CHC2_PF5                   (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN5)
#define GPIO_SHRTIM2_CHD1_PH2                   (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN2)
#define GPIO_SHRTIM2_CHD2_PH3                   (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN3)
#define GPIO_SHRTIM2_CHE1_PH4                   (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN4)
#define GPIO_SHRTIM2_CHE2_PH5                   (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN5)
#define GPIO_SHRTIM2_CHF1_PF14                  (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN14)
#define GPIO_SHRTIM2_CHF2_PF15                  (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN15)
#define GPIO_SHRTIM2_SCIN_PD8                   (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN8)
#define GPIO_SHRTIM2_SCIN_PG2                   (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN2)
#define GPIO_SHRTIM2_SCOUT_PD9                  (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN9)
#define GPIO_SHRTIM2_SCOUT_PG3                  (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN3)

#define GPIO_ATIM1_ETR_PA12                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)
#define GPIO_ATIM1_ETR_PG5                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN5)
#define GPIO_ATIM1_ETR_PE7                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN7)
#define GPIO_ATIM1_CH1_PA8                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_ATIM1_CH1_PK1                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPK | GPIO_PIN1)
#define GPIO_ATIM1_CH1_PE9                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN9)
#define GPIO_ATIM1_CH2_PA9                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN9)
#define GPIO_ATIM1_CH2_PJ11                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN11)
#define GPIO_ATIM1_CH2_PE11                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN11)
#define GPIO_ATIM1_CH3_PA10                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN10)
#define GPIO_ATIM1_CH3_PJ9                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN9)
#define GPIO_ATIM1_CH3_PE13                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN13)
#define GPIO_ATIM1_CH4_PA11                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_ATIM1_CH4_PE14                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN14)
#define GPIO_ATIM1_BKIN1_PA6                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN6)
#define GPIO_ATIM1_BKIN1_PE15                   (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN15)
#define GPIO_ATIM1_BKIN1_PB12                   (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_ATIM1_BKIN1_PK2                    (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPK | GPIO_PIN2)
#define GPIO_ATIM1_BKIN2_PE6                    (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN6)
#define GPIO_ATIM1_BKIN2_PG4                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_ATIM1_BKIN2_PA12                   (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)
#define GPIO_ATIM1_CH1N_PA7                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN7)
#define GPIO_ATIM1_CH1N_PB13                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_ATIM1_CH1N_PE8                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN8)
#define GPIO_ATIM1_CH1N_PK0                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPK | GPIO_PIN0)
#define GPIO_ATIM1_CH2N_PJ10                    (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN10)
#define GPIO_ATIM1_CH2N_PB0                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN0)
#define GPIO_ATIM1_CH2N_PB14                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_ATIM1_CH2N_PE10                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN10)
#define GPIO_ATIM1_CH3N_PB1                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)
#define GPIO_ATIM1_CH3N_PB15                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_ATIM1_CH3N_PJ8                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN8)
#define GPIO_ATIM1_CH3N_PE12                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN12)
#define GPIO_ATIM1_CH4N_PB2                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_ATIM1_CH4N_PD10                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN10)
#define GPIO_ATIM1_CH4N_PH6                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)

#define GPIO_ATIM2_ETR_PA0                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_ATIM2_ETR_PG8                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN8)
#define GPIO_ATIM2_ETR_PI3                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN3)
#define GPIO_ATIM2_CH1_PJ8                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN8)
#define GPIO_ATIM2_CH1_PC6                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_ATIM2_CH1_PI5                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPI | GPIO_PIN5)
#define GPIO_ATIM2_CH2_PJ6                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN6)
#define GPIO_ATIM2_CH2_PJ10                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN10)
#define GPIO_ATIM2_CH2_PI6                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN6)
#define GPIO_ATIM2_CH2_PC7                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_ATIM2_CH3_PK0                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPK | GPIO_PIN0)
#define GPIO_ATIM2_CH3_PC8                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPC | GPIO_PIN8)
#define GPIO_ATIM2_CH3_PI7                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPI | GPIO_PIN7)
#define GPIO_ATIM2_CH4_PC9                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_ATIM2_CH4_PI2                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN2)
#define GPIO_ATIM2_BKIN1_PA6                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN6)
#define GPIO_ATIM2_BKIN1_PK2                    (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPK | GPIO_PIN2)
#define GPIO_ATIM2_BKIN1_PG2                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN2)
#define GPIO_ATIM2_BKIN1_PI4                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN4)
#define GPIO_ATIM2_BKIN2_PG3                    (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN3)
#define GPIO_ATIM2_BKIN2_PA8                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_ATIM2_BKIN2_PI1                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPI | GPIO_PIN1)
#define GPIO_ATIM2_CH1N_PA5                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN5)
#define GPIO_ATIM2_CH1N_PA7                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN7)
#define GPIO_ATIM2_CH1N_PJ9                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN9)
#define GPIO_ATIM2_CH1N_PH13                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN13)
#define GPIO_ATIM2_CH2N_PB0                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN0)
#define GPIO_ATIM2_CH2N_PB14                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_ATIM2_CH2N_PJ7                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN7)
#define GPIO_ATIM2_CH2N_PJ11                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN11)
#define GPIO_ATIM2_CH2N_PH14                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN14)
#define GPIO_ATIM2_CH3N_PB1                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)
#define GPIO_ATIM2_CH3N_PB15                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_ATIM2_CH3N_PK1                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPK | GPIO_PIN1)
#define GPIO_ATIM2_CH3N_PH15                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN15)
#define GPIO_ATIM2_CH4N_PB2                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_ATIM2_CH4N_PI0                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN0)

#define GPIO_ATIM3_ETR_PF6                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN6)
#define GPIO_ATIM3_ETR_PH12                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN12)
#define GPIO_ATIM3_CH1_PF8                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN8)
#define GPIO_ATIM3_CH1_PA6                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN6)
#define GPIO_ATIM3_CH1_PH8                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN8)
#define GPIO_ATIM3_CH2_PF9                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN9)
#define GPIO_ATIM3_CH2_PH10                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN10)
#define GPIO_ATIM3_CH3_PF10                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN10)
#define GPIO_ATIM3_CH3_PD8                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN8)
#define GPIO_ATIM3_CH4_PF7                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN7)
#define GPIO_ATIM3_CH4_PD14                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN14)
#define GPIO_ATIM3_BKIN1_PF5                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN5)
#define GPIO_ATIM3_BKIN1_PH7                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN7)
#define GPIO_ATIM3_BKIN2_PI14                   (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN14)
#define GPIO_ATIM3_BKIN2_PI15                   (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN15)
#define GPIO_ATIM3_CH1N_PH9                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN9)
#define GPIO_ATIM3_CH2N_PH11                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN11)
#define GPIO_ATIM3_CH3N_PD9                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN9)
#define GPIO_ATIM3_CH4N_PD15                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN15)

#define GPIO_ATIM4_ETR_PF6                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN6)
#define GPIO_ATIM4_ETR_PJ0                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN0)
#define GPIO_ATIM4_CH1_PF9                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN9)
#define GPIO_ATIM4_CH1_PA7                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPA | GPIO_PIN7)
#define GPIO_ATIM4_CH1_PJ1                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN1)
#define GPIO_ATIM4_CH2_PF10                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN10)
#define GPIO_ATIM4_CH2_PJ3                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN3)
#define GPIO_ATIM4_CH3_PF7                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN7)
#define GPIO_ATIM4_CH3_PJ12                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN12)
#define GPIO_ATIM4_CH4_PF8                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN8)
#define GPIO_ATIM4_CH4_PJ14                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN14)
#define GPIO_ATIM4_BKIN1_PG0                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN0)
#define GPIO_ATIM4_BKIN1_PD7                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN7)
#define GPIO_ATIM4_BKIN2_PJ5                    (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN5)
#define GPIO_ATIM4_BKIN2_PK3                    (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPK | GPIO_PIN3)
#define GPIO_ATIM4_CH1N_PJ2                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN2)
#define GPIO_ATIM4_CH2N_PJ4                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN4)
#define GPIO_ATIM4_CH3N_PJ13                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN13)
#define GPIO_ATIM4_CH4N_PJ15                    (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN15)

#define GPIO_GTIMA1_ETR_PA0                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_GTIMA1_ETR_PA5                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN5)
#define GPIO_GTIMA1_ETR_PA15                    (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)
#define GPIO_GTIMA1_ETR_PF4                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_GTIMA1_CH1_PF0                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_GTIMA1_CH1_PA0                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_GTIMA1_CH1_PA5                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN5)
#define GPIO_GTIMA1_CH1_PA15                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)
#define GPIO_GTIMA1_CH2_PF1                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)
#define GPIO_GTIMA1_CH2_PA1                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN1)

#define GPIO_GTIMA2_ETR_PD2                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN2)
#define GPIO_GTIMA2_ETR_PB8                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_GTIMA2_CH1_PA6                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPA | GPIO_PIN6)
#define GPIO_GTIMA2_CH1_PC6                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_GTIMA2_CH1_PB4                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)
#define GPIO_GTIMA2_CH2_PA7                     (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPA | GPIO_PIN7)
#define GPIO_GTIMA2_CH2_PC7                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_GTIMA2_CH2_PB5                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)
#define GPIO_GTIMA2_CH3_PB0                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN0)
#define GPIO_GTIMA2_CH3_PC8                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPC | GPIO_PIN8)
#define GPIO_GTIMA2_CH3_PB6                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)
#define GPIO_GTIMA2_CH4_PB1                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)
#define GPIO_GTIMA2_CH4_PC9                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_GTIMA2_CH4_PB7                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)

#define GPIO_GTIMA3_ETR_PD11                    (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN11)
#define GPIO_GTIMA3_ETR_PE0                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN0)
#define GPIO_GTIMA3_CH1_PD12                    (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN12)
#define GPIO_GTIMA3_CH1_PB6                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)
#define GPIO_GTIMA3_CH2_PD13                    (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN13)
#define GPIO_GTIMA3_CH2_PB7                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_GTIMA3_CH3_PD14                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN14)
#define GPIO_GTIMA3_CH3_PB8                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_GTIMA3_CH4_PD15                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN15)
#define GPIO_GTIMA3_CH4_PB9                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)

#define GPIO_GTIMA4_ETR_PA4                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_GTIMA4_ETR_PH8                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN8)
#define GPIO_GTIMA4_CH1_PA0                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_GTIMA4_CH1_PH10                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN10)
#define GPIO_GTIMA4_CH2_PA1                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN1)
#define GPIO_GTIMA4_CH2_PH11                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN11)
#define GPIO_GTIMA4_CH3_PA2                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN2)
#define GPIO_GTIMA4_CH3_PH12                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN12)
#define GPIO_GTIMA4_CH4_PA3                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN3)
#define GPIO_GTIMA4_CH4_PI0                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN0)

#define GPIO_GTIMA5_ETR_PB2                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_GTIMA5_ETR_PG3                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN3)
#define GPIO_GTIMA5_CH1_PF0                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_GTIMA5_CH1_PF6                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN6)
#define GPIO_GTIMA5_CH1_PG12                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_GTIMA5_CH2_PF1                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)
#define GPIO_GTIMA5_CH2_PF7                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN7)
#define GPIO_GTIMA5_CH2_PG13                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_GTIMA5_CH3_PF2                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN2)
#define GPIO_GTIMA5_CH3_PF8                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN8)
#define GPIO_GTIMA5_CH3_PG14                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_GTIMA5_CH4_PF3                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN3)
#define GPIO_GTIMA5_CH4_PF9                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN9)

#define GPIO_GTIMA6_ETR_PG2                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN2)
#define GPIO_GTIMA6_ETR_PB3                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN3)
#define GPIO_GTIMA6_CH1_PF11                    (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN11)
#define GPIO_GTIMA6_CH1_PK4                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPK | GPIO_PIN4)
#define GPIO_GTIMA6_CH2_PF12                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN12)
#define GPIO_GTIMA6_CH2_PK5                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPK | GPIO_PIN5)
#define GPIO_GTIMA6_CH3_PF13                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN13)
#define GPIO_GTIMA6_CH3_PK6                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPK | GPIO_PIN6)
#define GPIO_GTIMA6_CH4_PF14                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN14)
#define GPIO_GTIMA6_CH4_PK7                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPK | GPIO_PIN7)

#define GPIO_GTIMA7_ETR_PI11                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN11)
#define GPIO_GTIMA7_ETR_PI14                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN14)
#define GPIO_GTIMA7_CH1_PH6                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)
#define GPIO_GTIMA7_CH1_PB14                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_GTIMA7_CH2_PH9                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN9)
#define GPIO_GTIMA7_CH2_PB15                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_GTIMA7_CH3_PI9                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN9)
#define GPIO_GTIMA7_CH3_PI12                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN12)
#define GPIO_GTIM7_CH4_PI10                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN10)
#define GPIO_GTIM7_CH4_PI13                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN13)

#define GPIO_GTIMB1_ETR_PE2                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN2)
#define GPIO_GTIMB1_ETR_PG1                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN1)
#define GPIO_GTIMB1_CH1N_PE4                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN4)
#define GPIO_GTIMB1_CH1N_PA1                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN1)
#define GPIO_GTIMB1_CH1P_PE5                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN5)
#define GPIO_GTIMB1_CH1P_PA2                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN2)
#define GPIO_GTIMB1_CH1P_PC12                   (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_GTIMB1_CH2_PE6                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN6)
#define GPIO_GTIMB1_CH2_PA3                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN3)
#define GPIO_GTIMB1_CH3_PE0                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN0)
#define GPIO_GTIMB1_CH4_PE1                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN1)
#define GPIO_GTIMB1_BRK_PE3                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPE | GPIO_PIN3)
#define GPIO_GTIMB1_BRK_PA0                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_GTIMB1_BRK_PD2                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN2)

#define GPIO_GTIMB2_ETR_PF2                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN2)
#define GPIO_GTIMB2_ETR_PD5                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN5)
#define GPIO_GTIMB2_CH1N_PF8                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN8)
#define GPIO_GTIMB2_CH1N_PD0                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN0)
#define GPIO_GTIMB2_CH1N_PB6                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)
#define GPIO_GTIMB2_CH1P_PF6                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN6)
#define GPIO_GTIMB2_CH1P_PD1                    (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN1)
#define GPIO_GTIMB2_CH1P_PB8                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_GTIMB2_CH2_PF5                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN5)
#define GPIO_GTIMB2_CH2_PD2                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN2)
#define GPIO_GTIMB2_CH3_PF4                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_GTIMB2_CH3_PD3                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN3)
#define GPIO_GTIMB2_CH4_PF3                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN3)
#define GPIO_GTIMB2_CH4_PD4                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN4)
#define GPIO_GTIMB2_BRK_PF10                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN10)
#define GPIO_GTIMB2_BRK_PB4                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)

#define GPIO_GTIMB3_ETR_PH5                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN5)
#define GPIO_GTIMB3_ETR_PI15                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN15)
#define GPIO_GTIMB3_CH1N_PF9                    (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN9)
#define GPIO_GTIMB3_CH1N_PJ0                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN0)
#define GPIO_GTIMB3_CH1N_PB7                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_GTIMB3_CH1P_PF7                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN7)
#define GPIO_GTIMB3_CH1P_PJ1                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN1)
#define GPIO_GTIMB3_CH1P_PB9                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_GTIMB3_CH2_PH2                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN2)
#define GPIO_GTIMB3_CH2_PJ2                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN2)
#define GPIO_GTIMB3_CH3_PH3                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN3)
#define GPIO_GTIMB3_CH3_PJ3                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN3)
#define GPIO_GTIMB3_CH4_PH4                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN4)
#define GPIO_GTIMB3_CH4_PJ4                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN4)
#define GPIO_GTIMB3_BRK_PG6                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN6)
#define GPIO_GTIMB3_BRK_PB5                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)

#define GPIO_LPTIM1_ETR_PG14                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_LPTIM1_ETR_PE0                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN0)
#define GPIO_LPTIM1_IN1_PD12                    (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN12)
#define GPIO_LPTIM1_IN1_PG12                    (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_LPTIM1_IN2_PH2                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN2)
#define GPIO_LPTIM1_IN2_PG11                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN11)
#define GPIO_LPTIM1_IN2_PE1                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN1)
#define GPIO_LPTIM1_OUT_PD13                    (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN13)
#define GPIO_LPTIM1_OUT_PG13                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)

#define GPIO_LPTIM2_ETR_PB11                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN11)
#define GPIO_LPTIM2_ETR_PE0                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPE | GPIO_PIN0)
#define GPIO_LPTIM2_IN1_PB10                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN10)
#define GPIO_LPTIM2_IN1_PD12                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN12)
#define GPIO_LPTIM2_IN2_PB12                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_LPTIM2_IN2_PD11                    (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN11)
#define GPIO_LPTIM2_OUT_PB13                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_LPTIM2_OUT_PD10                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN10)

#define GPIO_LPTIM3_ETR_PI10                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN10)
#define GPIO_LPTIM3_IN1_PI8                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN8)
#define GPIO_LPTIM3_IN2_PI9                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN9)
#define GPIO_LPTIM3_OUT_PA1                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN1)

#define GPIO_LPTIM4_ETR_PF15                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN15)
#define GPIO_LPTIM4_IN1_PG0                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN0)
#define GPIO_LPTIM4_IN2_PG1                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN1)
#define GPIO_LPTIM4_OUT_PA2                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN2)

#define GPIO_LPTIM5_ETR_PJ5                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN5)
#define GPIO_LPTIM5_IN1_PH6                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)
#define GPIO_LPTIM5_IN2_PH7                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN7)
#define GPIO_LPTIM5_OUT_PA3                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN3)

#define GPIO_FDCAN1_TX_PI8                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN8)
#define GPIO_FDCAN1_TX_PA12                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)
#define GPIO_FDCAN1_TX_PH13                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN13)
#define GPIO_FDCAN1_TX_PD1                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN1)
#define GPIO_FDCAN1_TX_PB9                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_FDCAN1_RX_PI9                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPI | GPIO_PIN9)
#define GPIO_FDCAN1_RX_PA11                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_FDCAN1_RX_PH14                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN14)
#define GPIO_FDCAN1_RX_PD0                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN0)
#define GPIO_FDCAN1_RX_PB8                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)

#define GPIO_FDCAN2_TX_PH9                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN9)
#define GPIO_FDCAN2_TX_PB13                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_FDCAN2_TX_PB6                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)
#define GPIO_FDCAN2_RX_PH8                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPH | GPIO_PIN8)
#define GPIO_FDCAN2_RX_PB12                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_FDCAN2_RX_PB5                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)

#define GPIO_FDCAN3_TX_PF7                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN7)
#define GPIO_FDCAN3_TX_PF15                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN15)
#define GPIO_FDCAN3_TX_PD13                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN13)
#define GPIO_FDCAN3_TX_PG9                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN9)
#define GPIO_FDCAN3_RX_PF6                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPF | GPIO_PIN6)
#define GPIO_FDCAN3_RX_PF14                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN14)
#define GPIO_FDCAN3_RX_PD12                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN12)
#define GPIO_FDCAN3_RX_PG10                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPG | GPIO_PIN10)

#define GPIO_FDCAN4_TX_PE2                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN2)
#define GPIO_FDCAN4_TX_PI10                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPI | GPIO_PIN10)
#define GPIO_FDCAN4_TX_PF0                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_FDCAN4_RX_PE3                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN3)
#define GPIO_FDCAN4_RX_PI11                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN11)
#define GPIO_FDCAN4_RX_PF1                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)

#define GPIO_FDCAN5_TX_PF4                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_FDCAN5_TX_PH4                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN4)
#define GPIO_FDCAN5_TX_PE8                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN8)
#define GPIO_FDCAN5_RX_PF5                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN5)
#define GPIO_FDCAN5_RX_PH5                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN5)
#define GPIO_FDCAN5_RX_PE9                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN9)

#define GPIO_FDCAN6_TX_PI12                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN12)
#define GPIO_FDCAN6_TX_PF12                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN12)
#define GPIO_FDCAN6_TX_PE13                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN13)
#define GPIO_FDCAN6_RX_PI13                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN13)
#define GPIO_FDCAN6_RX_PF13                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN13)
#define GPIO_FDCAN6_RX_PE14                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPE | GPIO_PIN14)

#define GPIO_FDCAN7_TX_PJ3                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPJ | GPIO_PIN3)
#define GPIO_FDCAN7_TX_PH6                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)
#define GPIO_FDCAN7_TX_PJ6                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN6)
#define GPIO_FDCAN7_TX_PG7                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN7)
#define GPIO_FDCAN7_RX_PJ4                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPJ | GPIO_PIN4)
#define GPIO_FDCAN7_RX_PH7                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN7)
#define GPIO_FDCAN7_RX_PJ7                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN7)
#define GPIO_FDCAN7_RX_PG8                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN8)

#define GPIO_FDCAN8_TX_PJ0                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPJ | GPIO_PIN0)
#define GPIO_FDCAN8_TX_PJ8                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPJ | GPIO_PIN8)
#define GPIO_FDCAN8_TX_PG2                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN2)
#define GPIO_FDCAN8_RX_PJ1                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPJ | GPIO_PIN1)
#define GPIO_FDCAN8_RX_PJ9                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPJ | GPIO_PIN9)
#define GPIO_FDCAN8_RX_PG3                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN3)

#define GPIO_DVP1_D2_PH11                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN11)
#define GPIO_DVP1_D2_PB13                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_DVP1_D2_PC8                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPC | GPIO_PIN8)
#define GPIO_DVP1_D2_PG10                       (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN10)
#define GPIO_DVP1_D2_PE0                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN0)
#define GPIO_DVP1_D3_PH12                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN12)
#define GPIO_DVP1_D3_PC9                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_DVP1_D3_PG11                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN11)
#define GPIO_DVP1_D3_PE1                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN1)
#define GPIO_DVP1_D4_PE4                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPE | GPIO_PIN4)
#define GPIO_DVP1_D4_PH14                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN14)
#define GPIO_DVP1_D4_PC11                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPC | GPIO_PIN11)
#define GPIO_DVP1_D5_PD3                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN3)
#define GPIO_DVP1_D5_PB6                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)
#define GPIO_DVP1_D5_PI4                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN4)
#define GPIO_DVP1_D6_PE5                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPE | GPIO_PIN5)
#define GPIO_DVP1_D6_PB8                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_DVP1_D6_PI6                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN6)
#define GPIO_DVP1_D7_PE6                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPE | GPIO_PIN6)
#define GPIO_DVP1_D7_PB9                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_DVP1_D7_PI7                        (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN7)
#define GPIO_DVP1_D8_PH6                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)
#define GPIO_DVP1_D8_PI1                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN1)
#define GPIO_DVP1_D8_PC10                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN10)
#define GPIO_DVP1_D9_PJ5                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN5)
#define GPIO_DVP1_D9_PH7                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN7)
#define GPIO_DVP1_D9_PI2                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN2)
#define GPIO_DVP1_D9_PC12                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_DVP1_D10_PI3                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN3)
#define GPIO_DVP1_D10_PD6                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN6)
#define GPIO_DVP1_D10_PB5                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)
#define GPIO_DVP1_D11_PF10                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN10)
#define GPIO_DVP1_D11_PH15                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN15)
#define GPIO_DVP1_D11_PD2                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN2)
#define GPIO_DVP1_D12_PF11                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN11)
#define GPIO_DVP1_D12_PD12                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN12)
#define GPIO_DVP1_D12_PG6                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN6)
#define GPIO_DVP1_D13_PJ4                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN4)
#define GPIO_DVP1_D13_PD13                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN13)
#define GPIO_DVP1_D13_PG7                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN7)
#define GPIO_DVP1_D13_PI0                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN0)
#define GPIO_DVP1_D13_PG15                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN15)
#define GPIO_DVP1_D14_PJ3                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN3)
#define GPIO_DVP1_D14_PD4                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN4)
#define GPIO_DVP1_D15_PJ2                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN2)
#define GPIO_DVP1_D15_PD5                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN5)
#define GPIO_DVP1_MCLK_PB1                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)

#define GPIO_DVP2_PIXCLK_PF7                    (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN7)
#define GPIO_DVP2_PIXCLK_PH5                    (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN5)
#define GPIO_DVP2_HSYNC_PF8                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN8)
#define GPIO_DVP2_HSYNC_PH4                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN4)
#define GPIO_DVP2_HSYNC_PD8                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN8)
#define GPIO_DVP2_VSYNC_PF9                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN9)
#define GPIO_DVP2_VSYNC_PJ1                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN1)
#define GPIO_DVP2_VSYNC_PD9                     (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN9)
#define GPIO_DVP2_D0_PE2                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPE | GPIO_PIN2)
#define GPIO_DVP2_D0_PF0                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_DVP2_D0_PK3                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPK | GPIO_PIN3)
#define GPIO_DVP2_D1_PE3                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPE | GPIO_PIN3)
#define GPIO_DVP2_D1_PF1                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)
#define GPIO_DVP2_D1_PK4                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPK | GPIO_PIN4)
#define GPIO_DVP2_D2_PF2                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN2)
#define GPIO_DVP2_D2_PI12                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN12)
#define GPIO_DVP2_D2_PK5                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPK | GPIO_PIN5)
#define GPIO_DVP2_D3_PI13                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN13)
#define GPIO_DVP2_D3_PF3                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN3)
#define GPIO_DVP2_D3_PK6                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPK | GPIO_PIN6)
#define GPIO_DVP2_D4_PI14                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN14)
#define GPIO_DVP2_D4_PF4                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_DVP2_D4_PK7                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPK | GPIO_PIN7)
#define GPIO_DVP2_D5_PF5                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN5)
#define GPIO_DVP2_D5_PF6                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN6)
#define GPIO_DVP2_D5_PK2                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPK | GPIO_PIN2)
#define GPIO_DVP2_D6_PC2                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPC | GPIO_PIN2)
#define GPIO_DVP2_D6_PF12                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN12)
#define GPIO_DVP2_D6_PK1                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPK | GPIO_PIN1)
#define GPIO_DVP2_D7_PC3                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPC | GPIO_PIN3)
#define GPIO_DVP2_D7_PF13                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN13)
#define GPIO_DVP2_D7_PK0                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPK | GPIO_PIN0)
#define GPIO_DVP2_D8_PF14                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN14)
#define GPIO_DVP2_D8_PJ6                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN6)
#define GPIO_DVP2_D8_PI4                        (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN4)
#define GPIO_DVP2_D9_PF15                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN15)
#define GPIO_DVP2_D9_PJ7                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN7)
#define GPIO_DVP2_D9_PI5                        (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN5)
#define GPIO_DVP2_D10_PG0                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN0)
#define GPIO_DVP2_D10_PJ8                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN8)
#define GPIO_DVP2_D10_PI6                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN6)
#define GPIO_DVP2_D11_PG1                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN1)
#define GPIO_DVP2_D11_PJ9                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN9)
#define GPIO_DVP2_D11_PI7                       (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN7)
#define GPIO_DVP2_D12_PB2                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_DVP2_D12_PJ10                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN10)
#define GPIO_DVP2_D12_PG2                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN2)
#define GPIO_DVP2_D12_PJ15                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN15)
#define GPIO_DVP2_D13_PI15                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN15)
#define GPIO_DVP2_D13_PJ11                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN11)
#define GPIO_DVP2_D13_PG3                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN3)
#define GPIO_DVP2_D13_PJ14                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN14)
#define GPIO_DVP2_D14_PB12                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_DVP2_D14_PG4                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_DVP2_D14_PJ13                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN13)
#define GPIO_DVP2_D15_PD11                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN11)
#define GPIO_DVP2_D15_PG5                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN5)
#define GPIO_DVP2_D15_PJ12                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN12)
#define GPIO_DVP2_MCLK_PG12                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)

#define GPIO_FEMC_A0_PF0                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_FEMC_A1_PF1                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)
#define GPIO_FEMC_A1_PC5                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPC | GPIO_PIN5)
#define GPIO_FEMC_A2_PF2                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN2)
#define GPIO_FEMC_A3_PF3                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN3)
#define GPIO_FEMC_A3_PF10                       (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN10)
#define GPIO_FEMC_A4_PF4                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_FEMC_A4_PI12                       (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPI | GPIO_PIN12)
#define GPIO_FEMC_A5_PF5                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN5)
#define GPIO_FEMC_A6_PF12                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN12)
#define GPIO_FEMC_A7_PF13                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN13)
#define GPIO_FEMC_A7_PI13                       (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPI | GPIO_PIN13)
#define GPIO_FEMC_A8_PF14                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN14)
#define GPIO_FEMC_A9_PF15                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN15)
#define GPIO_FEMC_A9_PI14                       (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPI | GPIO_PIN14)
#define GPIO_FEMC_A10_PG0                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN0)
#define GPIO_FEMC_A10_PA3                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPA | GPIO_PIN3)
#define GPIO_FEMC_A11_PG1                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN1)
#define GPIO_FEMC_A11_PK2                       (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPK | GPIO_PIN2)
#define GPIO_FEMC_A12_PG2                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN2)
#define GPIO_FEMC_A12_PK6                       (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPK | GPIO_PIN6)
#define GPIO_FEMC_A13_PG3                       (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN3)
#define GPIO_FEMC_A14_PG4                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_FEMC_A15_PG5                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN5)
#define GPIO_FEMC_A15_PK7                       (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPK | GPIO_PIN7)
#define GPIO_FEMC_A16_CLE_PD11                  (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPD | GPIO_PIN11)
#define GPIO_FEMC_A17_ALE_PD12                  (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPD | GPIO_PIN12)
#define GPIO_FEMC_A18_PD13                      (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPD | GPIO_PIN13)
#define GPIO_FEMC_A19_PE3                       (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPE | GPIO_PIN3)
#define GPIO_FEMC_A19_PA0                       (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_FEMC_A20_PE4                       (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPE | GPIO_PIN4)
#define GPIO_FEMC_A21_PE5                       (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPE | GPIO_PIN5)
#define GPIO_FEMC_A22_PE6                       (GPIO_ALT | GPIO_AF0 |           \
                                                 GPIO_PORTPE | GPIO_PIN6)
#define GPIO_FEMC_A22_PC4                       (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPC | GPIO_PIN4)
#define GPIO_FEMC_A23_PE2                       (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPE | GPIO_PIN2)
#define GPIO_FEMC_A24_PG13                      (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_FEMC_A25_PC0                       (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPC | GPIO_PIN0)
#define GPIO_FEMC_A25_PG14                      (GPIO_ALT | GPIO_AF4 |           \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_FEMC_D0_DA0_PC1                    (GPIO_ALT | GPIO_AF8 |           \
                                                 GPIO_PORTPC | GPIO_PIN1)
#define GPIO_FEMC_D0_DA0_PD14                   (GPIO_ALT | GPIO_AF4 |           \
                                                 GPIO_PORTPD | GPIO_PIN14)
#define GPIO_FEMC_D0_DA0_PI11                   (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPI | GPIO_PIN11)
#define GPIO_FEMC_D1_DA1_PD15                   (GPIO_ALT | GPIO_AF4 |           \
                                                 GPIO_PORTPD | GPIO_PIN15)
#define GPIO_FEMC_D2_DA2_PD0                    (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPD | GPIO_PIN0)
#define GPIO_FEMC_D2_DA2_PJ6                    (GPIO_ALT | GPIO_AF0 |           \
                                                 GPIO_PORTPJ | GPIO_PIN6)
#define GPIO_FEMC_D3_DA3_PD1                    (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPD | GPIO_PIN1)
#define GPIO_FEMC_D3_DA3_PJ7                    (GPIO_ALT | GPIO_AF0 |           \
                                                 GPIO_PORTPJ | GPIO_PIN7)
#define GPIO_FEMC_D4_DA4_PE7                    (GPIO_ALT | GPIO_AF5 |           \
                                                 GPIO_PORTPE | GPIO_PIN7)
#define GPIO_FEMC_D5_DA5_PE8                    (GPIO_ALT | GPIO_AF5 |           \
                                                 GPIO_PORTPE | GPIO_PIN8)
#define GPIO_FEMC_D5_DA5_PJ10                   (GPIO_ALT | GPIO_AF0 |           \
                                                 GPIO_PORTPJ | GPIO_PIN10)
#define GPIO_FEMC_D6_DA6_PE9                    (GPIO_ALT | GPIO_AF5 |           \
                                                 GPIO_PORTPE | GPIO_PIN9)
#define GPIO_FEMC_D6_DA6_PC12                   (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_FEMC_D6_DA6_PJ11                   (GPIO_ALT | GPIO_AF0 |           \
                                                 GPIO_PORTPJ | GPIO_PIN11)
#define GPIO_FEMC_D7_DA7_PE10                   (GPIO_ALT | GPIO_AF4 |           \
                                                 GPIO_PORTPE | GPIO_PIN10)
#define GPIO_FEMC_D7_DA7_PD2                    (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPD | GPIO_PIN2)
#define GPIO_FEMC_D7_DA7_PK3                    (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPK | GPIO_PIN3)
#define GPIO_FEMC_D8_DA8_PA4                    (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_FEMC_D8_DA8_PE11                   (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPE | GPIO_PIN11)
#define GPIO_FEMC_D9_DA9_PA5                    (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPA | GPIO_PIN5)
#define GPIO_FEMC_D9_DA9_PE12                   (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPE | GPIO_PIN12)
#define GPIO_FEMC_D9_DA9_PK4                    (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPK | GPIO_PIN4)
#define GPIO_FEMC_D10_DA10_PE13                 (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPE | GPIO_PIN13)
#define GPIO_FEMC_D10_DA10_PB14                 (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_FEMC_D11_DA11_PE14                 (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPE | GPIO_PIN14)
#define GPIO_FEMC_D11_DA11_PB15                 (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_FEMC_D11_DA11_PK5                  (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPK | GPIO_PIN5)
#define GPIO_FEMC_D12_DA12_PC0                  (GPIO_ALT | GPIO_AF4 |           \
                                                 GPIO_PORTPC | GPIO_PIN0)
#define GPIO_FEMC_D12_DA12_PE15                 (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPE | GPIO_PIN15)
#define GPIO_FEMC_D13_DA13_PD8                  (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPD | GPIO_PIN8)
#define GPIO_FEMC_D13_DA13_PB10                 (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPB | GPIO_PIN10)
#define GPIO_FEMC_D14_DA14_PD9                  (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPD | GPIO_PIN9)
#define GPIO_FEMC_D15_DA15_PD10                 (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPD | GPIO_PIN10)
#define GPIO_FEMC_D15_DA15_PB11                 (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPB | GPIO_PIN11)
#define GPIO_FEMC_D16_PH8                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN8)
#define GPIO_FEMC_D17_PH9                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN9)
#define GPIO_FEMC_D18_PH10                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN10)
#define GPIO_FEMC_D19_PH11                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN11)
#define GPIO_FEMC_D20_PH12                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN12)
#define GPIO_FEMC_D21_PH13                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN13)
#define GPIO_FEMC_D22_PH14                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN14)
#define GPIO_FEMC_D23_PH15                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN15)
#define GPIO_FEMC_D24_PI0                       (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPI | GPIO_PIN0)
#define GPIO_FEMC_D25_PI1                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN1)
#define GPIO_FEMC_D26_PI2                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN2)
#define GPIO_FEMC_D27_PI3                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN3)
#define GPIO_FEMC_D28_PI6                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN6)
#define GPIO_FEMC_D29_PI7                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN7)
#define GPIO_FEMC_D30_PI9                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN9)
#define GPIO_FEMC_D31_PI10                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN10)
#define GPIO_FEMC_NE1_NCE1_PC7                  (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_FEMC_NE1_NCE1_PD7                  (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPD | GPIO_PIN7)
#define GPIO_FEMC_NE2_NCE2_PC8                  (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPC | GPIO_PIN8)
#define GPIO_FEMC_NE2_NCE2_PG9                  (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPG | GPIO_PIN9)
#define GPIO_FEMC_NE3_PG6                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN6)
#define GPIO_FEMC_NE3_PG10                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN10)
#define GPIO_FEMC_NE4_PG12                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_FEMC_NOE_PD4                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN4)
#define GPIO_FEMC_NWE_PD5                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN5)
#define GPIO_FEMC_NADV_NL_PB7                   (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_FEMC_NWAIT_PC6                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_FEMC_NWAIT_PD6                     (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN6)
#define GPIO_FEMC_NBL0_PE0                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPE | GPIO_PIN0)
#define GPIO_FEMC_NBL0_PJ13                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN13)
#define GPIO_FDMC_NBL1_PE1                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPE | GPIO_PIN1)
#define GPIO_FDMC_NBL2_PI4                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN4)
#define GPIO_FDMC_NBL3_PI5                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN5)
#define GPIO_FEMC_CLK_PD3                       (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPD | GPIO_PIN3)
#define GPIO_FEMC_INT_BUSY_PC8                  (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPC | GPIO_PIN8)
#define GPIO_FEMC_INT_BUSY_PG7                  (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPG | GPIO_PIN7)
#define GPIO_FEMC_BAA_PH6                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)
#define GPIO_FEMC_BAA_PJ15                      (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPJ | GPIO_PIN15)
#define GPIO_FEMC_BAA_PJ12                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN12)
#define GPIO_FEMC_CRE_PH7                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN7)
#define GPIO_FEMC_CRE_PJ14                      (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPJ | GPIO_PIN14)

#define GPIO_USART1_TX_PF0                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_USART1_TX_PB14                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_USART1_TX_PA9                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN9)
#define GPIO_USART1_TX_PB6                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)
#define GPIO_USART1_RX_PF1                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)
#define GPIO_USART1_RX_PB15                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_USART1_RX_PA10                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN10)
#define GPIO_USART1_RX_PB7                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_USART1_CK_PF2                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN2)
#define GPIO_USART1_CK_PA8                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_USART1_CTS_PF3                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN3)
#define GPIO_USART1_CTS_PA11                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_USART1_RTS_DE_PF4                  (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_USART1_RTS_DE_PA12                 (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)

#define GPIO_USART2_TX_PA2                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN2)
#define GPIO_USART2_TX_PD5                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN5)
#define GPIO_USART2_RX_PA3                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPA | GPIO_PIN3)
#define GPIO_USART2_RX_PD6                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN6)
#define GPIO_USART2_CK_PA4                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_USART2_CK_PD7                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN7)
#define GPIO_USART2_CTS_PA0                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_USART2_CTS_PD3                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN3)
#define GPIO_USART2_RTS_DE_PA1                  (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN1)
#define GPIO_USART2_RTS_DE_PD4                  (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN4)

#define GPIO_USART3_TX_PB10                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN10)
#define GPIO_USART3_TX_PD8                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN8)
#define GPIO_USART3_TX_PC10                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN10)
#define GPIO_USART3_RX_PB11                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN11)
#define GPIO_USART3_RX_PD9                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN9)
#define GPIO_USART3_RX_PC11                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN11)
#define GPIO_USART3_CK_PB12                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_USART3_CK_PD10                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN10)
#define GPIO_USART3_CK_PC12                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_USART3_CTS_PB13                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_USART3_CTS_PD11                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN11)
#define GPIO_USART3_RTS_DE_PB14                 (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_USART3_RTS_DE_PD12                 (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN12)

#define GPIO_USART4_TX_PC6                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_USART4_TX_PG14                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_USART4_RX_PC7                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_USART4_RX_PG9                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN9)
#define GPIO_USART4_CK_PG7                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN7)
#define GPIO_USART4_CK_PC8                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN8)
#define GPIO_USART4_CTS_PG13                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_USART4_CTS_PG15                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN15)
#define GPIO_USART4_RTS_DE_PG8                  (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN8)
#define GPIO_USART4_RTS_DE_PG12                 (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)

#define GPIO_USART6_TX_PE5                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN5)
#define GPIO_USART6_TX_PH15                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN15)
#define GPIO_USART6_RX_PE4                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN4)
#define GPIO_USART6_RX_PH14                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN14)
#define GPIO_USART6_CK_PE14                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN14)
#define GPIO_USART6_CTS_PG4                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_USART6_RTS_DE_PG5                  (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN5)

#define GPIO_USART7_TX_PH5                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN5)
#define GPIO_USART7_TX_PF15                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN15)
#define GPIO_USART7_RX_PH4                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN4)
#define GPIO_USART7_RX_PF14                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN14)
#define GPIO_USART7_CK_PH3                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN3)
#define GPIO_USART7_CK_PF13                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN13)
#define GPIO_USART7_CTS_PG2                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN2)
#define GPIO_USART7_RTS_DE_PG3                  (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN3)

#define GPIO_USART8_TX_PI3                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPI | GPIO_PIN3)
#define GPIO_USART8_TX_PI5                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPI | GPIO_PIN5)
#define GPIO_USART8_RX_PI2                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPI | GPIO_PIN2)
#define GPIO_USART8_RX_PI4                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPI | GPIO_PIN4)
#define GPIO_USART8_CK_PI1                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPI | GPIO_PIN1)
#define GPIO_USART8_CK_PI6                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPI | GPIO_PIN6)
#define GPIO_USART8_CTS_PJ8                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN8)
#define GPIO_USART8_RTS_DE_PJ9                  (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPJ | GPIO_PIN9)

#define GPIO_UART9_TX_PA0                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_UART9_TX_PA12                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)
#define GPIO_UART9_TX_PH13                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN13)
#define GPIO_UART9_TX_PC10                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPC | GPIO_PIN10)
#define GPIO_UART9_TX_PD1                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN1)
#define GPIO_UART9_TX_PB9                       (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_UART9_RX_PI9                       (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN9)
#define GPIO_UART9_RX_PA1                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN1)
#define GPIO_UART9_RX_PA11                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_UART9_RX_PH14                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN14)
#define GPIO_UART9_RX_PC11                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPC | GPIO_PIN11)
#define GPIO_UART9_RX_PD0                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN0)
#define GPIO_UART9_RX_PB8                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_UART9_CTS_PB0                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN0)
#define GPIO_UART9_CTS_PB15                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_UART9_RTS_DE_PB14                  (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_UART9_RTS_DE_PA15                  (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)

#define GPIO_UART10_TX_PH12                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN12)
#define GPIO_UART10_TX_PB13                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_UART10_TX_PC12                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_UART10_TX_PB6                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)
#define GPIO_UART10_RX_PH11                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN11)
#define GPIO_UART10_RX_PB12                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_UART10_RX_PD2                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPD | GPIO_PIN2)
#define GPIO_UART10_RX_PB5                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)
#define GPIO_UART10_CTS_PH9                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN9)
#define GPIO_UART10_CTS_PC9                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_UART10_RTS_DE_PH8                  (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN8)
#define GPIO_UART10_RTS_DE_PC8                  (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPC | GPIO_PIN8)

#define GPIO_UART11_TX_PF7                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN7)
#define GPIO_UART11_TX_PE8                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN8)
#define GPIO_UART11_TX_PA15                     (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)
#define GPIO_UART11_TX_PB4                      (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)
#define GPIO_UART11_RX_PF6                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN6)
#define GPIO_UART11_RX_PE7                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN7)
#define GPIO_UART11_RX_PA8                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_UART11_RX_PB3                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN3)
#define GPIO_UART11_CTS_PF9                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPF | GPIO_PIN9)
#define GPIO_UART11_CTS_PE10                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN10)
#define GPIO_UART11_RTS_DE_PF8                  (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN8)
#define GPIO_UART11_RTS_DE_PE9                  (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN9)

#define GPIO_UART12_TX_PD12                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN12)
#define GPIO_UART12_TX_PJ8                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN8)
#define GPIO_UART12_TX_PE1                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN1)
#define GPIO_UART12_RX_PD13                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN13)
#define GPIO_UART12_RX_PJ9                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN9)
#define GPIO_UART12_RX_PE0                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPE | GPIO_PIN0)
#define GPIO_UART12_CTS_PD14                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN14)
#define GPIO_UART12_CTS_PJ10                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN10)
#define GPIO_UART12_RTS_DE_PD15                 (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN15)
#define GPIO_UART12_RTS_DE_PJ11                 (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN11)

#define GPIO_UART13_TX_PG1                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPG | GPIO_PIN1)
#define GPIO_UART13_TX_PE13                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN13)
#define GPIO_UART13_TX_PD15                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN15)
#define GPIO_UART13_RX_PG0                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN0)
#define GPIO_UART13_RX_PE12                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN12)
#define GPIO_UART13_RX_PD14                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN14)
#define GPIO_UART13_CTS_PJ4                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN4)
#define GPIO_UART13_CTS_PE14                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN14)
#define GPIO_UART13_CTS_PD12                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN12)
#define GPIO_UART13_CTS_PD0                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN0)
#define GPIO_UART13_RTS_DE_PJ3                  (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN3)
#define GPIO_UART13_RTS_DE_PE15                 (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN15)
#define GPIO_UART13_RTS_DE_PD13                 (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN13)

#define GPIO_UART14_TX_PH7                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN7)
#define GPIO_UART14_TX_PJ11                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPJ | GPIO_PIN11)
#define GPIO_UART14_RX_PH6                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)
#define GPIO_UART14_RX_PJ10                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPJ | GPIO_PIN10)
#define GPIO_UART14_CTS_PH9                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN9)
#define GPIO_UART14_CTS_PJ9                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPJ | GPIO_PIN9)
#define GPIO_UART14_RTS_DE_PH8                  (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN8)
#define GPIO_UART14_RTS_DE_PJ8                  (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPJ | GPIO_PIN8)

#define GPIO_UART15_TX_PH3                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN3)
#define GPIO_UART15_TX_PJ1                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPJ | GPIO_PIN1)
#define GPIO_UART15_RX_PH2                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN2)
#define GPIO_UART15_RX_PJ0                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN0)
#define GPIO_UART15_CTS_PH5                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN5)
#define GPIO_UART15_CTS_PJ3                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPJ | GPIO_PIN3)
#define GPIO_UART15_RTS_DE_PH4                  (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPH | GPIO_PIN4)
#define GPIO_UART15_RTS_DE_PJ2                  (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN2)

#define GPIO_LPUART1_CTS_PA11                   (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_LPUART1_RTS_PA12                   (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)
#define GPIO_LPUART1_RX_PA10                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN10)
#define GPIO_LPUART1_RX_PB7                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_LPUART1_TX_PA9                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN9)
#define GPIO_LPUART1_TX_PB6                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)

#define GPIO_LPUART2_CTS_PD2                    (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPD | GPIO_PIN2)
#define GPIO_LPUART2_RTS_PD3                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN3)
#define GPIO_LPUART2_RX_PI3                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPI | GPIO_PIN3)
#define GPIO_LPUART2_RX_PD5                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN5)
#define GPIO_LPUART2_TX_PI2                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPI | GPIO_PIN2)
#define GPIO_LPUART2_TX_PD4                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN4)

#define GPIO_I2C1_SCL_PG5                       (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPG | GPIO_PIN5)
#define GPIO_I2C1_SCL_PD4                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN4)
#define GPIO_I2C1_SCL_PB6                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)
#define GPIO_I2C1_SCL_PB8                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_I2C1_SDA_PG4                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_I2C1_SDA_PD5                       (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN5)
#define GPIO_I2C1_SDA_PB7                       (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_I2C1_SDA_PB9                       (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_I2C1_SMBA_PG6                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN6)
#define GPIO_I2C1_SMBA_PD1                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN1)
#define GPIO_I2C1_SMBA_PB5                      (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)

#define GPIO_I2C2_SCL_PF1                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)
#define GPIO_I2C2_SCL_PH4                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN4)
#define GPIO_I2C2_SCL_PB10                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN10)
#define GPIO_I2C2_SDA_PF0                       (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_I2C2_SDA_PH5                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN5)
#define GPIO_I2C2_SDA_PB11                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN11)
#define GPIO_I2C2_SMBA_PF2                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPF | GPIO_PIN2)
#define GPIO_I2C2_SMBA_PH6                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)
#define GPIO_I2C2_SMBA_PB12                     (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)

#define GPIO_I2C3_SCL_PH7                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN7)
#define GPIO_I2C3_SCL_PK0                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPK | GPIO_PIN0)
#define GPIO_I2C3_SCL_PA8                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_I2C3_SDA_PH8                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPH | GPIO_PIN8)
#define GPIO_I2C3_SDA_PK1                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPK | GPIO_PIN1)
#define GPIO_I2C3_SDA_PC9                       (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_I2C3_SMBA_PH9                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPH | GPIO_PIN9)
#define GPIO_I2C3_SMBA_PK2                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPK | GPIO_PIN2)
#define GPIO_I2C3_SMBA_PA9                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN9)

#define GPIO_I2C4_SCL_PF14                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN14)
#define GPIO_I2C4_SCL_PH11                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN11)
#define GPIO_I2C4_SCL_PD12                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPD | GPIO_PIN12)
#define GPIO_I2C4_SCL_PB8                       (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_I2C4_SCL_PB6                       (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)
#define GPIO_I2C4_SDA_PF15                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN15)
#define GPIO_I2C4_SDA_PH12                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPH | GPIO_PIN12)
#define GPIO_I2C4_SDA_PD13                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN13)
#define GPIO_I2C4_SDA_PB7                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_I2C4_SDA_PB9                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_I2C4_SMBA_PF13                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN13)
#define GPIO_I2C4_SMBA_PH10                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN10)
#define GPIO_I2C4_SMBA_PD11                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN11)
#define GPIO_I2C4_SMBA_PB5                      (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)
#define GPIO_I2C4_SMBA_PB9                      (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)

#define GPIO_I2C5_SCL_PF1                       (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)
#define GPIO_I2C5_SCL_PA8                       (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_I2C5_SCL_PC11                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN11)
#define GPIO_I2C5_SDA_PF0                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_I2C5_SDA_PC9                       (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_I2C5_SDA_PC10                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN10)
#define GPIO_I2C5_SMBA_PF2                      (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPF | GPIO_PIN2)
#define GPIO_I2C5_SMBA_PA9                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPA | GPIO_PIN9)
#define GPIO_I2C5_SMBA_PC12                     (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)

#define GPIO_I2C6_SCL_PF4                       (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_I2C6_SCL_PF12                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN12)
#define GPIO_I2C6_SCL_PE14                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPE | GPIO_PIN14)
#define GPIO_I2C6_SDA_PF3                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPF | GPIO_PIN3)
#define GPIO_I2C6_SDA_PF11                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN11)
#define GPIO_I2C6_SDA_PE13                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN13)
#define GPIO_I2C6_SMBA_PF5                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN5)
#define GPIO_I2C6_SMBA_PF13                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN13)
#define GPIO_I2C6_SMBA_PE15                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN15)

#define GPIO_I2C7_SCL_PI13                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN13)
#define GPIO_I2C7_SCL_PE8                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPE | GPIO_PIN8)
#define GPIO_I2C7_SCL_PD9                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN9)
#define GPIO_I2C7_SDA_PI12                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN12)
#define GPIO_I2C7_SDA_PE7                       (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN7)
#define GPIO_I2C7_SDA_PD8                       (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN8)
#define GPIO_I2C7_SMBA_PI14                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN14)
#define GPIO_I2C7_SMBA_PE9                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPE | GPIO_PIN9)
#define GPIO_I2C7_SMBA_PD10                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN10)

#define GPIO_I2C8_SCL_PD15                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN15)
#define GPIO_I2C8_SCL_PJ9                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPJ | GPIO_PIN9)
#define GPIO_I2C8_SCL_PG5                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPG | GPIO_PIN5)
#define GPIO_I2C8_SCL_PI3                       (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPI | GPIO_PIN3)
#define GPIO_I2C8_SDA_PD14                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN14)
#define GPIO_I2C8_SDA_PJ8                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPJ | GPIO_PIN8)
#define GPIO_I2C8_SDA_PG4                       (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_I2C8_SDA_PI2                       (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPI | GPIO_PIN2)
#define GPIO_I2C8_SMBA_PD13                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN13)
#define GPIO_I2C8_SMBA_PJ10                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPJ | GPIO_PIN10)
#define GPIO_I2C8_SMBA_PG6                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN6)
#define GPIO_I2C8_SMBA_PI1                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPI | GPIO_PIN1)

#define GPIO_I2C9_SCL_PI11                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN11)
#define GPIO_I2C9_SCL_PJ1                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPJ | GPIO_PIN1)
#define GPIO_I2C9_SCL_PJ4                       (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPJ | GPIO_PIN4)
#define GPIO_I2C9_SCL_PH15                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN15)
#define GPIO_I2C9_SDA_PI10                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPI | GPIO_PIN10)
#define GPIO_I2C9_SDA_PJ0                       (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPJ | GPIO_PIN0)
#define GPIO_I2C9_SDA_PJ3                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPJ | GPIO_PIN3)
#define GPIO_I2C9_SDA_PH14                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPH | GPIO_PIN14)
#define GPIO_I2C9_SMBA_PI9                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPI | GPIO_PIN9)
#define GPIO_I2C9_SMBA_PJ2                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPJ | GPIO_PIN2)
#define GPIO_I2C9_SMBA_PH13                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPH | GPIO_PIN13)

#define GPIO_I2C10_SCL_PI1                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPI | GPIO_PIN1)
#define GPIO_I2C10_SCL_PJ14                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN14)
#define GPIO_I2C10_SCL_PK4                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPK | GPIO_PIN4)
#define GPIO_I2C10_SCL_PK7                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPK | GPIO_PIN7)
#define GPIO_I2C10_SCL_PI6                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPI | GPIO_PIN6)
#define GPIO_I2C10_SDA_PI0                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPI | GPIO_PIN0)
#define GPIO_I2C10_SDA_PJ13                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN13)
#define GPIO_I2C10_SDA_PK3                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPK | GPIO_PIN3)
#define GPIO_I2C10_SDA_PK6                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPK | GPIO_PIN6)
#define GPIO_I2C10_SDA_PI5                      (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPI | GPIO_PIN5)
#define GPIO_I2C10_SMBA_PI3                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPI | GPIO_PIN3)
#define GPIO_I2C10_SMBA_PJ12                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN12)
#define GPIO_I2C10_SMBA_PK5                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPK | GPIO_PIN5)
#define GPIO_I2C10_SMBA_PI4                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPI | GPIO_PIN4)

#define GPIO_SPI1_NSS_PA4                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_SPI1_NSS_PA15                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)
#define GPIO_SPI1_NSS_PG10                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN10)
#define GPIO_SPI1_SCK_PA5                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN5)
#define GPIO_SPI1_SCK_PG11                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN11)
#define GPIO_SPI1_SCK_PB3                       (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN3)
#define GPIO_SPI1_MISO_PA6                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN6)
#define GPIO_SPI1_MISO_PG9                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN9)
#define GPIO_SPI1_MISO_PB4                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)
#define GPIO_SPI1_MOSI_PA7                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN7)
#define GPIO_SPI1_MOSI_PB5                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)
#define GPIO_SPI1_MOSI_PD7                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN7)

#define GPIO_SPI2_NSS_PA11                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_SPI2_NSS_PB9                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN9)
#define GPIO_SPI2_NSS_PB12                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_SPI2_NSS_PI0                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN0)
#define GPIO_SPI2_NSS_PB4                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_SPI2_SCK_PB10                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN10)
#define GPIO_SPI2_SCK_PB13                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_SPI2_SCK_PA9                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_SPI2_SCK_PA12                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)
#define GPIO_SPI2_SCK_PI1                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN1)
#define GPIO_SPI2_SCK_PD3                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPB | GPIO_PIN3)
#define GPIO_SPI2_MISO_PC2                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN2)
#define GPIO_SPI2_MISO_PB14                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_SPI2_MISO_PI2                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_SPI2_MOSI_PC1                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN1)
#define GPIO_SPI2_MOSI_PC3                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPC | GPIO_PIN3)
#define GPIO_SPI2_MOSI_PB15                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_SPI2_MOSI_PI3                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN3)

#define GPIO_SPI3_NSS_PA4                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_SPI3_NSS_PA15                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)
#define GPIO_SPI3_NSS_PD4                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN4)
#define GPIO_SPI3_SCK_PC10                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPC | GPIO_PIN10)
#define GPIO_SPI3_SCK_PD7                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN7)
#define GPIO_SPI3_SCK_PB3                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN3)
#define GPIO_SPI3_MISO_PB1                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)
#define GPIO_SPI3_MISO_PC11                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN11)
#define GPIO_SPI3_MISO_PD5                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN5)
#define GPIO_SPI3_MISO_PB4                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)
#define GPIO_SPI3_MOSI_PB2                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_SPI3_MOSI_PB5                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)
#define GPIO_SPI3_MOSI_PC12                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_SPI3_MOSI_PD6                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN6)

#define GPIO_SPI4_NSS_PA0                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_SPI4_NSS_PA4                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_SPI4_NSS_PG8                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN8)
#define GPIO_SPI4_NSS_PA15                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)
#define GPIO_SPI4_SCK_PA5                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN5)
#define GPIO_SPI4_SCK_PC12                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_SPI4_SCK_PG13                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_SPI4_SCK_PB3                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN3)
#define GPIO_SPI4_MISO_PA6                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN6)
#define GPIO_SPI4_MISO_PG12                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_SPI4_MISO_PB4                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)
#define GPIO_SPI4_MOSI_PA7                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN7)
#define GPIO_SPI4_MOSI_PB5                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)
#define GPIO_SPI4_MOSI_PG14                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)

#define GPIO_SPI5_NSS_PF6                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN6)
#define GPIO_SPI5_NSS_PH5                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN5)
#define GPIO_SPI5_NSS_PK1                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPK | GPIO_PIN1)
#define GPIO_SPI5_SCK_PF7                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPF | GPIO_PIN7)
#define GPIO_SPI5_SCK_PH6                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)
#define GPIO_SPI5_SCK_PK0                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPK | GPIO_PIN0)
#define GPIO_SPI5_MISO_PF8                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN8)
#define GPIO_SPI5_MISO_PH7                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN7)
#define GPIO_SPI5_MISO_PJ11                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN11)
#define GPIO_SPI5_MOSI_PF9                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN9)
#define GPIO_SPI5_MOSI_PF11                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN11)
#define GPIO_SPI5_MOSI_PJ10                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN10)

#define GPIO_SPI6_SCK_PE2                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN2)
#define GPIO_SPI6_SCK_PF3                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN3)
#define GPIO_SPI6_SCK_PE12                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN12)
#define GPIO_SPI6_MISO_PE5                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN5)
#define GPIO_SPI6_MISO_PF4                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_SPI6_MISO_PE13                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN13)
#define GPIO_SPI6_MOSI_PE6                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPE | GPIO_PIN6)
#define GPIO_SPI6_MOSI_PF5                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPF | GPIO_PIN5)
#define GPIO_SPI6_MOSI_PE14                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPE | GPIO_PIN14)

#define GPIO_SPI7_NSS_PI12                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN12)
#define GPIO_SPI7_NSS_PJ2                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN2)
#define GPIO_SPI7_NSS_PH12                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN12)
#define GPIO_SPI7_NSS_PH13                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN13)
#define GPIO_SPI7_SCK_PI8                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN8)
#define GPIO_SPI7_SCK_PJ1                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN1)
#define GPIO_SPI7_MISO_PI13                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN13)
#define GPIO_SPI7_MISO_PJ3                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN3)
#define GPIO_SPI7_MISO_PH14                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN14)
#define GPIO_SPI7_MOSI_PI14                     (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN14)
#define GPIO_SPI7_MOSI_PJ4                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN4)
#define GPIO_SPI7_MOSI_PH15                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPH | GPIO_PIN15)

#define GPIO_I2S1_CK_PA5                        (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN5)
#define GPIO_I2S1_CK_PG11                       (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN11)
#define GPIO_I2S1_CK_PB3                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPB | GPIO_PIN3)
#define GPIO_I2S1_CKIN_PC9                      (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_I2S1_MCK_PC4                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPC | GPIO_PIN4)
#define GPIO_I2S1_SD_PA6                        (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN6)
#define GPIO_I2S1_SD_PG9                        (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN9)
#define GPIO_I2S1_SD_PB4                        (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)
#define GPIO_I2S1_SD_EXT_PA7                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN7)
#define GPIO_I2S1_SD_EXT_PB5                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)
#define GPIO_I2S1_SD_EXT_PD7                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN7)
#define GPIO_I2S1_WS_PA4                        (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_I2S1_WS_PA15                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)
#define GPIO_I2S1_WS_PG10                       (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN10)

#define GPIO_I2S2_CK_PB10                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN10)
#define GPIO_I2S2_CK_PB13                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_I2S2_CK_PA9                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN9)
#define GPIO_I2S2_CK_PA12                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)
#define GPIO_I2S2_CK_PI1                        (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPI | GPIO_PIN1)
#define GPIO_I2S2_CK_PD3                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN3)
#define GPIO_I2S2_CKIN_PC9                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_I2S2_MCK_PC6                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_I2S2_SD_PC2                        (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN2)
#define GPIO_I2S2_SD_PB14                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_I2S2_SD_PI2                        (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN2)
#define GPIO_I2S2_SD_EXT_PC1                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPC | GPIO_PIN1)
#define GPIO_I2S2_SD_EXT_PC3                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN3)
#define GPIO_I2S2_SD_EXT_PB15                   (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_I2S2_SD_EXT_PI3                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN3)
#define GPIO_I2S2_WS_PA11                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_I2S2_WS_PB9                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_I2S2_WS_PB12                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_I2S2_WS_PI0                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN0)
#define GPIO_I2S2_WS_PB4                        (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)

#define GPIO_I2S3_CK_PC10                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPC | GPIO_PIN10)
#define GPIO_I2S3_CK_PB3                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPB | GPIO_PIN3)
#define GPIO_I2S3_CKIN_PC9                      (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_I2S3_MCK_PC7                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_I2S3_SD_PC11                       (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPC | GPIO_PIN11)
#define GPIO_I2S3_SD_PB4                        (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)
#define GPIO_I2S3_SD_EXT_PB2                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_I2S3_SD_EXT_PB5                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)
#define GPIO_I2S3_SD_EXT_PC12                   (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_I2S3_SD_EXT_PD6                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPD | GPIO_PIN6)
#define GPIO_I2S3_WS_PA4                        (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_I2S3_WS_PA15                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)

#define GPIO_I2S4_CK_PA5                        (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN5)
#define GPIO_I2S4_CK_PC12                       (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_I2S4_CK_PG13                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_I2S4_CK_PB3                        (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPB | GPIO_PIN3)
#define GPIO_I2S4_CKIN_PC9                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_I2S4_MCK_PA3                       (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPA | GPIO_PIN3)
#define GPIO_I2S4_SD_PA6                        (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN6)
#define GPIO_I2S4_SD_PG12                       (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_I2S4_SD_PB4                        (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)
#define GPIO_I2S4_SD_EXT_PA7                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN7)
#define GPIO_I2S4_SD_EXT_PB5                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)
#define GPIO_I2S4_SD_EXT_PG14                   (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_I2S4_WS_PA0                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_I2S4_WS_PA4                        (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_I2S4_WS_PG8                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN8)
#define GPIO_I2S4_WS_PA15                       (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)

#define GPIO_XSPI2_CLK_PI13                     (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPI | GPIO_PIN13)
#define GPIO_XSPI2_CLK_PF4                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_XSPI2_CLK_PF10                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPF | GPIO_PIN10)
#define GPIO_XSPI2_CLK_PB2                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_XSPI2_IO0_PI9                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPI | GPIO_PIN9)
#define GPIO_XSPI2_IO0_PF0                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_XSPI2_IO0_PF8                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPF | GPIO_PIN8)
#define GPIO_XSPI2_IO0_PB1                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)
#define GPIO_XSPI2_IO1_PI10                     (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN10)
#define GPIO_XSPI2_IO1_PF1                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)
#define GPIO_XSPI2_IO1_PF9                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPF | GPIO_PIN9)
#define GPIO_XSPI2_IO1_PB0                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN0)
#define GPIO_XSPI2_IO2_PI11                     (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPI | GPIO_PIN11)
#define GPIO_XSPI2_IO2_PF2                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPF | GPIO_PIN2)
#define GPIO_XSPI2_IO2_PF7                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPF | GPIO_PIN7)
#define GPIO_XSPI2_IO2_PA7                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPA | GPIO_PIN7)
#define GPIO_XSPI2_IO3_PI12                     (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPI | GPIO_PIN12)
#define GPIO_XSPI2_IO3_PF3                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPF | GPIO_PIN3)
#define GPIO_XSPI2_IO3_PF6                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPF | GPIO_PIN6)
#define GPIO_XSPI2_IO3_PA6                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPA | GPIO_PIN6)
#define GPIO_XSPI2_IO4_PH2                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN2)
#define GPIO_XSPI2_IO4_PJ1                      (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPJ | GPIO_PIN1)
#define GPIO_XSPI2_IO4_PG0                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN0)
#define GPIO_XSPI2_IO5_PH3                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN3)
#define GPIO_XSPI2_IO5_PJ2                      (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPJ | GPIO_PIN2)
#define GPIO_XSPI2_IO5_PG1                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN1)
#define GPIO_XSPI2_IO6_PK3                      (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPK | GPIO_PIN3)
#define GPIO_XSPI2_IO6_PG10                     (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPG | GPIO_PIN10)
#define GPIO_XSPI2_IO7_PK4                      (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPK | GPIO_PIN4)
#define GPIO_XSPI2_IO7_PG11                     (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPG | GPIO_PIN11)
#define GPIO_XSPI2_DQS_PF12                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPF | GPIO_PIN12)
#define GPIO_XSPI2_DQS_PG7                      (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPG | GPIO_PIN7)
#define GPIO_XSPI2_DQS_PK6                      (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPK | GPIO_PIN6)
#define GPIO_XSPI2_DQS_PG15                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN15)
#define GPIO_XSPI2_NCLK_PI14                    (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPI | GPIO_PIN14)
#define GPIO_XSPI2_NCLK_PF5                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPF | GPIO_PIN5)
#define GPIO_XSPI2_NCS1_PE5                     (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPE | GPIO_PIN5)
#define GPIO_XSPI2_NCS1_PG12                    (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_XSPI2_NCS1_PK5                     (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPK | GPIO_PIN5)
#define GPIO_XSPI2_NCS2_PG0                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN0)
#define GPIO_XSPI2_NCS2_PE7                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPE | GPIO_PIN7)
#define GPIO_XSPI2_NCS2_PI4                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPI | GPIO_PIN4)
#define GPIO_XSPI2_NCS3_PG1                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN1)
#define GPIO_XSPI2_NCS3_PI5                     (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN5)
#define GPIO_XSPI2_NCS4_PG10                    (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN10)
#define GPIO_XSPI2_NCS4_PI6                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPI | GPIO_PIN6)
#define GPIO_XSPI2_NCSIN_PG11                   (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN11)
#define GPIO_XSPI2_NCSIN_PI7                    (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN7)

#define GPIO_ETH1_CLK125_PD10                   (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPD | GPIO_PIN10)

#define GPIO_ETH1_MII_RXD0_PC4                  (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPC | GPIO_PIN4)
#define GPIO_ETH1_MII_RXD1_PC5                  (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPC | GPIO_PIN5)
#define GPIO_ETH1_MII_RXD2_PB0                  (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN0)
#define GPIO_ETH1_MII_RXD2_PH6                  (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)
#define GPIO_ETH1_MII_RXD3_PB1                  (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)
#define GPIO_ETH1_MII_RXD3_PH7                  (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPH | GPIO_PIN7)

#define GPIO_ETH1_MII_TXD0_PB12                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_ETH1_MII_TXD0_PG13                 (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_ETH1_MII_TXD1_PB13                 (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_ETH1_MII_TXD1_PG12                 (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_ETH1_MII_TXD1_PG14                 (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_ETH1_MII_TXD2_PE3                  (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPE | GPIO_PIN3)
#define GPIO_ETH1_MII_TXD2_PC2                  (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN2)
#define GPIO_ETH1_MII_TXD2_PB7                  (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_ETH1_MII_TXD3_PE2                  (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPE | GPIO_PIN2)
#define GPIO_ETH1_MII_TXD3_PB8                  (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)

#define GPIO_ETH1_MDC_PC1                       (GPIO_ALT | GPIO_AF1 |               \
                                                 GPIO_PORTPC | GPIO_PIN1)
#define GPIO_ETH1_MDIO_PA2                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPA | GPIO_PIN2)

#define GPIO_ETH1_MII_COL_PH3                   (GPIO_ALT | GPIO_AF3 |  \
                                                 GPIO_PORTPH | GPIO_PIN3)
#define GPIO_ETH1_MII_COL_PA3                   (GPIO_ALT | GPIO_AF2 |  \
                                                 GPIO_PORTPA | GPIO_PIN3)

#define GPIO_ETH1_MII_CRS_PA0                   (GPIO_ALT | GPIO_AF0 |  \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_ETH1_MII_CRS_PH2                   (GPIO_ALT | GPIO_AF4 |  \
                                                 GPIO_PORTPH | GPIO_PIN2)

#define GPIO_ETH1_MII_RX_CLK_PA1                (GPIO_ALT | GPIO_AF2 | \
                                                 GPIO_PORTPA | GPIO_PIN1)

#define GPIO_ETH1_MII_RX_DV_PA7                 (GPIO_ALT | GPIO_AF3 | \
                                                 GPIO_PORTPA | GPIO_PIN7)

#define GPIO_ETH1_MII_RX_ER_PI10                (GPIO_ALT | GPIO_AF3 | \
                                                 GPIO_PORTPI | GPIO_PIN10)
#define GPIO_ETH1_MII_RX_ER_PB10                (GPIO_ALT | GPIO_AF1 | \
                                                 GPIO_PORTPB | GPIO_PIN10)

#define GPIO_ETH1_MII_TX_CLK_PC3                (GPIO_ALT | GPIO_AF4 | \
                                                 GPIO_PORTPC | GPIO_PIN3)

#define GPIO_ETH1_MII_TX_EN_PB11                (GPIO_ALT | GPIO_AF0 | \
                                                 GPIO_PORTPB | GPIO_PIN11)
#define GPIO_ETH1_MII_TX_EN_PG11                (GPIO_ALT | GPIO_AF2 | \
                                                 GPIO_PORTPG | GPIO_PIN11)

#define GPIO_ETH1_MII_TX_ER_PB2                 (GPIO_ALT | GPIO_AF3 | \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_ETH1_MII_TX_ER_PA9                 (GPIO_ALT | GPIO_AF0 | \
                                                 GPIO_PORTPA | GPIO_PIN9)

#define GPIO_ETH1_PHY_INTN_PD15                 (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPD | GPIO_PIN15)
#define GPIO_ETH1_PHY_INTN_PG7                  (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN7)
#define GPIO_ETH1_PHY_INTN_PG15                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN15)
#define GPIO_ETH1_PHY_INTN_PB4                  (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)
#define GPIO_ETH1_PPS_OUT_PD14                  (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN14)
#define GPIO_ETH1_PPS_OUT_PG8                   (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN8)
#define GPIO_ETH1_PPS_OUT_PB5                   (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)

#define GPIO_ETH1_RMII_RXD0_PC4                 (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPC | GPIO_PIN4)
#define GPIO_ETH1_RMII_RXD1_PC5                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPC | GPIO_PIN5)

#define GPIO_ETH1_RMII_TXD0_PB12                (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_ETH1_RMII_TXD0_PG13                (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_ETH1_RMII_TXD1_PB13                (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_ETH1_RMII_TXD1_PG12                (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_ETH1_RMII_TXD1_PG14                (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)

#define GPIO_ETH1_RMII_REF_CLK_PA1              (GPIO_ALT | GPIO_AF2 | \
                                                 GPIO_PORTPA | GPIO_PIN1)
#define GPIO_ETH1_RMII_CRS_DV_PA7               (GPIO_ALT | GPIO_AF3 | \
                                                 GPIO_PORTPA | GPIO_PIN7)

#define GPIO_ETH1_RMII_TX_EN_PB11               (GPIO_ALT | GPIO_AF0 | \
                                                 GPIO_PORTPB | GPIO_PIN11)
#define GPIO_ETH1_RMII_TX_EN_PG11               (GPIO_ALT | GPIO_AF2 | \
                                                 GPIO_PORTPG | GPIO_PIN11)

#define GPIO_ETH1_GMII_GTX_CLK_PF5              (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN5)

#define GPIO_ETH1_GMII_RXD0_PC4                 (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPC | GPIO_PIN4)
#define GPIO_ETH1_GMII_RXD1_PC5                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPC | GPIO_PIN5)
#define GPIO_ETH1_GMII_RXD2_PB0                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN0)
#define GPIO_ETH1_GMII_RXD2_PH6                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)
#define GPIO_ETH1_GMII_RXD3_PB1                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)
#define GPIO_ETH1_GMII_RXD3_PH7                 (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPH | GPIO_PIN7)
#define GPIO_ETH1_GMII_RXD4_PE12                (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPE | GPIO_PIN12)
#define GPIO_ETH1_GMII_RXD4_PH8                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN8)
#define GPIO_ETH1_GMII_RXD5_PE13                (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPE | GPIO_PIN13)
#define GPIO_ETH1_GMII_RXD5_PH9                 (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPH | GPIO_PIN9)
#define GPIO_ETH1_GMII_RXD6_PE14                (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPE | GPIO_PIN14)
#define GPIO_ETH1_GMII_RXD6_PH10                (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN10)
#define GPIO_ETH1_GMII_RXD7_PE15                (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPE | GPIO_PIN15)
#define GPIO_ETH1_GMII_RXD7_PH11                (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPH | GPIO_PIN11)

#define GPIO_ETH1_GMII_TXD0_PB12                (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_ETH1_GMII_TXD0_PG13                (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_ETH1_GMII_TXD1_PB13                (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_ETH1_GMII_TXD1_PG12                (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_ETH1_GMII_TXD1_PG14                (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_ETH1_GMII_TXD2_PE3                 (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPE | GPIO_PIN3)
#define GPIO_ETH1_GMII_TXD2_PC2                 (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN2)
#define GPIO_ETH1_GMII_TXD2_PB7                 (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_ETH1_GMII_TXD3_PE2                 (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPE | GPIO_PIN2)
#define GPIO_ETH1_GMII_TXD3_PB8                 (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_ETH1_GMII_TXD4_PF0                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_ETH1_GMII_TXD4_PI4                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN4)
#define GPIO_ETH1_GMII_TXD5_PF1                 (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)
#define GPIO_ETH1_GMII_TXD5_PI5                 (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN5)
#define GPIO_ETH1_GMII_TXD6_PF2                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN2)
#define GPIO_ETH1_GMII_TXD6_PI6                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN6)
#define GPIO_ETH1_GMII_TXD7_PF3                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN3)
#define GPIO_ETH1_GMII_TXD7_PI7                 (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN7)

#define GPIO_ETH1_GMII_COL_PH3                  (GPIO_ALT | GPIO_AF3 |   \
                                                 GPIO_PORTPH | GPIO_PIN3)
#define GPIO_ETH1_GMII_COL_PA3                  (GPIO_ALT | GPIO_AF2 |   \
                                                 GPIO_PORTPA | GPIO_PIN3)

#define GPIO_ETH1_GMII_CRS_PA0                  (GPIO_ALT | GPIO_AF0 |   \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_ETH1_GMII_CRS_PH2                  (GPIO_ALT | GPIO_AF4 |   \
                                                 GPIO_PORTPH | GPIO_PIN2)

#define GPIO_ETH1_GMII_RX_CLK_PA1               (GPIO_ALT | GPIO_AF2 | \
                                                 GPIO_PORTPA | GPIO_PIN1)

#define GPIO_ETH1_GMII_RX_DV_PA7                (GPIO_ALT | GPIO_AF3 | \
                                                 GPIO_PORTPA | GPIO_PIN7)

#define GPIO_ETH1_GMII_RX_ER_PI10               (GPIO_ALT | GPIO_AF3 | \
                                                 GPIO_PORTPI | GPIO_PIN10)
#define GPIO_ETH1_GMII_RX_ER_PB10               (GPIO_ALT | GPIO_AF1 | \
                                                 GPIO_PORTPB | GPIO_PIN10)

#define GPIO_ETH1_GMII_TX_EN_PB11               (GPIO_ALT | GPIO_AF0 | \
                                                 GPIO_PORTPB | GPIO_PIN11)
#define GPIO_ETH1_GMII_TX_EN_PG11               (GPIO_ALT | GPIO_AF2 | \
                                                 GPIO_PORTPG | GPIO_PIN11)
#define GPIO_ETH1_GMII_TX_ER_PB2                (GPIO_ALT | GPIO_AF3 | \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_ETH1_GMII_TX_ER_PA9                (GPIO_ALT | GPIO_AF0 | \
                                                 GPIO_PORTPA | GPIO_PIN9)

#define GPIO_ETH1_GMII_TX_CLK_PC3               (GPIO_ALT | GPIO_AF4 | \
                                                 GPIO_PORTPC | GPIO_PIN3)

#define GPIO_ETH2_MII_RXD0_RMII_RXD0_PG2        (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPG | GPIO_PIN2)
#define GPIO_ETH2_MII_RXD0_RMII_RXD0_PI1        (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPI | GPIO_PIN1)
#define GPIO_ETH2_MII_RXD0_RMII_RXD0_PG9        (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPG | GPIO_PIN9)
#define GPIO_ETH2_MII_RXD1_RMII_RXD1_PG3        (GPIO_ALT | GPIO_AF0 |           \
                                                 GPIO_PORTPG | GPIO_PIN3)
#define GPIO_ETH2_MII_RXD1_RMII_RXD1_PI2        (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPI | GPIO_PIN2)
#define GPIO_ETH2_MII_RXD1_RMII_RXD1_PG10       (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPG | GPIO_PIN10)
#define GPIO_ETH2_MII_RXD2_PJ8                  (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPJ | GPIO_PIN8)
#define GPIO_ETH2_MII_RXD2_PG4                  (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_ETH2_MII_RXD3_PJ9                  (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPJ | GPIO_PIN9)
#define GPIO_ETH2_MII_RXD3_PG5                  (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN5)
#define GPIO_ETH2_MII_TX_CLK_PI8                (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPI | GPIO_PIN8)
#define GPIO__PG0                               (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN0)
#define GPIO_ETH2_MII_TX_EN_RMII_TX_EN_PF11     (GPIO_ALT | GPIO_AF6 |           \
                                                 GPIO_PORTPF | GPIO_PIN11)
#define GPIO_ETH2_MII_TX_EN_RMII_TX_EN_PH13     (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPH | GPIO_PIN13)
#define GPIO_ETH2_MII_TX_ER_PG1                 (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN1)
#define GPIO_ETH2_MII_TX_ER_PJ5                 (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPJ | GPIO_PIN5)
#define GPIO_ETH2_MII_TXD0_RMII_TXD0_PH4        (GPIO_ALT | GPIO_AF0 |           \
                                                 GPIO_PORTPH | GPIO_PIN4)
#define GPIO_ETH2_MII_TXD0_RMII_TXD0_PF12       (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPF | GPIO_PIN12)
#define GPIO_ETH2_MII_TXD0_RMII_TXD0_PH14       (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPH | GPIO_PIN14)
#define GPIO_ETH2_MII_TXD1_RMII_TXD1_PH5        (GPIO_ALT | GPIO_AF1 |           \
                                                 GPIO_PORTPH | GPIO_PIN5)
#define GPIO_ETH2_MII_TXD1_RMII_TXD1_PF13       (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPF | GPIO_PIN13)
#define GPIO_ETH2_MII_TXD1_RMII_TXD1_PH15       (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPH | GPIO_PIN15)
#define GPIO_ETH2_MII_TXD2_PJ0                  (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPJ | GPIO_PIN0)
#define GPIO_ETH2_MII_TXD2_PF14                 (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPF | GPIO_PIN14)
#define GPIO_ETH2_MII_TXD3_PJ1                  (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN1)
#define GPIO_ETH2_MII_TXD3_PF15                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN15)
#define GPIO_ETH2_PHY_INTN_PE4                  (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPE | GPIO_PIN4)
#define GPIO_ETH2_PHY_INTN_PE7                  (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN7)
#define GPIO_ETH2_PHY_INTN_PD15                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN15)
#define GPIO_ETH2_PPS_OUT_PF10                  (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN10)
#define GPIO_ETH2_PPS_OUT_PI15                  (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPI | GPIO_PIN15)
#define GPIO_ETH2_PPS_OUT_PD10                  (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN10)
#define GPIO_ETH2_MDC_PF7                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN7)
#define GPIO_ETH2_MDIO_PF6                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN6)
#define GPIO_ETH2_MII_COL_PF8                   (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN8)
#define GPIO_ETH2_MII_COL_PK0                   (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPK | GPIO_PIN0)
#define GPIO_ETH2_MII_CRS_PF9                   (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPF | GPIO_PIN9)
#define GPIO_ETH2_MII_CRS_PK1                   (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPK | GPIO_PIN1)
#define GPIO_ETH2_MII_RX_CLK_RMII_REF_CLK_PF4   (GPIO_ALT | GPIO_AF3 |           \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_ETH2_MII_RX_CLK_RMII_REF_CLK_PJ4   (GPIO_ALT | GPIO_AF0 |           \
                                                 GPIO_PORTPJ | GPIO_PIN4)
#define GPIO_ETH2_MII_RX_CLK_RMII_REF_CLK_PA8   (GPIO_ALT | GPIO_AF0 |           \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_ETH2_MII_RX_DV_RMII_CRS_DV_PC0     (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPC | GPIO_PIN0)
#define GPIO_ETH2_MII_RX_DV_RMII_CRS_DV_PJ3     (GPIO_ALT | GPIO_AF0 |           \
                                                 GPIO_PORTPJ | GPIO_PIN3)
#define GPIO_ETH2_MII_RX_DV_RMII_CRS_DV_PH12    (GPIO_ALT | GPIO_AF2 |           \
                                                 GPIO_PORTPH | GPIO_PIN12)
#define GPIO_ETH2_MII_RX_ER_PG6                 (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN6)
#define GPIO_ETH2_MII_RX_ER_PI3                 (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN3)
#define GPIO_ESC_EEPROM_CLK_PE5                 (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN5)
#define GPIO_ESC_EEPROM_CLK_PE8                 (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPE | GPIO_PIN8)
#define GPIO_ESC_EEPROM_CLK_PJ10                (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPJ | GPIO_PIN10)
#define GPIO_ESC_EEPROM_DATA_PE6                (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN6)
#define GPIO_ESC_EEPROM_DATA_PE9                (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPE | GPIO_PIN9)
#define GPIO_ESC_EEPROM_DATA_PJ11               (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPJ | GPIO_PIN11)
#define GPIO_ESC_IRQ_PJ5                        (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPJ | GPIO_PIN5)
#define GPIO_ESC_IRQ_PC8                        (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN8)
#define GPIO_ESC_IRQ_PD3                        (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPD | GPIO_PIN3)
#define GPIO_ESC_IRQ_PI6                        (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPI | GPIO_PIN6)
#define GPIO_ESC_LATCH0_PI9                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPI | GPIO_PIN9)
#define GPIO_ESC_LATCH0_PC0                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPC | GPIO_PIN0)
#define GPIO_ESC_LATCH0_PD11                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN11)
#define GPIO_ESC_LATCH0_PK7                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPK | GPIO_PIN7)
#define GPIO_ESC_LATCH1_PD6                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPD | GPIO_PIN6)
#define GPIO_ESC_LATCH1_PK4                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPK | GPIO_PIN4)
#define GPIO_ESC_LATCH1_PI5                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPI | GPIO_PIN5)
#define GPIO_ESC_LED_ERR_PB2                    (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_ESC_LED_ERR_PD8                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN8)
#define GPIO_ESC_LED_ERR_PK0                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPK | GPIO_PIN0)
#define GPIO_ESC_LED_ERR_PG15                   (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN15)
#define GPIO_ESC_LED_ERR_PD0                    (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPD | GPIO_PIN0)
#define GPIO_ESC_LED_RUN_PA4                    (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_ESC_LED_RUN_PE15                   (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN15)
#define GPIO_ESC_LED_RUN_PK1                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPK | GPIO_PIN1)
#define GPIO_ESC_LED_STATE_RUN_PE4              (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN4)
#define GPIO_ESC_LED_STATE_RUN_PA5              (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPA | GPIO_PIN5)
#define GPIO_ESC_LED_STATE_RUN_PE10             (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN10)
#define GPIO_ESC_LED_STATE_RUN_PJ15             (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPJ | GPIO_PIN15)
#define GPIO_ESC_LINK_ACT0_PD12                 (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPD | GPIO_PIN12)
#define GPIO_ESC_LINK_ACT0_PC12                 (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_ESC_LINK_ACT0_PG15                 (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN15)
#define GPIO_ESC_LINK_ACT0_PH2                  (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPH | GPIO_PIN2)
#define GPIO_ESC_P1_MII_TX_EN_PH2               (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPH | GPIO_PIN2)
#define GPIO_ESC_LINK_ACT1_PA11                 (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_ESC_LINK_ACT1_PD7                  (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPD | GPIO_PIN7)
#define GPIO_ESC_LINK_ACT1_PI7                  (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPI | GPIO_PIN7)
#define GPIO_ESC_MDC_PF7                        (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPF | GPIO_PIN7)
#define GPIO_ESC_MDC_PC1                        (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN1)
#define GPIO_ESC_MDC_PE12                       (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPE | GPIO_PIN12)
#define GPIO_ESC_MDC_PC7                        (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_ESC_MDIO_PF6                       (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPF | GPIO_PIN6)
#define GPIO_ESC_MDIO_PE13                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPE | GPIO_PIN13)
#define GPIO_ESC_MDIO_PA2                       (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN2)
#define GPIO_ESC_MDIO_PC6                       (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_ESC_P1_LINK_PA2                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN2)
#define GPIO_ESC_P0_LINK_PE11                   (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN11)
#define GPIO_ESC_P0_LINK_PK2                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPK | GPIO_PIN2)
#define GPIO_ESC_P0_LINK_PE0                    (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPE | GPIO_PIN0)
#define GPIO_ESC_P0_MII_RX_CLK_PF5              (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPF | GPIO_PIN5)
#define GPIO_ESC_P0_MII_RX_CLK_PA1              (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN1)
#define GPIO_ESC_P0_MII_RX_DV_PA0               (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_ESC_P0_MII_RX_DV_PA7               (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPA | GPIO_PIN7)
#define GPIO_ESC_P0_MII_RX_ER_PI10              (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPI | GPIO_PIN10)
#define GPIO_ESC_P0_MII_RX_ER_PH3               (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN3)
#define GPIO_ESC_P0_MII_RX_ER_PB10              (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN10)
#define GPIO_ESC_P0_MII_RXD0_PF8                (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPF | GPIO_PIN8)
#define GPIO_ESC_P0_MII_RXD0_PC4                (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN4)
#define GPIO_ESC_P0_MII_RXD1_PF9                (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPF | GPIO_PIN9)
#define GPIO_ESC_P0_MII_RXD1_PC5                (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN5)
#define GPIO_ESC_P0_MII_RXD2_PB0                (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN0)
#define GPIO_ESC_P0_MII_RXD2_PH6                (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPH | GPIO_PIN6)
#define GPIO_ESC_P0_MII_RXD2_PH10               (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN10)
#define GPIO_ESC_P0_MII_RXD3_PB1                (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)
#define GPIO_ESC_P0_MII_RXD3_PH7                (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPH | GPIO_PIN7)
#define GPIO_ESC_P0_MII_RXD3_PH11               (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPH | GPIO_PIN11)
#define GPIO_ESC_P0_MII_TX_CLK_PC3              (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN3)
#define GPIO_ESC_P0_MII_TX_EN_PB11              (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN11)
#define GPIO_ESC_P0_MII_TX_EN_PG11              (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPG | GPIO_PIN11)
#define GPIO_ESC_P0_MII_TXD0_PB12               (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_ESC_P0_MII_TXD0_PG13               (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_ESC_P0_MII_TXD1_PB13               (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_ESC_P0_MII_TXD1_PG12               (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_ESC_P0_MII_TXD1_PG14               (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_ESC_P0_MII_TXD2_PE3                (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN3)
#define GPIO_ESC_P0_MII_TXD2_PC2                (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPC | GPIO_PIN2)
#define GPIO_ESC_P0_MII_TXD2_PC10               (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPC | GPIO_PIN10)
#define GPIO_ESC_P0_MII_TXD2_PJ12               (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPJ | GPIO_PIN12)
#define GPIO_ESC_P0_MII_TXD2_PB7                (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_ESC_P0_MII_TXD3_PE2                (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN2)
#define GPIO_ESC_P0_MII_TXD3_PC11               (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPC | GPIO_PIN11)
#define GPIO_ESC_P0_MII_TXD3_PJ13               (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPJ | GPIO_PIN13)
#define GPIO_ESC_P1_LINK_PA6                    (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPA | GPIO_PIN6)
#define GPIO_ESC_P1_LINK_PG8                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN8)
#define GPIO_ESC_P1_LINK_PA10                   (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN10)
#define GPIO_ESC_P1_MII_RX_CLK_PF4              (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPF | GPIO_PIN4)
#define GPIO_ESC_P1_MII_RX_CLK_PJ4              (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPJ | GPIO_PIN4)
#define GPIO_ESC_P1_MII_RX_CLK_PA8              (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_ESC_P1_MII_RX_DV_PJ3               (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPJ | GPIO_PIN3)
#define GPIO_ESC_P1_MII_RX_DV_PH12              (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPH | GPIO_PIN12)
#define GPIO_ESC_P1_MII_RX_DV_PC0               (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN0)
#define GPIO_ESC_P1_MII_RX_ER_PG6               (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN6)
#define GPIO_ESC_P1_MII_RX_ER_PI3               (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPI | GPIO_PIN3)
#define GPIO_ESC_P1_MII_RXD0_PG2                (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPG | GPIO_PIN2)
#define GPIO_ESC_P1_MII_RXD0_PI1                (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPI | GPIO_PIN1)
#define GPIO_ESC_P1_MII_RXD0_PG9                (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPG | GPIO_PIN9)
#define GPIO_ESC_P1_MII_RXD1_PG3                (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPG | GPIO_PIN3)
#define GPIO_ESC_P1_MII_RXD1_PI2                (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPI | GPIO_PIN2)
#define GPIO_ESC_P1_MII_RXD1_PG10               (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPG | GPIO_PIN10)
#define GPIO_ESC_P1_MII_RXD2_PJ8                (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPJ | GPIO_PIN8)
#define GPIO_ESC_P1_MII_RXD2_PG4                (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_ESC_P1_MII_RXD3_PJ9                (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPJ | GPIO_PIN9)
#define GPIO_ESC_P1_MII_RXD3_PG5                (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPG | GPIO_PIN5)
#define GPIO_ESC_P1_MII_TX_CLK_PI8              (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPI | GPIO_PIN8)
#define GPIO_ESC_P1_MII_TX_CLK_PG0              (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPG | GPIO_PIN0)
#define GPIO_ESC_P1_MII_TX_EN_PF10              (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN10)
#define GPIO_ESC_P1_MII_TX_EN_PF11              (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPF | GPIO_PIN11)
#define GPIO_ESC_P1_MII_TX_EN_PH13              (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPH | GPIO_PIN13)
#define GPIO_ESC_P1_MII_TXD0_PH4                (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPH | GPIO_PIN4)
#define GPIO_ESC_P1_MII_TXD0_PF12               (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPF | GPIO_PIN12)
#define GPIO_ESC_P1_MII_TXD0_PH14               (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPH | GPIO_PIN14)
#define GPIO_ESC_P1_MII_TXD1_PH5                (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPH | GPIO_PIN5)
#define GPIO_ESC_P1_MII_TXD1_PF13               (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPF | GPIO_PIN13)
#define GPIO_ESC_P1_MII_TXD1_PH15               (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPH | GPIO_PIN15)
#define GPIO_ESC_P1_MII_TXD2_PJ0                (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPJ | GPIO_PIN0)
#define GPIO_ESC_P1_MII_TXD2_PF14               (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN14)
#define GPIO_ESC_P1_MII_TXD3_PJ1                (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPJ | GPIO_PIN1)
#define GPIO_ESC_P1_MII_TXD3_PF15               (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPF | GPIO_PIN15)
#define GPIO_ESC_RESET_IN_PI11                  (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPI | GPIO_PIN11)
#define GPIO_ESC_RESET_IN_PI0                   (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPI | GPIO_PIN0)
#define GPIO_ESC_RESET_IN_PE1                   (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPE | GPIO_PIN1)
#define GPIO_ESC_RESET_OUT_PD13                 (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPD | GPIO_PIN13)
#define GPIO_ESC_RESET_OUT_PC6                  (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_ESC_RESET_OUT_PD1                  (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN1)
#define GPIO_ESC_SYNC0_PD9                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN9)
#define GPIO_ESC_SYNC0_PA9                      (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPA | GPIO_PIN9)
#define GPIO_ESC_SYNC0_PI4                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPI | GPIO_PIN4)
#define GPIO_ESC_SYNC1_PJ2                      (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPJ | GPIO_PIN2)
#define GPIO_ESC_SYNC1_PA12                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)
#define GPIO_ESC_SYNC1_PD5                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN5)
#define GPIO_SDRAM_A0_PF0                       (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_SDRAM_A0_PE8                       (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPE | GPIO_PIN8)
#define GPIO_SDRAM_A1_PF1                       (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPF | GPIO_PIN1)
#define GPIO_SDRAM_A1_PE9                       (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPE | GPIO_PIN9)
#define GPIO_SDRAM_A2_PF2                       (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPF | GPIO_PIN2)
#define GPIO_SDRAM_A2_PE10                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPE | GPIO_PIN10)
#define GPIO_LCD_B0_PE4                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPE | GPIO_PIN4)
#define GPIO_LCD_B0_PJ12                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN12)
#define GPIO_LCD_B0_PG14                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_LCD_B1_PA10                        (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPA | GPIO_PIN10)
#define GPIO_LCD_B1_PD0                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN0)
#define GPIO_LCD_B1_PJ13                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN13)
#define GPIO_LCD_B1_PG12                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_LCD_B1_PC10                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPC | GPIO_PIN10)
#define GPIO_LCD_B2_PA3                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN3)
#define GPIO_LCD_B2_PC9                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_LCD_B2_PD2                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN2)
#define GPIO_LCD_B2_PD6                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN6)
#define GPIO_LCD_B2_PJ14                        (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN14)
#define GPIO_LCD_B2_PG10                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN10)
#define GPIO_LCD_B3_PD10                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPD | GPIO_PIN10)
#define GPIO_LCD_B3_PA8                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_LCD_B3_PJ15                        (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN15)
#define GPIO_LCD_B3_PG11                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN11)
#define GPIO_LCD_B4_PA10                        (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPA | GPIO_PIN10)
#define GPIO_LCD_B4_PJ13                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN13)
#define GPIO_LCD_B4_PG12                        (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_LCD_B4_PE12                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN12)
#define GPIO_LCD_B4_PC11                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPC | GPIO_PIN11)
#define GPIO_LCD_B4_PK3                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPK | GPIO_PIN3)
#define GPIO_LCD_B4_PI4                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN4)
#define GPIO_LCD_B5_PA3                         (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPA | GPIO_PIN3)
#define GPIO_LCD_B5_PK4                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPK | GPIO_PIN4)
#define GPIO_LCD_B5_PB5                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN5)
#define GPIO_LCD_B5_PI5                         (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN5)
#define GPIO_LCD_B6_PA15                        (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)
#define GPIO_LCD_B6_PK5                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPK | GPIO_PIN5)
#define GPIO_LCD_B6_PB8                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_LCD_B6_PI6                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN6)
#define GPIO_LCD_B7_PD2                         (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPD | GPIO_PIN2)
#define GPIO_LCD_B7_PK6                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPK | GPIO_PIN6)
#define GPIO_LCD_B7_PB9                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_LCD_B7_PI7                         (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN7)
#define GPIO_LCD_G0_PE5                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPE | GPIO_PIN5)
#define GPIO_LCD_G0_PB1                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)
#define GPIO_LCD_G0_PJ7                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN7)
#define GPIO_LCD_G1_PE6                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPE | GPIO_PIN6)
#define GPIO_LCD_G1_PB0                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN0)
#define GPIO_LCD_G1_PJ8                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN8)
#define GPIO_LCD_G2_PC0                         (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPC | GPIO_PIN0)
#define GPIO_LCD_G2_PA6                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPA | GPIO_PIN6)
#define GPIO_LCD_G2_PI15                        (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPI | GPIO_PIN15)
#define GPIO_LCD_G2_PJ9                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN9)
#define GPIO_LCD_G2_PH13                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN13)
#define GPIO_LCD_G3_PJ12                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPJ | GPIO_PIN12)
#define GPIO_LCD_G3_PG10                        (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPG | GPIO_PIN10)
#define GPIO_LCD_G3_PC9                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_LCD_G3_PE11                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPE | GPIO_PIN11)
#define GPIO_LCD_G3_PJ10                        (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN10)
#define GPIO_LCD_G3_PH14                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN14)
#define GPIO_LCD_G4_PH4                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPH | GPIO_PIN4)
#define GPIO_LCD_G4_PB10                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN10)
#define GPIO_LCD_G4_PJ11                        (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN11)
#define GPIO_LCD_G4_PH15                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN15)
#define GPIO_LCD_G5_PH4                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPH | GPIO_PIN4)
#define GPIO_LCD_G5_PC1                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPC | GPIO_PIN1)
#define GPIO_LCD_G5_PB11                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN11)
#define GPIO_LCD_G5_PK0                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPK | GPIO_PIN0)
#define GPIO_LCD_G5_PI0                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN0)
#define GPIO_LCD_G6_PI11                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN11)
#define GPIO_LCD_G6_PK1                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPK | GPIO_PIN1)
#define GPIO_LCD_G6_PC7                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_LCD_G6_PI1                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPI | GPIO_PIN1)
#define GPIO_LCD_G7_PB15                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_LCD_G7_PK2                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPK | GPIO_PIN2)
#define GPIO_LCD_G7_PG8                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN8)
#define GPIO_LCD_G7_PI2                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN2)
#define GPIO_LCD_G7_PD3                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN3)
#define GPIO_LCD_R0_PI15                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN15)
#define GPIO_LCD_R0_PH2                         (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPH | GPIO_PIN2)
#define GPIO_LCD_R0_PG13                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_LCD_R0_PE0                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPE | GPIO_PIN0)
#define GPIO_LCD_R1_PA2                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPA | GPIO_PIN2)
#define GPIO_LCD_R1_PH3                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN3)
#define GPIO_LCD_R1_PJ0                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN0)
#define GPIO_LCD_R2_PA1                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPA | GPIO_PIN1)
#define GPIO_LCD_R2_PJ1                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN1)
#define GPIO_LCD_R2_PH8                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN8)
#define GPIO_LCD_R2_PC10                        (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPC | GPIO_PIN10)
#define GPIO_LCD_R3_PA15                        (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPA | GPIO_PIN15)
#define GPIO_LCD_R3_PB0                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPB | GPIO_PIN0)
#define GPIO_LCD_R3_PJ2                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN2)
#define GPIO_LCD_R3_PH9                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN9)
#define GPIO_LCD_R4_PA5                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPA | GPIO_PIN5)
#define GPIO_LCD_R4_PJ3                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN3)
#define GPIO_LCD_R4_PH10                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN10)
#define GPIO_LCD_R4_PA11                        (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_LCD_R5_PC0                         (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPC | GPIO_PIN0)
#define GPIO_LCD_R5_PJ4                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN4)
#define GPIO_LCD_R5_PH11                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPH | GPIO_PIN11)
#define GPIO_LCD_R5_PA9                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPA | GPIO_PIN9)
#define GPIO_LCD_R5_PA12                        (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)
#define GPIO_LCD_R6_PA8                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_LCD_R6_PB1                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)
#define GPIO_LCD_R6_PJ5                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN5)
#define GPIO_LCD_R6_PH12                        (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPH | GPIO_PIN12)
#define GPIO_LCD_R6_PC12                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_LCD_R6_PE1                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPE | GPIO_PIN1)
#define GPIO_LCD_R7_PJ0                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPJ | GPIO_PIN0)
#define GPIO_LCD_R7_PC4                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN4)
#define GPIO_LCD_R7_PE15                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPE | GPIO_PIN15)
#define GPIO_LCD_R7_PJ6                         (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPJ | GPIO_PIN6)
#define GPIO_LCD_R7_PG6                         (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN6)
#define GPIO_LCD_CLK_PI14                       (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN14)
#define GPIO_LCD_CLK_PE14                       (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN14)
#define GPIO_LCD_CLK_PB14                       (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_LCD_CLK_PG7                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN7)
#define GPIO_LCD_DE_PF10                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN10)
#define GPIO_LCD_DE_PC5                         (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN5)
#define GPIO_LCD_DE_PE13                        (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPE | GPIO_PIN13)
#define GPIO_LCD_DE_PK7                         (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPK | GPIO_PIN7)
#define GPIO_LCD_HSYNC_PI10                     (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPI | GPIO_PIN10)
#define GPIO_LCD_HSYNC_PI12                     (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN12)
#define GPIO_LCD_HSYNC_PC6                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_LCD_VSYNC_PI9                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPI | GPIO_PIN9)
#define GPIO_LCD_VSYNC_PI13                     (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN13)
#define GPIO_LCD_VSYNC_PA4                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_LCD_VSYNC_PA7                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPA | GPIO_PIN7)
#define GPIO_SDMMC1_CD_PD1                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN1)
#define GPIO_SDMMC1_CDIR_PB9                    (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_SDMMC1_D0_PB13                     (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_SDMMC1_D0_PC8                      (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPC | GPIO_PIN8)
#define GPIO_SDMMC1_D0DIR_PC6                   (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_SDMMC1_D1_PC9                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPC | GPIO_PIN9)
#define GPIO_SDMMC1_D2_PC10                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPC | GPIO_PIN10)
#define GPIO_SDMMC1_D3_PC11                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPC | GPIO_PIN11)
#define GPIO_SDMMC1_D4_PB8                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_SDMMC1_D4_PD14                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN14)
#define GPIO_SDMMC1_D5_PB9                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_SDMMC1_D5_PD15                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPD | GPIO_PIN15)
#define GPIO_SDMMC1_D6_PC6                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_SDMMC1_D6_PB6                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)
#define GPIO_SDMMC1_D7_PC7                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_SDMMC1_D7_PB7                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_SDMMC1_CK_PC12                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPC | GPIO_PIN12)
#define GPIO_SDMMC1_CKIN_PB8                    (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_SDMMC1_CMD_PD2                     (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN2)
#define GPIO_SDMMC1_D123DIR_PC7                 (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_SDMMC1_LEDCTRL_PI11                (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPI | GPIO_PIN11)
#define GPIO_SDMMC1_LEDCTRL_PF9                 (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN9)
#define GPIO_SDMMC1_LEDCTRL_PE8                 (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN8)
#define GPIO_SDMMC1_RST_PD3                     (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPD | GPIO_PIN3)
#define GPIO_SDMMC1_SEL_PI8                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPI | GPIO_PIN8)
#define GPIO_SDMMC1_SEL_PA11                    (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_SDMMC1_SEL_PJ12                    (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPJ | GPIO_PIN12)
#define GPIO_SDMMC1_WP_PD0                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPD | GPIO_PIN0)
#define GPIO_SDMMC2_CD_PD5                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPD | GPIO_PIN5)
#define GPIO_SDMMC2_CDIR_PG5                    (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN5)
#define GPIO_SDMMC2_D0_PB14                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_SDMMC2_D0_PG9                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN9)
#define GPIO_SDMMC2_D0DIR_PG13                  (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_SDMMC2_D1_PB15                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_SDMMC2_D1_PG10                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN10)
#define GPIO_SDMMC2_D2_PG11                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN11)
#define GPIO_SDMMC2_D2_PB3                      (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPB | GPIO_PIN3)
#define GPIO_SDMMC2_D3_PG12                     (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN12)
#define GPIO_SDMMC2_D3_PB4                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPB | GPIO_PIN4)
#define GPIO_SDMMC2_D4_PG4                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_SDMMC2_D4_PB8                      (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_SDMMC2_D5_PG5                      (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPG | GPIO_PIN5)
#define GPIO_SDMMC2_D5_PB9                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_SDMMC2_D6_PG13                     (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN13)
#define GPIO_SDMMC2_D6_PC6                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_SDMMC2_D7_PG14                     (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_SDMMC2_D7_PC7                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_SDMMC2_CK_PC1                      (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPC | GPIO_PIN1)
#define GPIO_SDMMC2_CK_PD6                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPD | GPIO_PIN6)
#define GPIO_SDMMC2_CKIN_PC4                    (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPC | GPIO_PIN4)
#define GPIO_SDMMC2_CKIN_PG4                    (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN4)
#define GPIO_SDMMC2_CMD_PA0                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPA | GPIO_PIN0)
#define GPIO_SDMMC2_CMD_PD7                     (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPD | GPIO_PIN7)
#define GPIO_SDMMC2_D123DIR_PG14                (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPG | GPIO_PIN14)
#define GPIO_SDMMC2_LEDCTRL_PI11                (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN11)
#define GPIO_SDMMC2_LEDCTRL_PF8                 (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPF | GPIO_PIN8)
#define GPIO_SDMMC2_LEDCTRL_PE9                 (GPIO_ALT | GPIO_AF4 |                \
                                                 GPIO_PORTPE | GPIO_PIN9)
#define GPIO_SDMMC2_RST_PG15                    (GPIO_ALT | GPIO_AF3 |                \
                                                 GPIO_PORTPG | GPIO_PIN15)
#define GPIO_SDMMC2_SEL_PI8                     (GPIO_ALT | GPIO_AF2 |                \
                                                 GPIO_PORTPI | GPIO_PIN8)
#define GPIO_SDMMC2_SEL_PC5                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPC | GPIO_PIN5)
#define GPIO_SDMMC2_SEL_PJ13                    (GPIO_ALT | GPIO_AF0 |                \
                                                 GPIO_PORTPJ | GPIO_PIN13)
#define GPIO_SDMMC2_WP_PD4                      (GPIO_ALT | GPIO_AF1 |                \
                                                 GPIO_PORTPD | GPIO_PIN4)
#define GPIO_USB1_SOF_PA8                       (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPA | GPIO_PIN8)
#define GPIO_USB1_VBUS_PA9                      (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPA | GPIO_PIN9)
#define GPIO_USB1_ID_PA10                       (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPA | GPIO_PIN10)
#define GPIO_USB1_DM_PA11                       (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN11)
#define GPIO_USB1_DP_PA12                       (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPA | GPIO_PIN12)
#define GPIO_USB2_SOF_PA4                       (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPA | GPIO_PIN4)
#define GPIO_USB2_ID_PB12                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_USB2_VBUS_PB13                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_USB2_DM_PB14                       (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_USB2_DP_PB15                       (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_DSMU_CKIN0_PC0                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN0)
#define GPIO_DSMU_CKIN1_PB2                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_DSMU_CKIN1_PB13                    (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN13)
#define GPIO_DSMU_CKIN1_PC2                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPC | GPIO_PIN2)
#define GPIO_DSMU_CKIN1_PD7                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN7)
#define GPIO_DSMU_CKIN2_PC4                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPC | GPIO_PIN4)
#define GPIO_DSMU_CKIN2_PE8                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPE | GPIO_PIN8)
#define GPIO_DSMU_CKIN2_PB15                    (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_DSMU_CKIN3_PE5                     (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN5)
#define GPIO_DSMU_CKIN3_PD8                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN8)
#define GPIO_DSMU_CKIN3_PC6                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPC | GPIO_PIN6)
#define GPIO_DSMU_CKIN4_PE11                    (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPE | GPIO_PIN11)
#define GPIO_DSMU_CKIN4_PC1                     (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPC | GPIO_PIN1)
#define GPIO_DSMU_CKIN4_PD6                     (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN6)
#define GPIO_DSMU_CKIN5_PE13                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPE | GPIO_PIN13)
#define GPIO_DSMU_CKIN5_PC10                    (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPC | GPIO_PIN10)
#define GPIO_DSMU_CKIN5_PB7                     (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPB | GPIO_PIN7)
#define GPIO_DSMU_CKIN6_PF14                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPF | GPIO_PIN14)
#define GPIO_DSMU_CKIN6_PD0                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN0)
#define GPIO_DSMU_CKIN7_PB11                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPB | GPIO_PIN11)
#define GPIO_DSMU_CKIN7_PB8                     (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPB | GPIO_PIN8)
#define GPIO_DSMU_DATIN0_PC1                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPC | GPIO_PIN1)
#define GPIO_DSMU_DATIN1_PD6                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN6)
#define GPIO_DSMU_DATIN1_PC3                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPC | GPIO_PIN3)
#define GPIO_DSMU_DATIN1_PB1                    (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPB | GPIO_PIN1)
#define GPIO_DSMU_DATIN1_PB12                   (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPB | GPIO_PIN12)
#define GPIO_DSMU_DATIN2_PC5                    (GPIO_ALT | GPIO_AF5 |                \
                                                 GPIO_PORTPC | GPIO_PIN5)
#define GPIO_DSMU_DATIN2_PE7                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPE | GPIO_PIN7)
#define GPIO_DSMU_DATIN2_PB14                   (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPB | GPIO_PIN14)
#define GPIO_DSMU_DATIN3_PE4                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN4)
#define GPIO_DSMU_DATIN3_PD9                    (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPD | GPIO_PIN9)
#define GPIO_DSMU_DATIN3_PC7                    (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPC | GPIO_PIN7)
#define GPIO_DSMU_DATIN4_PE10                   (GPIO_ALT | GPIO_AF7 |                \
                                                 GPIO_PORTPE | GPIO_PIN10)
#define GPIO_DSMU_DATIN4_PC0                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPC | GPIO_PIN0)
#define GPIO_DSMU_DATIN4_PD7                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN7)
#define GPIO_DSMU_DATIN5_PE12                   (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPE | GPIO_PIN12)
#define GPIO_DSMU_DATIN5_PC11                   (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPC | GPIO_PIN11)
#define GPIO_DSMU_DATIN5_PB6                    (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPB | GPIO_PIN6)
#define GPIO_DSMU_DATIN6_PF13                   (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPF | GPIO_PIN13)
#define GPIO_DSMU_DATIN6_PD1                    (GPIO_ALT | GPIO_AF8 |                \
                                                 GPIO_PORTPD | GPIO_PIN1)
#define GPIO_DSMU_DATIN7_PB10                   (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPB | GPIO_PIN10)
#define GPIO_DSMU_DATIN7_PB9                    (GPIO_ALT | GPIO_AF13 |                \
                                                 GPIO_PORTPB | GPIO_PIN9)
#define GPIO_DSMU_CKOUT_PC2                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPC | GPIO_PIN2)
#define GPIO_DSMU_CKOUT_PB0                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPB | GPIO_PIN0)
#define GPIO_DSMU_CKOUT_PE9                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPE | GPIO_PIN9)
#define GPIO_DSMU_CKOUT_PD10                    (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN10)
#define GPIO_DSMU_CKOUT_PD3                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPD | GPIO_PIN3)
#define GPIO_COMP1_OUT_PC5                      (GPIO_ALT | GPIO_AF6 |                \
                                                 GPIO_PORTPC | GPIO_PIN5)
#define GPIO_COMP1_OUT_PE12                     (GPIO_ALT | GPIO_AF9 |                \
                                                 GPIO_PORTPE | GPIO_PIN12)
#define GPIO_COMP2_OUT_PE8                      (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPE | GPIO_PIN8)
#define GPIO_COMP2_OUT_PE13                     (GPIO_ALT | GPIO_AF10 |                \
                                                 GPIO_PORTPE | GPIO_PIN13)
#define GPIO_COMP3_OUT_PF0                      (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPF | GPIO_PIN0)
#define GPIO_COMP3_OUT_PF13                     (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPF | GPIO_PIN13)
#define GPIO_COMP4_OUT_PH8                      (GPIO_ALT | GPIO_AF12 |                \
                                                 GPIO_PORTPH | GPIO_PIN8)
#define GPIO_COMP4_OUT_PH12                     (GPIO_ALT | GPIO_AF11 |                \
                                                 GPIO_PORTPH | GPIO_PIN12)
#define GPIO_RTC_REFIN_PB15                     (GPIO_ALT | GPIO_AF15 |                \
                                                 GPIO_PORTPB | GPIO_PIN15)
#define GPIO_RTC_OUT2_PB2                       (GPIO_ALT | GPIO_AF15 |                \
                                                 GPIO_PORTPB | GPIO_PIN2)
#define GPIO_RTC_OUT2_PI8                       (GPIO_ALT | GPIO_AF15 |                \
                                                 GPIO_PORTPI | GPIO_PIN8)

#endif /* __ARCH_ARM_SRC_STM32H7_HARDWARE_N32_PINMAP_H */