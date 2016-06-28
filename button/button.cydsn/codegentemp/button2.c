/*******************************************************************************
* File Name: button2.c  
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
#include "button2.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 button2__PORT == 15 && (button2__MASK & 0xC0))

/*******************************************************************************
* Function Name: button2_Write
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
void button2_Write(uint8 value) 
{
    uint8 staticBits = button2_DR & ~button2_MASK;
    button2_DR = staticBits | ((value << button2_SHIFT) & button2_MASK);
}


/*******************************************************************************
* Function Name: button2_SetDriveMode
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
void button2_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(button2_0, mode);
}


/*******************************************************************************
* Function Name: button2_Read
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
*  Macro button2_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 button2_Read(void) 
{
    return (button2_PS & button2_MASK) >> button2_SHIFT;
}


/*******************************************************************************
* Function Name: button2_ReadDataReg
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
uint8 button2_ReadDataReg(void) 
{
    return (button2_DR & button2_MASK) >> button2_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(button2_INTSTAT) 

    /*******************************************************************************
    * Function Name: button2_ClearInterrupt
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
    uint8 button2_ClearInterrupt(void) 
    {
        return (button2_INTSTAT & button2_MASK) >> button2_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif
/* [] END OF FILE */ 
