#ifndef __LIGHT_SENSOR_H
#define __LIGHT_SENSOR_H

#include "stm32f10x.h"
#include "delay.h"
extern uint16_t g_sensor_count;
void Sensor_Init(void);
uint16_t GetSensorCount(void);
void EXTI15_10_IRQHandler(void);

#endif // !__LIGHT_SENSOR_H