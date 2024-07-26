#include "modules/OLED.h"
#include "modules/delay.h"
#include "modules/interrupt.h"
#include "stm32f10x.h"

int main(void) {
    OLED_Init();
    Encoder_Init();

    OLED_ShowString(0, 0, "Count:");

    while (1) {
        int16_t count = GetEncoderCount();
        OLED_ShowSignedNum(0,6,count,6);
    }
}
