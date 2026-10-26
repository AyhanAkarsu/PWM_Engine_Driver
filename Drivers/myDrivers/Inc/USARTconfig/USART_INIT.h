/*
 * USART_INIT.h
 *
 *  Created on: 8 Eki 2024
 *      Author: Ayhan
 */

#ifndef MYDRIVERS_INC_USARTCONFIG_USART_INIT_H_
#define MYDRIVERS_INC_USARTCONFIG_USART_INIT_H_
#include "stm32f4xx_hal.h"

void USART_INIT();
int READ_USART2(void);
void WRITE_USART2(uint8_t data);
void WRITE_MESSAGE(char message[]);
void READ_BUFFER(char* buffer, int maxLength);
int CONVERT_TO_INT(char* buffer);
void WRITE_VALUE(uint8_t value);


#endif /* MYDRIVERS_INC_USARTCONFIG_USART_INIT_H_ */
