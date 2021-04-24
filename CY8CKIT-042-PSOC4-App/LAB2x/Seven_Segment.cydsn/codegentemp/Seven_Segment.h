/*******************************************************************************
* File Name: Seven_Segment.h  
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

#if !defined(CY_PINS_Seven_Segment_H) /* Pins Seven_Segment_H */
#define CY_PINS_Seven_Segment_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Seven_Segment_aliases.h"


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
} Seven_Segment_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   Seven_Segment_Read(void);
void    Seven_Segment_Write(uint8 value);
uint8   Seven_Segment_ReadDataReg(void);
#if defined(Seven_Segment__PC) || (CY_PSOC4_4200L) 
    void    Seven_Segment_SetDriveMode(uint8 mode);
#endif
void    Seven_Segment_SetInterruptMode(uint16 position, uint16 mode);
uint8   Seven_Segment_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void Seven_Segment_Sleep(void); 
void Seven_Segment_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(Seven_Segment__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define Seven_Segment_DRIVE_MODE_BITS        (3)
    #define Seven_Segment_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Seven_Segment_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the Seven_Segment_SetDriveMode() function.
         *  @{
         */
        #define Seven_Segment_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define Seven_Segment_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define Seven_Segment_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define Seven_Segment_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define Seven_Segment_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define Seven_Segment_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define Seven_Segment_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define Seven_Segment_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define Seven_Segment_MASK               Seven_Segment__MASK
#define Seven_Segment_SHIFT              Seven_Segment__SHIFT
#define Seven_Segment_WIDTH              7u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Seven_Segment_SetInterruptMode() function.
     *  @{
     */
        #define Seven_Segment_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define Seven_Segment_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define Seven_Segment_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define Seven_Segment_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(Seven_Segment__SIO)
    #define Seven_Segment_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(Seven_Segment__PC) && (CY_PSOC4_4200L)
    #define Seven_Segment_USBIO_ENABLE               ((uint32)0x80000000u)
    #define Seven_Segment_USBIO_DISABLE              ((uint32)(~Seven_Segment_USBIO_ENABLE))
    #define Seven_Segment_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define Seven_Segment_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define Seven_Segment_USBIO_ENTER_SLEEP          ((uint32)((1u << Seven_Segment_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << Seven_Segment_USBIO_SUSPEND_DEL_SHIFT)))
    #define Seven_Segment_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << Seven_Segment_USBIO_SUSPEND_SHIFT)))
    #define Seven_Segment_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << Seven_Segment_USBIO_SUSPEND_DEL_SHIFT)))
    #define Seven_Segment_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(Seven_Segment__PC)
    /* Port Configuration */
    #define Seven_Segment_PC                 (* (reg32 *) Seven_Segment__PC)
#endif
/* Pin State */
#define Seven_Segment_PS                     (* (reg32 *) Seven_Segment__PS)
/* Data Register */
#define Seven_Segment_DR                     (* (reg32 *) Seven_Segment__DR)
/* Input Buffer Disable Override */
#define Seven_Segment_INP_DIS                (* (reg32 *) Seven_Segment__PC2)

/* Interrupt configuration Registers */
#define Seven_Segment_INTCFG                 (* (reg32 *) Seven_Segment__INTCFG)
#define Seven_Segment_INTSTAT                (* (reg32 *) Seven_Segment__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define Seven_Segment_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(Seven_Segment__SIO)
    #define Seven_Segment_SIO_REG            (* (reg32 *) Seven_Segment__SIO)
#endif /* (Seven_Segment__SIO_CFG) */

/* USBIO registers */
#if !defined(Seven_Segment__PC) && (CY_PSOC4_4200L)
    #define Seven_Segment_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define Seven_Segment_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define Seven_Segment_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define Seven_Segment_DRIVE_MODE_SHIFT       (0x00u)
#define Seven_Segment_DRIVE_MODE_MASK        (0x07u << Seven_Segment_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins Seven_Segment_H */


/* [] END OF FILE */
