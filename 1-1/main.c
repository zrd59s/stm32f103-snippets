#include "modules/delay.h"
#include "stm32f10x.h"

int main(void) {
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    while (1) {
        GPIO_WriteBit(GPIOA, GPIO_Pin_0, 0);
        Delay_ms(500);
        GPIO_WriteBit(GPIOA, GPIO_Pin_0, 1);
        Delay_ms(500);
    }
}
