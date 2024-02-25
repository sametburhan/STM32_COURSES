/*
 * toggle.h
 *
 *  Created on: Jan 31, 2024
 *      Author: samet
 */
#include "stm32f4xx_hal.h"

#ifndef INC_TOGGLE_H_
#define INC_TOGGLE_H_

#define test

typedef enum{
	pin1 = GPIO_PIN_12,
	pin2 = GPIO_PIN_13
};

typedef struct{
	volatile uint8_t a;
	volatile uint32_t b;
	volatile uint16_t  c;
	volatile int d;
}deneme_t;

void toggle(uint16_t led1,uint16_t led2);

#endif /* INC_TOGGLE_H_ */
