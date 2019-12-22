
#include <xc.h>

#define _XTAL_FREQ 10000000

#define LCD_EN_Delay 10000
#define LCD_DATA_PORT_D TRISD
#define LCD_RS_D TRISD2
#define LCD_EN_D TRISD3
#define RS RD2
#define EN RD3
#define D4 RD4
#define D5 RD5
#define D6 RD6
#define D7 RD7
#define LED RD1
#define PIR RB3 

//==========================================
//-----[ Prototypes For All Functions ]-----

void LCD_Init();  // Initialize The LCD For 4-Bit Interface
void LCD_Clear(); // Clear The LCD Display
void LCD_SL();    // Shift The Entire Display To The Left
void LCD_SR();    // Shift The Entire Display To The Right

void LCD_CMD(unsigned char);   // Send Command To LCD
void LCD_DATA(unsigned char);  // Send 4-Bit Data To LCD
void LCD_Set_Cursor(unsigned char, unsigned char);  // Set Cursor Position
void LCD_Write_Char(char);     // Write Character To LCD At Current Position
void LCD_Write_String(char*);  // Write A String To LCD
//------------------------------------------
