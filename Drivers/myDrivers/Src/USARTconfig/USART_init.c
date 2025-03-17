/*
 * USART_init.c
 *
 *  Created on: 8 Eki 2024
 *      Author: Ayhan
 */
#include "USART_INIT.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void USART_INIT(){
	RCC -> AHB1ENR |= (1 << 0);
	RCC -> APB1ENR |= (1 << 17);
	GPIOA -> MODER &= ~(0xF << 4);
	GPIOA -> MODER |= (0xA << 4);
	GPIOA -> AFR[0] &= ~(0xFF << 8);
	GPIOA -> AFR[0] |= (0x77 << 8);
	USART2 -> BRR = 0x0683;
	USART2 -> CR1 |= (1 << 3);
	USART2 -> CR1 |= (1 << 2);
	USART2 -> CR1 |= (1 << 13);
}

int READ_USART2(void) {
	while (!(USART2 -> SR & (1 << 5))){}
	return USART2 -> DR;
}

void READ_BUFFER(char* buffer, int maxLength) {
	int i = 0;
	char receivedChar = 0;
	while((receivedChar != '\r') && i < maxLength - 1){
		receivedChar = READ_USART2();
		if(receivedChar != '\r') {
			char temp[2] = { receivedChar, '\0' };
			WRİTE_MESSAGE(temp);
			buffer[i] = receivedChar;
			i++;
		}
	}
	buffer[i] = '\0';
}

int CONVERT_TO_INT(char* buffer) {
	return atoi(buffer);
}

void WRİTE_USART2(uint8_t data) {
	while (!(USART2 -> SR & (1 << 7))) {}
	USART2 -> DR = data;
}

void WRİTE_MESSAGE(char message[]) {
	int length = strlen(message);
	for(int i=0; i < length; i++) {
		WRİTE_USART2(message[i]);
	}
}

void WRİTE_VALUE(uint8_t value) {
	char buffer[10];
	sprintf(buffer, "%d", value);
	WRİTE_MESSAGE(buffer);
}
