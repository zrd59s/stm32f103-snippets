#include "modules/OLED.h"
#include "stm32f10x.h"

int main(void) {
    OLED_Init();
    OLED_ShowChar(0, 0, 'A');
    OLED_ShowString(0,2,"HelloWorld!");
    OLED_ShowNum(1,0,12345,5);
    OLED_ShowSignedNum(1, 6, -66, 2);
    OLED_ShowHexNum(2, 0, 0xAA55, 4);
    OLED_ShowBinNum(3, 0, 0XAA55, 16);
    // OLED_Clear();
}
