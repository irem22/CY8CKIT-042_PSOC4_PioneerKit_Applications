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
    CyGlobalIntEnable; //Genel Kesme

int led_deger = 0; //Başlangıçta lede değer atanır.
        while(1)   //sonsuz döngü
        {
 
      
if(led_deger>13)      //led 13ten büyük olunca ledi sıfırlar.
led_deger = 0;

  switch(led_deger)
  {
  case 0:             //led degeri sıfır ise ilk ledi yakar söndürür.
	  Pin_1_Write(1u);   //logic high ledi yakar (initial state lowda baslangicta)
    CyDelay(1000);   //500 ms aralık bekleme
	 Pin_1_Write(0u);  //low'a çeker söndürür
	  break;
  case 1:       //led değeri bir ise ikinci ledi yakar söndürür.
      Pin_2_Write(1u);
        CyDelay(200);
         Pin_2_Write(0u);
	  break;
  case 2:       //led değeri iki ise üçüncü ledi yakar söndürür.
        Pin_3_Write(1u);
       CyDelay(200);
       Pin_3_Write(0u);
	  break;
  case 3:
         Pin_4_Write(1u);
         CyDelay(200);
         Pin_4_Write(0u);
	  break;
  case 4:
        Pin_5_Write(1u);
         CyDelay(200);
      Pin_5_Write(0u);
	  break;
  case 5:
     Pin_6_Write(1u);
        CyDelay(200);
       Pin_6_Write(0u);
	  break;
  case 6:
    Pin_7_Write(1u);
        CyDelay(200);
  Pin_7_Write(0u);
	  break;
  case 7:
      Pin_8_Write(1u);  //led değeri yedi ise sekizinci ledi yakar söndürür.
       CyDelay(200);
        Pin_8_Write(0u);
	  break;
     case 8:
	  Pin_7_Write(1u);  // Tersten yakma işlemine geçer 7. ledi yakar söndürür.
    CyDelay(200);
	  Pin_7_Write(0u);
	  break;
  case 9:
       Pin_6_Write(1u);;  // LEd değeri 9 ise 6. ledi yakar söndürür
        CyDelay(200);
     Pin_6_Write(0u);
	  break;
  case 10:
        Pin_5_Write(1u);
       CyDelay(200);
      Pin_5_Write(0u);
	  break;
  case 11:
        Pin_4_Write(1u);
         CyDelay(200);
      Pin_4_Write(0u);
	  break;
  case 12:
        Pin_3_Write(1u);
         CyDelay(200);
       Pin_3_Write(0u);
	  break;
  case 13: 
//Led koşul ifadesini geçmeden en son 1. led yanar söner ve led değeri 14 olmadan döngüde sıfırlanır.
     Pin_2_Write(1u); 
        CyDelay(200);
       Pin_2_Write(0u);
	  break;
    
    
    
  }
   led_deger++;  //döngüde led değeri bir arttırılır.
 }
}
/* [] END OF FILE */
