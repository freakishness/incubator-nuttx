/****************************************************************************
* arch/arm/src/stm32h7/stm32_rcc.c
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
#include <stdint.h>

#include "n32_rcc.h"

#include "arm_internal.h"

#include "hardware/n32_memorymap.h"
#include "hardware/n32_rcc.h"
#include "hardware/n32_pwr.h"

static inline void n32_hse_config(void) {
    uint32_t regval;


    regval = getreg32(N32_RCC_SRCCTRL1);
    /* Reset HSERDCNTEN bit */
    regval &= ~RCC_SRCCTRL1_HSERDCNTEN;
    putreg32(N32_RCC_SRCCTRL1, regval);

#ifdef N32_BOARD_HSE_BYPASS
    regval = getreg32(N32_RCC_SRCCTRL1);
    if (regval & RCC_SRCCTRL1_HSEEN) {
        /* Reset HSEEN bit */
        regval &= ~RCC_SRCCTRL1_HSEEN;
        putreg32(N32_RCC_SRCCTRL1, regval);
    }

    regval |= RCC_SRCCTRL1_HSEBP;
    putreg32(N32_RCC_SRCCTRL1, regval);
#endif
    regval |= RCC_SRCCTRL1_HSEEN;
    putreg32(N32_RCC_SRCCTRL1, regval);
    // TODO: delay 50 us
    regval |= RCC_SRCCTRL1_HSERDCNTEN;
    putreg32(N32_RCC_SRCCTRL1, regval);
}

static inline void n32_lse_config(void) {
    uint32_t regval;

    regval = getreg32(N32_RCC_BDCTRL);

#ifdef N32_BOARD_LSE_BYPASS
    regval &= ~RCC_BDCTRL_LSEEN;
    putreg32(N32_RCC_BDCTRL, regval);
    regval |= RCC_BDCTRL_LSEBP;
    putreg32(N32_RCC_BDCTRL, regval);
#else
    regval &= ~RCC_BDCTRL_LSEBP;
    putreg32(N32_RCC_BDCTRL, regval);
    regval |= RCC_BDCTRL_LSEEN;
    putreg32(N32_RCC_BDCTRL, regval);
#endif
    regval &= ~RCC_BDCTRL_LSERDCNTEN;
    putreg32(N32_RCC_BDCTRL, regval);
    regval |= RCC_BDCTRL_LSELDOEN;
    putreg32(N32_RCC_BDCTRL, regval);
    //TODO: delay 60us
    /* Set da_lse_agcopt bits */
    // TODO: AFEC->TRIMR7 |= 0x00400000;
    regval = regval | RCC_BDCTRL_LSEEN | RCC_BDCTRL_LSERDEN;
    putreg32(N32_RCC_BDCTRL, regval);
    // TODO: delay 10us
    regval |= RCC_BDCTRL_LSERDCNTEN;
    putreg32(N32_RCC_BDCTRL, regval);
}

void n32_clockconfig(void) {
    uint32_t regval;
    uint32_t temp_regval1;
    uint32_t temp_regval2;
    volatile int32_t timeout;

    /* Enable External High Speed Clock (HSE) */
    regval = RCC_SRCCTRL1_HSEEN;
    putreg32(N32_RCC_SRCCTRL1, regval);

    regval |= RCC_SRCCTRL1_HSERDCNTEN;
    putreg32(N32_RCC_SRCCTRL1, regval);

    while ((getreg32(N32_RCC_SRCCTRL1) & RCC_SRCCTRL1_HSERDF) == 0) {}

    /* Enable PWR peripheral clock */
    regval = getreg32(N32_RCC_AHB5EN2);
    regval &= (~RCC_AHB5EN2_PWREN_MASK);
    regval |= RCC_AHB5EN2_PWREN_ENABLE;
    putreg32(regval, N32_RCC_AHB5EN2);

    /* Enable access to backup registers */
    regval = getreg32(N32_PWR_SYSCTRL1);
    regval |= PWR_SYSCTRL1_DBKP_MASK;
    putreg32(regval, N32_PWR_SYSCTRL1);

    /* Enable LSI */
    regval = getreg32(N32_RCC_BDCTRL);
    regval |= RCC_BDCTRL_LSIEN | RCC_BDCTRL_LSIRDEN;
    putreg32(regval, N32_RCC_BDCTRL);
    while ((getreg32(N32_RCC_BDCTRL) & RCC_BDCTRL_LSIRDF) == 0) {}

    /* Enable External Low Speed Clock (LSE) */
    regval = getreg32(N32_RCC_BDCTRL);
    regval &= (~RCC_BDCTRL_LSEBP | ~RCC_BDCTRL_LSERDCNTEN);
    regval |= RCC_BDCTRL_LSELDOEN;
    putreg32(regval, N32_RCC_BDCTRL);
    //TODO: delay 60us
    /* Set da_lse_agcopt bits */
    // AFEC->TRIMR7 |= 0x00400000; there is no message about afec in datesheet
    putreg32(0x00400000, N32_AFEC_BASE + 0x1c);

    regval |= RCC_BDCTRL_LSEEN | RCC_BDCTRL_LSERDEN;
    putreg32(regval, N32_RCC_BDCTRL);
    //TODO: delay 10us
    regval |= RCC_BDCTRL_LSERDCNTEN;
    putreg32(regval, N32_RCC_BDCTRL);

    while ((getreg32(N32_RCC_BDCTRL) & RCC_BDCTRL_LSERDF) == 0) {}

    /* Configure sys_div_clk is sys_clk(PLL1A) = 600M = M7 clock*/
    /* Configure sys_bus_div_clk is sys_div_clk/2 = 300M = M4 clock = AHB1\2\5\9*/
    /* Configure AXI clock is sys_div_clk/2 = 300M = AHB6*/
    regval = RCC_SYSBUSDIV1_AXIHYPDIV_DIV2 |
             RCC_SYSBUSDIV1_HSIDIV_DIV1 |
             RCC_SYSBUSDIV1_M7HYPDIV_DIV1 |
             RCC_SYSBUSDIV1_AXIDIV_DIV2 |
             RCC_SYSBUSDIV1_BUSDIV_DIV2 |
             RCC_SYSBUSDIV1_MSIDIV_DIV1 |
             RCC_SYSBUSDIV1_SCLKDIV_DIV1;
    putreg32(regval, N32_RCC_SYSBUSDIV1);

    /* sysbus div2 */
    /* Configure APB1 clock is AHB1/2 = 150M */
    /* Configure APB2 clock is AHB2/2 = 150M */
    /* Configure APB5 clock is AHB5/2 = 150M */
    /* Configure APB6 clock is AHB6/2 = 150M */

    regval = RCC_SYSBUSDIV2_APB6DIV_DIV2 |
             RCC_SYSBUSDIV2_APB5DIV_DIV2 |
             RCC_SYSBUSDIV2_APB2DIV_DIV2 |
             RCC_SYSBUSDIV2_APB1DIV_DIV2;
    putreg32(regval, N32_RCC_SYSBUSDIV2);

    /* periph clock source hse */

    regval = getreg32(N32_RCC_CFG3);
    regval |= RCC_CFG3_PERSW_HSE;
    regval &= RCC_CFG3_M7STCLKDIV_MASK;
    regval |= RCC_CFG3_M7STCLKDIV_DIV1;
    putreg32(regval, N32_RCC_CFG3);

    /* pll1 */
    regval = getreg32(N32_RCC_PLL1CTRL1);
    regval &= (~RCC_PLL1CTRL1_PLL1BWAJ_MASK);
    regval |= 11;
    putreg32(regval, N32_RCC_PLL1CTRL1);

    regval &= (~RCC_PLL1CTRL2_PLL1CLKR_MASK);
    regval |= 0;
    regval &= (~RCC_PLL1CTRL2_PLL1CLKF_MASK);
    regval |= 393216;
    putreg32(regval, N32_RCC_PLL1CTRL2);

    regval = getreg32(N32_RCC_PLL1CTRL1);
    regval |= RCC_PLL1CTRL1_PLL1LDOEN;
    //TODO: delay10us

    /* Enable power to analog circuitry in PLL */
    regval &= ~RCC_PLL1CTRL1_PLL1PD;
    putreg32(regval, N32_RCC_PLL1CTRL1);

    regval &= ~RCC_PLL1CTRL1_PLL1SRC_MASK;
    regval |= RCC_PLL1CTRL1_PLL1SRC_HSE;
    putreg32(regval, N32_RCC_PLL1CTRL1);
    //TODO: delay 10us

    /* Clear PLL reset */
    regval &= ~RCC_PLL1CTRL1_PLL1RST;
    while ((getreg32(N32_RCC_PLL1CTRL1) & RCC_PLL1CTRL1_PLL1PHLK) == 0) {}

    /* Enable PLL */
    regval = getreg32(N32_RCC_PLL1CTRL1);
    regval |= RCC_PLL1CTRL1_PLL1EN;
    putreg32(regval, N32_RCC_PLL1CTRL1);

    /* pll1 div */
    regval = RCC_PLL1DIV_PLL1ADIV_DIV1 |
             RCC_PLL1DIV_PLL1BDIV_DIV2 |
             RCC_PLL1DIV_PLL1CDIV_DIV2;
    putreg32(regval, N32_RCC_PLL1DIV);

    /*Configure AXI clock source and divider*/

    regval = getreg32(N32_RCC_SRCCTRL2);
    /* Clear AXIHYPSEL bits */
    regval &= ~RCC_SRCCTRL2_AXIHYPSEL_MASK;
    /* Set the AXIHYPSEL bits */
    regval |= RCC_SRCCTRL2_AXIHYPSEL_PLL1A;
    putreg32(regval, N32_RCC_SRCCTRL2);

    regval = getreg32(N32_RCC_SYSBUSDIV1);
    regval &= ~RCC_SYSBUSDIV1_AXIDIV_MASK;
    regval |= RCC_SYSBUSDIV1_AXIDIV_DIV2;
    putreg32(regval, N32_RCC_SYSBUSDIV1);

    /*Configure M7 clock source and divider*/
    regval = getreg32(N32_RCC_CFG3);
    regval &= ~RCC_CFG3_M7STCLKDIV_MASK;
    regval |= RCC_CFG3_M7STCLKDIV_DIV1;
    putreg32(regval, N32_RCC_CFG3);

    regval = getreg32(N32_RCC_SRCCTRL2);
    regval &= ~RCC_SRCCTRL2_M7HYPSEL_MASK;
    regval |= RCC_SRCCTRL2_M7HYPSEL_PLL1A;
    putreg32(N32_RCC_SRCCTRL2);

    /* configure sys_clk source is PLL1A */

    regval = getreg32(N32_RCC_SRCCTRL1);
    regval &= ~RCC_SRCCTRL1_SCLKSTS_MASK;
    regval |= RCC_SRCCTRL1_SCLKSTS_PLL1;
    putreg32(regval, N32_RCC_SRCCTRL1);

    /* */
    regval = getreg32(N32_RCC_SRCCTRL1);
    regval &= ~RCC_SRCCTRL1_SCLKSW_MASK;
    regval |= RCC_SRCCTRL1_SCLKSW_PLL1;
    putreg32(regval, N32_RCC_SRCCTRL1);
    while ((getreg32(N32_RCC_SRCCTRL1) & RCC_SRCCTRL1_SCLKSTS_PLL1) == 0) {}

    regval = getreg32(N32_PWR_SHRTIMCTRL);
    if ((regval & PWR_SHRTIMCTRL_SHRA_PRDY) != PWR_SHRTIMCTRL_SHRA_PRDY) {
        /*Select the switcher mode and enable the  SHRTIM AFE power*/
        regval |= PWR_SHRTIMCTRL_SHRA_PSWACK1 | PWR_SHRTIMCTRL_SHRA_PWREN;
        /*wait power on ready flag */
        while ((getreg32(N32_PWR_SHRTIMCTRL) & PWR_SHRTIMCTRL_SHRA_PRDY) != PWR_SHRTIMCTRL_SHRA_PRDY) {}
        /*Set  SHRTIM AFE out of reset state and remove isolation on  SHRTIM AFE output signals */
        regval |= PWR_SHRTIMCTRL_SHRA_FUCEN | PWR_SHRTIMCTRL_SHRA_ISNEN;
        putreg32(regval, N32_PWR_SHRTIMCTRL);
    }

    regval = getreg32(N32_PWR_SHRTIMCTRL);
#ifdef CONFIG_N32_SHRTIM1
    regval |= PWR_SHRTIMCTRL_SHR1_PSWACK1 | PWR_SHRTIMCTRL_SHR1_PWREN;
    putreg32(regval, N32_PWR_SHRTIMCTRL);
    while ((getreg32(N32_PWR_SHRTIMCTRL) & PWR_SHRTIMCTRL_SHR1_PRDY) != PWR_SHRTIMCTRL_SHR1_PRDY)  {}
#endif
#ifdef CONFIG_N32_SHRTIM2
    regval |= PWR_SHRTIMCTRL_SHR2_PSWACK1 | PWR_SHRTIMCTRL_SHR2_PWREN;
    putreg32(regval, N32_PWR_SHRTIMCTRL);
    while ((getreg32(N32_PWR_SHRTIMCTRL) & PWR_SHRTIMCTRL_SHR2_PRDY) != PWR_SHRTIMCTRL_SHR2_PRDY) {}
#endif

    /* Enable reset to filter waveform burrs */

    regval = getreg32(N32_RCC_APB2RST1);
#ifdef CONFIG_N32_SHRTIM1
    regval |= RCC_APB2RST1_SHRTIM1RST;
#endif
#ifdef CONFIG_N32_SHRTIM2
    regval |= RCC_APB2RST1_SHRTIM2RST;
#endif
    putreg32(regval, N32_RCC_APB2RST1);

    regval = getreg32(N32_RCC_PLLSFTLK);
    regval &= (~RCC_PLLSFTLK_SHRTIMAFERST);
    putreg32(regval, N32_RCC_PLLSFTLK);

    /* get NR NF WB parameter */
    /* get the register value */
    temp_regval1 = getreg32(N32_RCC_SHRPLLCTRL1);
    temp_regval2 = getreg32(N32_RCC_SHRPLLCTRL2);

    /* Clear BWAJ[11:0] bits */
    temp_regval1 &= RCC_SHRPLLCTRL1_SHRPLLBWAJ_MASK;
    /* Clear CLKF[25:0] and CLKR[5:0] bits */
    temp_regval2 &= RCC_SHRPLLCTRL2_SHRPLLCLKF_MASK;

    /* Set BWAJ[11:0] bits */
    temp_regval1 |= 24;
    /* Set CLKF[25:0] and CLKR[5:0]  bits */
    temp_regval2 |= (0 << RCC_SHRPLLCTRL2_SHRPLLCLKR_SHIFT) \
                 | (819200 << RCC_SHRPLLCTRL2_SHRPLLCLKF_SHIFT);
    /* Store the new value */
    putreg32(temp_regval1, N32_RCC_SHRPLLCTRL1);
    putreg32(temp_regval2, N32_RCC_SHRPLLCTRL2);

    /* Enable PLL module power */
    temp_regval1 |= RCC_SHRPLLCTRL1_SHRPLLLDOEN;
    putreg32(temp_regval1, N32_RCC_SHRPLLCTRL1);

    /* TODO: delay 10us */

    /* Enable power to analog circuitry in PLL */
    temp_regval1 &= (~RCC_SHRPLLCTRL1_SHRPLLPD);
    putreg32(temp_regval1, N32_RCC_SHRPLLCTRL1);

    /* Select Clock Source */
    regval = getreg32(N32_RCC_SHRPLLCTRL1);
    regval &= RCC_SHRPLLCTRL1_SHRPLLSRC_MASK;
    regval |= RCC_SHRPLLCTRL1_SHRPLLSRC_HSE;
    putreg32(regval, N32_RCC_SHRPLLCTRL1);

    /* TODO: delay 10us */

    /* Clear PLL reset */

    regval &= (~RCC_SHRPLLCTRL1_SHRPLLRST);
    putreg32(regval, N32_RCC_SHRPLLCTRL1);

    while ((getreg32(N32_RCC_SHRPLLCTRL1) & RCC_SHRPLLCTRL1_SHRPLLPHLK) != RCC_SHRPLLCTRL1_SHRPLLPHLK) {}

    /* Enable PLL */
    regval = getreg32(N32_RCC_SHRPLLCTRL1);
    regval |= RCC_SHRPLLCTRL1_SHRPLLEN;
    putreg32(regval, N32_RCC_SHRPLLCTRL1);

    regval = getreg32(N32_RCC_APB2RST1);
    regval &= ~(RCC_APB2RST1_SHRTIM1RST | RCC_APB2RST1_SHRTIM2RST);
    putreg32(regval, N32_RCC_APB2RST1);

    regval = getreg32(N32_RCC_PLLSFTLK);
    regval |= RCC_PLLSFTLK_SHRTIMAFERST;
    putreg32(regval, N32_RCC_PLLSFTLK);

    /* TODO: Config ETH2 divider from ahb1 */

#ifdef CONFIG_N32_SDMMC2
    /*Configures the SDMMC2 clock source and divider*/
    regval = getreg32(N32_RCC_AHB1SEL1);
    regval &= (~RCC_AHB1SEL1_SDMMC2KERSEL_MASK);
    regval |= RCC_AHB1SEL1_SDMMC2KERSEL_SYSBUSDIV;
    putreg32(regval, N32_RCC_AHB1SEL1);

    regval = getreg32(N32_RCC_AHB1DIV1);
    regval &= (~RCC_AHB1DIV1_SDMMC2SYSDIV_MASK);
    regval |= RCC_AHB1DIV1_SDMMC2SYSDIV_DIV4;
    putreg32(regval, N32_RCC_AHB1DIV1);
#endif


#if defined(CONFIG_N32_ATIM1) || defined(CONFIG_N32_ATIM2)
    regval = getreg32(N32_RCC_APB2DIV1);
    regval &= (~RCC_APB2DIV1_APB2ATIMDIV_MASK);
    regval |= RCC_APB2DIV1_APB2ATIMDIV_DIV1;
    putreg32(regval, N32_RCC_APB2DIV1);
#endif

#if defined(CONFIG_N32_ATIM3) || defined(CONFIG_N32_ATIM4)
    regval = getreg32(N32_RCC_APB5DIV1);
    regval &= (~RCC_APB5DIV1_APB5ATIMDIV_MASK);
    regval |= RCC_APB5DIV1_APB5ATIMDIV_DIV1;
    putreg32(regval, N32_RCC_APB5DIV1);
#endif

#if defined(CONFIG_N32_GTIMA1) || defined(CONFIG_N32_GTIMA2) || \
    defined(CONFIG_N32_GTIMA3)
    regval = getreg32(N32_RCC_APB2DIV1);
    regval &= RCC_APB2DIV1_APB2GTIMDIV_MASK;
    regval |= RCC_APB2DIV1_APB2GTIMDIV_DIV1;
    putreg32(regval, N32_RCC_APB2DIV1);
#endif

#if defined(CONFIG_N32_GTIMA4) || defined(CONFIG_N32_GTIMA5) || \
    defined(CONFIG_N32_GTIMA6) || defined(CONFIG_N32_GTIMA7) || \
    defined(CONFIG_N32_GTIMB1) || defined(CONFIG_N32_GTIMB2) || \
    defined(CONFIG_N32_GTIMB3)
    regval = getreg32(N32_RCC_APB1DIV1);
    regval &= RCC_APB1DIV1_APB1GTIMDIV_MASK;
    regval |= RCC_APB1DIV1_APB1GTIMDIV_DIV1;
    putreg32(regval, N32_RCC_APB1DIV1);
#endif

#if defined(CONFIG_N32_BTIM1) || defined(CONFIG_N32_BTIM2) \
    || defined(CONFIG_N32_BTIM3) || defined(CONFIG_N32_BTIM4)
    regval = getreg32(N32_RCC_APB1DIV1);
    regval &= (~RCC_APB1DIV1_APB1BTIMDIV_MASK);
    regval |= RCC_APB1DIV1_APB1BTIMDIV_DIV1;
    putreg32(regval, N32_RCC_APB1DIV1);
#endif

    regval = getreg32(N32_RCC_RDSEL1);
#ifdef CONFIG_N32_LPTIM1
    regval &= (~RCC_RDSEL1_LPTIM1SEL_MASK)
    regval |= RCC_RDSEL1_LPTIM1SEL_LSE;
#endif
#ifdef CONFIG_N32_LPTIM2
    regval &= (~RCC_RDSEL1_LPTIM2SEL_MASK);
    regval |= RCC_RDSEL1_LPTIM2SEL_LSE;
#endif
#ifdef CONFIG_N32_LPTIM3
    regval &= (~RCC_RDSEL1_LPTIM3SEL_MASK)
    regval |= RCC_RDSEL1_LPTIM3SEL_LSE;
#endif
#ifdef CONFIG_N32_LPTIM4
    regval &= (~RCC_RDSEL1_LPTIM4SEL_MASK);
    regval |= RCC_RDSEL1_LPTIM4SEL_LSE;
#endif
#ifdef CONFIG_N32_LPTIM5
    regval &= (~RCC_RDSEL1_LPTIM5SEL_MASK)
    regval |= RCC_RDSEL1_LPTIM5SEL_LSE;
#endif
    putreg32(regval, N32_RCC_RDSEL1);

#ifdef CONFIG_N32_RTC
    regval = getreg32(N32_RCC_BDCTRL);
    regval &= (~RCC_BDCTRL_RTCSEL_MASK);
    regval |= RCC_BDCTRL_RTCSEL_LSE;
    putreg32(regval, N32_RCC_BDCTRL);
#endif

#if defined(CONFIG_N32_LPUART1) || defined(CONFIG_N32_LPUART2)

    /*Config the LPUART1_2 kernel clock system divider*/

    regval = getreg32(N32_RCC_RDDIV1);
    regval &= (~RCC_RDDIV1_LPUARTDIV_MASK);
    regval |= RCC_RDDIV1_LPUARTDIV_DIV1;
    putreg32(regval, N32_RCC_RDDIV1);

    /*Config the LPUART2 kernel clock source*/

    regval = getreg32(N32_RCC_RDSEL1);
#ifdef CONFIG_N32_LPUART1
    regval &= (~RCC_RDSEL1_LPUART1SEL_MASK);
    regval |= RCC_RDSEL1_LPUART1SEL_SYSBUSDIV;
#endif
#ifdef CONFIG_N32_LPUART2
    regval &= (~RCC_RDSEL1_LPUART2SEL_MASK);
    regval |= RCC_RDSEL1_LPUART2SEL_SYSBUSDIV;
#endif
#endif

#if defined(CONFIG_N32_USART1) || defined(CONFIG_N32_USART2)
    /*Config the USART1/2 PCLK divider from ahb1*/
    regval = getreg32(N32_RCC_APB1DIV1);
    regval &= ~RCC_APB1DIV1_APB1USARTDIV_MASK;
    regval |= RCC_APB1DIV1_APB1USARTDIV_DIV1;
    putreg32(regval, N32_RCC_APB1DIV1);
#endif

    regval = getreg32(N32_RCC_APB1EN3);
#ifdef CONFIG_N32_USART1
    regval |= RCC_APB1EN3_M7USART1EN;
#endif
#ifdef CONFIG_N32_USART2
    regval |= RCC_APB1EN3_M7USART2EN;
#endif
#ifdef CONFIG_N32_USART3
    regval |= RCC_APB1EN3_M7USART3EN;
#endif
#ifdef CONFIG_N32_USART4
    regval |= RCC_APB1EN3_M7USART4EN;
#endif
#ifdef CONFIG_N32_UART9
    regval |= RCC_APB1EN3_M7UART9EN;
#endif
#ifdef CONFIG_N32_UART10
    regval |= RCC_APB1EN3_M7UART10EN;
#endif
#ifdef CONFIG_N32_UART11
    regval |= RCC_APB1EN3_M7UART11EN;
#endif
#ifdef CONFIG_N32_UART12
    regval |= RCC_APB1EN3_M7UART12EN;
#endif
    putreg32(regval, N32_RCC_APB1EN3);

    regval = getreg32(N32_RCC_APB2EN3);
#ifdef CONFIG_N32_USART5
    regval |= RCC_APB2EN3_M7USART5EN;
#endif
    putreg32(regval, N32_RCC_APB2EN3);


    /* periph exti */
    regval = getreg32(N32_RCC_APB5EN2);
    regval |= RCC_APB5EN2_EXTIEN;
    putreg32(regval, N32_RCC_APB5EN2);
}
