/****************************************************************************
 * arch/arm/src/n32h7/hardware/n32h7_memorymap.h
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

#ifndef __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_MEMORYMAP_H
#define __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_MEMORYMAP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* N32H7X3XX Address Blocks ***********************************************/

#define N32_CODE_BASE      0x00000000     /* 0x00000000-0x1fffffff: 512Mb CODE block */
#define N32_SRAM_BASE      0x20000000     /* 0x20000000-0x3fffffff: 512Mb SRAM block */
#define N32_PERIPH_BASE    0x40000000     /* 0x40000000-0x5fffffff: 512Mb AHB1-2 peripheral blocks */
#define N32_FMC_BANK1      0x60000000     /* 0x60000000-0x6fffffff: 256Mb NOR/PSRMA/SRAM */
#define N32_FMC_BANK2      0x70000000     /* 0x70000000-0x7fffffff: 256Mb SDRAM */
#define N32_FMC_BANK3      0x80000000     /* 0x80000000-0x8fffffff: 256Mb NAND FLASH */
#define N32_FMC_BANK4      0x90000000     /* 0x90000000-0x9fffffff: 256Mb QUADSPI */
#define N32_FMC_BANK5      0xc0000000     /* 0xc0000000-0xcfffffff: 256Mb FMC SDRAM Bank 1 */
#define N32_FMC_BANK6      0xd0000000     /* 0xd0000000-0xdfffffff: 256Mb FMC SDRAM Bank 2 */
#define N32_CORTEX_BASE    0xe0000000     /* 0xe0000000-0xffffffff: 512Mb Cortex-M7 block */

#define N32_REGION_MASK    0xff000000
#define N32_IS_SRAM(a)     ((((uint32_t)(a)) & N32_REGION_MASK) == N32_SRAM_BASE)
#define N32_IS_EXTSRAM(a)  ((((uint32_t)(a)) & N32_REGION_MASK) == N32_FMC_BANK1)

/* Code Base Addresses ******************************************************/

#define N32_ITCM_BASE      0x00000000     /* 0x00000000-0x0000ffff: ITCM */
#define N32_FLASH_BANK1    0x08000000     /* 0x08000000-0x080fffff: FLASH memory 1 */
#define N32_FLASH_BANK2    0x08100000     /* 0x08100000-0x081fffff: FLASH memory 2 */
#define N32_FLASH_BASE     N32_FLASH_BANK1
#define N32_SYSMEM_MEM     0x1ff00000     /* 0x1ff00000-0x1ff1ffff: System memory */

/* SRAM Base Addresses ******************************************************/

#define N32_DTCRAM_BASE    0x20000000     /* 0x20000000-0x2001ffff: DTCM-RAM on TCM interface */
#define N32_AXISRAM_BASE   0x24000000     /* 0x24000000-0x247fffff: System AXI SRAM */

#ifdef CONFIG_ARCH_CHIP_N32H7_CORTEXM7
#  define N32_SRAM1_BASE   0x30000000     /* 0x30000000-0x30003fff: System SRAM1 */
#  ifdef CONFIG_N32H7_N32H72XXX_OR_N32H73XXX
#  define N32_SRAM2_BASE   0x30004000     /* 0x30004000-0x30007fff: System SRAM2 */
#  else /* N32H74XXX or N32H75XXX with full SRAM configuration  */
#  define N32_SRAM2_BASE   0x30020000     /* 0x30020000-0x3003ffff: System SRAM2 */
#  define N32_SRAM3_BASE   0x30040000     /* 0x30040000-0x30047fff: System SRAM3 */
#  endif /* N32H72XXX or N32H73XXX / N32H74XXX or N32H75XXX */
#  define N32_SRAM123_BASE 0x30000000     /* 0x30000000-0x30047fff: System SRAM123 */
#else

/* The AHB SRAMs of the D2 domain are also aliased to an address range below
 * 0x2000 0000 to maintain the Cortex®-M4 Harvard architecture.
 * For details, see RM0399 section "2.4 Embedded SRAM".
 */

#  define N32_SRAM1_BASE   0x10000000     /* 0x10000000-0x1001ffff: System SRAM1 */
#  define N32_SRAM2_BASE   0x10020000     /* 0x10020000-0x1003ffff: System SRAM2 */
#  define N32_SRAM3_BASE   0x10040000     /* 0x10040000-0x10047fff: System SRAM3 */
#  define N32_SRAM123_BASE 0x10000000     /* 0x10000000-0x10047fff: System SRAM123 */
#endif
#define N32_SRAM4_BASE     0x38000000     /* 0x38000000-0x3800ffff: System SRAM4 */
#define N32_BBSRAM_BASE    0x38800000     /* 0x38800000-0x38800fff: System Backup SRAM */

/* Peripheral Base Addresses ************************************************/

#define N32_PREGION_MASK   0xff000000
#define N32_D2_BASE        0x40000000     /* 0x40000000-0x48022800: D2 domain */
#  define N32_APB1_BASE    0x40000000     /* 0x40000000-0x40007fff: APB1 */
#  define N32_APB2_BASE    0x40010000     /* 0x40010000-0x40016bff: APB2 */
#  define N32_AHB1_BASE    0x40020000     /* 0x40020000-0x4007ffff: APB1 */
#  define N32_AHB2_BASE    0x48020000     /* 0x50000000-0x48022bff: AHB2 */
#define N32_D1_BASE        0x50000000     /* 0x50000000-0x50003fff: D1 domain */
#  define N32_APB3_BASE    0x50000000     /* 0x60000000-0x50003fff: APB3 */
#  define N32_AHB3_BASE    0x51000000     /* 0x51000000-0x52008fff: AHB3 */
#define N32_D3_BASE        0x58000000     /* 0x58000000-0x580267ff: D3 domain */
#  define N32_APB4_BASE    0x58000000     /* 0x60000000-0x58006bff: APB4 */
#  define N32_AHB4_BASE    0x58020000     /* 0x58020000-0x580267ff: AHB4 */

/* APB1 Base Addresses ******************************************************/

#define N32_FDCAN1_BASE        0x40000000     /* 0x40000000-0x400003ff: FDCAN1 */
#define N32_FDCAN2_BASE        0x40000400     /* 0x40000400-0x400007ff: TIM3 */
#define N32_FDCAN5_BASE        0x40000800     /* 0x40000800-0x40000bff: TIM4 */
#define N32_FDCAN6_BASE        0x40000c00     /* 0x40000c00-0x40000fff: TIM5 */
#define N32_AHB_ICACHE_BASE    0x40008000     /* 0x40001000-0x400013ff: TIM6 */
#define N32_AHC_DCACHE_BASE    0x40009000     /* 0x40001400-0x400017ff: TIM7 */
#define N32_BTIMER1_BASE       0x4000A000     /* 0x40001800-0x40001bff: TIM12 */
#define N32_BTIMER2_BASE       0x4000A400     /* 0x40001c00-0x40001fff: TIM13 */
#define N32_GTIMERB1_BASE      0x4000A800     /* 0x40002000-0x400023ff: TIM14 */
#define N32_GTIMERB2_BASE      0x4000AC00     /* 0x40002400-0x400027ff: LPTIM1 */
#define N32_GTIMERB3_BASE      0x4000B000     /* 0x40003800-0x40003bff: SPI2 / I2S2 */
#define N32_GTIMERA4_BASE      0x4000B400     /* 0x40003800-0x40003bff: SPI2 / I2S2 */
#define N32_GTIMERA5_BASE      0x4000B800     /* 0x40003c00-0x40003fff: SPI3 / I2S3 */
#define N32_GTIMERA6_BASE      0x4000BC00     /* 0x40003c00-0x40003fff: SPI3 / I2S3 */
#define N32_GTIMERA7_BASE      0x4000C000     /* 0x40004000-0x400043ff: SPDIFRX */
#define N32_USART1_BASE        0x4000C400     /* 0x40004400-0x400047ff: USART2 */
#define N32_USART2_BASE        0x4000C800     /* 0x40004800-0x40004bff: USART3 */
#define N32_USART3_BASE        0x4000CC00     /* 0x40004c00-0x40004fff: UART4 */
#define N32_USART4_BASE        0x4000D000     /* 0x40005000-0x400053ff: UART5 */
#define N32_UART9_BASE         0x4000D400     /* 0x40005400-0x400057ff: I2C1 */
#define N32_USART10_BASE       0x4000D800     /* 0x40005800-0x40005bff: I2C2 */
#define N32_USART11_BASE       0x4000DC00     /* 0x40005c00-0x40005fff: I2C3 */
#define N32_USART12_BASE       0x4000E000     /* 0x40006c00-0x40006fff: HDMI-CEC */
#define N32_SPI3_BASE          0x4000E400     /* 0x40007400-0x400077ff: DAC */
#define N32_I2C1_BASE          0x4000E800     /* 0x40007800-0x40007bff: UART7 */
#define N32_I2C2_BASE          0x4000EC00     /* 0x40007c00-0x40007fff: UART8 */
#define N32_I2C3_BASE          0x4000F000     /* 0x40008400-0x400087ff: CRS */
#define N32_I2S3_BASE          0x4000F400     /* 0x40008800 - 0x40008bff SWPMI Section */
#define N32_I2S4_BASE          0x4000F800     /* 0x40009000 - 0x400093ff OPAMP Section */
#define N32_DAC12_BASE         0x4000FC00     /* 0x40009400 - 0x400097ff MDIOS Section */
#define N32_WWDG2_BASE         0x40010000     /* 0x4000a000 - 0x4000a3ff FDCAN1 Section */
#define N32_BTIMER3_BASE       0x40010800     /* 0x4000a400 - 0x4000A7ff FDCAN2 Section */
#define N32_BTIMER4_BASE       0x40010C00     /* 0x4000D400 - 0x4000D7FF FDCAN3 Section */

/* AHB1 Base Addresses ******************************************************/

#define N32_ETH2_BASE               0x40042000
#define N32_ADC1_BASE               0x40044000
#define N32_ADC2_BASE               0x40044400
#define N32_ADC3_BASE               0x40044800
#define N32_AHB_CACHE_PARMON_BASE   0x40045000
#define N32_DMAMUX1_BASE            0x40046400
#define N32_DMA1_BASE               0x40046800
#define N32_DMA2_BASE               0x40046C00
#define N32_DMA3_BASE               0x40047000
#define N32_SDMMC2_CFG_BASE         0x4004A000
#define N32_SDMMC2_BASE             0x40050000
#define N32_USBCTRL2_BASE           0x40060000
#define N32_USBCTRL2_WRAPPER_BASE   0x400A0000

/* AHB9 Base Addresses ******************************************************/

#define N32_ESC_BASE                0x400B0000
#define N32_ESC_WRAPPER             0x400C0000

/* APB2 Base Addresses ******************************************************/

#define N32_FDCAN3_BASE             0x400D0000
#define N32_FDCAN4_BASE             0x400D0400
#define N32_FDCAN7_BASE             0x400D0800
#define N32_FDCAN8_BASE             0x400D0C00
#define N32_SHRTIM1_BASE            0x400D8000
#define N32_SHRTIM2_BASE            0x400D9000
#define N32_DSMU_BASE               0x400DA000
#define N32_ATIMER1_BASE            0x400DB000
#define N32_ATIMER2_BASE            0x400DB400
#define N32_I2S1_BASE               0x400DB800
#define N32_I2S2_BASE               0x400DBC00
#define N32_SPI1_BASE               0x400DC000
#define N32_SPI2_BASE               0x400DC400
#define N32_GTIMERA1_BASE           0x400DC800
#define N32_GTIMERA2_BASE           0x400DCC00
#define N32_GTIMERA3_BASE           0x400DD000
#define N32_I2C4_BASE               0x400DD400
#define N32_I2C5_BASE               0x400DD800
#define N32_I2C6_BASE               0x400DDC00
#define N32_USART5_BASE             0x400DE000
#define N32_USART6_BASE             0x400DE400
#define N32_USART7_BASE             0x400DE800
#define N32_USART8_BASE             0x400DEC00
#define N32_UART13_BASE             0x400DF000
#define N32_UART14_BASE             0x400DF400
#define N32_UART15_BASE             0x400DF800

/* AHB2 Base Addresses ******************************************************/

#define N32_ECCMON2_BASE            0x400F0000
#define N32_CORDIC_BASE             0x400F1000
#define N32_FMAC_BASE               0x400F1400
#define N32_DAC34_BASE              0x400F1800
#define N32_DAC56_BASE              0x400F1C00
#define N32_SDPU_BASE               0x400F2000
#define N32_ETH1_BASE               0x400F4000
#define N32_SEMA4_BASE              0x400F6000
#define N32_DCMUA_BASE              0x400F7000
#define N32_DCMUB_BASE              0x400F8000
#define N32_USBCTRL1_BASE           0x40100000
#define N32_USBCTRL1_WRAPPER        0x40140000

/* APB6 Base Addresses ******************************************************/

#define N32_DSI_BASE                0x50000000
#define N32_GPU_BASE                0x50040000
#define N32_DVP1_BASE               0x50048000
#define N32_DVP2_BASE               0x50049000
#define N32_LCDC_BASE               0x5004A000
#define N32_WWDG1_BASE              0x5004A800
#define N32_DSI_WRAPPER_BASE        0x5004AC00
#define N32_TCMSRAMC_BASE           0x5004B000
#define N32_FEMC_BASE               0x5004C000
#define N32_JPEG_ENC_BASE           0x50060000
#define N32_JPEG_RBC_BASE           0x50070000
#define N32_JPEG_H2P_SGDMA_BASE     0x50070400
#define N32_JPEG_DEC_BASE           0x50080000
#define N32_JPEG_BRC_BASE           0x50090000
#define N32_JPEG_P2H_SGDMA_BASE     0x50090400
#define N32_JPEG_CTRL_BASE          0x50090800

/* AHB6 Base Addresses ******************************************************/

#define N32_GPV_BASE                0x51000000
#define N32_XSPI1_BASE              0x51100000
#define N32_XSPI2_BASE              0x51101000
#define N32_MDMA_BASE               0x51102000
#define N32_ECCMON1_BASE            0x51104000
#define N32_MMU_BASE                0x51105000
#define N32_SDRAM_BASE              0x51106000
#define N32_SDMMC1_CFG_BASE         0x51107000
#define N32_SDMMC1_BASE             0x51110000
#define N32_OTPC_BASE               0x51118000
#define N32_DMAMUX2_BASE            0x51120000
#define N32_MDMA_WRAPPER_BASE       0x51120800

/* APB5 Base Addresses ******************************************************/

#define N32_EXTI_WKUP_BASE          0x58000000
#define N32_AFEC_BASE               0x58000400
#define N32_LPUART1_BASE            0x58000800
#define N32_LPUART2_BASE            0x58000C00
#define N32_LPTIMER1_BASE           0x58001000
#define N32_LPTIMER2_BASE           0x58001400
#define N32_LPTIMER3_BASE           0x58001800
#define N32_LPTIMER4_BASE           0x58001C00
#define N32_SPI4_BASE               0x58002000
#define N32_SPI5_BASE               0x58002400
#define N32_SPI6_BASE               0x58002800
#define N32_SPI7_BASE               0x58002C00
#define N32_I2C7_BASE               0x58003000
#define N32_I2C8_BASE               0x58003400
#define N32_I2C9_BASE               0x58003800
#define N32_I2C10_BASE              0x58003C00
#define N32_ATIMER3_BASE            0x58004000
#define N32_ATIMER4_BASE            0x58004400
#define N32_COMP14_BASE             0x58004800
#define N32_IWDG1_BASE              0x58004C00
#define N32_IWDG2_BASE              0x58005000
#define N32_RTC_BASE                0x58005400
#define N32_LPTIMER5_BASE           0x58005800

/* AHB5 Base Addresses ******************************************************/

#define N32_RCC_BASE                0x58030000
#define N32_PWR_BASE                0x58031000
#define N32_CRC_BASE                0x58032000
#define N32_AFIO_BASE               0x58032400
#define N32_GPIOA_BASE              0x58032800
#define N32_GPIOB_BASE              0x58032C00
#define N32_GPIOC_BASE              0x58033000
#define N32_GPIOD_BASE              0x58033400
#define N32_GPIOE_BASE              0x58033800
#define N32_GPIOF_BASE              0x58033C00
#define N32_GPIOG_BASE              0x58034000
#define N32_GPIOH_BASE              0x58034400
#define N32_GPIOI_BASE              0x58034800
#define N32_GPIOJ_BASE              0x58034C00
#define N32_GPIOK_BASE              0x58035000
#define N32_DBGMCU_BASE             0x58035400
#define N32_ECCMON3_BASE            0x58036000

#define N32_SYSMEM_UID       0x1ff1e800

#endif /* __ARCH_ARM_SRC_N32H7_HARDWARE_N32H7X3XX_MEMORYMAP_H */
