/*
 * pdisply arabic charachter on lcd.c
 *
 * Created: 24/09/2021 12:52:33 AM
 * Author : kamar salah
 */ 
#define F_CPU 8000000UL
#include <util/delay.h>
#include <avr/io.h>
#include "LCD driver.h"


int main(void)
{
    LCD_vinit();
	LCD_vsend_sring("kamar salah");                                        // display string 
	LCD_vsend_com(64); 
	                                                   // address counter wave to address in CGRAM 
	/* first char */
	LCD_vsend_char(0b00000011);
	LCD_vsend_char(0b00000000);                                                    
	LCD_vsend_char(0b00000011);
	LCD_vsend_char(0b00010011);
	LCD_vsend_char(0b10000011);
	LCD_vsend_char(0b11111111);
	LCD_vsend_char(0b00000000);
	LCD_vsend_char(0b00000000);
	
	/* seconed char*/
	LCD_vsend_char(0b00000000);
	LCD_vsend_char(0b00000000);
	LCD_vsend_char(0b00011111);
	LCD_vsend_char(0b00000101);
	LCD_vsend_char(0b00000101);
	LCD_vsend_char(0b00000011);
	LCD_vsend_char(0b00000000);
	LCD_vsend_char(0b00000000);
	
	/* third char*/
	LCD_vsend_char(0b00000000);
	LCD_vsend_char(0b00000000);
	LCD_vsend_char(0b00000001);
	LCD_vsend_char(0b00000010);
	LCD_vsend_char(0b00000100);
	LCD_vsend_char(0b0001000);
	LCD_vsend_char(0b00000000);
	LCD_vsend_char(0b00000000);
	
	/* fourth char */
	LCD_vsend_char (0b00000000);
	LCD_vsend_char (0b00000000);
	LCD_vsend_char (0b00000011);
	LCD_vsend_char (0b00010101);
	LCD_vsend_char (0b11111111);
	LCD_vsend_char (0b00001000);
	LCD_vsend_char (0b00000000);
	LCD_vsend_char (0b00000000);
	LCD_vsend_char (0b00000000);
	
	/* fifth char */
	LCD_vsend_char (0b00000001);
	LCD_vsend_char (0b00000101);
	LCD_vsend_char (0b00000101);
	LCD_vsend_char (0b00011111);
	LCD_vsend_char (0b00000000);
	LCD_vsend_char (0b00000000);
	LCD_vsend_char (0b00000000);
	LCD_vsend_char (0b00000000);
	
	/*six char*/
	LCD_vsend_char (0b00011111);
	LCD_vsend_char (0b00000110);
	LCD_vsend_char (0b00001000);
	LCD_vsend_char (0b00001000);
	LCD_vsend_char (0b00001000);
	LCD_vsend_char (0b000001111);
	LCD_vsend_char (0b00000000);
	LCD_vsend_char (0b00000000);
	
	
	
	LCD_vmove_cursor(2,16);                                                           // move cursor to raw 2 col 16
	LCD_vsend_char(0);                                                                // 0 meant first char in CGRAM 
	LCD_vmove_cursor(2,15);                                                           // move cursor to raw 2 col 15
	LCD_vsend_char(1);                                                                // 1 meant seconed char in CGRAM
	LCD_vmove_cursor(2,14);                                                           // move cursor to raw 2 col 14
	LCD_vsend_char(2);                                                                // 2 meant third char in CGRAM
	LCD_vmove_cursor(2,13);                                                           // move cursor to raw 2 col 13
	LCD_vsend_char(3);                                                                // 3 meant fourth char in CGRAM
	LCD_vmove_cursor(2,12);                                                           // move cursor to raw 2 col 12
	LCD_vsend_char(4);                                                                // 4 meant fifth char in CGRAM
	LCD_vmove_cursor(2,11);                                                           // move cursor to raw 2 col 12
	LCD_vsend_char(5);                                                                // 5 meant char char in CGRAM
	
    while (1) 
    {
    }
}

