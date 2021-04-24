/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* Pin_1 */
#define Pin_1__0__DM__MASK 0x7000u
#define Pin_1__0__DM__SHIFT 12u
#define Pin_1__0__DR CYREG_PRT0_DR
#define Pin_1__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Pin_1__0__HSIOM_MASK 0x000F0000u
#define Pin_1__0__HSIOM_SHIFT 16u
#define Pin_1__0__INTCFG CYREG_PRT0_INTCFG
#define Pin_1__0__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_1__0__MASK 0x10u
#define Pin_1__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_1__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_1__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_1__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_1__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_1__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_1__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_1__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_1__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_1__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_1__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_1__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_1__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_1__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_1__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_1__0__PC CYREG_PRT0_PC
#define Pin_1__0__PC2 CYREG_PRT0_PC2
#define Pin_1__0__PORT 0u
#define Pin_1__0__PS CYREG_PRT0_PS
#define Pin_1__0__SHIFT 4u
#define Pin_1__DR CYREG_PRT0_DR
#define Pin_1__INTCFG CYREG_PRT0_INTCFG
#define Pin_1__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_1__MASK 0x10u
#define Pin_1__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_1__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_1__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_1__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_1__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_1__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_1__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_1__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_1__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_1__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_1__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_1__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_1__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_1__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_1__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_1__PC CYREG_PRT0_PC
#define Pin_1__PC2 CYREG_PRT0_PC2
#define Pin_1__PORT 0u
#define Pin_1__PS CYREG_PRT0_PS
#define Pin_1__SHIFT 4u

/* Pin_2 */
#define Pin_2__0__DM__MASK 0x38000u
#define Pin_2__0__DM__SHIFT 15u
#define Pin_2__0__DR CYREG_PRT0_DR
#define Pin_2__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Pin_2__0__HSIOM_MASK 0x00F00000u
#define Pin_2__0__HSIOM_SHIFT 20u
#define Pin_2__0__INTCFG CYREG_PRT0_INTCFG
#define Pin_2__0__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_2__0__MASK 0x20u
#define Pin_2__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_2__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_2__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_2__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_2__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_2__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_2__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_2__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_2__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_2__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_2__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_2__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_2__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_2__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_2__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_2__0__PC CYREG_PRT0_PC
#define Pin_2__0__PC2 CYREG_PRT0_PC2
#define Pin_2__0__PORT 0u
#define Pin_2__0__PS CYREG_PRT0_PS
#define Pin_2__0__SHIFT 5u
#define Pin_2__DR CYREG_PRT0_DR
#define Pin_2__INTCFG CYREG_PRT0_INTCFG
#define Pin_2__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_2__MASK 0x20u
#define Pin_2__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_2__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_2__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_2__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_2__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_2__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_2__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_2__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_2__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_2__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_2__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_2__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_2__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_2__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_2__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_2__PC CYREG_PRT0_PC
#define Pin_2__PC2 CYREG_PRT0_PC2
#define Pin_2__PORT 0u
#define Pin_2__PS CYREG_PRT0_PS
#define Pin_2__SHIFT 5u

/* Pin_3 */
#define Pin_3__0__DM__MASK 0xE00000u
#define Pin_3__0__DM__SHIFT 21u
#define Pin_3__0__DR CYREG_PRT0_DR
#define Pin_3__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Pin_3__0__HSIOM_MASK 0xF0000000u
#define Pin_3__0__HSIOM_SHIFT 28u
#define Pin_3__0__INTCFG CYREG_PRT0_INTCFG
#define Pin_3__0__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_3__0__MASK 0x80u
#define Pin_3__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_3__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_3__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_3__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_3__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_3__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_3__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_3__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_3__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_3__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_3__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_3__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_3__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_3__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_3__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_3__0__PC CYREG_PRT0_PC
#define Pin_3__0__PC2 CYREG_PRT0_PC2
#define Pin_3__0__PORT 0u
#define Pin_3__0__PS CYREG_PRT0_PS
#define Pin_3__0__SHIFT 7u
#define Pin_3__DR CYREG_PRT0_DR
#define Pin_3__INTCFG CYREG_PRT0_INTCFG
#define Pin_3__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_3__MASK 0x80u
#define Pin_3__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_3__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_3__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_3__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_3__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_3__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_3__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_3__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_3__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_3__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_3__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_3__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_3__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_3__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_3__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_3__PC CYREG_PRT0_PC
#define Pin_3__PC2 CYREG_PRT0_PC2
#define Pin_3__PORT 0u
#define Pin_3__PS CYREG_PRT0_PS
#define Pin_3__SHIFT 7u

/* Pin_4 */
#define Pin_4__0__DM__MASK 0xE00000u
#define Pin_4__0__DM__SHIFT 21u
#define Pin_4__0__DR CYREG_PRT3_DR
#define Pin_4__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Pin_4__0__HSIOM_MASK 0xF0000000u
#define Pin_4__0__HSIOM_SHIFT 28u
#define Pin_4__0__INTCFG CYREG_PRT3_INTCFG
#define Pin_4__0__INTSTAT CYREG_PRT3_INTSTAT
#define Pin_4__0__MASK 0x80u
#define Pin_4__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_4__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_4__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_4__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_4__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_4__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_4__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_4__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_4__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_4__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_4__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_4__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_4__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_4__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_4__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_4__0__PC CYREG_PRT3_PC
#define Pin_4__0__PC2 CYREG_PRT3_PC2
#define Pin_4__0__PORT 3u
#define Pin_4__0__PS CYREG_PRT3_PS
#define Pin_4__0__SHIFT 7u
#define Pin_4__DR CYREG_PRT3_DR
#define Pin_4__INTCFG CYREG_PRT3_INTCFG
#define Pin_4__INTSTAT CYREG_PRT3_INTSTAT
#define Pin_4__MASK 0x80u
#define Pin_4__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_4__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_4__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_4__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_4__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_4__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_4__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_4__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_4__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_4__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_4__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_4__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_4__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_4__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_4__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_4__PC CYREG_PRT3_PC
#define Pin_4__PC2 CYREG_PRT3_PC2
#define Pin_4__PORT 3u
#define Pin_4__PS CYREG_PRT3_PS
#define Pin_4__SHIFT 7u

/* Pin_5 */
#define Pin_5__0__DM__MASK 0x07u
#define Pin_5__0__DM__SHIFT 0u
#define Pin_5__0__DR CYREG_PRT0_DR
#define Pin_5__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Pin_5__0__HSIOM_MASK 0x0000000Fu
#define Pin_5__0__HSIOM_SHIFT 0u
#define Pin_5__0__INTCFG CYREG_PRT0_INTCFG
#define Pin_5__0__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_5__0__MASK 0x01u
#define Pin_5__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_5__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_5__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_5__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_5__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_5__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_5__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_5__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_5__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_5__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_5__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_5__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_5__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_5__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_5__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_5__0__PC CYREG_PRT0_PC
#define Pin_5__0__PC2 CYREG_PRT0_PC2
#define Pin_5__0__PORT 0u
#define Pin_5__0__PS CYREG_PRT0_PS
#define Pin_5__0__SHIFT 0u
#define Pin_5__DR CYREG_PRT0_DR
#define Pin_5__INTCFG CYREG_PRT0_INTCFG
#define Pin_5__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_5__MASK 0x01u
#define Pin_5__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_5__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_5__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_5__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_5__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_5__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_5__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_5__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_5__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_5__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_5__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_5__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_5__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_5__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_5__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_5__PC CYREG_PRT0_PC
#define Pin_5__PC2 CYREG_PRT0_PC2
#define Pin_5__PORT 0u
#define Pin_5__PS CYREG_PRT0_PS
#define Pin_5__SHIFT 0u

/* Pin_6 */
#define Pin_6__0__DM__MASK 0x38000u
#define Pin_6__0__DM__SHIFT 15u
#define Pin_6__0__DR CYREG_PRT3_DR
#define Pin_6__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Pin_6__0__HSIOM_MASK 0x00F00000u
#define Pin_6__0__HSIOM_SHIFT 20u
#define Pin_6__0__INTCFG CYREG_PRT3_INTCFG
#define Pin_6__0__INTSTAT CYREG_PRT3_INTSTAT
#define Pin_6__0__MASK 0x20u
#define Pin_6__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_6__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_6__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_6__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_6__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_6__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_6__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_6__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_6__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_6__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_6__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_6__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_6__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_6__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_6__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_6__0__PC CYREG_PRT3_PC
#define Pin_6__0__PC2 CYREG_PRT3_PC2
#define Pin_6__0__PORT 3u
#define Pin_6__0__PS CYREG_PRT3_PS
#define Pin_6__0__SHIFT 5u
#define Pin_6__DR CYREG_PRT3_DR
#define Pin_6__INTCFG CYREG_PRT3_INTCFG
#define Pin_6__INTSTAT CYREG_PRT3_INTSTAT
#define Pin_6__MASK 0x20u
#define Pin_6__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_6__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_6__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_6__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_6__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_6__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_6__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_6__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_6__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_6__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_6__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_6__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_6__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_6__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_6__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_6__PC CYREG_PRT3_PC
#define Pin_6__PC2 CYREG_PRT3_PC2
#define Pin_6__PORT 3u
#define Pin_6__PS CYREG_PRT3_PS
#define Pin_6__SHIFT 5u

/* Pin_7 */
#define Pin_7__0__DM__MASK 0x07u
#define Pin_7__0__DM__SHIFT 0u
#define Pin_7__0__DR CYREG_PRT1_DR
#define Pin_7__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Pin_7__0__HSIOM_MASK 0x0000000Fu
#define Pin_7__0__HSIOM_SHIFT 0u
#define Pin_7__0__INTCFG CYREG_PRT1_INTCFG
#define Pin_7__0__INTSTAT CYREG_PRT1_INTSTAT
#define Pin_7__0__MASK 0x01u
#define Pin_7__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Pin_7__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Pin_7__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Pin_7__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Pin_7__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Pin_7__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Pin_7__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Pin_7__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Pin_7__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Pin_7__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Pin_7__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Pin_7__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Pin_7__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Pin_7__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Pin_7__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Pin_7__0__PC CYREG_PRT1_PC
#define Pin_7__0__PC2 CYREG_PRT1_PC2
#define Pin_7__0__PORT 1u
#define Pin_7__0__PS CYREG_PRT1_PS
#define Pin_7__0__SHIFT 0u
#define Pin_7__DR CYREG_PRT1_DR
#define Pin_7__INTCFG CYREG_PRT1_INTCFG
#define Pin_7__INTSTAT CYREG_PRT1_INTSTAT
#define Pin_7__MASK 0x01u
#define Pin_7__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Pin_7__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Pin_7__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Pin_7__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Pin_7__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Pin_7__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Pin_7__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Pin_7__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Pin_7__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Pin_7__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Pin_7__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Pin_7__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Pin_7__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Pin_7__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Pin_7__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Pin_7__PC CYREG_PRT1_PC
#define Pin_7__PC2 CYREG_PRT1_PC2
#define Pin_7__PORT 1u
#define Pin_7__PS CYREG_PRT1_PS
#define Pin_7__SHIFT 0u

/* Pin_8 */
#define Pin_8__0__DM__MASK 0xE00000u
#define Pin_8__0__DM__SHIFT 21u
#define Pin_8__0__DR CYREG_PRT2_DR
#define Pin_8__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define Pin_8__0__HSIOM_MASK 0xF0000000u
#define Pin_8__0__HSIOM_SHIFT 28u
#define Pin_8__0__INTCFG CYREG_PRT2_INTCFG
#define Pin_8__0__INTSTAT CYREG_PRT2_INTSTAT
#define Pin_8__0__MASK 0x80u
#define Pin_8__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Pin_8__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Pin_8__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Pin_8__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Pin_8__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Pin_8__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Pin_8__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Pin_8__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Pin_8__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Pin_8__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Pin_8__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Pin_8__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Pin_8__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Pin_8__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Pin_8__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Pin_8__0__PC CYREG_PRT2_PC
#define Pin_8__0__PC2 CYREG_PRT2_PC2
#define Pin_8__0__PORT 2u
#define Pin_8__0__PS CYREG_PRT2_PS
#define Pin_8__0__SHIFT 7u
#define Pin_8__DR CYREG_PRT2_DR
#define Pin_8__INTCFG CYREG_PRT2_INTCFG
#define Pin_8__INTSTAT CYREG_PRT2_INTSTAT
#define Pin_8__MASK 0x80u
#define Pin_8__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Pin_8__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Pin_8__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Pin_8__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Pin_8__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Pin_8__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Pin_8__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Pin_8__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Pin_8__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Pin_8__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Pin_8__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Pin_8__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Pin_8__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Pin_8__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Pin_8__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Pin_8__PC CYREG_PRT2_PC
#define Pin_8__PC2 CYREG_PRT2_PC2
#define Pin_8__PORT 2u
#define Pin_8__PS CYREG_PRT2_PS
#define Pin_8__SHIFT 7u

/* Miscellaneous */
#define CY_PROJECT_NAME "karasimsek_1"
#define CY_VERSION "PSoC Creator  4.4"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 26u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 26u
#define CYDEV_CHIP_MEMBER_4AA 25u
#define CYDEV_CHIP_MEMBER_4AB 30u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4AD 15u
#define CYDEV_CHIP_MEMBER_4AE 16u
#define CYDEV_CHIP_MEMBER_4D 20u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 27u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 24u
#define CYDEV_CHIP_MEMBER_4I 32u
#define CYDEV_CHIP_MEMBER_4J 21u
#define CYDEV_CHIP_MEMBER_4K 22u
#define CYDEV_CHIP_MEMBER_4L 31u
#define CYDEV_CHIP_MEMBER_4M 29u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 28u
#define CYDEV_CHIP_MEMBER_4Q 17u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 23u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 18u
#define CYDEV_CHIP_MEMBER_4Z 19u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 33u
#define CYDEV_CHIP_MEMBER_FM3 37u
#define CYDEV_CHIP_MEMBER_FM4 38u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 1u
#define CYDEV_DFT_SELECT_CLK1 2u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
