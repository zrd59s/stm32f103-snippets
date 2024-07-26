#include "modules/OLED.h"
#include "modules/delay.h"
#include "modules/interrupt.h"
#include "stm32f10x.h"

int main(void) {
    OLED_Init();
    Sensor_Init();

    OLED_ShowString(0, 0, "Count:");

    while (1) {
        OLED_ShowNum(0, 7, GetSensorCount(), 3);
    }
}
