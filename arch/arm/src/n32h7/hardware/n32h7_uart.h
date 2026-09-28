/* 
 * Created by Admin on 2026/6/12.
 * 
 */

#ifndef NUTTX_N32_UART_H
#define NUTTX_N32_UART_H

#include "n32_memorymap.h"

#define N32_USART_CTRL1_OFFSET      0x00
#define N32_USART_CTRL2_OFFSET      0x04
#define N32_USART_CTRL3_OFFSET      0x08
#define N32_USART_STS_OFFSET        0x0C
#define N32_USART_DAT_OFFSET        0x10
#define N32_USART_BRCF_OFFSET       0x14
#define N32_USART_GTP_OFFSET        0x18
#define N32_USART_FIFO_OFFSET       0x1C
#define N32_USART_IFW_OFFSET        0x20
#define N32_USART_RTO_OFFSET        0x24

/** Bit definition for USART_CTRL1 register **/
#define USART_CTRL1_UEN             ((uint32_t)0x00000001U) /* USART Enable */
#define USART_CTRL1_RXEN            ((uint32_t)0x00000002U) /* Receiver Enable
                                                             */
#define USART_CTRL1_TXEN            ((uint32_t)0x00000004U) /* Transmitter
                                                             * Enable */
#define USART_CTRL1_PSEL            ((uint32_t)0x00000008U) /* Parity
                                                             * Selection */
#define USART_CTRL1_PCEN            ((uint32_t)0x00000010U) /* Parity Control
                                                             * Enable */
#define USART_CTRL1_WL              ((uint32_t)0x00000020U) /* Word length */
#define USART_CTRL1_WL8             ((uint32_t)0x00000000U) /* 8 word length
                                                             */
#define USART_CTRL1_WL9             ((uint32_t)0x00000040U) /* 9 word length
                                                             */
#define USART_CTRL1_RCVWU           ((uint32_t)0x00000040U) /* Receiver wakeup
                                                             */
#define USART_CTRL1_WUM             ((uint32_t)0x00000080U) /* Wakeup method
                                                             */
#define USART_CTRL1_IDLEIEN         ((uint32_t)0x00000100U) /* IDLE Interrupt
                                                             * Enable */
#define USART_CTRL1_RXDNEIEN        ((uint32_t)0x00000200U) /* RXNE Interrupt
                                                             * Enable */
#define USART_CTRL1_TXDEIEN         ((uint32_t)0x00000400U) /* TXE Interrupt
                                                             * Enable */
#define USART_CTRL1_TXCIEN          ((uint32_t)0x00000800U) /* Transmission
                                                             * Complete
                                                             * Interrupt
                                                             * Enable */
#define USART_CTRL1_PEIEN           ((uint32_t)0x00001000U) /* PE Interrupt
                                                             * Enable */
#define USART_CTRL1_SDBRK           ((uint32_t)0x00002000U) /* Send Break */
#define USART_CTRL1_DEM             ((uint32_t)0x00004000U) /* Driver enable
                                                             * mode */
#define USART_CTRL1_DEP             ((uint32_t)0x00008000U) /* Driver enable
                                                             * polarity
                                                             * selection */
#define USART_CTRL1_DEDT_MASK       ((uint32_t)0x001F0000U) /* Driver Enable
                                                             * deassertion
                                                             * time mask */
#define USART_CTRL1_DEAT_MASK       ((uint32_t)0x03E00000U) /* Driver Enable
                                                             * assertion time
                                                             * mask */
#define USART_CTRL1_OSPM            ((uint32_t)0x04000000U) /* Oversampling
                                                             * mode */
#define USART_CTRL1_OSPM16          ((uint32_t)0x00000000U)
#define USART_CTRL1_OSPM8           ((uint32_t)0x04000000U)
#define USART_CTRL1_SWAP            ((uint32_t)0x08000000U) /* Swap TX/RX pins
                                                             */
#define USART_CTRL1_IFCEN           ((uint32_t)0x10000000U) /* Idle frame
                                                             * controllable
                                                             * enable */

/** Bit definition for USART_CTRL2 register **/
#define USART_CTRL2_ADDR            ((uint32_t)0x0000000FU) /* Address of the
                                                             * USART node */
#define USART_CTRL2_STPB_MASK       ((uint32_t)0x00000060U) /* STOP[1:0] bits
                                                             * (STOP bits) */
#define USART_CTRL2_STPB_1          ((uint32_t)0x00000000U) /* 1 stop bit */
#define USART_CTRL2_STPB_05         ((uint32_t)0x00000020U) /* 0.5 stop bit */
#define USART_CTRL2_STPB_2          ((uint32_t)0x00000040U) /* 2 stop bits */
#define USART_CTRL2_STPB_15         ((uint32_t)0x00000060U) /* 1.5 stop bits
                                                             */
#define USART_CTRL2_STPB_0          ((uint32_t)0x00000020U) /* Bit 0 */
#define USART_CTRL2_STPB_1          ((uint32_t)0x00000040U) /* Bit 1 */
#define USART_CTRL2_CLKEN           ((uint32_t)0x00000100U) /* Clock Enable */
#define USART_CTRL2_CLKPOL          ((uint32_t)0x00000200U) /* Clock Polarity
                                                             */
#define USART_CTRL2_CLKPHA          ((uint32_t)0x00000400U) /* Clock Phase */
#define USART_CTRL2_LBCLK           ((uint32_t)0x00000800U) /* Last Bit Clock
                                                             * pulse */
#define USART_CTRL2_LINMEN          ((uint32_t)0x00001000U) /* LIN mode enable
                                                             */
#define USART_CTRL2_LINBDIEN        ((uint32_t)0x00002000U) /* LIN Break
                                                             * Detection
                                                             * Interrupt
                                                             * Enable */
#define USART_CTRL2_LINBDL          ((uint32_t)0x00004000U) /* LIN Break
                                                             * Detection
                                                             * Length */
#define USART_CTRL2_RTOEN           ((uint32_t)0x00008000U) /* Receiver
                                                             * timeout enable
                                                             */
#define USART_CTRL2_RTOCF           ((uint32_t)0x00010000U) /* Receiver
                                                             * timeout clear
                                                             * flag */
#define USART_CTRL2_RTOIEN          ((uint32_t)0x00020000U) /* Receiver
                                                             * timeout
                                                             * interrupt
                                                             * enable */
#define USART_CTRL2_PEFLOSE         ((uint32_t)0x00040000U) /* PEF Data
                                                             * Discard Enable
                                                             * Bit */
#define USART_CTRL2_NEFLOSE         ((uint32_t)0x00080000U) /* NEF Data
                                                             * Discard Enable
                                                             * Bit */
#define USART_CTRL2_FEFLOSE         ((uint32_t)0x00100000U) /* FEF Data
                                                             * Discard Enable
                                                             * Bit */

/** Bit definition for USART_CTRL3 register **/
#define USART_CTRL3_CTSEN           ((uint32_t)0x00000001U) /* CTS Enable */
#define USART_CTRL3_CTSIEN          ((uint32_t)0x00000002U) /* CTS Interrupt
                                                             * Enable */
#define USART_CTRL3_RTSEN           ((uint32_t)0x00000004U) /* RTS Enable */
#define USART_CTRL3_HDMEN           ((uint32_t)0x00000008U) /* Half-Duplex
                                                             * Selection */
#define USART_CTRL3_DMATXEN         ((uint32_t)0x00000010U) /* DMA Enable
                                                             * Transmitter */
#define USART_CTRL3_DMARXEN         ((uint32_t)0x00000020U) /* DMA Enable
                                                             * Receiver */
#define USART_CTRL3_ERRIEN          ((uint32_t)0x00000040U) /* Error Interrupt
                                                             * Enable */
#define USART_CTRL3_IRDAMEN         ((uint32_t)0x00000080U) /* IrDA mode
                                                             * Enable */
#define USART_CTRL3_IRDALP          ((uint32_t)0x00000100U) /* IrDA Low-Power
                                                             */
#define USART_CTRL3_SCMEN           ((uint32_t)0x00000200U) /* Smartcard mode
                                                             * enable */
#define USART_CTRL3_SCNACK          ((uint32_t)0x00000400U) /* Smartcard NACK
                                                             * enable */

/** Bit definition for USART_STS register **/
#define USART_STS_TXFF              ((uint32_t)0x00000001U) /* Send FIFO full
                                                             */
#define USART_STS_RXFF              ((uint32_t)0x00000002U) /* Receive FIFO
                                                             * full */
#define USART_STS_TXFE              ((uint32_t)0x00000004U) /* Send FIFO
                                                             * empty*/
#define USART_STS_RXFE              ((uint32_t)0x00000008U) /* Receive FIFO
                                                             * empty */
#define USART_STS_RXFT              ((uint32_t)0x00000010U) /* RX FIFO
                                                             * threshold */
#define USART_STS_TXFT              ((uint32_t)0x00000020U) /* TX FIFO
                                                             * threshold*/
#define USART_STS_IDLEF             ((uint32_t)0x00000040U) /* IDLE line
                                                             * detected */
#define USART_STS_TXDE              ((uint32_t)0x00000080U) /* Transmit Data
                                                             * Register Empty
                                                             */
#define USART_STS_TXC               ((uint32_t)0x00000100U) /* Transmission
                                                             * Complete */
#define USART_STS_RXDNE             ((uint32_t)0x00000200U) /* Read Data
                                                             * Register Not
                                                             * Empty */
#define USART_STS_CTSF              ((uint32_t)0x00000400U) /* CTS Flag */
#define USART_STS_LINBDF            ((uint32_t)0x00000800U) /* LIN Break
                                                             * Detection Flag
                                                             */
#define USART_STS_PEF               ((uint32_t)0x00001000U) /* Parity Error */
#define USART_STS_OREF              ((uint32_t)0x00002000U) /* OverRun Error
                                                             */
#define USART_STS_NEF               ((uint32_t)0x00004000U) /* Noise Error
                                                             * Flag */
#define USART_STS_FEF               ((uint32_t)0x00008000U) /* Framing Error
                                                             */
#define USART_STS_RTOF              ((uint32_t)0x00010000U) /* recevier
                                                             * timeout */
#define USART_STS_PELOSEF           ((uint32_t)0x00020000U) /* Received Data
                                                             * PE Error
                                                             * Discard Flag */
#define USART_STS_NELOSEF           ((uint32_t)0x00040000U) /* Received Data
                                                             * NE Error
                                                             * Discard Flag */
#define USART_STS_FELOSEF           ((uint32_t)0x00080000U) /* Received Data
                                                             * FE Error
                                                             * Discard Flag */

/** Bit definition for USART_DAT register **/
#define USART_DAT_DATV              ((uint32_t)0x000001FFU) /* Data value */

/** Bit definition for USART_BRCF register **/
#define USART_BRCF_DIV_Decimal      ((uint32_t)0x000FU) /* Fraction of
                                                         * USARTDIV */
#define USART_BRCF_DIV_Integer      ((uint32_t)0xFFF0U) /* Mantissa of
                                                         * USARTDIV */

/** Bit definition for USART_GTP register **/
#define USART_GTP_PSCV              ((uint32_t)0x00FFU) /* PSC[7:0] bits
                                                         * (Prescaler value)
                                                         */
#define USART_GTP_PSCV_0            ((uint32_t)0x0001U) /* Bit 0 */
#define USART_GTP_PSCV_1            ((uint32_t)0x0002U) /* Bit 1 */
#define USART_GTP_PSCV_2            ((uint32_t)0x0004U) /* Bit 2 */
#define USART_GTP_PSCV_3            ((uint32_t)0x0008U) /* Bit 3 */
#define USART_GTP_PSCV_4            ((uint32_t)0x0010U) /* Bit 4 */
#define USART_GTP_PSCV_5            ((uint32_t)0x0020U) /* Bit 5 */
#define USART_GTP_PSCV_6            ((uint32_t)0x0040U) /* Bit 6 */
#define USART_GTP_PSCV_7            ((uint32_t)0x0080U) /* Bit 7 */

#define USART_GTP_GTV               ((uint32_t)0xFF00U) /* Guard time value */

/** Bit definition for USART_FIFO register **/
#define USART_FIFO_EN               ((uint32_t)0x00000001U) /* FIFO model
                                                             * enable */
#define USART_FIFO_CLR              ((uint32_t)0x00000002U) /* FIFO clear */
#define USART_FIFO_TXFTCFG_MASK     ((uint32_t)0x0000001CU) /* TXFIFO
                                                             * threshold
                                                             * configuration
                                                             */
#define USART_FIFO_RXFTCFG_MASK     ((uint32_t)0x000000E0U) /* RXFIFO
                                                             * threshold
                                                             * configuration
                                                             */
#define USART_FIFO_TXFFIEN          ((uint32_t)0x00000100U) /* TXFIFO full
                                                             * interrupt
                                                             * enable */
#define USART_FIFO_RXFFIEN          ((uint32_t)0x00000200U) /* RXFIFO full
                                                             * interrupt
                                                             * enable */
#define USART_FIFO_TXFEIEN          ((uint32_t)0x00000400U) /* TXFIFO empty
                                                             * interrupt
                                                             * enable */
#define USART_FIFO_RXFEIEN          ((uint32_t)0x00000800U) /* RXFIFO empty
                                                             * interrupt
                                                             * enable */
#define USART_FIFO_RXFTIEN          ((uint32_t)0x00001000U) /* RXFIFO
                                                             * threshold
                                                             * interrupt
                                                             * enable */
#define USART_FIFO_TXFTIEN          ((uint32_t)0x00002000U) /* TXFIFO
                                                             * threshold
                                                             * interrupt
                                                             * enable */
#define USART_FIFO_RXCNT_MASK       ((uint32_t)0x0003C000U) /* number of
                                                             *  RXFIFO valid
                                                             * data mask */
#define USART_FIFO_TXCNT_MASK       ((uint32_t)0x003C0000U) /* number of
                                                             *  TXFIFO valid
                                                             * data mask */

/** Bit definition for USART_IFW register **/
#define USART_IFW_WIDTH_MASK        ((uint32_t)0x0FFFFFFFU) /* Receiver
                                                             * timeout value
                                                             */

#endif /* NUTTX_N32_UART_H */
