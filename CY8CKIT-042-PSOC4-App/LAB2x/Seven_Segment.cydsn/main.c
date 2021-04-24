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

  const char dizi[]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x18};
int main(void)
{
    CyGlobalIntEnable; 
   int i;     // değişken tanımlandı
    for(;;)   
    {   for(i=0;i<10;i++)  // i değişkeni 10dan küçük olana kadar dönecek
    {
        Seven_Segment_Write(dizi[i]);   // Seven segmentte ledlerini 500 ms bekleme aralığı ile yakacak komut
        CyDelay(500);                 
         
    }
}
}
/* [] END OF FILE */
