/*******************************************************************************
* File Name: button2.h  
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

#if !defined(CY_PINS_button2_H) /* Pins button2_H */
#define CY_PINS_button2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "button2_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_70 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 button2__PORT == 15 && (button2__MASK & 0xC0))

/***************************************
*        Function Prototypes             
***************************************/    

void    button2_Write(uint8 value) ;
void    button2_SetDriveMode(uint8 mode) ;
uint8   button2_ReadDataReg(void) ;
uint8   button2_Read(void) ;
uint8   button2_ClearInterrupt(void) ;

/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define button2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define button2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define button2_DM_RES_UP          PIN_DM_RES_UP
#define button2_DM_RES_DWN         PIN_DM_RES_DWN
#define button2_DM_OD_LO           PIN_DM_OD_LO
#define button2_DM_OD_HI           PIN_DM_OD_HI
#define button2_DM_STRONG          PIN_DM_STRONG
#define button2_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define button2_MASK               button2__MASK
#define button2_SHIFT              button2__SHIFT
#define button2_WIDTH              1u

/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define button2_PS                     (* (reg8 *) button2__PS)
/* Data Register */
#define button2_DR                     (* (reg8 *) button2__DR)
/* Port Number */
#define button2_PRT_NUM                (* (reg8 *) button2__PRT) 
/* Connect to Analog Globals */                                                  
#define button2_AG                     (* (reg8 *) button2__AG)                       
/* Analog MUX bux enable */
#define button2_AMUX                   (* (reg8 *) button2__AMUX) 
/* Bidirectional Enable */                                                        
#define button2_BIE                    (* (reg8 *) button2__BIE)
/* Bit-mask for Aliased Register Access */
#define button2_BIT_MASK               (* (reg8 *) button2__BIT_MASK)
/* Bypass Enable */
#define button2_BYP                    (* (reg8 *) button2__BYP)
/* Port wide control signals */                                                   
#define button2_CTL                    (* (reg8 *) button2__CTL)
/* Drive Modes */
#define button2_DM0                    (* (reg8 *) button2__DM0) 
#define button2_DM1                    (* (reg8 *) button2__DM1)
#define button2_DM2                    (* (reg8 *) button2__DM2) 
/* Input Buffer Disable Override */
#define button2_INP_DIS                (* (reg8 *) button2__INP_DIS)
/* LCD Common or Segment Drive */
#define button2_LCD_COM_SEG            (* (reg8 *) button2__LCD_COM_SEG)
/* Enable Segment LCD */
#define button2_LCD_EN                 (* (reg8 *) button2__LCD_EN)
/* Slew Rate Control */
#define button2_SLW                    (* (reg8 *) button2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define button2_PRTDSI__CAPS_SEL       (* (reg8 *) button2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define button2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) button2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define button2_PRTDSI__OE_SEL0        (* (reg8 *) button2__PRTDSI__OE_SEL0) 
#define button2_PRTDSI__OE_SEL1        (* (reg8 *) button2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define button2_PRTDSI__OUT_SEL0       (* (reg8 *) button2__PRTDSI__OUT_SEL0) 
#define button2_PRTDSI__OUT_SEL1       (* (reg8 *) button2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define button2_PRTDSI__SYNC_OUT       (* (reg8 *) button2__PRTDSI__SYNC_OUT) 


#if defined(button2__INTSTAT)  /* Interrupt Registers */

    #define button2_INTSTAT                (* (reg8 *) button2__INTSTAT)
    #define button2_SNAP                   (* (reg8 *) button2__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins button2_H */

#endif
/* [] END OF FILE */
