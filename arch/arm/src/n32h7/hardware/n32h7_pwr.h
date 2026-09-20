//
// Created by Admin on 2026/6/10.
//

#ifndef NUTTX_N32_PWR_H
#define NUTTX_N32_PWR_H

#define N32_PWR_M7CTRL1_OFFSET            0x00
#define N32_PWR_M7CTRLSTS_OFFSET          0x04
#define N32_PWR_M7CTRL2_OFFSET            0x08
#define N32_PWR_M4CTRL1_OFFSET            0x20
#define N32_PWR_M4CTRLSTS_OFFSET          0x24
#define N32_PWR_M4CTRL2_OFFSET            0x28
#define N32_PWR_SYSCTRL1_OFFSET           0x40
#define N32_PWR_SYSCTRLSTS_OFFSET         0x44
#define N32_PWR_SYSCTRL2_OFFSET           0x48
#define N32_PWR_SYSCTRL3_OFFSET           0x4C
#define N32_PWR_SYSCTRL4_OFFSET           0x50
#define N32_PWR_BORCTRL_OFFSET            0x54
#define N32_PWR_IPMEMCTRL_OFFSET          0x58
#define N32_PWR_IPMEMCTRLSTS_OFFSET       0x5C
#define N32_PWR_M7MEMLPCTRL_OFFSET        0x60
#define N32_PWR_M7MEMLPSTS_OFFSET         0x64
#define N32_PWR_M7TCMPG0_OFFSET           0x68
#define N32_PWR_M7TCMPG1_OFFSET           0x6C
#define N32_PWR_M7TCMRET1N0_OFFSET        0x70
#define N32_PWR_M7TCMRET1N1_OFFSET        0x74
#define N32_PWR_M7TCMRET2N0_OFFSET        0x78
#define N32_PWR_M7TCMRET2N1_OFFSET        0x7C
#define N32_PWR_M7TCMPRDY0_OFFSET         0x80
#define N32_PWR_M7TCMPRDY1_OFFSET         0x84
#define N32_PWR_M4MEMLPCTRL_OFFSET        0x90
#define N32_PWR_SYSMEMLPCTRL_OFFSET       0xA0
#define N32_PWR_SHRTIMCTRL_OFFSET         0xB0
#define N32_PWR_MDMACTRL_OFFSET           0xB4
#define N32_PWR_ESCCTRL_OFFSET            0xB8
#define N32_PWR_EMCRETCTRL1_OFFSET        0x100
#define N32_PWR_EMCCTRLSTS1_OFFSET        0x104
#define N32_PWR_EMCRETCTRL2_OFFSET        0x108
#define N32_PWR_EMCRETSTS2_OFFSET         0x10C
#define N32_PWR_EMCRETCTRL3_OFFSET        0x110
#define N32_PWR_EMCRETSTS3_OFFSET         0x114
#define N32_PWR_EMCRETCTRL4_OFFSET        0x118
#define N32_PWR_EMCRETSTS4_OFFSET         0x11C
#define N32_PWR_EMCBKPCTRL_OFFSET         0x120
#define N32_PWR_EMCBKPSTS_OFFSET          0x124

#define N32_PWR_M7CTRL1            (N32_PWR_BASE + N32_PWR_M7CTRL1_OFFSET)
#define N32_PWR_M7CTRLSTS          (N32_PWR_BASE + N32_PWR_M7CTRLSTS_OFFSET)
#define N32_PWR_M7CTRL2            (N32_PWR_BASE + N32_PWR_M7CTRL2_OFFSET)
#define N32_PWR_M4CTRL1            (N32_PWR_BASE + N32_PWR_M4CTRL1_OFFSET)
#define N32_PWR_M4CTRLSTS          (N32_PWR_BASE + N32_PWR_M4CTRLSTS_OFFSET)
#define N32_PWR_M4CTRL2            (N32_PWR_BASE + N32_PWR_M4CTRL2_OFFSET)
#define N32_PWR_SYSCTRL1           (N32_PWR_BASE + N32_PWR_SYSCTRL1_OFFSET)
#define N32_PWR_SYSCTRLSTS         (N32_PWR_BASE + N32_PWR_SYSCTRLSTS_OFFSET)
#define N32_PWR_SYSCTRL2           (N32_PWR_BASE + N32_PWR_SYSCTRL2_OFFSET)
#define N32_PWR_SYSCTRL3           (N32_PWR_BASE + N32_PWR_SYSCTRL3_OFFSET)
#define N32_PWR_SYSCTRL4           (N32_PWR_BASE + N32_PWR_SYSCTRL4_OFFSET)
#define N32_PWR_BORCTRL            (N32_PWR_BASE + N32_PWR_BORCTRL_OFFSET)
#define N32_PWR_IPMEMCTRL          (N32_PWR_BASE + N32_PWR_IPMEMCTRL_OFFSET)
#define N32_PWR_IPMEMCTRLSTS       (N32_PWR_BASE + N32_PWR_IPMEMCTRLSTS_OFFSET)
#define N32_PWR_M7MEMLPCTRL        (N32_PWR_BASE + N32_PWR_M7MEMLPCTRL_OFFSET)
#define N32_PWR_M7MEMLPSTS         (N32_PWR_BASE + N32_PWR_M7MEMLPSTS_OFFSET)
#define N32_PWR_M7TCMPG0           (N32_PWR_BASE + N32_PWR_M7TCMPG0_OFFSET)
#define N32_PWR_M7TCMPG1           (N32_PWR_BASE + N32_PWR_M7TCMPG1_OFFSET)
#define N32_PWR_M7TCMRET1N0        (N32_PWR_BASE + N32_PWR_M7TCMRET1N0_OFFSET)
#define N32_PWR_M7TCMRET1N1        (N32_PWR_BASE + N32_PWR_M7TCMRET1N1_OFFSET)
#define N32_PWR_M7TCMRET2N0        (N32_PWR_BASE + N32_PWR_M7TCMRET2N0_OFFSET)
#define N32_PWR_M7TCMRET2N1        (N32_PWR_BASE + N32_PWR_M7TCMRET2N1_OFFSET)
#define N32_PWR_M7TCMPRDY0         (N32_PWR_BASE + N32_PWR_M7TCMPRDY0_OFFSET)
#define N32_PWR_M7TCMPRDY1         (N32_PWR_BASE + N32_PWR_M7TCMPRDY1_OFFSET)
#define N32_PWR_M4MEMLPCTRL        (N32_PWR_BASE + N32_PWR_M4MEMLPCTRL_OFFSET)
#define N32_PWR_SYSMEMLPCTRL       (N32_PWR_BASE + N32_PWR_SYSMEMLPCTRL_OFFSET)
#define N32_PWR_SHRTIMCTRL         (N32_PWR_BASE + N32_PWR_SHRTIMCTRL_OFFSET)
#define N32_PWR_MDMACTRL           (N32_PWR_BASE + N32_PWR_MDMACTRL_OFFSET)
#define N32_PWR_ESCCTRL            (N32_PWR_BASE + N32_PWR_ESCCTRL_OFFSET)
#define N32_PWR_EMCRETCTRL1        (N32_PWR_BASE + N32_PWR_EMCRETCTRL1_OFFSET)
#define N32_PWR_EMCCTRLSTS1        (N32_PWR_BASE + N32_PWR_EMCCTRLSTS1_OFFSET)
#define N32_PWR_EMCRETCTRL2        (N32_PWR_BASE + N32_PWR_EMCRETCTRL2_OFFSET)
#define N32_PWR_EMCRETSTS2         (N32_PWR_BASE + N32_PWR_EMCRETSTS2_OFFSET)
#define N32_PWR_EMCRETCTRL3        (N32_PWR_BASE + N32_PWR_EMCRETCTRL3_OFFSET)
#define N32_PWR_EMCRETSTS3         (N32_PWR_BASE + N32_PWR_EMCRETSTS3_OFFSET)
#define N32_PWR_EMCRETCTRL4        (N32_PWR_BASE + N32_PWR_EMCRETCTRL4_OFFSET)
#define N32_PWR_EMCRETSTS4         (N32_PWR_BASE + N32_PWR_EMCRETSTS4_OFFSET)
#define N32_PWR_EMCBKPCTRL         (N32_PWR_BASE + N32_PWR_EMCBKPCTRL_OFFSET)
#define N32_PWR_EMCBKPSTS          (N32_PWR_BASE + N32_PWR_EMCBKPSTS_OFFSET)

#define PWR_M7CTRL1_CVBATF                                    (1 << 16))         /* Bit[16] Clear VBAT flags*/
#define PWR_M7CTRL1_CSBF                                      (1 << 3))         /* Bit[3] Clear STANDBY flags*/
#define PWR_M7CTRL1_CWKUPF                                    (1 << 2))         /* Bit[2] Clear the pin wakeup bit*/
#define PWR_M7CTRL1_PDS                                       (1 << 1))         /* Bit[1] Power down deep sleep bit*/

/*** Power Control   ***/

/******** Bit definition for PWR_M7CTRL1 register  ********/
#define PWR_M7CTRL1_CVBATF                                    (1 << 16))         /* Bit[16] Clear VBAT flags*/
#define PWR_M7CTRL1_CSBF                                      (1 << 3))         /* Bit[3] Clear STANDBY flags*/
#define PWR_M7CTRL1_CWKUPF                                    (1 << 2))         /* Bit[2] Clear the pin wakeup bit*/
#define PWR_M7CTRL1_PDS                                       (1 << 1))         /* Bit[1] Power down deep sleep bit*/

/******** Bit definition for PWR_M7CTRLSTS register  ********/
#define PWR_M7CTRLSTS_WKUPxF_MASK                             (1 << 20)         /* Bit[26:20] WKUPx pin wakeup flag*/
#define PWR_M7CTRLSTS_WKUP0F                                  (1 << 20)         /* Bit20*/
#define PWR_M7CTRLSTS_WKUP1F                                  (1 << 21)         /* Bit21*/
#define PWR_M7CTRLSTS_WKUP2F                                  (1 << 22)         /* Bit22*/
#define PWR_M7CTRLSTS_WKUP3F                                  (1 << 23)         /* Bit23*/
#define PWR_M7CTRLSTS_WKUP4F                                  (1 << 24)         /* Bit24*/
#define PWR_M7CTRLSTS_WKUP5F                                  (1 << 25)         /* Bit25*/
#define PWR_M7CTRLSTS_WKUP6F                                  (1 << 26)         /* Bit26*/

#define PWR_M7CTRLSTS_WKUPxPOL_MASK                           (1 << 14)         /* Bit[19:14] Wake-up polarity for the WKUPx pin*/
#define PWR_M7CTRLSTS_WKUP0POL                                (1 << 14)         /* Bit14*/
#define PWR_M7CTRLSTS_WKUP1POL                                (1 << 15)         /* Bit15*/
#define PWR_M7CTRLSTS_WKUP2POL                                (1 << 16)         /* Bit16*/
#define PWR_M7CTRLSTS_WKUP3POL                                (1 << 17)         /* Bit17*/
#define PWR_M7CTRLSTS_WKUP4POL                                (1 << 18)         /* Bit18*/
#define PWR_M7CTRLSTS_WKUP5POL                                (1 << 19)         /* Bit19*/

#define PWR_M7CTRLSTS_WKUPxEN_MASK                            (1 << 8)         /* Bit[13:8] WKUPx pin wakeup enable*/
#define PWR_M7CTRLSTS_WKUP0EN                                 (1 << 8)         /* Bit8*/
#define PWR_M7CTRLSTS_WKUP1EN                                 (1 << 9)         /* Bit9*/
#define PWR_M7CTRLSTS_WKUP2EN                                 (1 << 10)         /* Bit10*/
#define PWR_M7CTRLSTS_WKUP3EN                                 (1 << 11)         /* Bit11*/
#define PWR_M7CTRLSTS_WKUP4EN                                 (1 << 12)         /* Bit12*/
#define PWR_M7CTRLSTS_WKUP5EN                                 (1 << 13)         /* Bit13*/

#define PWR_M7CTRLSTS_VBATF                                   (1 << 2))         /* Bit[2] VBAT flag*/
#define PWR_M7CTRLSTS_SBF                                     (1 << 1))         /* Bit[1] STANDBY flag*/

/******** Bit definition for PWR_M7CTRL2 register  ********/
#define PWR_M7CTRL2_MEM_CNTVAL                                (1 << 25)         /* Bit[30:25] counter value for memory power ready count down*/

#define PWR_M7CTRL2_PWR_CNTVAL                                (1 << 17)         /* Bit[24:17] counter value for CM7 logic power ready count down*/

#define PWR_M7CTRL2_TCM_RDYMD                                 (1 << 15)         /* Bit[16:15] Selected the way of check TCM power ready for CM7 domain*/
#define PWR_M7CTRL2_TCM_RDYMD_0                               (1 << 15)         /* Bit15*/
#define PWR_M7CTRL2_TCM_RDYMD_1                               (1 << 16)         /* Bit16*/

#define PWR_M7CTRL2_PWR_RDYMD                                 (1 << 13)         /* Bit[14:13] Selected the way of check power ready for CM7 domain*/
#define PWR_M7CTRL2_PWR_RDYMD_0                               (1 << 13)         /* Bit13*/
#define PWR_M7CTRL2_PWR_RDYMD_1                               (1 << 14)         /* Bit14*/

#define PWR_M7CTRL2_HCLK_ONINSLP                              (1 << 12))         /* Bit[12] HCLK is on when M7 core in sleep*/
#define PWR_M7CTRL2_NRST_WUPEN                                (1 << 11))         /* Bit[11] NRST wakeup event enable in standby mode for M7 core*/
#define PWR_M7CTRL2_RET_PSWACK1                               (1 << 10))         /* Bit[10] M7 retention power switch ACK1 used as ENA2 enanle for dual-input-header*/
#define PWR_M7CTRL2_DMN_PSWACK1                               (1 << 9))         /* Bit[9] M7 Domain power switch ACK1 used as ENA2 enanle for dual-input-header*/
#define PWR_M7CTRL2_RTC_ALMWUPEN                              (1 << 8))         /* Bit[8] RTC_ALARM wakeup enable in standby mode for M7 core*/
#define PWR_M7CTRL2_BSRSTBRET                                 (1 << 2))         /* Bit[2] Backup SRAM retention enable in STANDBY mode*/
#define PWR_M7CTRL2_BSRVBRET                                  (1 << 1))         /* Bit[1] Backup SRAM retention enable in VBAT mode*/
#define PWR_M7CTRL2_STOP2EN                                   (1 << 0))         /* Bit[0] M7 core STOP2 mode enable*/

/******** Bit definition for PWR_M4CTRL1 register  ********/
#define PWR_M4CTRL1_CVBATF                                    (1 << 16))         /* Bit[16] Clear VBAT flags*/
#define PWR_M4CTRL1_CSBVBF                                    (1 << 3))         /* Bit[3] Clear STANDBY flags*/
#define PWR_M4CTRL1_CWKUPF                                    (1 << 2))         /* Bit[2] Clear the pin wakeup bit*/
#define PWR_M4CTRL1_PDS                                       (1 << 1))         /* Bit[1] Power down deep sleep bit*/

/******** Bit definition for PWR_M4CTRLSTS register  ********/
#define PWR_M4CTRLSTS_WKUPxF_MASK                             (1 << 20)         /* Bit[26:20] WKUP pin flag*/
#define PWR_M4CTRLSTS_WKUP0F                                  (1 << 20)         /* Bit20*/
#define PWR_M4CTRLSTS_WKUP1F                                  (1 << 21)         /* Bit21*/
#define PWR_M4CTRLSTS_WKUP2F                                  (1 << 22)         /* Bit22*/
#define PWR_M4CTRLSTS_WKUP3F                                  (1 << 23)         /* Bit23*/
#define PWR_M4CTRLSTS_WKUP4F                                  (1 << 24)         /* Bit24*/
#define PWR_M4CTRLSTS_WKUP5F                                  (1 << 25)         /* Bit25*/
#define PWR_M4CTRLSTS_WKUP6F                                  (1 << 26)         /* Bit26*/

#define PWR_M4CTRLSTS_WKUPxPOL_MASK                           (1 << 14)         /* Bit[19:14] Wake-up polarity for the WKUPX pin*/
#define PWR_M4CTRLSTS_WKUP0POL                                (1 << 14)         /* Bit14*/
#define PWR_M4CTRLSTS_WKUP1POL                                (1 << 15)         /* Bit15*/
#define PWR_M4CTRLSTS_WKUP2POL                                (1 << 16)         /* Bit16*/
#define PWR_M4CTRLSTS_WKUP3POL                                (1 << 17)         /* Bit17*/
#define PWR_M4CTRLSTS_WKUP4POL                                (1 << 18)         /* Bit18*/
#define PWR_M4CTRLSTS_WKUP5POL                                (1 << 19)         /* Bit19*/

#define PWR_M4CTRLSTS_WKUPxEN                                 (1 << 8)         /* Bit[13:8] WKUPx pin wakeup enable*/
#define PWR_M4CTRLSTS_WKUP0EN                                 (1 << 8)         /* Bit8*/
#define PWR_M4CTRLSTS_WKUP1EN                                 (1 << 9)         /* Bit9*/
#define PWR_M4CTRLSTS_WKUP2EN                                 (1 << 10)         /* Bit10*/
#define PWR_M4CTRLSTS_WKUP3EN                                 (1 << 11)         /* Bit11*/
#define PWR_M4CTRLSTS_WKUP4EN                                 (1 << 12)         /* Bit12*/
#define PWR_M4CTRLSTS_WKUP5EN                                 (1 << 13)         /* Bit13*/

#define PWR_M4CTRLSTS_VBATF                                   (1 << 2))         /* Bit[2] VBAT flag.*/
#define PWR_M4CTRLSTS_SBF                                     (1 << 1))         /* Bit[1] STANDBY flag.*/

/******** Bit definition for PWR_M4CTRL2 register  ********/
#define PWR_M4CTRL2_MEM_CNTVAL                                (1 << 25)         /* Bit[30:25] counter value for M4 memory power ready count down*/
#define PWR_M4CTRL2_MEM_CNTVAL_0                              (1 << 25)         /* Bit25*/
#define PWR_M4CTRL2_MEM_CNTVAL_1                              (1 << 26)         /* Bit26*/
#define PWR_M4CTRL2_MEM_CNTVAL_2                              (1 << 27)         /* Bit27*/
#define PWR_M4CTRL2_MEM_CNTVAL_3                              (1 << 28)         /* Bit28*/
#define PWR_M4CTRL2_MEM_CNTVAL_4                              (1 << 29)         /* Bit29*/
#define PWR_M4CTRL2_MEM_CNTVAL_5                              (1 << 30)         /* Bit30*/

#define PWR_M4CTRL2_PWR_CNTVAL                                (1 << 17)         /* Bit[24:17] counter value for CM4 logic power ready count down*/
#define PWR_M4CTRL2_PWR_CNTVAL_0                              (1 << 17)         /* Bit17*/
#define PWR_M4CTRL2_PWR_CNTVAL_1                              (1 << 18)         /* Bit18*/
#define PWR_M4CTRL2_PWR_CNTVAL_2                              (1 << 19)         /* Bit19*/
#define PWR_M4CTRL2_PWR_CNTVAL_3                              (1 << 20)         /* Bit20*/
#define PWR_M4CTRL2_PWR_CNTVAL_4                              (1 << 21)         /* Bit21*/
#define PWR_M4CTRL2_PWR_CNTVAL_5                              (1 << 22)         /* Bit22*/
#define PWR_M4CTRL2_PWR_CNTVAL_6                              (1 << 23)         /* Bit23*/
#define PWR_M4CTRL2_PWR_CNTVAL_7                              (1 << 24)         /* Bit24*/

#define PWR_M4CTRL2_MEM_RDYMD                                 (1 << 15)         /* Bit[16:15] Selected the way of check TCM power ready for CM4 domain*/
#define PWR_M4CTRL2_MEM_RDYMD_0                               (1 << 15)         /* Bit15*/
#define PWR_M4CTRL2_MEM_RDYMD_1                               (1 << 16)         /* Bit16*/

#define PWR_M4CTRL2_PWR_RDYMD                                 (1 << 13)         /* Bit[14:13] Selected the way of check power ready for CM4 domain*/
#define PWR_M4CTRL2_PWR_RDYMD_0                               (1 << 13)         /* Bit13*/
#define PWR_M4CTRL2_PWR_RDYMD_1                               (1 << 14)         /* Bit14*/

#define PWR_M4CTRL2_NRST_WAUPEN                               (1 << 11))         /* Bit[11] NRST wakeup event enable in standby mode for M4 core*/
#define PWR_M4CTRL2_RET_PSWACK1                               (1 << 10))         /* Bit[10] M4 retention power switch ACK1 used as ENA2 enanle for dual-input-header*/
#define PWR_M4CTRL2_DMN_PSWACK1                               (1 << 9))         /* Bit[9] M4 Domain power switch ACK1 used as ENA2 enanle for dual-input-header*/
#define PWR_M4CTRL2_RTC_ALMWUPEN                              (1 << 8))         /* Bit[8] RTC_ALARM wakeup enable in standby mode for M4 core*/
#define PWR_M4CTRL2_BSRSTBRET                                 (1 << 2))         /* Bit[2] Backup SRAM retention enable in STANDBY mode*/
#define PWR_M4CTRL2_BSRVBRET                                  (1 << 1))         /* Bit[1] Backup SRAM retention enable in VBAT mode*/
#define PWR_M4CTRL2_STOP2EN                                   (1 << 0))         /* Bit[0] M4 core STOP2 mode enable*/

/******** Bit definition for PWR_SYSCTRL1 register  ********/
#define PWR_SYSCTRL1_DCDC_VSELKEY                             (1 << 28)         /* Bit[31:28] DCDC_VSELKEY_UNLOCK key*/
#define PWR_SYSCTRL1_DCDC_VSELKEY_0                           (1 << 28)         /* Bit28*/
#define PWR_SYSCTRL1_DCDC_VSELKEY_1                           (1 << 29)         /* Bit29*/
#define PWR_SYSCTRL1_DCDC_VSELKEY_2                           (1 << 30)         /* Bit30*/
#define PWR_SYSCTRL1_DCDC_VSELKEY_3                           (1 << 31)         /* Bit31*/

#define PWR_SYSCTRL1_NRST_DGFCNT                              (1 << 16)         /* Bit[27:16] Digtal Glitch Filter on NRST filtered pulse width configuration*/

#define PWR_SYSCTRL1_NRST_DGFBP                               (1 << 15)         /* Bit[15] Bypass digital glitch Filter on NRST*/
#define PWR_SYSCTRL1_AGF_STBWUPPBP                            (1 << 13)         /* Bit[13] Bypass analog glitch filter on stanby wakeup pads*/
#define PWR_SYSCTRL1_AGF_DTASGBP                              (1 << 12)         /* Bit[12] Bypass analog glitch filter on some Digtal to Analog Enable singnals*/
#define PWR_SYSCTRL1_AGF_ARSTOBP                              (1 << 11)         /* Bit[11] Bypass analog glitch filter on Analog Reset outputs*/
#define PWR_SYSCTRL1_VDDDRET_PSWACK1                          (1 << 10)         /* Bit[10] Retention domain power switch ACK1 used as ENA2 for dual-input-header*/
#define PWR_SYSCTRL1_VDDDM_PSWACK1                            (1 << 9)         /* Bit[9] VDDD Main Domain power switch ACK1 used as ENA2 for dual-input-header*/
#define PWR_SYSCTRL1_DBKP_SHIFT                             (8)
#define PWR_SYSCTRL1_DBKP_MASK                              (1 << PWR_SYSCTRL1_DBKP_SHIFT)         /* Bit[8] Disable write protection for the backup domain*/
#define PWR_SYSCTRL1_DBKP_DISABLE                           (0)
#define PWR_SYSCTRL1_DBKP_ENABLE                            PWR_SYSCTRL1_DBKP_MASK
#define PWR_SYSCTRL1_PVDEN                                    (1 << 4)         /* Bit[4] Power Voltage Detector (PVD) Enable*/
#define PWR_SYSCTRL1_AVDEN                                    (1 << 3)         /* Bit[3] Anolog Voltage Detector (AVD) Enable.*/
#define PWR_SYSCTRL1_SW3EN                                    (1 << 1)         /* Bit[1] VDDD Backup from Backup LDO*/
#define PWR_SYSCTRL1_BKPLDOEN                                 (1 << 0)         /* Bit[0] Backup LDO enable*/

/******** Bit definition for PWR_SYSCTRLSTS register  ********/
#define PWR_SYSCTRLSTS_PVDO                                   (1 << 4)         /* Bit[4] PVD output.*/
#define PWR_SYSCTRLSTS_AVDO                                   (1 << 3)         /* Bit[3] AVD output.*/
#define PWR_SYSCTRLSTS_OTP_PWRRDY                             (1 << 1)         /* Bit[1] OTP Power Ready*/
#define PWR_SYSCTRLSTS_DCDC_BPF                               (1 << 0)         /* Bit[0] Working mode is bypass or not for DCDC*/

/******** Bit definition for PWR_SYSCTRL2 register  ********/
#define PWR_SYSCTRL2_OTP_LPCLKDIV                             (1 << 24)         /* Bit[26:24] Clock dividor of pwr_sys_clk for OTP low power mode cotrol*/
#define PWR_SYSCTRL2_OTP_LPCLKDIV_0                           (1 << 24)         /* Bit24*/
#define PWR_SYSCTRL2_OTP_LPCLKDIV_1                           (1 << 25)         /* Bit25*/
#define PWR_SYSCTRL2_OTP_LPCLKDIV_2                           (1 << 26)         /* Bit26*/

#define PWR_SYSCTRL2_OTP_FRCSTB                               (1 << 23)         /* Bit[23] OTP_FRCDSTB and OTP_FRCSTB decide the OTP power state in all system power modes*/
#define PWR_SYSCTRL2_OTP_FRCDSTB                              (1 << 22)         /* Bit[22] */

#define PWR_SYSCTRL2_OTP_STB_INSTP0                           (1 << 21)         /* Bit[21] OTP_DSTB_INSTP0 and OTP_STB_INSTP0 decide the OTP power state in system STOP0 mode*/
#define PWR_SYSCTRL2_OTP_DSTB_INSTP0                          (1 << 20)         /* Bit[20] */

#define PWR_SYSCTRL2_OTP_STB_INSTP2                           (1 << 19)         /* Bit[19] OTP_DSTB_INSTP2 and OTP_STB_INSTP2 decide the OTP power state in system STOP2 mode*/
#define PWR_SYSCTRL2_OTP_DSTB_INSTP2                          (1 << 18)         /* Bit[18] */

#define PWR_SYSCTRL2_EXTI_MASKRSTEN                           (1 << 17)         /* Bit[17] When PWR start to power down CPUn to standby mode, EXTI's IMRn/EMRn register will be reset \
                                                                                                and no interrupt/event will be send to CPU from exti*/

#define PWR_SYSCTRL2_VDDDM_RDYMD                              (1 << 16)         /* Bit[16] PWR use dpts4 rdy(feedback from power switch chain) + 2cycle LSI delay as main domain ready*/
#define PWR_SYSCTRL2_PVS_STBRET                               (1 << 13)         /* Bit[13] IO in Retention domain in Retention mode in STANDBY*/
#define PWR_SYSCTRL2_BKLDO_RUNOFFEN                           (1 << 11)         /* Bit[11] Eanble/disable of BKLDO*/
#define PWR_SYSCTRL2_BG_CTRLEN                                (1 << 10)         /* Bit[10] BG is controlled by pwr*/
#define PWR_SYSCTRL2_SRAM_CTRLEN                              (1 << 9))         /* Bit[9] BKP SRAM Power control interface is controlled by pwr*/
#define PWR_SYSCTRL2_PVS_RETCTRLEN                            (1 << 8)         /* Bit[8] PV sense retation on/off is controlled by pwr.*/
#define PWR_SYSCTRL2_PVS_CTRLEN                               (1 << 7)         /* Bit[7] PV sense is controlled by pwr*/
#define PWR_SYSCTRL2_HSE_CTRLEN                               (1 << 6)         /* Bit[6] HSE is controlled by pwr*/
#define PWR_SYSCTRL2_HSI_CTRLEN                               (1 << 5)         /* Bit[5] HSI is controlled by pwr*/
#define PWR_SYSCTRL2_PLL_CTRLEN                               (1 << 4)         /* Bit[4] PLL is controlled by pwr*/
#define PWR_SYSCTRL2_MR_STBOFFEN                              (1 << 1)         /* Bit[1] MR off enable when system enters into Standby mode*/
 
/******** Bit definition for PWR_SYSCTRL3 register  ********/
#define PWR_SYSCTRL3_HSC2_PSWACK1                             (1 << 22)         /* Bit[22] HSC2 Domain power switch ACK1 used as ENA2 for dual-input-header*/
#define PWR_SYSCTRL3_HSC1_PSW_ACK1                            (1 << 21)         /* Bit[21] HSC1 Domain power switch ACK1 used as ENA2 for dual-input-header*/
#define PWR_SYSCTRL3_GRC_PSWACK1                              (1 << 20)         /* Bit[20] GRAPHIC Domain power switch ACK1 used as ENA2 for dual-input-header*/
#define PWR_SYSCTRL3_HSC2_PWRRDY                              (1 << 18)         /* Bit[18] HSC2 power domain ready flag*/
#define PWR_SYSCTRL3_HSC1_PWRRDY                              (1 << 17)         /* Bit[17] HSC1 power domain ready flag*/
#define PWR_SYSCTRL3_GRC_PWRRDY                               (1 << 16)         /* Bit[16] GRAPHIC power domain ready flag*/
#define PWR_SYSCTRL3_HSC2_ISNEN                               (1 << 10)         /* Bit[10] HSC2 power domain isolation signal*/
#define PWR_SYSCTRL3_HSC1_ISNEN                               (1 << 9)         /* Bit[9] HSC1 power domain isolation signal*/
#define PWR_SYSCTRL3_GRC_ISNEN                                (1 << 8)         /* Bit[8] GRAPHIC power domain isolation signal*/
#define PWR_SYSCTRL3_HSC2_FUCEN                               (1 << 6)         /* Bit[6] Function mode enable for HSC2 domain*/
#define PWR_SYSCTRL3_HSC1_FUCEN                               (1 << 5)         /* Bit[5] Function mode enable for HSC1 domain*/
#define PWR_SYSCTRL3_GRC_FUCEN                                (1 << 4)         /* Bit[4] Function mode enable for GRAPHIC domain*/
#define PWR_SYSCTRL3_HSC2_PWREN                               (1 << 2)         /* Bit[2] HSC2 domain power enable*/
#define PWR_SYSCTRL3_HSC1_PWREN                               (1 << 1)         /* Bit[1] HSC1 domain power enable*/
#define PWR_SYSCTRL3_GRC_PWREN                                (1 << 0)         /* Bit[0] GRPAHIC domain power enable*/

/******** Bit definition for PWR_SYSCTRL4 register  ********/
#define PWR_SYSCTRL4_MR_LPVSELEN                              (1 << 29)         /* Bit[29] Enable targeting MR voltage output in low power mode*/

#define PWR_SYSCTRL4_DCDC_LPVSEL_MASK                         (1 << 24)         /* Bit[27:24] Targeting dcdc voltage in low power mode*/
#define PWR_SYSCTRL4_DCDC_LPVSEL_0                            (1 << 24)         /* Bit24*/
#define PWR_SYSCTRL4_DCDC_LPVSEL_1                            (1 << 25)         /* Bit25*/
#define PWR_SYSCTRL4_DCDC_LPVSEL_2                            (1 << 26)         /* Bit26*/
#define PWR_SYSCTRL4_DCDC_LPVSEL_3                            (1 << 27)         /* Bit27*/

#define PWR_SYSCTRL4_VDDD_LPPORSEL_MASK                       (1 << 22)         /* Bit[23:22] VDDD por config in low power mode*/
#define PWR_SYSCTRL4_VDDD_LPPORSEL_0                          (1 << 22)         /* Bit22*/
#define PWR_SYSCTRL4_VDDD_LPPORSEL_1                          (1 << 23)         /* Bit23*/

#define PWR_SYSCTRL4_DCDC_LPPORVSEL                           (1 << 17)         /* Bit[21:17] DCDC POR voltage value 0.05V per step in low power mode*/
#define PWR_SYSCTRL4_DCDC_LPPORVSEL_0                         (1 << 17)         /* Bit17*/
#define PWR_SYSCTRL4_DCDC_LPPORVSEL_1                         (1 << 18)         /* Bit18*/
#define PWR_SYSCTRL4_DCDC_LPPORVSEL_2                         (1 << 19)         /* Bit19*/
#define PWR_SYSCTRL4_DCDC_LPPORVSEL_3                         (1 << 20)         /* Bit20*/
#define PWR_SYSCTRL4_DCDC_LPPORVSEL_4                         (1 << 21)         /* Bit21*/

#define PWR_SYSCTRL4_BG_LPVREFVSEL                            (1 << 16)         /* Bit[16] targeting aldo ref in low power mode*/
#define PWR_SYSCTRL4_BG_VREFVSEL                              (1 << 15)         /* Bit[15] targeting BG in low power mode*/

#define PWR_SYSCTRL4_VDDD_PORSEL                            (1 << 12)         /* Bit[13:12] VDDD por config in low power  mode*/
#define PWR_SYSCTRL4_VDDD_PORSEL_0                          (1 << 12)         /* Bit12*/
#define PWR_SYSCTRL4_VDDD_PORSEL_1                          (1 << 13)         /* Bit13*/

#define PWR_SYSCTRL4_MLDO_LPOVSEL                             (1 << 10)         /* Bit[11:10] Output voltage of Main Regulator LDO option in SYS STOP2 and STANDBY mode*/
#define PWR_SYSCTRL4_MLDO_LPOVSEL_0                           (1 << 10)         /* Bit10*/
#define PWR_SYSCTRL4_MLDO_LPOVSEL_1                           (1 << 11)         /* Bit11*/

#define PWR_SYSCTRL4_MLDO_OVSEL                               (1 << 8)         /* Bit[9:8] Output voltage of Main Regulator LDO option in SYS RUN mode*/
#define PWR_SYSCTRL4_MLDO_OVSEL_0                             (1 << 8)         /* Bit8*/
#define PWR_SYSCTRL4_MLDO_OVSEL_1                             (1 << 9)         /* Bit9*/

#define PWR_SYSCTRL4_DCDCFRCEN                                (1 << 3)         /* Bit[3] DCDC is forcibly activated*/
#define PWR_SYSCTRL4_DCDCEN                                   (1 << 2)         /* Bit[2] DCDC is activated*/
#define PWR_SYSCTRL4_MLDOEN                                   (1 << 1)         /* Bit[1] LDO is forcibly activated*/
#define PWR_SYSCTRL4_VCORESRC                                 (1 << 0)         /* Bit[0] VCORE/VDDD spupplied by external source*/

/******** Bit definition for PWR_BORCTRL register  ********/
#define PWR_BORCTRL_BORVSEL_MASK                              (1 << 1)         /* Bit[5:1] BOR voltage selelction*/
#define PWR_BORCTRL_BORVSEL_0                                 (1 << 1)         /* Bit1*/
#define PWR_BORCTRL_BORVSEL_1                                 (1 << 2)         /* Bit2*/
#define PWR_BORCTRL_BORVSEL_2                                 (1 << 3)         /* Bit3*/
#define PWR_BORCTRL_BORVSEL_3                                 (1 << 4)         /* Bit4*/
#define PWR_BORCTRL_BORVSEL_4                                 (1 << 5)         /* Bit5*/

#define PWR_BORCTRL_BOREN                                     (1 << 0)         /* Bit[0] BOR enable*/

/******** Bit definition for PWR_IPMEMCTRL register  ********/
#define PWR_IPMEMCTRL_ESC_PWREN                               (1 << 12)         /* Bit[12] ESC memory power gate enable*/
#define PWR_IPMEMCTRL_FMAC_PWREN                              (1 << 11)         /* Bit[11] FMAC memory power gate enable*/
#define PWR_IPMEMCTRL_SDMMC1_PWREN                            (1 << 10)         /* Bit[10] SDMMC1 memory power gate enable*/
#define PWR_IPMEMCTRL_USB1_PWREN                              (1 << 9)         /* Bit[9] USB1 memory power gate enable*/
#define PWR_IPMEMCTRL_ETH1_PWREN                              (1 << 8)         /* Bit[8] ETH1 memory power gate enable*/
#define PWR_IPMEMCTRL_SDMMC2_PWREN                            (1 << 7)         /* Bit[7] SDMMC2 memory power gate enable*/
#define PWR_IPMEMCTRL_USB2_PWREN                              (1 << 6)         /* Bit[6] USB2 memory power gate enable*/
#define PWR_IPMEMCTRL_ETH2_PWREN                              (1 << 5)         /* Bit[5] ETH2 memory power gate enable*/
#define PWR_IPMEMCTRL_DVP_PWREN                               (1 << 4)         /* Bit[4] DVP memory power gate enable*/
#define PWR_IPMEMCTRL_DSI_PWREN                               (1 << 3)         /* Bit[3] DSI memory power gate enable*/
#define PWR_IPMEMCTRL_JPEG_PWREN                              (1 << 2)         /* Bit[2] JPEG memory power gate enable*/
#define PWR_IPMEMCTRL_LCDC_PWREN                              (1 << 1)         /* Bit[1] LCDC memory power gate enable*/
#define PWR_IPMEMCTRL_GPU_PWREN                               (1 << 0)         /* Bit[0] GPU memory power gate enable*/

/******** Bit definition for PWR_IPMEMCTRLSTS register  ********/
#define PWR_IPMEMCTRLSTS_AIP_MEMPWRRDY                        (1 << 31)         /* Bit[31] ALL IP memory power ready flag*/
#define PWR_IPMEMCTRLSTS_ESC_PWRRDY                           (1 << 12)         /* Bit[12] ESC memory power ready flag*/
#define PWR_IPMEMCTRLSTS_FMAC_PWRRDY                          (1 << 11)         /* Bit[11] FMAC memory power ready flag*/
#define PWR_IPMEMCTRLSTS_SDMMC1_PWRRDY                        (1 << 10)         /* Bit[10] SDMMC1 memory power ready flag*/
#define PWR_IPMEMCTRLSTS_USB1_PWRRDY                          (1 << 9)         /* Bit[9] USB1 memory power ready flag*/
#define PWR_IPMEMCTRLSTS_ETH1_PWRRDY                          (1 << 8)         /* Bit[8] ETH1 memory power ready flag*/
#define PWR_IPMEMCTRLSTS_SDMMC2_PWRRDY                        (1 << 7)         /* Bit[7] SDMMC2 memory power ready flag*/
#define PWR_IPMEMCTRLSTS_USB2_PWRRDY                          (1 << 6)         /* Bit[6] USB2 memory power ready flag*/
#define PWR_IPMEMCTRLSTS_ETH2_PWRRDY                          (1 << 5)         /* Bit[5] ETH2 memory power ready flag*/
#define PWR_IPMEMCTRLSTS_DVP_PWRRDY                           (1 << 4)         /* Bit[4] DVP memory power ready flag*/
#define PWR_IPMEMCTRLSTS_DSI_PWRRDY                           (1 << 3)         /* Bit[3] DSI memory power ready flag*/
#define PWR_IPMEMCTRLSTS_JPEG_PWRRDY                          (1 << 2)         /* Bit[2] JPEG memory power ready flag*/
#define PWR_IPMEMCTRLSTS_LCDC_PWRRDY                          (1 << 1)         /* Bit[1] LCDC memory power ready flag*/
#define PWR_IPMEMCTRLSTS_GPU_PWRRDY                           (1 << 0)         /* Bit[0] GPU memory power ready flag*/

/******** Bit definition for PWR_M7MEMLPCTRL register  ********/
#define PWR_M7MEMLPCTRL_MEM_PGCFG                             (1 << 2)         /* Bit[3:2] Memory power gate sequence control*/
#define PWR_M7MEMLPCTRL_MEM_PGCFG_0                           (1 << 2)         /* Bit2*/
#define PWR_M7MEMLPCTRL_MEM_PGCFG_1                           (1 << 3)         /* Bit3*/
#define PWR_M7MEMLPCTRL_MEM_RETSTP0EN                         (1 << 1)         /* Bit[1] */
#define PWR_M7MEMLPCTRL_MEM_PGENSTP0                          (1 << 0)         /* Bit[0] */

/******** Bit definition for PWR_M7MEMLPSTS register  ********/
#define PWR_M7MEMLPSTS_TCMRDY                                 (1 << 31)         /* Bit[31] All enabled TCM memory power ready flag*/

/******** Bit definition for PWR_M7TCMPG0 register  ********/
#define PWR_M7TCMPG0_M7TCM_SWPG0                              (1 << 0)         /* Bit[31:0] Software control to power gate TCM memories*/
#define PWR_M7TCMPG0_M7TCM_SWPG0_0                            ((uint32_t)0x00000001U)         /* Bit0   range :0x20000000U ?C 0x20003FFFU*/
#define PWR_M7TCMPG0_M7TCM_SWPG0_1                            ((uint32_t)0x00000002U)         /* Bit1   range :0x20004000U ?C 0x20007FFFU*/
#define PWR_M7TCMPG0_M7TCM_SWPG0_2                            ((uint32_t)0x00000004U)         /* Bit2   ....                            */
#define PWR_M7TCMPG0_M7TCM_SWPG0_3                            ((uint32_t)0x00000008U)         /* Bit3   ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_4                            ((uint32_t)0x00000010U)         /* Bit4   ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_5                            ((uint32_t)0x00000020U)         /* Bit5   ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_6                            ((uint32_t)0x00000040U)         /* Bit6   ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_7                            ((uint32_t)0x00000080U)         /* Bit7   ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_8                            ((uint32_t)0x00000100U)         /* Bit8   ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_9                            ((uint32_t)0x00000200U)         /* Bit9   ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_10                           ((uint32_t)0x00000400U)         /* Bit10  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_11                           ((uint32_t)0x00000800U)         /* Bit11  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_12                           ((uint32_t)0x00001000U)         /* Bit12  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_13                           ((uint32_t)0x00002000U)         /* Bit13  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_14                           ((uint32_t)0x00004000U)         /* Bit14  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_15                           ((uint32_t)0x00008000U)         /* Bit15  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_16                           ((uint32_t)0x00010000U)         /* Bit16  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_17                           ((uint32_t)0x00020000U)         /* Bit17  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_18                           ((uint32_t)0x00040000U)         /* Bit18  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_19                           ((uint32_t)0x00080000U)         /* Bit19  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_20                           ((uint32_t)0x00100000U)         /* Bit20  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_21                           ((uint32_t)0x00200000U)         /* Bit21  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_22                           ((uint32_t)0x00400000U)         /* Bit22  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_23                           ((uint32_t)0x00800000U)         /* Bit23  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_24                           ((uint32_t)0x01000000U)         /* Bit24  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_25                           ((uint32_t)0x02000000U)         /* Bit25  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_26                           ((uint32_t)0x04000000U)         /* Bit26  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_27                           ((uint32_t)0x08000000U)         /* Bit27  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_28                           ((uint32_t)0x10000000U)         /* Bit28  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_29                           ((uint32_t)0x20000000U)         /* Bit29  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_30                           ((uint32_t)0x40000000U)         /* Bit30  ....                         */
#define PWR_M7TCMPG0_M7TCM_SWPG0_31                           ((uint32_t)0x80000000U)         /* Bit31  range :0x2007FBFFU ?C 0x2007FFFFU*/

/******** Bit definition for PWR_M7TCMPG1 register  ********/
#define PWR_M7TCMPG1_M7TCM_SWPG1                              (1 << 0)         /* Bit[31:0] Software control to power gate TCM memories*/
#define PWR_M7TCMPG1_M7TCM_SWPG1_0                            ((uint32_t)0x00000001U)         /* Bit0    range :0x20080000U ?C 0x20083FFFU*/
#define PWR_M7TCMPG1_M7TCM_SWPG1_1                            ((uint32_t)0x00000002U)         /* Bit1    range :0x20084000U ?C 0x20087FFFU*/
#define PWR_M7TCMPG1_M7TCM_SWPG1_2                            ((uint32_t)0x00000004U)         /* Bit2    ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_3                            ((uint32_t)0x00000008U)         /* Bit3    ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_4                            ((uint32_t)0x00000010U)         /* Bit4    ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_5                            ((uint32_t)0x00000020U)         /* Bit5    ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_6                            ((uint32_t)0x00000040U)         /* Bit6    ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_7                            ((uint32_t)0x00000080U)         /* Bit7    ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_8                            ((uint32_t)0x00000100U)         /* Bit8    ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_9                            ((uint32_t)0x00000200U)         /* Bit9    ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_10                           ((uint32_t)0x00000400U)         /* Bit10   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_11                           ((uint32_t)0x00000800U)         /* Bit11   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_12                           ((uint32_t)0x00001000U)         /* Bit12   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_13                           ((uint32_t)0x00002000U)         /* Bit13   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_14                           ((uint32_t)0x00004000U)         /* Bit14   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_15                           ((uint32_t)0x00008000U)         /* Bit15   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_16                           ((uint32_t)0x00010000U)         /* Bit16   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_17                           ((uint32_t)0x00020000U)         /* Bit17   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_18                           ((uint32_t)0x00040000U)         /* Bit18   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_19                           ((uint32_t)0x00080000U)         /* Bit19   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_20                           ((uint32_t)0x00100000U)         /* Bit20   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_21                           ((uint32_t)0x00200000U)         /* Bit21   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_22                           ((uint32_t)0x00400000U)         /* Bit22   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_23                           ((uint32_t)0x00800000U)         /* Bit23   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_24                           ((uint32_t)0x01000000U)         /* Bit24   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_25                           ((uint32_t)0x02000000U)         /* Bit25   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_26                           ((uint32_t)0x04000000U)         /* Bit26   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_27                           ((uint32_t)0x08000000U)         /* Bit27   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_28                           ((uint32_t)0x10000000U)         /* Bit28   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_29                           ((uint32_t)0x20000000U)         /* Bit29   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_30                           ((uint32_t)0x40000000U)         /* Bit30   ....                            */
#define PWR_M7TCMPG1_M7TCM_SWPG1_31                           ((uint32_t)0x80000000U)         /* Bit31   range :0x200FFBFFU ?C 0x200FFFFFU*/

/******** Bit definition for PWR_M7TCMRET1N0 register  ********/
#define PWR_M7TCMRET1N0_M7TCM_RET1CFG0                        (1 << 0)         /* Bit[31:0] */

/******** Bit definition for PWR_M7TCMRET1N1 register  ********/
#define PWR_M7TCMRET1N1_M7TCM_RET1CFG1                        (1 << 0)         /* Bit[31:0] */

/******** Bit definition for PWR_M7TCMRET2CFG0 register  ********/
#define PWR_M7TCMRET2CFG0_M7TCM_RET2CFG0                      (1 << 0)         /* Bit[31:0] */

/******** Bit definition for PWR_M7TCM_RET2CFG1 register  ********/
#define PWR_M7TCM_RET2CFG1_M7TCM_RET2CFG1                     (1 << 0)         /* Bit[31:0] */

/******** Bit definition for PWR_M7TCMPRDY0 register  ********/
#define PWR_M7TCMPRDY0_TCM_PRDY0                              (1 << 0)         /* Bit[31:0] */

/******** Bit definition for PWR_M7TCMPRDY1 register  ********/
#define PWR_M7TCMPRDY1_TCM_PRDY1                              (1 << 0)         /* Bit[31:0] */

/******** Bit definition for PWR_M4MEMLPCTRL register  ********/
#define PWR_M4MEMLPCTRL_MEM_PGCFG                             (1 << 2)         /* Bit[3:2] Memory power gate sequence control*/
#define PWR_M4MEMLPCTRL_MEM_PGCFG_0                           (1 << 2)         /* Bit2  */
#define PWR_M4MEMLPCTRL_MEM_PGCFG_1                           (1 << 3)         /* Bit3  */

#define PWR_M4MEMLPCTRL_MEM_RETSTP0EN                         (1 << 1)         /* Bit[1] */
#define PWR_M4MEMLPCTRL_MEM_PGSTP0EN                          (1 << 0)         /* Bit[0] */

/******** Bit definition for PWR_SYSMEMLPCTRL register  ********/
#define PWR_SYSMEMLPCTRL_ALLPRDY                              (1 << 31)         /* Bit[31] All enabled system memory power ready flag*/
#define PWR_SYSMEMLPCTRL_AHBSRAM5S2_RET2N                     (1 << 26)         /* Bit[26] System SRAM5S2 memory status control */
#define PWR_SYSMEMLPCTRL_AHBSRAM5S2_RET1N                     (1 << 25)         /* Bit[25] System SRAM5S2 memory status control*/
#define PWR_SYSMEMLPCTRL_AHBSRAM5S1_RET2N                     (1 << 24)         /* Bit[24] System SRAM5S1 memory status control*/
#define PWR_SYSMEMLPCTRL_AHBSRAM5S1_RET1N                     (1 << 23)         /* Bit[23] System SRAM5S1 memory status control*/
#define PWR_SYSMEMLPCTRL_AHBSRAM4_RET2N                       (1 << 22)         /* Bit[22] System SRAM4 memory status control*/
#define PWR_SYSMEMLPCTRL_AHBSRAM4_RET1N                       (1 << 21)         /* Bit[21] System SRAM4 memory status control*/
#define PWR_SYSMEMLPCTRL_AHBSRAM3_RET2N                       (1 << 20)         /* Bit[20] System SRAM3 memory status control*/
#define PWR_SYSMEMLPCTRL_AHBSRAM3_RET1N                       (1 << 19)         /* Bit[19] System SRAM3 memory status control*/
#define PWR_SYSMEMLPCTRL_AHBSRAM2_RET2N                       (1 << 18)         /* Bit[18] System SRAM2 memory status control*/
#define PWR_SYSMEMLPCTRL_AHBSRAM2_RET1N                       (1 << 17)         /* Bit[17] System SRAM2 memory status control*/
#define PWR_SYSMEMLPCTRL_AHBSRAM1_RET2N                       (1 << 16)         /* Bit[16] System SRAM1 memory status control*/
#define PWR_SYSMEMLPCTRL_AHBSRAM1_RET1N                       (1 << 15)         /* Bit[15] System SRAM1 memory status control*/
#define PWR_SYSMEMLPCTRL_AXISRAM_RET2N                        (1 << 14)         /* Bit[14] System memory status control*/
#define PWR_SYSMEMLPCTRL_AXISRAM_RET1N                        (1 << 13)         /* Bit[13] System memory status control*/
#define PWR_SYSMEMLPCTRL_MEM_RETSTP0EN                        (1 << 9)         /* Bit[9] all system memory control*/
#define PWR_SYSMEMLPCTRL_MEM_PGSTP0EN                         (1 << 8)         /* Bit[8] all system memory control*/
#define PWR_SYSMEMLPCTRL_AHBSRAM5S2PG                         (1 << 6)         /* Bit[6] Software control to power gate AHB SRAM5S2 in SYS RUN mode*/
#define PWR_SYSMEMLPCTRL_AHBSRAM5S1_PG                        (1 << 5)         /* Bit[5] Software control to power gate AHB SRAM5S1 in SYS RUN mode*/
#define PWR_SYSMEMLPCTRL_AHBSRAM4PG                           (1 << 4)         /* Bit[4] Software control to power gate AHB SRAM4 in SYS RUN mode*/
#define PWR_SYSMEMLPCTRL_AHBSRAM3_PG                          (1 << 3)         /* Bit[3] Software control to power gate AHB SRAM3 in SYS RUN mode*/
#define PWR_SYSMEMLPCTRL_AHBSRAM2_PG                          (1 << 2)         /* Bit[2] Software control to power gate AHB SRAM2 in SYS RUN mode*/
#define PWR_SYSMEMLPCTRL_AHBSRAM1_PG                          (1 << 1)         /* Bit[1] Software control to power gate AHB SRAM1 in SYS RUN mode*/
#define PWR_SYSMEMLPCTRL_AXISRAM_PG                           (1 << 0)         /* Bit[0] Software control to power gate AXI SRAM in SYS RUN mode*/

/******** Bit definition for PWR_SHRTIMCTRL register  ********/
#define PWR_SHRTIMCTRL_SHRA_PSWACK1                           (1 << 20)         /* Bit[20] SHRTIM AFE Domain power switch ACK1 used as ENA2 for dual-input-header*/
#define PWR_SHRTIMCTRL_SHRA_PRDY                              (1 << 19)         /* Bit[19] SHRTIM AFE power domain ready flag*/
#define PWR_SHRTIMCTRL_SHRA_ISNEN                             (1 << 18)         /* Bit[18] SHRTIM AFE power domain isolation signal*/
#define PWR_SHRTIMCTRL_SHRA_FUCEN                             (1 << 17)         /* Bit[17] Function mode enable for SHRTIM AFE*/
#define PWR_SHRTIMCTRL_SHRA_PWREN                             (1 << 16)         /* Bit[16] SHRTIM AFE  power gate enable*/
#define PWR_SHRTIMCTRL_SHR2_PSWACK1                           (1 << 12)         /* Bit[12] HRTIM2 Domain power switch ACK1 used as ENA2 for dual-input-header*/
#define PWR_SHRTIMCTRL_SHR2_PRDY                              (1 << 11)         /* Bit[11] SHRTIM2 power domain ready flag*/
#define PWR_SHRTIMCTRL_SHR2_ISNEN                             (1 << 10)         /* Bit[10] SHRTIM2 power domain isolation signal*/
#define PWR_SHRTIMCTRL_SHR2_FUCEN                             (1 << 9)         /* Bit[9] Function mode enable for SHRTIM2 */
#define PWR_SHRTIMCTRL_SHR2_PWREN                             (1 << 8)         /* Bit[8] SHRTIM2  power gate enable*/
#define PWR_SHRTIMCTRL_SHR1_PSWACK1                           (1 << 4)         /* Bit[4] HRTIM1 Domain power switch ACK1 used as ENA2 for dual-input-header*/
#define PWR_SHRTIMCTRL_SHR1_PRDY                              (1 << 3)         /* Bit[3] SHRTIM1 power domain ready flag*/
#define PWR_SHRTIMCTRL_SHR1_ISNEN                             (1 << 2)         /* Bit[2] SHRTIM1 power domain isolation signal*/
#define PWR_SHRTIMCTRL_SHR1_FUCEN                             (1 << 1)         /* Bit[1] Function mode enable for SHRTIM1 */
#define PWR_SHRTIMCTRL_SHR1_PWREN                             (1 << 0)         /* Bit[0] SHRTIM1  power gate enable*/

/******** Bit definition for PWR_MDMACTRL register  ********/
#define PWR_MDMACTRL_MDMA_PSWACK1                             (1 << 4)         /* Bit[4] MDMA Domain power switch ACK1 used as ENA2 for dual-input-header*/
#define PWR_MDMACTRL_MDMA_PRDY                                (1 << 3)         /* Bit[3] MDMA power domain ready flag*/
#define PWR_MDMACTRL_MDMA_ISNEN                               (1 << 2)         /* Bit[2] MDMA power domain isolation signal*/
#define PWR_MDMACTRL_MDMA_FUCEN                               (1 << 1)         /* Bit[1] Function mode enable for MDMA*/
#define PWR_MDMACTRL_MDMA_PWREN                               (1 << 0)         /* Bit[0] MDMA  power gate enable*/

/******** Bit definition for PWR_ESCCTRL register  ********/
#define PWR_ESCCTRL_ESC_PSWACK1                               (1 << 4)         /* Bit[4] ESC Domain power switch ACK1 used as ENA2 for dual-input-header */
#define PWR_ESCCTRL_ESC_PRDY                                  (1 << 3)         /* Bit[3] ESC power domain ready flag*/
#define PWR_ESCCTRL_ESC_ISNEN                                 (1 << 2)         /* Bit[2] ESC power domain isolation signal*/
#define PWR_ESCCTRL_ESC_FUCEN                                 (1 << 1)         /* Bit[1] Function mode enable for ESC*/
#define PWR_ESCCTRL_ESC_PWREN                                 (1 << 0)         /* Bit[0] ESC power gate enable*/

/******** Bit definition for PWR_DBGPROB0 register  ********/
#define PWR_DBGPROB0_DBG_PRO1                                 (1 << 16)         /* Bit[31:16] Debug probe observation to PWR interanl signals set 1*/

#define PWR_DBGPROB0_DBG_PRO0                                 (1 << 0)         /* Bit[15:0] Debug probe observation to PWR interanl signals set 0*/

/******** Bit definition for PWR_DBGPROB1 register  ********/
#define PWR_DBGPROB1_DBG_PRO3                                 (1 << 16)         /* Bit[31:16] Debug probe observation to PWR interanl signals set 3*/

#define PWR_DBGPROB1_DBG_PRO2                                 (1 << 0)         /* Bit[15:0] Debug probe observation to PWR interanl signals set 2*/

/******** Bit definition for PWR_DBGPRO2 register  ********/
#define PWR_DBGPRO2_DBG_PRO5                                  (1 << 16)         /* Bit[31:16] Debug probe observation to PWR interanl signals set 5*/

#define PWR_DBGPRO2_DBG_PRO4                                  (1 << 0)         /* Bit[15:0] Debug probe observation to PWR interanl signals set 4*/

/******** Bit definition for PWR_DBGPRO3 register  ********/
#define PWR_DBGPRO3_DBG_PRO7                                  (1 << 16)         /* Bit[31:16] Debug probe observation to PWR interanl signals set 5*/

#define PWR_DBGPRO3_DBG_PRO6                                  (1 << 0)         /* Bit[15:0] Debug probe observation to PWR interanl signals set 6*/

/******** Bit definition for PWR_DBGPRO4 register  ********/
#define PWR_DBGPRO4_DBG_PRO9                                  (1 << 16)         /* Bit[31:16] Debug probe observation to PWR interanl signals set 9*/

#define PWR_DBGPRO4_DBG_PRO8                                  (1 << 0)         /* Bit[15:0] Debug probe observation to PWR interanl signals set 8*/

/******** Bit definition for PWR_DBGPRO5 register  ********/
#define PWR_DBGPRO5_DBG_PROB                                  (1 << 16)         /* Bit[31:16] Debug probe observation to PWR interanl signals set B*/

#define PWR_DBGPRO5_DBG_PROA                                  (1 << 0)         /* Bit[15:0] Debug probe observation to PWR interanl signals set A*/

/******** Bit definition for PWR_DBGPRO6 register  ********/
#define PWR_DBGPRO6_DBG_PROD                                  (1 << 16)         /* Bit[31:16] Debug probe observation to PWR interanl signals set D*/

#define PWR_DBGPRO6_DBG_PROC                                  (1 << 0)         /* Bit[15:0] Debug probe observation to PWR interanl signals set C*/

/******** Bit definition for PWR_DBGPRO7 register  ********/
#define PWR_DBGPRO7_DBG_PROF                                  (1 << 16)         /* Bit[31:16] Debug probe observation to PWR interanl signals set F*/

#define PWR_DBGPRO7_DBG_PROE                                  (1 << 0)         /* Bit[15:0] Debug probe observation to PWR interanl signals set E*/

/******** Bit definition for PWR_DBGPROBCTRL register  ********/
#define PWR_DBGPROBCTRL_PROB_SEL_MASK                         (1 << 0)         /* Bit[3:0] */
#define PWR_DBGPROBCTRL_PROB_SEL_0                            (1 << 0)         /* Bit0*/
#define PWR_DBGPROBCTRL_PROB_SEL_1                            (1 << 1)         /* Bit1*/
#define PWR_DBGPROBCTRL_PROB_SEL_2                            (1 << 2)         /* Bit2*/
#define PWR_DBGPROBCTRL_PROB_SEL_3                            (1 << 3)         /* Bit3*/

/******** Bit definition for PWR_EMCRETCTRL1 register  ********/
#define PWR_EMCRETCTRL1_RETGBxDET                             (1 << 8)         /* Bit[11:8] RET domain EMC GBx detection enable*/
#define PWR_EMCRETCTRL1_RETGBxDET_0                           (1 << 8)         /* Bit8*/
#define PWR_EMCRETCTRL1_RETGBxDET_1                           (1 << 9)         /* Bit9*/
#define PWR_EMCRETCTRL1_RETGBxDET_2                           (1 << 10)         /* Bit10*/
#define PWR_EMCRETCTRL1_RETGBxDET_3                           (1 << 11)         /* Bit11*/

#define PWR_EMCRETCTRL1_RETGBNxDET                            (1 << 4)         /* Bit[7:4] RET domain EMC GBNx detection enable*/
#define PWR_EMCRETCTRL1_RETGBNxDET_0                          (1 << 4)         /* Bit4*/
#define PWR_EMCRETCTRL1_RETGBNxDET_1                          (1 << 5)         /* Bit5*/
#define PWR_EMCRETCTRL1_RETGBNxDET_2                          (1 << 6)         /* Bit6*/
#define PWR_EMCRETCTRL1_RETGBNxDET_3                          (1 << 7)         /* Bit7*/

#define PWR_EMCRETCTRL1_RETCLPxDET                            (1 << 0)         /* Bit[3:0] RET domain EMC Clampx detection enable*/
#define PWR_EMCRETCTRL1_RETCLPxDET_0                          (1 << 0)         /* Bit0*/
#define PWR_EMCRETCTRL1_RETCLPxDET_1                          (1 << 1)         /* Bit1*/
#define PWR_EMCRETCTRL1_RETCLPxDET_2                          (1 << 2)         /* Bit2*/
#define PWR_EMCRETCTRL1_RETCLPxDET_3                          (1 << 3)         /* Bit3*/

/******** Bit definition for PWR_EMCCTRLSTS1 register  ********/
#define PWR_EMCCTRLSTS1_EMCFCLR                               (1 << 24)         /* Bit[24] Clear EMC Flag*/

#define PWR_EMCCTRLSTS1_RETGBxF                               (1 << 8)         /* Bit[11:8] RET Domain EMC GBx Flag*/
#define PWR_EMCCTRLSTS1_RETGBxF_0                             (1 << 8)         /* Bit8*/
#define PWR_EMCCTRLSTS1_RETGBxF_1                             (1 << 9)         /* Bit9*/
#define PWR_EMCCTRLSTS1_RETGBxF_2                             (1 << 10)         /* Bit10*/
#define PWR_EMCCTRLSTS1_RETGBxF_3                             (1 << 11)         /* Bit11*/

#define PWR_EMCCTRLSTS1_RETGBNxF                              (1 << 4)         /* Bit[7:4] RET Domain EMC GBNx Flag*/
#define PWR_EMCCTRLSTS1_RETGBNxF_0                            (1 << 4)         /* Bit4*/
#define PWR_EMCCTRLSTS1_RETGBNxF_1                            (1 << 5)         /* Bit5*/
#define PWR_EMCCTRLSTS1_RETGBNxF_2                            (1 << 6)         /* Bit6*/
#define PWR_EMCCTRLSTS1_RETGBNxF_3                            (1 << 7)         /* Bit7*/

#define PWR_EMCCTRLSTS1_RETCLPxF                              (1 << 0)         /* Bit[3:0] RET Domain EMC Clampx Flag*/
#define PWR_EMCCTRLSTS1_RETCLPxF_0                            (1 << 0)         /* Bit0*/
#define PWR_EMCCTRLSTS1_RETCLPxF_1                            (1 << 1)         /* Bit1*/
#define PWR_EMCCTRLSTS1_RETCLPxF_2                            (1 << 2)         /* Bit2*/
#define PWR_EMCCTRLSTS1_RETCLPxF_3                            (1 << 3)         /* Bit3*/

/******** Bit definition for PWR_EMCRETCTRL2 register  ********/
#define PWR_EMCRETCTRL2_RETGBxDET                             (1 << 8)         /* Bit[11:8] RET domain EMC GBx detection enable*/
#define PWR_EMCRETCTRL2_RETGBxDET_0                           (1 << 8)         /* Bit8*/
#define PWR_EMCRETCTRL2_RETGBxDET_1                           (1 << 9)         /* Bit9*/
#define PWR_EMCRETCTRL2_RETGBxDET_2                           (1 << 10)         /* Bit10*/
#define PWR_EMCRETCTRL2_RETGBxDET_3                           (1 << 11)         /* Bit11*/

#define PWR_EMCRETCTRL2_RETGBNxDET                            (1 << 4)         /* Bit[7:4] RET domain EMC GBNx detection enable*/
#define PWR_EMCRETCTRL2_RETGBNxDET_0                          (1 << 4)         /* Bit4*/
#define PWR_EMCRETCTRL2_RETGBNxDET_1                          (1 << 5)         /* Bit5*/
#define PWR_EMCRETCTRL2_RETGBNxDET_2                          (1 << 6)         /* Bit6*/
#define PWR_EMCRETCTRL2_RETGBNxDET_3                          (1 << 7)         /* Bit7*/

#define PWR_EMCRETCTRL2_RETCLPxDET                            (1 << 0)         /* Bit[3:0] RET domain EMC Clampx detection enable*/
#define PWR_EMCRETCTRL2_RETCLPxDET_0                          (1 << 0)         /* Bit0*/
#define PWR_EMCRETCTRL2_RETCLPxDET_1                          (1 << 1)         /* Bit1*/
#define PWR_EMCRETCTRL2_RETCLPxDET_2                          (1 << 2)         /* Bit2*/
#define PWR_EMCRETCTRL2_RETCLPxDET_3                          (1 << 3)         /* Bit3*/

/******** Bit definition for PWR_EMCRETSTS2 register  ********/
#define PWR_EMCRETSTS2_RETGBxF                                (1 << 8)         /* Bit[11:8] RET Domain EMC GBx Flag*/
#define PWR_EMCRETSTS2_RETGBxF_0                              (1 << 8)         /* Bit8*/
#define PWR_EMCRETSTS2_RETGBxF_1                              (1 << 9)         /* Bit9*/
#define PWR_EMCRETSTS2_RETGBxF_2                              (1 << 10)         /* Bit10*/
#define PWR_EMCRETSTS2_RETGBxF_3                              (1 << 11)         /* Bit11*/

#define PWR_EMCRETSTS2_RETGBNxF                               (1 << 4)         /* Bit[7:4] RET Domain EMC GBNx Flag*/
#define PWR_EMCRETSTS2_RETGBNxF_0                             (1 << 4)         /* Bit4*/
#define PWR_EMCRETSTS2_RETGBNxF_1                             (1 << 5)         /* Bit5*/
#define PWR_EMCRETSTS2_RETGBNxF_2                             (1 << 6)         /* Bit6*/
#define PWR_EMCRETSTS2_RETGBNxF_3                             (1 << 7)         /* Bit7*/

#define PWR_EMCRETSTS2_RETCLPxF                               (1 << 0)         /* Bit[3:0] RET Domain EMC Clampx Flag*/
#define PWR_EMCRETSTS2_RETCLPxF_0                             (1 << 0)         /* Bit0*/
#define PWR_EMCRETSTS2_RETCLPxF_1                             (1 << 1)         /* Bit1*/
#define PWR_EMCRETSTS2_RETCLPxF_2                             (1 << 2)         /* Bit2*/
#define PWR_EMCRETSTS2_RETCLPxF_3                             (1 << 3)         /* Bit3*/

/******** Bit definition for PWR_EMCRETCTRL3 register  ********/
#define PWR_EMCRETCTRL3_RETGBxDET                             (1 << 8)         /* Bit[11:8] RET domain EMC GBx detection enable*/
#define PWR_EMCRETCTRL3_RETGBxDET_0                           (1 << 8)         /* Bit8*/
#define PWR_EMCRETCTRL3_RETGBxDET_1                           (1 << 9)         /* Bit9*/
#define PWR_EMCRETCTRL3_RETGBxDET_2                           (1 << 10)         /* Bit10*/
#define PWR_EMCRETCTRL3_RETGBxDET_3                           (1 << 11)         /* Bit11*/

#define PWR_EMCRETCTRL3_RETGBNxDET                            (1 << 4)         /* Bit[7:4] RET domain EMC GBNx detection enable*/
#define PWR_EMCRETCTRL3_RETGBNxDET_0                          (1 << 4)         /* Bit4*/
#define PWR_EMCRETCTRL3_RETGBNxDET_1                          (1 << 5)         /* Bit5*/
#define PWR_EMCRETCTRL3_RETGBNxDET_2                          (1 << 6)         /* Bit6*/
#define PWR_EMCRETCTRL3_RETGBNxDET_3                          (1 << 7)         /* Bit7*/

#define PWR_EMCRETCTRL3_RETCLPxDET                            (1 << 0)         /* Bit[3:0] RET domain EMC Clampx detection enable*/
#define PWR_EMCRETCTRL3_RETCLPxDET_0                          (1 << 0)         /* Bit0*/
#define PWR_EMCRETCTRL3_RETCLPxDET_1                          (1 << 1)         /* Bit1*/
#define PWR_EMCRETCTRL3_RETCLPxDET_2                          (1 << 2)         /* Bit2*/
#define PWR_EMCRETCTRL3_RETCLPxDET_3                          (1 << 3)         /* Bit3*/

/******** Bit definition for PWR_EMCRETSTS3 register  ********/
#define PWR_EMCRETSTS3_RETGBF                                 (1 << 8)         /* Bit[11:8] RET Domain EMC GBx Flag*/
#define PWR_EMCRETSTS3_RETGBF_0                               (1 << 8)         /* Bit8*/
#define PWR_EMCRETSTS3_RETGBF_1                               (1 << 9)         /* Bit9*/
#define PWR_EMCRETSTS3_RETGBF_2                               (1 << 10)         /* Bit10*/
#define PWR_EMCRETSTS3_RETGBF_3                               (1 << 11)         /* Bit11*/

#define PWR_EMCRETSTS3_RETGBNF                                (1 << 4)         /* Bit[7:4] RET Domain EMC GBNx Flag*/
#define PWR_EMCRETSTS3_RETGBNF_0                              (1 << 4)         /* Bit4*/
#define PWR_EMCRETSTS3_RETGBNF_1                              (1 << 5)         /* Bit5*/
#define PWR_EMCRETSTS3_RETGBNF_2                              (1 << 6)         /* Bit6*/
#define PWR_EMCRETSTS3_RETGBNF_3                              (1 << 7)         /* Bit7*/

#define PWR_EMCRETSTS3_RETCLPF                                (1 << 0)         /* Bit[3:0] RET Domain EMC Clampx Flag*/
#define PWR_EMCRETSTS3_RETCLPF_0                              (1 << 0)         /* Bit0*/
#define PWR_EMCRETSTS3_RETCLPF_1                              (1 << 1)         /* Bit1*/
#define PWR_EMCRETSTS3_RETCLPF_2                              (1 << 2)         /* Bit2*/
#define PWR_EMCRETSTS3_RETCLPF_3                              (1 << 3)         /* Bit3*/

/******** Bit definition for PWR_EMCRETCTRL4 register  ********/
#define PWR_EMCRETCTRL4_RETGBxDET                             (1 << 8)         /* Bit[10:8] RET domain EMC GBx detection enable*/
#define PWR_EMCRETCTRL4_RETGBxDET_0                           (1 << 8)         /* Bit8*/
#define PWR_EMCRETCTRL4_RETGBxDET_1                           (1 << 9)         /* Bit9*/
#define PWR_EMCRETCTRL4_RETGBxDET_2                           (1 << 10)         /* Bit10*/

#define PWR_EMCRETCTRL4_RETGBNxDET                            (1 << 4)         /* Bit[6:4] RET domain EMC GBNx detection enable*/
#define PWR_EMCRETCTRL4_RETGBNxDET_0                          (1 << 4)         /* Bit4*/
#define PWR_EMCRETCTRL4_RETGBNxDET_1                          (1 << 5)         /* Bit5*/
#define PWR_EMCRETCTRL4_RETGBNxDET_2                          (1 << 6)         /* Bit6*/

#define PWR_EMCRETCTRL4_RETCLPxDET                            (1 << 0)         /* Bit[2:0] RET domain EMC Clampx detection enable*/
#define PWR_EMCRETCTRL4_RETCLPxDET_0                          (1 << 0)         /* Bit0*/
#define PWR_EMCRETCTRL4_RETCLPxDET_1                          (1 << 1)         /* Bit1*/
#define PWR_EMCRETCTRL4_RETCLPxDET_2                          (1 << 2)         /* Bit2*/

/******** Bit definition for PWR_EMCRETSTS4 register  ********/
#define PWR_EMCRETSTS4_RETGBxF                                (1 << 8)         /* Bit[10:8] RET Domain EMC GBx Flag*/
#define PWR_EMCRETSTS4_RETGBxF_0                              (1 << 8)         /* Bit8*/
#define PWR_EMCRETSTS4_RETGBxF_1                              (1 << 9)         /* Bit9*/
#define PWR_EMCRETSTS4_RETGBxF_2                              (1 << 10)         /* Bit10*/

#define PWR_EMCRETSTS4_RETGBNxF                               (1 << 4)         /* Bit[6:4] RET Domain EMC GBNx Flag*/
#define PWR_EMCRETSTS4_RETGBNxF_0                             (1 << 4)         /* Bit4*/
#define PWR_EMCRETSTS4_RETGBNxF_1                             (1 << 5)         /* Bit5*/
#define PWR_EMCRETSTS4_RETGBNxF_2                             (1 << 6)         /* Bit6*/

#define PWR_EMCRETSTS4_RETCLPxF                               (1 << 0)         /* Bit[2:0] RET Domain EMC Clampx Flag*/
#define PWR_EMCRETSTS4_RETCLPxF_0                             (1 << 0)         /* Bit0*/
#define PWR_EMCRETSTS4_RETCLPxF_1                             (1 << 1)         /* Bit1*/
#define PWR_EMCRETSTS4_RETCLPxF_2                             (1 << 2)         /* Bit2*/

/******** Bit definition for PWR_EMCBKPCTRL register  ********/
#define PWR_EMCBKPCTRL_BKPCBDET                               (1 << 8)         /* Bit[8] Backup domain EMC GB detection enable*/
#define PWR_EMCBKPCTRL_BKPCBNDET                              (1 << 4)         /* Bit[4] Backup domain EMC GBN detection enable*/
#define PWR_EMCBKPCTRL_BKPCLPDET                              (1 << 0)         /* Bit[0] Backup domain EMC Clamp  detection enable*/

/******** Bit definition for PWR_EMCBKPSTS register  ********/
#define PWR_EMCBKPSTS_BKPCLR                                  (1 << 24)         /* Bit[24] Clear EMC BKP flag*/
#define PWR_EMCBKPSTS_BKPGBF                                  (1 << 8)         /* Bit[8] Backup Domain EMC GB Flag*/
#define PWR_EMCBKPSTS_BKPGBNF                                 (1 << 4)         /* Bit[4] Backup Domain EMC GBN Flag*/
#define PWR_EMCBKPSTS_BKPCLPF                                 (1 << 0)         /* Bit[0] Backup Domain EMC Clamp Flag*/


#endif // NUTTX_N32_PWR_H
