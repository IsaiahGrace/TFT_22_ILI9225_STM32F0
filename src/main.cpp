/**
  ******************************************************************************
  * @file    main.c
  * @author  Isaiah Grace
  * @version V1.0
  * @date    04-April-2019
  * @brief   Simple Demo of TFT_22_ILI9225 Class.
  ******************************************************************************
*/


#include "stm32f0xx.h"
#include "stm32f0_discovery.h"
#include "TFT_22_ILI9225.h"
			
int main(void) {
    TFT_22_ILI9225 display = TFT_22_ILI9225();
    display.begin();
    display.setOrientation(2);
    char str[] = "Hello ECE 362!\0";
    display.setFont((uint8_t*) &Terminal12x16);
    display.drawText(10,100,str,COLOR_BLUE);
    display.drawCircle(40,40,20,COLOR_BLUE);
    display.drawCircle(60,60,20,COLOR_RED);
    display.drawCircle(80,40,20,COLOR_GREEN);
    display.drawRectangle(101,30,151,70,COLOR_ORANGE);
    display.drawTriangle(110,40,140,80,160,40,COLOR_VIOLET);

	for(;;);
}
