/*******************************************************************************
* File Name: button1.h  
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

#if !defined(CY_PINS_button1_H) /* Pins button1_H */
#define CY_PINS_button1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "button1_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_70 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 button1__PORT == 15 && (button1__MASK & 0xC0))

/***************************************
*        Function Prototypes             
***************************************/    

void    button1_Write(uint8 value) ;
void    button1_SetDriveMode(uint8 mode) ;
uint8   button1_ReadDataReg(void) ;
uint8   button1_Read(void) ;
uint8   button1_ClearInterrupt(void) ;

/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define button1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define button1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define button1_DM_RES_UP          PIN_DM_RES_UP
#define button1_DM_RES_DWN         PIN_DM_RES_DWN
#define button1_DM_OD_LO           PIN_DM_OD_LO
#define button1_DM_OD_HI           PIN_DM_OD_HI
#define button1_DM_STRONG          PIN_DM_STRONG
#define button1_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define button1_MASK               button1__MASK
#define button1_SHIFT              button1__SHIFT
#define button1_WIDTH              1u

/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define button1_PS                     (* (reg8 *) button1__PS)
/* Data Register */
#define button1_DR                     (* (reg8 *) button1__DR)
/* Port Number */
#define button1_PRT_NUM                (* (reg8 *) button1__PRT) 
/* Connect to Analog Globals */                                                  
#define button1_AG                     (* (reg8 *) button1__AG)                       
/* Analog MUX bux enable */
#define button1_AMUX                   (* (reg8 *) button1__AMUX) 
/* Bidirectional Enable */                                                        
#define button1_BIE                    (* (reg8 *) button1__BIE)
/* Bit-mask for Aliased Register Access */
#define button1_BIT_MASK               (* (reg8 *) button1__BIT_MASK)
/* Bypass Enable */
#define button1_BYP                    (* (reg8 *) button1__BYP)
/* Port wide control signals */                                                   
#define button1_CTL                    (* (reg8 *) button1__CTL)
/* Drive Modes */
#define button1_DM0                    (* (reg8 *) button1__DM0) 
#define button1_DM1                    (* (reg8 *) button1__DM1)
#define button1_DM2                    (* (reg8 *) button1__DM2) 
/* Input Buffer Disable Override */
#define button1_INP_DIS                (* (reg8 *) button1__INP_DIS)
/* LCD Common or Segment Drive */
#define button1_LCD_COM_SEG            (* (reg8 *) button1__LCD_COM_SEG)
/* Enable Segment LCD */
#define button1_LCD_EN                 (* (reg8 *) button1__LCD_EN)
/* Slew Rate Control */
#define button1_SLW                    (* (reg8 *) button1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define button1_PRTDSI__CAPS_SEL       (* (reg8 *) button1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define button1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) button1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define button1_PRTDSI__OE_SEL0        (* (reg8 *) button1__PRTDSI__OE_SEL0) 
#define button1_PRTDSI__OE_SEL1        (* (reg8 *) button1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define button1_PRTDSI__OUT_SEL0       (* (reg8 *) button1__PRTDSI__OUT_SEL0) 
#define button1_PRTDSI__OUT_SEL1       (* (reg8 *) button1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define button1_PRTDSI__SYNC_OUT       (* (reg8 *) button1__PRTDSI__SYNC_OUT) 


#if defined(button1__INTSTAT)  /* Interrupt Registers */

    #define button1_INTSTAT                (* (reg8 *) button1__INTSTAT)
    #define button1_SNAP                   (* (reg8 *) button1__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins button1_H */

#endif
/* [] END OF FILE */
