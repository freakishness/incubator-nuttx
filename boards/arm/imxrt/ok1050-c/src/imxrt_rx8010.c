/****************************************************************************
 * boards/arm/imxrt/ok1050-c/src/imxrt_rx8010.c
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
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <debug.h>
#include <sys/time.h>

#include <nuttx/clock.h>
#include <nuttx/wdog.h>

#include <arch/board/board.h>

#include <nuttx/timers/rx8010.h>

#include "chip.h"

#include <imxrt_lpi2c.h>
#include "ok1050-c.h"

#if defined(CONFIG_I2C_DRIVER) && defined(CONFIG_IMXRT_LPI2C) && defined(CONFIG_RTC_RX8010SJ)

/****************************************************************************
 * Public Functions
 ****************************************************************************/

void imxrt_rx8010_init(int bus)
{
  FAR struct i2c_master_s *i2c;
  int ret;

  i2c = imxrt_i2cbus_initialize(bus);
  if (i2c == NULL)
    {
      serr("ERROR: Failed to get I2C%d interface\n", bus);
    }
  else
    {
      ret = i2c_register(i2c, bus);
      if (ret < 0)
        {
          serr("ERROR: Failed to register I2C%d driver: %d\n", bus, ret);
          imxrt_i2cbus_uninitialize(i2c);
        }
      else
        {
          ret = rx8010_rtc_initialize(i2c);
          if (ret < 0)
            {
              serr("ERROR: Failed to initialize rx8010\n");
              return;
            }
          else
            {
              clock_synchronize(NULL);
            }
        }
    }
}

#endif /* CONFIG_I2C_DRIVER && CONFIG_IMXRT_LPI2C && CONFIG_RTC_RX8010SJ */
