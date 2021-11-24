#pragma once

#include "stm32f4xx_ll_tim.h"
#include "stm32f4xx_ll_bus.h"

#define TIMER  TIM1

void timDelayInit();

// This Function Provides Delay In Microseconds Using Timer
__STATIC_INLINE void timerDelay_us(uint16_t au16Microseconds) {
    TIMER->CNT = 0;
    while (TIMER->CNT < au16Microseconds);
}

// This Function Provides Delay In Milliseconds Using Timer
__STATIC_INLINE void timerDelay_ms(uint16_t au16Milliseconds) {
    while (au16Milliseconds > 0) {
        TIMER->CNT = 0;
        au16Milliseconds--;
        while (TIMER->CNT < 1000);
    }
}