#include "modules/buzzer.h"
#include "modules/lightsensor.h"
#include "stm32f10x.h"

int main(void) {
    Buzzer_Init();
    LightSensor_Init();

    while (1) {
        if (LightSensor_Scan() == 1)
            Buzzer_On();
        else
            Buzzer_Off();
    }
}
