/*******************************************************************************
* File Name: led1.c  
* Version 1.70
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include "cytypes.h"
#include "led1.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 led1__PORT == 15 && (led1__MASK & 0xC0))

/*******************************************************************************
* Function Name: led1_Write
********************************************************************************
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  void 
*  
*******************************************************************************/
void led1_Write(uint8 value) 
{
    uint8 staticBits = led1_DR & ~led1_MASK;
    led1_DR = staticBits | ((value << led1_SHIFT) & led1_MASK);
}


/*******************************************************************************
* Function Name: led1_SetDriveMode
********************************************************************************
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to this drive mode.
*
* Return: 
*  void
*
*******************************************************************************/
void led1_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(led1_0, mode);
}


/*******************************************************************************
* Function Name: led1_Read
********************************************************************************
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  void 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro led1_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 led1_Read(void) 
{
    return (led1_PS & led1_MASK) >> led1_SHIFT;
}


/*******************************************************************************
* Function Name: led1_ReadDataReg
********************************************************************************
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  void 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 led1_ReadDataReg(void) 
{
    return (led1_DR & led1_MASK) >> led1_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(led1_INTSTAT) 

    /*******************************************************************************
    * Function Name: led1_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  void 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 led1_ClearInterrupt(void) 
    {
        return (led1_INTSTAT & led1_MASK) >> led1_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif
/* [] END OF FILE */ 
