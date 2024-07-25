#include "modules/delay.h"
#include "modules/key.h"
#include "modules/led.h"
#include "stm32f10x.h"

uint8_t key;

int main(void) {
    LED_Init();
    Key_Init();

    while (1) {
        key = Key_Scan();
        if(key == 1) 
            LED1_Reverse();
        if(key == 2)
            LED2_Reverse();
    }
}
