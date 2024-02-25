/*
 * toggle.c
 *
 *  Created on: Jan 31, 2024
 *      Author: samet
 */

#include "toggle.h"
#define kart1
static int degisken;


#ifndef kart1

void toggle(int pin){
	HAL_GPIO_TogglePin(GPIOD, pin);
}

#endif

