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

const int dizi[16]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
//Her bir ledi tanımlamak için binary olarak sayı dizisi oluşturuldu. 

int main(void)
{
    CyGlobalIntEnable; //Genel Kesme
    
    int i;   //Degisken Tanımlandı
    
    for(;;)
    {
        for(i=0;i<16;i++) //her bir ledi sıra ile yakmak için döngü oluşturuldu.
        {
         Pin_1_Write(dizi[i]);  //dizi elemanları 200ms aralıklar ile yanması sağlandı.
          CyDelay(200);    // 
        }
    }
}

/* [] END OF FILE */
