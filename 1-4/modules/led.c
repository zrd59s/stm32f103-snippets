#include "led.h"

void LED_Init(void) {
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1 | GPIO_Pin_2;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
    GPIO_SetBits(GPIOA, GPIO_Pin_1 | GPIO_Pin_2);
}

void LED1_On(void) {
    GPIO_WriteBit(GPIOA, GPIO_Pin_1, 0);
}

void LED1_Off(void) {
    GPIO_WriteBit(GPIOA, GPIO_Pin_1, 1);
}

void LED1_Reverse(void) {
    if(GPIO_ReadOutputDataBit(GPIOA, GPIO_Pin_1) == 0)
        GPIO_WriteBit(GPIOA, GPIO_Pin_1, 1);
    else
        GPIO_WriteBit(GPIOA, GPIO_Pin_1, 0);
}

void LED2_On(void) {
    GPIO_WriteBit(GPIOA, GPIO_Pin_2, 0);
}

void LED2_Off(void) {
    GPIO_WriteBit(GPIOA, GPIO_Pin_2, 1);
}

void LED2_Reverse(void) {
    if(GPIO_ReadOutputDataBit(GPIOA, GPIO_Pin_2) == 0)
        GPIO_WriteBit(GPIOA, GPIO_Pin_2, 1);
    else
        GPIO_WriteBit(GPIOA, GPIO_Pin_2, 0);
}