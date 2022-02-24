/****************************************************************************
 * boards/arm/imxrt/ok1050-c/src/imxrt_mmcsd.c
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
#include <stdbool.h>
#include <debug.h>
#include <errno.h>

#include <nuttx/sdio.h>
#include <nuttx/mmcsd.h>
#include <arch/board/board.h>

#include <imxrt_gpio.h>

#include "imxrt_usdhc.h"
#include "hardware/imxrt_pinmux.h"
#include "ok1050-c.h"

#define SDIO_SLOTNO 0
#define SDIO_MINOR 0

#ifdef CONFIG_MMCSD

/****************************************************************************
 * Public Functions
 ****************************************************************************/

int imxrt_mmcsd_initialize(void)
{
  struct sdio_dev_s *sdmmc;
  int ret = 0;

  /* Get an instance of the SDIO interface */

  sdmmc = imxrt_usdhc_initialize(0);
  if (!sdmmc)
    {
        syslog(LOG_ERR, "ERROR: Failed to initialize SD/MMC\n");
    }
  else
    {
      /* Bind the SDIO interface to the MMC/SD driver */

      ret = mmcsd_slotinitialize(0, sdmmc);
      if (ret != OK)
        {
            syslog(LOG_ERR,
                   "ERROR: Failed to bind SDIO to the MMC/SD driver: %d\n",
                   ret);
        }

#ifdef CONFIG_FS_AUTOMOUNTER
      imxrt_automount_initialize();
      imxrt_usdhc_set_sdio_card_isr(sdmmc, imxrt_sdhc_automount_event, NULL);
#else
      imxrt_usdhc_set_sdio_card_isr(sdmmc, NULL, NULL);
#endif
    }

  return OK;
}

#endif /* HAVE_SDIO */
