/****************************************************************************
* arch/arm/src/n32h7/n32_gpio.h
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

#ifndef __ARCH_ARM_SRC_N32H7_N32_GPIO_H
#define __ARCH_ARM_SRC_N32H7_N32_GPIO_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#ifndef __ASSEMBLY__
#  include <stdint.h>
#  include <stdbool.h>
#endif

#include <nuttx/irq.h>

#include "chip.h"
#include "hardware/n32_gpio.h"

/****************************************************************************
 * Pre-Processor Declarations
 ****************************************************************************/

/*
 * MM P S PP O AAAA DDD
 */
#define GPIO_EXTI       (1 << 19)

#define GPIO_MODE_SHIFT (17)
#define GPIO_MODE_MASK  (3 << GPIO_MODE_SHIFT)
#  define GPIO_INPUT    (0 << GPIO_MODE_SHIFT)
#  define GPIO_OUTPUT   (1 << GPIO_MODE_SHIFT)
#  define GPIO_ALT      (2 << GPIO_MODE_SHIFT)
#  define GPIO_ANALOG   (3 << GPIO_MODE_SHIFT)

#define GPIO_OPENDRAIN  (1 << 16)
#define GPIO_PUSHPULL   (0)

#define GPIO_SR_FAST (0)
#define GPIO_SR_SLOW (1 << 15)

#define GPIO_PUPD_SHIFT (13)
#define GPIO_PUPD_MASK  (3 << GPIO_PUPD_SHIFT)
#  define GPIO_FLOAT    (0 << GPIO_PUPD_SHIFT)
#  define GPIO_PULLUP   (1 << GPIO_PUPD_SHIFT)
#  define GPIO_PULLDOWN (2 << GPIO_PUPD_SHIFT)

#define GPIO_OUTPUT_SET     (1 << 12)
#define GPIO_OUTPUT_CLEAR   (0)

#define GPIO_AF_SHIFT   (11)                       /* Bits 12-15: Alternate function */
#define GPIO_AF_MASK    (15 << GPIO_AF_SHIFT)
#  define GPIO_AF(n)    ((n) << GPIO_AF_SHIFT)
#  define GPIO_AF0      (0 << GPIO_AF_SHIFT)
#  define GPIO_AF1      (1 << GPIO_AF_SHIFT)
#  define GPIO_AF2      (2 << GPIO_AF_SHIFT)
#  define GPIO_AF3      (3 << GPIO_AF_SHIFT)
#  define GPIO_AF4      (4 << GPIO_AF_SHIFT)
#  define GPIO_AF5      (5 << GPIO_AF_SHIFT)
#  define GPIO_AF6      (6 << GPIO_AF_SHIFT)
#  define GPIO_AF7      (7 << GPIO_AF_SHIFT)
#  define GPIO_AF8      (8 << GPIO_AF_SHIFT)
#  define GPIO_AF9      (9 << GPIO_AF_SHIFT)
#  define GPIO_AF10     (10 << GPIO_AF_SHIFT)
#  define GPIO_AF11     (11 << GPIO_AF_SHIFT)
#  define GPIO_AF12     (12 << GPIO_AF_SHIFT)
#  define GPIO_AF13     (13 << GPIO_AF_SHIFT)
#  define GPIO_AF14     (14 << GPIO_AF_SHIFT)
#  define GPIO_AF15     (15 << GPIO_AF_SHIFT)

#define GPIO_DS_SHIFT   (8)
#define GPIO_DS_MASK    (7 << GPIO_DS_SHIFT)
#  define GPIO_DS_1MA   (0 << GPIO_DS_SHIFT)
#  define GPIO_DS_2MA   (1 << GPIO_DS_SHIFT)
#  define GPIO_DS_4MA   (2 << GPIO_DS_SHIFT)
#  define GPIO_DS_5MA   (3 << GPIO_DS_SHIFT)
#  define GPIO_DS_6MA   (4 << GPIO_DS_SHIFT)
#  define GPIO_DS_8MA   (5 << GPIO_DS_SHIFT)
#  define GPIO_DS_12MA  (6 << GPIO_DS_SHIFT)

#define GPIO_PORT_SHIFT (4)
#define GPIO_PORT_MASK  (15 << GPIO_PORT_SHIFT)
#  define GPIO_PORTA    (0 << GPIO_PORT_SHIFT)
#  define GPIO_PORTB    (1 << GPIO_PORT_SHIFT)
#  define GPIO_PORTC    (2 << GPIO_PORT_SHIFT)
#  define GPIO_PORTD    (3 << GPIO_PORT_SHIFT)
#  define GPIO_PORTE    (4 << GPIO_PORT_SHIFT)
#  define GPIO_PORTF    (5 << GPIO_PORT_SHIFT)
#  define GPIO_PORTG    (6 << GPIO_PORT_SHIFT)
#  define GPIO_PORTH    (7 << GPIO_PORT_SHIFT)
#  define GPIO_PORTI    (8 << GPIO_PORT_SHIFT)
#  define GPIO_PORTJ    (9 << GPIO_PORT_SHIFT)
#  define GPIO_PORTK    (10 << GPIO_PORT_SHIFT)
#  define GPIO_PORTM    (11 << GPIO_PORT_SHIFT)
#  define GPIO_PORTN    (12 << GPIO_PORT_SHIFT)
#  define GPIO_PORTO    (13 << GPIO_PORT_SHIFT)
#  define GPIO_PORTP    (14 << GPIO_PORT_SHIFT)

#define GPIO_PIN_SHIFT  (0)
#define GPIO_PIN_MASK   (15 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_0    (0 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_1    (1 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_2    (2 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_3    (3 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_4    (4 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_5    (5 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_6    (6 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_7    (7 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_8    (8 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_9    (9 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_10   (10 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_11   (11 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_12   (12 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_13   (13 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_14   (14 << GPIO_PIN_SHIFT)
#  define GPIO_PIN_15   (15 << GPIO_PIN_SHIFT)

#endif  /* __ARCH_ARM_SRC_N32H7_N32_GPIO_H */