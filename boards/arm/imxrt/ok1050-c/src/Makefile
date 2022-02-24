############################################################################
# boards/arm/imxrt/ok1050-c/src/Makefile
#
# Licensed to the Apache Software Foundation (ASF) under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.  The
# ASF licenses this file to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance with the
# License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
# License for the specific language governing permissions and limitations
# under the License.
#
############################################################################

include $(TOPDIR)/Make.defs

CSRCS = imxrt_boot.c imxrt_flexspi_nor_boot.c imxrt_flexspi_nor_flash.c

ifeq ($(CONFIG_BOARDCTL),y)
CSRCS += imxrt_appinit.c imxrt_bringup.c
else ifeq ($(CONFIG_BOARD_LATE_INITIALIZE),y)
CSRCS += imxrt_bringup.c
endif

ifeq ($(CONFIG_ARCH_LEDS),y)
CSRCS += imxrt_autoleds.c
else
CSRCS += imxrt_userleds.c
endif

ifeq ($(CONFIG_ARCH_BUTTONS),y)
CSRCS += imxrt_buttons.c
endif

ifeq ($(CONFIG_IMXRT_ENET),y)
CSRCS += imxrt_ethernet.c
endif

ifeq ($(CONFIG_IMXRT_LPSPI),y)
CSRCS += imxrt_spi.c
endif

ifeq ($(CONFIG_IMXRT_LCD),y)
CSRCS += imxrt_lcd.c
endif

ifeq ($(CONFIG_MMCSD),y)
CSRCS += imxrt_mmcsd.c
endif

ifeq ($(CONFIG_FS_AUTOMOUNTER), y)
CSRCS += imxrt_automount.c
endif

ifeq ($(CONFIG_MMCSD_SPI),y)
CSRCS += imxrt_mmcsd_spi.c
endif

ifeq ($(CONFIG_DEV_GPIO),y)
CSRCS += imxrt_gpio.c
endif

ifeq ($(CONFIG_IMXRT_FLEXCAN),y)
CSRCS += imxrt_flexcan.c
endif

ifeq ($(CONFIG_OK1050_C_SDRAM),y)
CSRCS += imxrt_sdram_ini_dcd.c
endif

ifeq ($(CONFIG_ANALOG),y)
CSRCS += imxrt_adc.c
endif

ifeq ($(CONFIG_USBHOST),y)
CSRCS += imxrt_usbhost.c
endif

ifeq ($(CONFIG_IMXRT_ROMFS),y)
CSRCS += imxrt_romfs_initialize.c
endif

ifeq ($(CONFIG_IMXRT_FLEXSPI),y)
CSRCS += imxrt_flexspi_nor.c
endif

ifeq ($(CONFIG_RTC_RX8010SJ),y)
CSRCS += imxrt_rx8010.c
endif

include $(TOPDIR)/boards/Board.mk
