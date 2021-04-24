/*******************************************************************************
* File Name: LM35.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_LM35_H) /* Pins LM35_H */
#define CY_PINS_LM35_H

#include "cytypes.h"
#include "cyfitter.h"
#include "LM35_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} LM35_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   LM35_Read(void);
void    LM35_Write(uint8 value);
uint8   LM35_ReadDataReg(void);
#if defined(LM35__PC) || (CY_PSOC4_4200L) 
    void    LM35_SetDriveMode(uint8 mode);
#endif
void    LM35_SetInterruptMode(uint16 position, uint16 mode);
uint8   LM35_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void LM35_Sleep(void); 
void LM35_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(LM35__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define LM35_DRIVE_MODE_BITS        (3)
    #define LM35_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - LM35_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the LM35_SetDriveMode() function.
         *  @{
         */
        #define LM35_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define LM35_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define LM35_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define LM35_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define LM35_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define LM35_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define LM35_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define LM35_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define LM35_MASK               LM35__MASK
#define LM35_SHIFT              LM35__SHIFT
#define LM35_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LM35_SetInterruptMode() function.
     *  @{
     */
        #define LM35_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define LM35_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define LM35_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define LM35_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(LM35__SIO)
    #define LM35_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(LM35__PC) && (CY_PSOC4_4200L)
    #define LM35_USBIO_ENABLE               ((uint32)0x80000000u)
    #define LM35_USBIO_DISABLE              ((uint32)(~LM35_USBIO_ENABLE))
    #define LM35_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define LM35_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define LM35_USBIO_ENTER_SLEEP          ((uint32)((1u << LM35_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << LM35_USBIO_SUSPEND_DEL_SHIFT)))
    #define LM35_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << LM35_USBIO_SUSPEND_SHIFT)))
    #define LM35_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << LM35_USBIO_SUSPEND_DEL_SHIFT)))
    #define LM35_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(LM35__PC)
    /* Port Configuration */
    #define LM35_PC                 (* (reg32 *) LM35__PC)
#endif
/* Pin State */
#define LM35_PS                     (* (reg32 *) LM35__PS)
/* Data Register */
#define LM35_DR                     (* (reg32 *) LM35__DR)
/* Input Buffer Disable Override */
#define LM35_INP_DIS                (* (reg32 *) LM35__PC2)

/* Interrupt configuration Registers */
#define LM35_INTCFG                 (* (reg32 *) LM35__INTCFG)
#define LM35_INTSTAT                (* (reg32 *) LM35__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define LM35_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(LM35__SIO)
    #define LM35_SIO_REG            (* (reg32 *) LM35__SIO)
#endif /* (LM35__SIO_CFG) */

/* USBIO registers */
#if !defined(LM35__PC) && (CY_PSOC4_4200L)
    #define LM35_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define LM35_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define LM35_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define LM35_DRIVE_MODE_SHIFT       (0x00u)
#define LM35_DRIVE_MODE_MASK        (0x07u << LM35_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins LM35_H */


/* [] END OF FILE */
