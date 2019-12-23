/*
 * File:   main.c
 * Author: Khaled Magdy
 */
#include <xc.h>
#include "LCD.h"
#include "config.h"
//#include "uart.h"
//#include "interrupt.h"
#define _XTAL_FREQ 10000000


void main() {
    TRISD = 0x00; //portD as output
    PORTD = 0x00;
    TRISB = 0xff;  // portB as input
    LCD_Init();
    __delay_ms(500);
    LCD_Clear();
    /*LCD_Write_Char('a');
    LCD_Set_Cursor(2,1);
    LCD_Write_String("chan"); */
    //int c = 0;
    //TRISD1 = 0;
     
    while(1)
    {
        if(PIR == 1)
        {
            LED = 1;
            LCD_Set_Cursor(1,1);
            LCD_Write_String("THIS'S MY HOME ");
            __delay_ms(3000);
            LCD_Set_Cursor(2,1);
            LCD_Write_String("NICE TO MEET YOU");
            __delay_ms(3000);
        }
        else
        {
            LED = 0;
            LCD_Clear();
        }
        //LCD_Clear();
    }
    
    return;
     
}
     
