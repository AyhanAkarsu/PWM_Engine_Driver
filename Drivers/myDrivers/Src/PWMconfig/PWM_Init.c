/*
 * PWM_Init.c
 *
 *  Created on: Sep 29, 2024
 *      Author: Ayhan
 */

#include "PWM_Init.h"

void PWM_Init() {
	RCC -> AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
	RCC -> APB1ENR |= RCC_APB1ENR_TIM2EN;
	GPIOA -> MODER &= ~(0x3 << 0);
	GPIOA -> MODER |= (0x2 << 0);
	GPIOA -> AFR[0] &= ~(0xF << 0);
	GPIOA -> AFR[0] |= (0x1 << 0);
}

void PWM_config() {
	TIM2 -> PSC = 15;
	TIM2 -> ARR = 1000 - 1;
	TIM2 -> CCR1 = 500;
	TIM2->CCMR1 &= ~(0x7 << 4);
	TIM2->CCMR1 |= (0x6 << 4);
	TIM2->CCMR1 |= (1 << 3);
	TIM2->CCER |= (1 << 0);
	TIM2->CR1 |= (1 << 0);
}

void PWM_SET_DUTY_CYLE(uint8_t duty_cyle) {
	TIM2 -> CCR1 = (duty_cyle * 10);
}

