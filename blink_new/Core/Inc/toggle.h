/*
 * toggle.h
 *
 *  Created on: Jan 31, 2024
 *      Author: samet
 */

#include "stm32f4xx_hal.h"

#ifndef INC_TOGGLE_H_
#define INC_TOGGLE_H_

typedef enum{
	pin1 = GPIO_PIN_12,
	pin2 = GPIO_PIN_13,
	pin3 = GPIO_PIN_14,
	pin4 = GPIO_PIN_15
};

typedef struct{
	volatile uint16_t led1;
	volatile uint16_t led2;
	volatile uint16_t led3;
	volatile uint16_t led4;
}ledler_t;

void toggle(int pin);

#endif /* INC_TOGGLE_H_ */
