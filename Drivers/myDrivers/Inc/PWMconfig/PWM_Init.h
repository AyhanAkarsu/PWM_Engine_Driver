/*
 * PWM_Init.h
 *
 *  Created on: Sep 29, 2024
 *      Author: Ayhan
 */

#ifndef MYDRIVERS_INC_PWM_INIT_H_
#define MYDRIVERS_INC_PWM_INIT_H_
#include "stm32f4xx_hal.h"

void PWM_Init();
void PWM_config();
void PWM_SET_DUTY_CYLE(uint8_t duty_cyle);

#endif /* MYDRIVERS_INC_PWM_INIT_H_ */
