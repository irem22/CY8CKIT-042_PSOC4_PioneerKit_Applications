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

    UART_x_Start();      // UART modülü başlatıldı.
    UART_x_UartPutString("IREM_IPEKLI");  //terminal programında ekran çıktısı 
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
