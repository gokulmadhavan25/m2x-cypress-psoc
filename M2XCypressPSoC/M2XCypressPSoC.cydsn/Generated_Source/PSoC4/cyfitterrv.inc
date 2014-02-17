    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; SPI0_miso_m
SPI0_miso_m__0__DM__MASK EQU 0x38
SPI0_miso_m__0__DM__SHIFT EQU 3
SPI0_miso_m__0__DR EQU CYREG_PRT3_DR
SPI0_miso_m__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
SPI0_miso_m__0__HSIOM_MASK EQU 0x000000F0
SPI0_miso_m__0__HSIOM_SHIFT EQU 4
SPI0_miso_m__0__INTCFG EQU CYREG_PRT3_INTCFG
SPI0_miso_m__0__INTSTAT EQU CYREG_PRT3_INTSTAT
SPI0_miso_m__0__MASK EQU 0x02
SPI0_miso_m__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
SPI0_miso_m__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
SPI0_miso_m__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
SPI0_miso_m__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
SPI0_miso_m__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
SPI0_miso_m__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
SPI0_miso_m__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
SPI0_miso_m__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
SPI0_miso_m__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
SPI0_miso_m__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
SPI0_miso_m__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
SPI0_miso_m__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
SPI0_miso_m__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
SPI0_miso_m__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
SPI0_miso_m__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
SPI0_miso_m__0__PC EQU CYREG_PRT3_PC
SPI0_miso_m__0__PC2 EQU CYREG_PRT3_PC2
SPI0_miso_m__0__PORT EQU 3
SPI0_miso_m__0__PS EQU CYREG_PRT3_PS
SPI0_miso_m__0__SHIFT EQU 1
SPI0_miso_m__DR EQU CYREG_PRT3_DR
SPI0_miso_m__INTCFG EQU CYREG_PRT3_INTCFG
SPI0_miso_m__INTSTAT EQU CYREG_PRT3_INTSTAT
SPI0_miso_m__MASK EQU 0x02
SPI0_miso_m__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
SPI0_miso_m__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
SPI0_miso_m__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
SPI0_miso_m__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
SPI0_miso_m__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
SPI0_miso_m__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
SPI0_miso_m__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
SPI0_miso_m__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
SPI0_miso_m__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
SPI0_miso_m__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
SPI0_miso_m__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
SPI0_miso_m__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
SPI0_miso_m__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
SPI0_miso_m__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
SPI0_miso_m__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
SPI0_miso_m__PC EQU CYREG_PRT3_PC
SPI0_miso_m__PC2 EQU CYREG_PRT3_PC2
SPI0_miso_m__PORT EQU 3
SPI0_miso_m__PS EQU CYREG_PRT3_PS
SPI0_miso_m__SHIFT EQU 1

; SPI0_mosi_m
SPI0_mosi_m__0__DM__MASK EQU 0x07
SPI0_mosi_m__0__DM__SHIFT EQU 0
SPI0_mosi_m__0__DR EQU CYREG_PRT3_DR
SPI0_mosi_m__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
SPI0_mosi_m__0__HSIOM_MASK EQU 0x0000000F
SPI0_mosi_m__0__HSIOM_SHIFT EQU 0
SPI0_mosi_m__0__INTCFG EQU CYREG_PRT3_INTCFG
SPI0_mosi_m__0__INTSTAT EQU CYREG_PRT3_INTSTAT
SPI0_mosi_m__0__MASK EQU 0x01
SPI0_mosi_m__0__OUT_SEL EQU CYREG_UDB_PA3_CFG10
SPI0_mosi_m__0__OUT_SEL_SHIFT EQU 0
SPI0_mosi_m__0__OUT_SEL_VAL EQU -1
SPI0_mosi_m__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
SPI0_mosi_m__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
SPI0_mosi_m__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
SPI0_mosi_m__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
SPI0_mosi_m__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
SPI0_mosi_m__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
SPI0_mosi_m__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
SPI0_mosi_m__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
SPI0_mosi_m__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
SPI0_mosi_m__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
SPI0_mosi_m__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
SPI0_mosi_m__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
SPI0_mosi_m__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
SPI0_mosi_m__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
SPI0_mosi_m__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
SPI0_mosi_m__0__PC EQU CYREG_PRT3_PC
SPI0_mosi_m__0__PC2 EQU CYREG_PRT3_PC2
SPI0_mosi_m__0__PORT EQU 3
SPI0_mosi_m__0__PS EQU CYREG_PRT3_PS
SPI0_mosi_m__0__SHIFT EQU 0
SPI0_mosi_m__DR EQU CYREG_PRT3_DR
SPI0_mosi_m__INTCFG EQU CYREG_PRT3_INTCFG
SPI0_mosi_m__INTSTAT EQU CYREG_PRT3_INTSTAT
SPI0_mosi_m__MASK EQU 0x01
SPI0_mosi_m__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
SPI0_mosi_m__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
SPI0_mosi_m__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
SPI0_mosi_m__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
SPI0_mosi_m__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
SPI0_mosi_m__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
SPI0_mosi_m__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
SPI0_mosi_m__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
SPI0_mosi_m__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
SPI0_mosi_m__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
SPI0_mosi_m__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
SPI0_mosi_m__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
SPI0_mosi_m__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
SPI0_mosi_m__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
SPI0_mosi_m__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
SPI0_mosi_m__PC EQU CYREG_PRT3_PC
SPI0_mosi_m__PC2 EQU CYREG_PRT3_PC2
SPI0_mosi_m__PORT EQU 3
SPI0_mosi_m__PS EQU CYREG_PRT3_PS
SPI0_mosi_m__SHIFT EQU 0

; SPI0_SCBCLK
SPI0_SCBCLK__DIVIDER_MASK EQU 0x0000FFFF
SPI0_SCBCLK__ENABLE EQU CYREG_CLK_DIVIDER_A00
SPI0_SCBCLK__ENABLE_MASK EQU 0x80000000
SPI0_SCBCLK__MASK EQU 0x80000000
SPI0_SCBCLK__REGISTER EQU CYREG_CLK_DIVIDER_A00

; SPI0_sclk_m
SPI0_sclk_m__0__DM__MASK EQU 0x1C0000
SPI0_sclk_m__0__DM__SHIFT EQU 18
SPI0_sclk_m__0__DR EQU CYREG_PRT0_DR
SPI0_sclk_m__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
SPI0_sclk_m__0__HSIOM_MASK EQU 0x0F000000
SPI0_sclk_m__0__HSIOM_SHIFT EQU 24
SPI0_sclk_m__0__INTCFG EQU CYREG_PRT0_INTCFG
SPI0_sclk_m__0__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI0_sclk_m__0__MASK EQU 0x40
SPI0_sclk_m__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
SPI0_sclk_m__0__OUT_SEL_SHIFT EQU 12
SPI0_sclk_m__0__OUT_SEL_VAL EQU -1
SPI0_sclk_m__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI0_sclk_m__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI0_sclk_m__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI0_sclk_m__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI0_sclk_m__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI0_sclk_m__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI0_sclk_m__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI0_sclk_m__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI0_sclk_m__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI0_sclk_m__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI0_sclk_m__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI0_sclk_m__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI0_sclk_m__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI0_sclk_m__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI0_sclk_m__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI0_sclk_m__0__PC EQU CYREG_PRT0_PC
SPI0_sclk_m__0__PC2 EQU CYREG_PRT0_PC2
SPI0_sclk_m__0__PORT EQU 0
SPI0_sclk_m__0__PS EQU CYREG_PRT0_PS
SPI0_sclk_m__0__SHIFT EQU 6
SPI0_sclk_m__DR EQU CYREG_PRT0_DR
SPI0_sclk_m__INTCFG EQU CYREG_PRT0_INTCFG
SPI0_sclk_m__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI0_sclk_m__MASK EQU 0x40
SPI0_sclk_m__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI0_sclk_m__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI0_sclk_m__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI0_sclk_m__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI0_sclk_m__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI0_sclk_m__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI0_sclk_m__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI0_sclk_m__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI0_sclk_m__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI0_sclk_m__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI0_sclk_m__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI0_sclk_m__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI0_sclk_m__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI0_sclk_m__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI0_sclk_m__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI0_sclk_m__PC EQU CYREG_PRT0_PC
SPI0_sclk_m__PC2 EQU CYREG_PRT0_PC2
SPI0_sclk_m__PORT EQU 0
SPI0_sclk_m__PS EQU CYREG_PRT0_PS
SPI0_sclk_m__SHIFT EQU 6

; SPI0_ss0_m
SPI0_ss0_m__0__DM__MASK EQU 0xE00000
SPI0_ss0_m__0__DM__SHIFT EQU 21
SPI0_ss0_m__0__DR EQU CYREG_PRT0_DR
SPI0_ss0_m__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
SPI0_ss0_m__0__HSIOM_MASK EQU 0xF0000000
SPI0_ss0_m__0__HSIOM_SHIFT EQU 28
SPI0_ss0_m__0__INTCFG EQU CYREG_PRT0_INTCFG
SPI0_ss0_m__0__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI0_ss0_m__0__MASK EQU 0x80
SPI0_ss0_m__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
SPI0_ss0_m__0__OUT_SEL_SHIFT EQU 14
SPI0_ss0_m__0__OUT_SEL_VAL EQU -1
SPI0_ss0_m__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI0_ss0_m__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI0_ss0_m__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI0_ss0_m__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI0_ss0_m__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI0_ss0_m__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI0_ss0_m__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI0_ss0_m__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI0_ss0_m__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI0_ss0_m__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI0_ss0_m__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI0_ss0_m__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI0_ss0_m__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI0_ss0_m__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI0_ss0_m__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI0_ss0_m__0__PC EQU CYREG_PRT0_PC
SPI0_ss0_m__0__PC2 EQU CYREG_PRT0_PC2
SPI0_ss0_m__0__PORT EQU 0
SPI0_ss0_m__0__PS EQU CYREG_PRT0_PS
SPI0_ss0_m__0__SHIFT EQU 7
SPI0_ss0_m__DR EQU CYREG_PRT0_DR
SPI0_ss0_m__INTCFG EQU CYREG_PRT0_INTCFG
SPI0_ss0_m__INTSTAT EQU CYREG_PRT0_INTSTAT
SPI0_ss0_m__MASK EQU 0x80
SPI0_ss0_m__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SPI0_ss0_m__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SPI0_ss0_m__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SPI0_ss0_m__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SPI0_ss0_m__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SPI0_ss0_m__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SPI0_ss0_m__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SPI0_ss0_m__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SPI0_ss0_m__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SPI0_ss0_m__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SPI0_ss0_m__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SPI0_ss0_m__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SPI0_ss0_m__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SPI0_ss0_m__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SPI0_ss0_m__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SPI0_ss0_m__PC EQU CYREG_PRT0_PC
SPI0_ss0_m__PC2 EQU CYREG_PRT0_PC2
SPI0_ss0_m__PORT EQU 0
SPI0_ss0_m__PS EQU CYREG_PRT0_PS
SPI0_ss0_m__SHIFT EQU 7

; SPI0_ss1_m
SPI0_ss1_m__0__DM__MASK EQU 0x7000
SPI0_ss1_m__0__DM__SHIFT EQU 12
SPI0_ss1_m__0__DR EQU CYREG_PRT3_DR
SPI0_ss1_m__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
SPI0_ss1_m__0__HSIOM_MASK EQU 0x000F0000
SPI0_ss1_m__0__HSIOM_SHIFT EQU 16
SPI0_ss1_m__0__INTCFG EQU CYREG_PRT3_INTCFG
SPI0_ss1_m__0__INTSTAT EQU CYREG_PRT3_INTSTAT
SPI0_ss1_m__0__MASK EQU 0x10
SPI0_ss1_m__0__OUT_SEL EQU CYREG_UDB_PA3_CFG10
SPI0_ss1_m__0__OUT_SEL_SHIFT EQU 8
SPI0_ss1_m__0__OUT_SEL_VAL EQU -1
SPI0_ss1_m__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
SPI0_ss1_m__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
SPI0_ss1_m__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
SPI0_ss1_m__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
SPI0_ss1_m__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
SPI0_ss1_m__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
SPI0_ss1_m__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
SPI0_ss1_m__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
SPI0_ss1_m__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
SPI0_ss1_m__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
SPI0_ss1_m__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
SPI0_ss1_m__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
SPI0_ss1_m__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
SPI0_ss1_m__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
SPI0_ss1_m__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
SPI0_ss1_m__0__PC EQU CYREG_PRT3_PC
SPI0_ss1_m__0__PC2 EQU CYREG_PRT3_PC2
SPI0_ss1_m__0__PORT EQU 3
SPI0_ss1_m__0__PS EQU CYREG_PRT3_PS
SPI0_ss1_m__0__SHIFT EQU 4
SPI0_ss1_m__DR EQU CYREG_PRT3_DR
SPI0_ss1_m__INTCFG EQU CYREG_PRT3_INTCFG
SPI0_ss1_m__INTSTAT EQU CYREG_PRT3_INTSTAT
SPI0_ss1_m__MASK EQU 0x10
SPI0_ss1_m__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
SPI0_ss1_m__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
SPI0_ss1_m__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
SPI0_ss1_m__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
SPI0_ss1_m__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
SPI0_ss1_m__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
SPI0_ss1_m__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
SPI0_ss1_m__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
SPI0_ss1_m__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
SPI0_ss1_m__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
SPI0_ss1_m__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
SPI0_ss1_m__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
SPI0_ss1_m__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
SPI0_ss1_m__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
SPI0_ss1_m__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
SPI0_ss1_m__PC EQU CYREG_PRT3_PC
SPI0_ss1_m__PC2 EQU CYREG_PRT3_PC2
SPI0_ss1_m__PORT EQU 3
SPI0_ss1_m__PS EQU CYREG_PRT3_PS
SPI0_ss1_m__SHIFT EQU 4

; SPI0_SCB
SPI0_SCB__BIST_CONTROL EQU CYREG_SCB1_BIST_CONTROL
SPI0_SCB__BIST_DATA EQU CYREG_SCB1_BIST_DATA
SPI0_SCB__CTRL EQU CYREG_SCB1_CTRL
SPI0_SCB__EZ_DATA00 EQU CYREG_SCB1_EZ_DATA00
SPI0_SCB__EZ_DATA01 EQU CYREG_SCB1_EZ_DATA01
SPI0_SCB__EZ_DATA02 EQU CYREG_SCB1_EZ_DATA02
SPI0_SCB__EZ_DATA03 EQU CYREG_SCB1_EZ_DATA03
SPI0_SCB__EZ_DATA04 EQU CYREG_SCB1_EZ_DATA04
SPI0_SCB__EZ_DATA05 EQU CYREG_SCB1_EZ_DATA05
SPI0_SCB__EZ_DATA06 EQU CYREG_SCB1_EZ_DATA06
SPI0_SCB__EZ_DATA07 EQU CYREG_SCB1_EZ_DATA07
SPI0_SCB__EZ_DATA08 EQU CYREG_SCB1_EZ_DATA08
SPI0_SCB__EZ_DATA09 EQU CYREG_SCB1_EZ_DATA09
SPI0_SCB__EZ_DATA10 EQU CYREG_SCB1_EZ_DATA10
SPI0_SCB__EZ_DATA11 EQU CYREG_SCB1_EZ_DATA11
SPI0_SCB__EZ_DATA12 EQU CYREG_SCB1_EZ_DATA12
SPI0_SCB__EZ_DATA13 EQU CYREG_SCB1_EZ_DATA13
SPI0_SCB__EZ_DATA14 EQU CYREG_SCB1_EZ_DATA14
SPI0_SCB__EZ_DATA15 EQU CYREG_SCB1_EZ_DATA15
SPI0_SCB__EZ_DATA16 EQU CYREG_SCB1_EZ_DATA16
SPI0_SCB__EZ_DATA17 EQU CYREG_SCB1_EZ_DATA17
SPI0_SCB__EZ_DATA18 EQU CYREG_SCB1_EZ_DATA18
SPI0_SCB__EZ_DATA19 EQU CYREG_SCB1_EZ_DATA19
SPI0_SCB__EZ_DATA20 EQU CYREG_SCB1_EZ_DATA20
SPI0_SCB__EZ_DATA21 EQU CYREG_SCB1_EZ_DATA21
SPI0_SCB__EZ_DATA22 EQU CYREG_SCB1_EZ_DATA22
SPI0_SCB__EZ_DATA23 EQU CYREG_SCB1_EZ_DATA23
SPI0_SCB__EZ_DATA24 EQU CYREG_SCB1_EZ_DATA24
SPI0_SCB__EZ_DATA25 EQU CYREG_SCB1_EZ_DATA25
SPI0_SCB__EZ_DATA26 EQU CYREG_SCB1_EZ_DATA26
SPI0_SCB__EZ_DATA27 EQU CYREG_SCB1_EZ_DATA27
SPI0_SCB__EZ_DATA28 EQU CYREG_SCB1_EZ_DATA28
SPI0_SCB__EZ_DATA29 EQU CYREG_SCB1_EZ_DATA29
SPI0_SCB__EZ_DATA30 EQU CYREG_SCB1_EZ_DATA30
SPI0_SCB__EZ_DATA31 EQU CYREG_SCB1_EZ_DATA31
SPI0_SCB__I2C_CFG EQU CYREG_SCB1_I2C_CFG
SPI0_SCB__I2C_CTRL EQU CYREG_SCB1_I2C_CTRL
SPI0_SCB__I2C_M_CMD EQU CYREG_SCB1_I2C_M_CMD
SPI0_SCB__I2C_STATUS EQU CYREG_SCB1_I2C_STATUS
SPI0_SCB__I2C_S_CMD EQU CYREG_SCB1_I2C_S_CMD
SPI0_SCB__INTR_CAUSE EQU CYREG_SCB1_INTR_CAUSE
SPI0_SCB__INTR_I2C_EC EQU CYREG_SCB1_INTR_I2C_EC
SPI0_SCB__INTR_I2C_EC_MASK EQU CYREG_SCB1_INTR_I2C_EC_MASK
SPI0_SCB__INTR_I2C_EC_MASKED EQU CYREG_SCB1_INTR_I2C_EC_MASKED
SPI0_SCB__INTR_M EQU CYREG_SCB1_INTR_M
SPI0_SCB__INTR_M_MASK EQU CYREG_SCB1_INTR_M_MASK
SPI0_SCB__INTR_M_MASKED EQU CYREG_SCB1_INTR_M_MASKED
SPI0_SCB__INTR_M_SET EQU CYREG_SCB1_INTR_M_SET
SPI0_SCB__INTR_RX EQU CYREG_SCB1_INTR_RX
SPI0_SCB__INTR_RX_MASK EQU CYREG_SCB1_INTR_RX_MASK
SPI0_SCB__INTR_RX_MASKED EQU CYREG_SCB1_INTR_RX_MASKED
SPI0_SCB__INTR_RX_SET EQU CYREG_SCB1_INTR_RX_SET
SPI0_SCB__INTR_S EQU CYREG_SCB1_INTR_S
SPI0_SCB__INTR_SPI_EC EQU CYREG_SCB1_INTR_SPI_EC
SPI0_SCB__INTR_SPI_EC_MASK EQU CYREG_SCB1_INTR_SPI_EC_MASK
SPI0_SCB__INTR_SPI_EC_MASKED EQU CYREG_SCB1_INTR_SPI_EC_MASKED
SPI0_SCB__INTR_S_MASK EQU CYREG_SCB1_INTR_S_MASK
SPI0_SCB__INTR_S_MASKED EQU CYREG_SCB1_INTR_S_MASKED
SPI0_SCB__INTR_S_SET EQU CYREG_SCB1_INTR_S_SET
SPI0_SCB__INTR_TX EQU CYREG_SCB1_INTR_TX
SPI0_SCB__INTR_TX_MASK EQU CYREG_SCB1_INTR_TX_MASK
SPI0_SCB__INTR_TX_MASKED EQU CYREG_SCB1_INTR_TX_MASKED
SPI0_SCB__INTR_TX_SET EQU CYREG_SCB1_INTR_TX_SET
SPI0_SCB__RX_CTRL EQU CYREG_SCB1_RX_CTRL
SPI0_SCB__RX_FIFO_CTRL EQU CYREG_SCB1_RX_FIFO_CTRL
SPI0_SCB__RX_FIFO_RD EQU CYREG_SCB1_RX_FIFO_RD
SPI0_SCB__RX_FIFO_RD_SILENT EQU CYREG_SCB1_RX_FIFO_RD_SILENT
SPI0_SCB__RX_FIFO_STATUS EQU CYREG_SCB1_RX_FIFO_STATUS
SPI0_SCB__RX_MATCH EQU CYREG_SCB1_RX_MATCH
SPI0_SCB__SPI_CTRL EQU CYREG_SCB1_SPI_CTRL
SPI0_SCB__SPI_STATUS EQU CYREG_SCB1_SPI_STATUS
SPI0_SCB__STATUS EQU CYREG_SCB1_STATUS
SPI0_SCB__TX_CTRL EQU CYREG_SCB1_TX_CTRL
SPI0_SCB__TX_FIFO_CTRL EQU CYREG_SCB1_TX_FIFO_CTRL
SPI0_SCB__TX_FIFO_STATUS EQU CYREG_SCB1_TX_FIFO_STATUS
SPI0_SCB__TX_FIFO_WR EQU CYREG_SCB1_TX_FIFO_WR
SPI0_SCB__UART_CTRL EQU CYREG_SCB1_UART_CTRL
SPI0_SCB__UART_RX_CTRL EQU CYREG_SCB1_UART_RX_CTRL
SPI0_SCB__UART_RX_STATUS EQU CYREG_SCB1_UART_RX_STATUS
SPI0_SCB__UART_TX_CTRL EQU CYREG_SCB1_UART_TX_CTRL

; SDCS
SDCS__0__DM__MASK EQU 0x07
SDCS__0__DM__SHIFT EQU 0
SDCS__0__DR EQU CYREG_PRT0_DR
SDCS__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
SDCS__0__HSIOM_MASK EQU 0x0000000F
SDCS__0__HSIOM_SHIFT EQU 0
SDCS__0__INTCFG EQU CYREG_PRT0_INTCFG
SDCS__0__INTSTAT EQU CYREG_PRT0_INTSTAT
SDCS__0__MASK EQU 0x01
SDCS__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SDCS__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SDCS__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SDCS__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SDCS__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SDCS__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SDCS__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SDCS__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SDCS__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SDCS__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SDCS__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SDCS__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SDCS__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SDCS__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SDCS__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SDCS__0__PC EQU CYREG_PRT0_PC
SDCS__0__PC2 EQU CYREG_PRT0_PC2
SDCS__0__PORT EQU 0
SDCS__0__PS EQU CYREG_PRT0_PS
SDCS__0__SHIFT EQU 0
SDCS__DR EQU CYREG_PRT0_DR
SDCS__INTCFG EQU CYREG_PRT0_INTCFG
SDCS__INTSTAT EQU CYREG_PRT0_INTSTAT
SDCS__MASK EQU 0x01
SDCS__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
SDCS__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
SDCS__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
SDCS__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
SDCS__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
SDCS__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
SDCS__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
SDCS__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
SDCS__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
SDCS__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
SDCS__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
SDCS__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
SDCS__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
SDCS__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
SDCS__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
SDCS__PC EQU CYREG_PRT0_PC
SDCS__PC2 EQU CYREG_PRT0_PC2
SDCS__PORT EQU 0
SDCS__PS EQU CYREG_PRT0_PS
SDCS__SHIFT EQU 0

; Miscellaneous
; -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_MEMBER_4A EQU 2
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_DIE_PSOC4A EQU 2
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_DIE_PSOC4A
CYDEV_BCLK__HFCLK__HZ EQU 48000000
CYDEV_BCLK__HFCLK__KHZ EQU 48000
CYDEV_BCLK__HFCLK__MHZ EQU 48
CYDEV_BCLK__SYSCLK__HZ EQU 48000000
CYDEV_BCLK__SYSCLK__KHZ EQU 48000
CYDEV_BCLK__SYSCLK__MHZ EQU 48
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 3
CYDEV_CHIP_DIE_PSOC5LP EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04C81193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 4
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REV_PSOC4A_PRODUCTION
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_HEAP_SIZE EQU 0x0100
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END