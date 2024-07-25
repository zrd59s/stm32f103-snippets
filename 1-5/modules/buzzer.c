#include "buzzer.h"

void Buzzer_Init(void) {
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
    GPIO_SetBits(GPIOB, GPIO_Pin_12);
}

void Buzzer_On(void) {
    GPIO_WriteBit(GPIOB, GPIO_Pin_12, 0);
}

void Buzzer_Off(void) {
    GPIO_WriteBit(GPIOB, GPIO_Pin_12, 1);
}

void Buzzer_Reverse(void) {
    if(GPIO_ReadOutputDataBit(GPIOB, GPIO_Pin_12) == 0)
        GPIO_WriteBit(GPIOB, GPIO_Pin_12, 1);
    else
        GPIO_WriteBit(GPIOB, GPIO_Pin_12, 0);
}