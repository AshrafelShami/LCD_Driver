/*
4-bit data interface, with busy flag implemented.
Any LCD pin can be connected to any available I/O port.
Includes a simple write string routine.
*/
#include "LCD_Config.h"
int main(void){
    LCD_Init(&PIND, &PIND, 0, 1, 2, 3, 4, 5, 6);
	LCD_Print(0, 0, "Hello World!");	
}