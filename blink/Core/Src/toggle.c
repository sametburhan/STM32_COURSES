/*
 * toggle.c
 *
 *  Created on: Jan 31, 2024
 *      Author: samet
 */

#include "toggle.h"

#ifdef test
void toggle(uint16_t led1,uint16_t led2){
	HAL_GPIO_TogglePin(GPIOD, led1);
	HAL_Delay(100);
	HAL_GPIO_TogglePin(GPIOD, led2);
}
#endif
