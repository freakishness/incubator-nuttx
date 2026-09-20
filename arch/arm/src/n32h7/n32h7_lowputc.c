//
// Created by Admin on 2026/6/12.
//

#include "n32_lowputc.h"

#include <arm_internal.h>
#include <stdint.h>
#include "hardware/n32_memorymap.h"
#include "hardware/n32_uart.h"

void arm_lowputc(char ch) {

}

void n32_lowsetup(void) {
    uint32_t regval;

    /* config stop bit: 1 stop bit*/
    regval = getreg32(N32_USART1_BASE + N32_USART_CTRL2_OFFSET);
    regval &= ~USART_CTRL2_STPB_MASK;
    regval |= USART_CTRL2_STPB_1;
    putreg32(regval, N32_USART1_BASE + N32_USART_CTRL2_OFFSET);

    /* config word length 8 & disable parity */
    regval = getreg32(N32_USART1_BASE + N32_USART_CTRL1_OFFSET);
    regval &= ~(USART_CTRL1_RXEN | USART_CTRL1_TXEN | USART_CTRL1_PSEL |
                USART_CTRL1_PCEN | USART_CTRL1_OSPM | USART_CTRL1_WL);
    regval |= (USART_CTRL1_WL8) | (~USART_CTRL1_PCEN) | USART_CTRL1_RXEN |
                USART_CTRL1_TXEN | USART_CTRL1_OSPM16 | USART_CTRL1_UEN;
    putreg32(regval, N32_USART1_BASE + N32_USART_CTRL1_OFFSET);

    /* disable hardware flow contrtol */
    regval = getreg32(N32_USART1_BASE + N32_USART_CTRL3_OFFSET);
    regval &= ~(USART_CTRL3_RTSEN | USART_CTRL3_CTSEN);
    putreg32(regval, N32_USART1_BASE + N32_USART_CTRL3_OFFSET);

    /* config baudrate: 115200 */
    regval = (162 << 4) | 75;
    putreg32(regval, N32_USART1_BASE + N32_USART_BRCF_OFFSET);
}