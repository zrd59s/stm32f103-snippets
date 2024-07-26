#ifndef __LIGHT_SENSOR_H
#define __LIGHT_SENSOR_H

#include "delay.h"
#include "stm32f10x.h"
extern uint16_t g_encoder_count;
void Encoder_Init(void);
int16_t GetEncoderCount(void);


#endif  // !__LIGHT_SENSOR_H