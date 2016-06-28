/*******************************************************************************
* File Name: analog_in.h  
* Version 1.70
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CY_PINS_analog_in_H) /* Pins analog_in_H */
#define CY_PINS_analog_in_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "analog_in_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_70 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 analog_in__PORT == 15 && (analog_in__MASK & 0xC0))

/***************************************
*        Function Prototypes             
***************************************/    

void    analog_in_Write(uint8 value) ;
void    analog_in_SetDriveMode(uint8 mode) ;
uint8   analog_in_ReadDataReg(void) ;
uint8   analog_in_Read(void) ;
uint8   analog_in_ClearInterrupt(void) ;

/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define analog_in_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define analog_in_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define analog_in_DM_RES_UP          PIN_DM_RES_UP
#define analog_in_DM_RES_DWN         PIN_DM_RES_DWN
#define analog_in_DM_OD_LO           PIN_DM_OD_LO
#define analog_in_DM_OD_HI           PIN_DM_OD_HI
#define analog_in_DM_STRONG          PIN_DM_STRONG
#define analog_in_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define analog_in_MASK               analog_in__MASK
#define analog_in_SHIFT              analog_in__SHIFT
#define analog_in_WIDTH              1u

/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define analog_in_PS                     (* (reg8 *) analog_in__PS)
/* Data Register */
#define analog_in_DR                     (* (reg8 *) analog_in__DR)
/* Port Number */
#define analog_in_PRT_NUM                (* (reg8 *) analog_in__PRT) 
/* Connect to Analog Globals */                                                  
#define analog_in_AG                     (* (reg8 *) analog_in__AG)                       
/* Analog MUX bux enable */
#define analog_in_AMUX                   (* (reg8 *) analog_in__AMUX) 
/* Bidirectional Enable */                                                        
#define analog_in_BIE                    (* (reg8 *) analog_in__BIE)
/* Bit-mask for Aliased Register Access */
#define analog_in_BIT_MASK               (* (reg8 *) analog_in__BIT_MASK)
/* Bypass Enable */
#define analog_in_BYP                    (* (reg8 *) analog_in__BYP)
/* Port wide control signals */                                                   
#define analog_in_CTL                    (* (reg8 *) analog_in__CTL)
/* Drive Modes */
#define analog_in_DM0                    (* (reg8 *) analog_in__DM0) 
#define analog_in_DM1                    (* (reg8 *) analog_in__DM1)
#define analog_in_DM2                    (* (reg8 *) analog_in__DM2) 
/* Input Buffer Disable Override */
#define analog_in_INP_DIS                (* (reg8 *) analog_in__INP_DIS)
/* LCD Common or Segment Drive */
#define analog_in_LCD_COM_SEG            (* (reg8 *) analog_in__LCD_COM_SEG)
/* Enable Segment LCD */
#define analog_in_LCD_EN                 (* (reg8 *) analog_in__LCD_EN)
/* Slew Rate Control */
#define analog_in_SLW                    (* (reg8 *) analog_in__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define analog_in_PRTDSI__CAPS_SEL       (* (reg8 *) analog_in__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define analog_in_PRTDSI__DBL_SYNC_IN    (* (reg8 *) analog_in__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define analog_in_PRTDSI__OE_SEL0        (* (reg8 *) analog_in__PRTDSI__OE_SEL0) 
#define analog_in_PRTDSI__OE_SEL1        (* (reg8 *) analog_in__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define analog_in_PRTDSI__OUT_SEL0       (* (reg8 *) analog_in__PRTDSI__OUT_SEL0) 
#define analog_in_PRTDSI__OUT_SEL1       (* (reg8 *) analog_in__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define analog_in_PRTDSI__SYNC_OUT       (* (reg8 *) analog_in__PRTDSI__SYNC_OUT) 


#if defined(analog_in__INTSTAT)  /* Interrupt Registers */

    #define analog_in_INTSTAT                (* (reg8 *) analog_in__INTSTAT)
    #define analog_in_SNAP                   (* (reg8 *) analog_in__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins analog_in_H */

#endif
/* [] END OF FILE */
