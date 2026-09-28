/****************************************************************************
 * arch/arm/src/n32h7/n32_gpio.c
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
/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <sys/types.h>
#include <stdint.h>
#include <stdbool.h>
#include <errno.h>

#include <nuttx/debug.h>
#include <nuttx/irq.h>
#include <arch/n32h7/chip.h>
#include <nuttx/spinlock.h>

#include "arm_internal.h"
#include "hardware/n32_syscfg.h"
#include "n32_gpio.h"

#include "../common/arm_internal.h"
#include "hardware/n32_afio.h"

/****************************************************************************
 * Private Data
 ****************************************************************************/

static spinlock_t g_configgpio_lock = SP_UNLOCKED;

const uint32_t g_gpiobase[N32_NGPIO] = {
#if N32_NGPIO > 0
  N32_GPIOA_BASE,
#endif
#if N32_NGPIO > 1
  N32_GPIOB_BASE,
#endif
#if N32_NGPIO > 2
  N32_GPIOC_BASE,
#endif
#if N32_NGPIO > 3
  N32_GPIOD_BASE,
#endif
#if N32_NGPIO > 4
  N32_GPIOE_BASE,
#endif
#if N32_NGPIO > 5
  N32_GPIOF_BASE,
#endif
#if N32_NGPIO > 6
  N32_GPIOG_BASE,
#endif
#if N32_NGPIO > 7
  N32_GPIOH_BASE,
#endif
#if N32_NGPIO > 8
  N32_GPIOI_BASE,
#endif
#if N32_NGPIO > 9
  N32_GPIOJ_BASE,
#endif
#if N32_NGPIO > 10
  N32_GPIOK_BASE,
#endif
};

/****************************************************************************
 * Public Data
 ****************************************************************************/

/****************************************************************************
 * Private Functions
 ****************************************************************************/

static uint32_t popcount(uint16_t x)
{
#if defined(__GUNC__) || defined(__clang__)
  return __builtin_popcount(x);
#else
  uint32_t count = 0;
  while (x != 0)
    {
      x &= (uint16_t)(x - 1);
      count++;
    }
  return count;
#endif
}
/****************************************************************************
 * Public Functions
 ****************************************************************************/

int n32_configgpio(uint32_t cfgset)
{
  uint32_t setting;
  unsigned int regoffset;
  unsigned int port;
  unsigned int pin;
  unsigned int pos;
  unsigned int pinmode;
  irqstate_t flags;

  uint8_t start[] = {
    0, 3, 7, 13, 21, 32, 43, 50, 64
  };
  const uint16_t tolerant_5v_pad[] = {
    0xfd00, 0x0218, 0xe1c0, 0x0003, 0x0050, 0x0000, 0x0003, 0x0013, 0x8100,
    0xfff9, 0x0007
  };
  const uint16_t tolerant_3v3_pad[] = {
    0x024f, 0x3d87, 0x0e02, 0x38f0, 0x002c, 0x07c0, 0x7ec0, 0x0000, 0x001e,
    0x0006, 0x00f8
  };
  const uint16_t tolerant_hs_pad[] = {
    0x00B0, 0xC060, 0x103D, 0xC707, 0xFF83, 0xF83F, 0x8137, 0xFFEC, 0x06FF,
    0x0000, 0x0000
  };

  port = (cfgset & GPIO_PORT_MASK) >> GPIO_PORT_SHIFT;
  if (port >= N32_NGPIO)
    {
      return -EINVAL;
    }

  base = g_gpiobase[port];

  pin = (cfgset & GPIO_PIN_MASK) >> GPIO_PIN_SHIFT;

  switch (cfgset & GPIO_MODE_MASK)
    {
      case GPIO_INPUT:
        {
          pinmode = GPIO_GPIOx_PMODE_INPUT;
          break;
        }

      case GPIO_OUTPUT:
        {
          pinmode = GPIO_GPIOx_PMODE_OUTPUT;
          break;
        }

      case GPIO_ALT:
        {
          pinmode = GPIO_GPIOx_PMODE_ALT;
          break;
        }

      default:
      case GPIO_ANALOG:
        {
          pinmode = GPIO_GPIOx_PMODE_ANALOG;
          break;
        }
    }
  flags = spin_lock_irqsave(&g_configgpio_lock);

  setting = 0;

  /* Configure Alternate function mapped with the current IO */

  if (pinmode == GPIO_GPIOx_PMODE_ALT)
    {
      setting = (cfgset & GPIO_AF_MASK) >> GPIO_AF_SHIFT;

      if (pin < 8)
        {
          regoffset = N32_GPIO_GPIOx_AFRL_OFFSET;
          pos = pin;
        }
      else
        {
          regoffset = N32_GPIO_GPIOx_AFRH_OFFSET;
          pos = pin - 8;
        }

      regval = getreg32(base + regoffset);
      regval &= ~GPIO_GPIOx_AFR_MASK(pos);
      regval |= (setting << GPIO_GPIOx_AFR_AFSEL(pos));
      putreg32(regval, base + regoffset);
    }

  /* Configure IO Direction mode (Input, Output, Alternate or Analog) */

  regval = getreg32(base + N32_GPIO_GPIOx_PMODE_OFFSET);
  regval &= ~GPIO_GPIOx_PMODE_MODE_MASK(pin);
  regval |= ((uint32_t)pinmode << GPIO_GPIOx_PMODE_MODE_SHIFT(pin));
  putreg32(regval, base + N32_GPIO_GPIOx_PMODE_OFFSET);

  /* Configure IO Output mode */

  setting = cfgset & GPIO_PUPD_MASK;
  regval = getreg32(base + N32_GPIO_GPIOx_PUPD_OFFSET);
  regval &= ~GPIO_GPIOx_PUPD_MASK(pin);
  regval |= ((uint32_t)setting << GPIO_GPIOx_PUPD_SHIFT(pin));

  /* Configure slew rate */

  setting = cfgset & GPIO_SR_SLOW;
  regval = getreg32(base + N32_GPIO_GPIOx_SR_OFFSET);
  regval &= ~GPIO_GPIOx_SR_MASK(pin);
  regval |= ((uint32_t)setting << GPIO_GPIOx_SR_SHIFT(pin));

  /* Configure driver current */

  regval = getreg32(base + N32_GPIO_GPIOx_DS_OFFSET);
  regval &= ~GPIO_GPIOx_DS_MASK(pin);

  setting = cfgset & GPIO_DS_MASK;

  /* 3.3v tolerant pad */

  if ((1 << pin) & tolerant_3v3_pad[port])
    {
      switch (setting)
        {
          case GPIO_DS_2MA:
            {
              regval |= (GPIO_DC_2MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          case GPIO_DS_4MA:
            {
              regval |= (GPIO_DC_4MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          case GPIO_DS_8MA:
            {
              regval |= (GPIO_DC_8MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          case GPIO_DS_12MA:
            {
              regval |= (GPIO_DC_12MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          default:
            {
              break;
            }
        }
    }

  /* 5v tolerant pad */

  else if ((1 << pin) & tolerant_5v_pad[port])
    {
      switch (setting)
        {
          case GPIO_DS_1MA:
            {
              regval |= (GPIO_5VTOL_DC_1MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          case GPIO_DS_2MA:
            {
              regval |= (GPIO_5VTOL_DC_2MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          case GPIO_DS_4MA:
            {
              regval |= (GPIO_5VTOL_DC_4MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          case GPIO_DS_6MA:
            {
              regval |= (GPIO_5VTOL_DC_6MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          default:
            {
              break;
            }
        }
    }

  /* high speed pad */

  else if ((1 << pin) & tolerant_hs_pad[port])
    {
      uint32_t temp_regval_n;
      uint32_t temp_regval_p;
      uint32_t bit_mask;
      uint32_t bit_offset = popcount(tolerant_hs_pad[port] & ((1 <<
    pin) - 1));

      if ((base == N32_GPIOI_BASE) && (pin == GPIO_PIN_0))
        {
          bit_offset = 31;
          temp_regval_n = getreg32(N32_AFIO_HS_DSN_CFG1);
          temp_regval_p = getreg32(N32_AFIO_HS_DSP_CFG1);
        }
      else if (start[port] < 32)
        {
          bit_offset += start[port];
          temp_regval_n = getreg32(N32_AFIO_HS_DSN_CFG0);
          temp_regval_p = getreg32(N32_AFIO_HS_DSP_CFG0);
        }
      else if (start[port] < 64)
        {
          bit_offset += start[port] - 32;
          temp_regval_n = getreg32(N32_AFIO_HS_DSN_CFG1);
          temp_regval_p = getreg32(N32_AFIO_HS_DSP_CFG1);
        }
      else if (start[port] < 73)
        {
          bit_offset += start[port] - 64 - 1;
          temp_regval_n = getreg32(N32_AFIO_HS_DSN_CFG2);
          temp_regval_p = getreg32(N32_AFIO_HS_DSP_CFG2);
        }
      else
        {
          /* todo: not support */
        }

      bit_mask = 1 << bit_offset;

      switch (setting)
        {
          case GPIO_DS_1MA:
            {
              temp_regval_n &= ~bit_mask;
              temp_regval_p &= ~bit_mask;
              regval |= (GPIO_HS_IO_DC_1MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          case GPIO_DS_2MA:
            {
              temp_regval_n |= bit_mask;
              temp_regval_p |= bit_mask;
              regval |= (GPIO_HS_IO_DC_2MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          case GPIO_DS_4MA:
            {
              temp_regval_n &= ~bit_mask;
              temp_regval_p &= ~bit_mask;
              regval |= (GPIO_HS_IO_DC_4MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          case GPIO_DS_5MA:
            {
              temp_regval_n |= bit_mask;
              temp_regval_p |= bit_mask;
              regval |= (GPIO_HS_IO_DC_5MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          case GPIO_DS_8MA:
            {
              temp_regval_n &= ~bit_mask;
              temp_regval_p &= ~bit_mask;
              regval |= (GPIO_HS_IO_DC_8MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          case GPIO_DS_12MA:
            {
              temp_regval_n &= ~bit_mask;
              temp_regval_p &= ~bit_mask;
              regval |= (GPIO_HS_IO_DC_12MA << GPIO_GPIOx_DS_SHIFT(pin));
              break;
            }

          default:
            {
              break;
            }
        }

      if ((base == N32_GPIOI_BASE) && (pin == GPIO_PIN_0))
        {
          putreg32(temp_regval_n, N32_AFIO_HS_DSN_CFG1);
          putreg32(temp_regval_p, N32_AFIO_HS_DSP_CFG1);
        }
      else if (start[port] < 32)
        {
          putreg32(temp_regval_n, N32_AFIO_HS_DSN_CFG0);
          putreg32(temp_regval_p, N32_AFIO_HS_DSP_CFG0);
        }
      else if (start[port] < 64)
        {
          putreg32(temp_regval_n, N32_AFIO_HS_DSN_CFG1);
          putreg32(temp_regval_p, N32_AFIO_HS_DSP_CFG1);
        }
      else if (start[port] < 73)
        {
          putreg32(temp_regval_n, N32_AFIO_HS_DSN_CFG2);
          putreg32(temp_regval_p, N32_AFIO_HS_DSP_CFG2);
        }
      else
        {
          /* todo: not support */
        }
    }

  putreg32(regval, base + N32_GPIO_GPIOx_DS_OFFSET);
}
int n32_unconfiggpio(uint32_t cfgset)
{
  cfgset &= GPIO_PORT_MASK | GPIO_PIN_MASK;
  cfgset |= GPIO_INPUT | GPIO_FLOAT;

  return n32_configgpio(cfgset);
}
void n32_gpiowrite(uint32_t pinset, bool value)
{
  uint32_t base;
  uint32_t bit;
  unsigned int port;
  unsigned int pin;

  port = (pinset & GPIO_PORT_MASK) >> GPIO_PORT_SHIFT;
  base = g_gpiobase[port];
  pin = (pinset & GPIO_PIN_MASK) >> GPIO_PIN_SHIFT;

  if (value)
    {
      bit = GPIO_GPIOx_PBSC_PBSC(pin);
    }
  else
    {
      bit = GPIO_GPIOx_PBSC_PBC(pin);
    }

  putreg32(bit, base + N32_GPIO_GPIOx_PBSC_OFFSET);
}
bool n32_gpioread(uint32_t pinset)
{
  uint32_t base;
  unsigned int port;
  unsigned int pin;

  port = (pinset & GPIO_PORT_MASK) >> GPIO_PORT_SHIFT;
  base = g_gpiobase[port];

  pin = (pinset & GPIO_PIN_MASK) >> GPIO_PIN_SHIFT;

  return getreg32(base + N32_GPIO_GPIOx_PID_OFFSET) & (1 << pin) != 0;
}
