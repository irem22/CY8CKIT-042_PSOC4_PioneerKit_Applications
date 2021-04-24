
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    ADC_Start(); 
    ADC_StartConvert();
    ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
    Pin_1_Write(1);
    Pin_2_Write(0);
    LCD_Start();
    LCD_DisplayOn();
  

    for(;;)
    {
       float x= ADC_GetResult16(0);
       float temp=((x*0.48)/10.0);
 
       CyDelay(800);
        LCD_ClearDisplay();
        LCD_Position(0,0);
        LCD_PrintString("Temparature");
        LCD_Position(0,12);
        LCD_PrintString("is:");
        LCD_Position(1,0);
        LCD_PrintU32Number(temp);
        LCD_Position(1,3);
        LCD_PrintString("C");
        
    }
}

/* [] END OF FILE */
