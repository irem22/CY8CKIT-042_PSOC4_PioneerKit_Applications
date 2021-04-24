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
    CyGlobalIntEnable;
       Pin_A_Write(0); // LCD Displayin arka ışıkları olan A ve K pinlerini sırası ile low ve high bırakıldı.
      Pin_K_Write(1); 
       LCD_Start();    // LCD başlatma komutu
       LCD_DisplayOn(); //  LCD modülünü açma komutu
    
    int j=2;            // LCD konum ayarlaması için değişken  tanımlandı
    {
        for(j=2; j<8; j++) //konum aralığı belirtilmiştir.
{

       LCD_Position(0,j); //döngüde j'ye göre soldan sağa kayan yazı konumu  belirleme
       LCD_PrintString("Irem"); //LCD Display yazdırma komutu
       CyDelay(500); //500 ms bekleme fonksiyonu
       LCD_ClearDisplay(); // İşlem bitince LCD ekranı temizlenir.
       
}     j=6;        //Sağdan sola kayan yazının başladığı yer için tekrar konum ataması 
        for(j=6; j>1; j--) // döngüde sağdan sola kayan yazı için for döngüsü
{

       LCD_Position(0,j);   //Döngüde j'ye göre sağdan sola kayan yazı konumu belirleme
       LCD_PrintString("Irem"); //Kayan yazı LCD yazdırma komutu.
       CyDelay(500);
       LCD_ClearDisplay(); //Ekran, döngü bitince temizlenir.
       
} 
               /*************** COUNTER *****************************/

  /*  int i=0;             //for döngüsü için değişken tanımlanır.
       for(i=0;i<100;i++)  //0-99 değerleri için for döngüsü oluşturulur.
    {
       
        LCD_Position(1,0); //Yazı konumu belirlenir.
        LCD_PrintNumber(i); //LCD ekrana değişkenin değeri yazdırılır.
        
        
        CyDelay(1000); //Gecikme fonksiyonu ile ekrana geliş hızları düzenlenir.
    }
       */
       
       
    }
    
    }