/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
         if (! buton_Read())
       {
        RED_Write(0u); /* set low */
       CyDelay(100);
       RED_Write(1u); /*set high */
       CyDelay(100);
       
       GREEN_Write(0u);
       CyDelay(100);
       GREEN_Write(1u);
       CyDelay(100);
    
       BLUE_Write(0u);
       CyDelay(100);
       BLUE_Write(1u);
       CyDelay(100);
    
       
     }
    }
}

/* [] END OF FILE */
