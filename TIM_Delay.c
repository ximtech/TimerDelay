#include "TIM_Delay.h"


void timDelayInit() {
    uint32_t gu32Ticks = SystemCoreClock / 1000000;
    LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_TIM1);

    LL_TIM_InitTypeDef TIM_InitStruct = {0};
    TIM_InitStruct.Prescaler = (gu32Ticks - 1);
    TIM_InitStruct.CounterMode = LL_TIM_COUNTERMODE_UP;
    TIM_InitStruct.Autoreload = 65535;
    TIM_InitStruct.ClockDivision = LL_TIM_CLOCKDIVISION_DIV1;
    TIM_InitStruct.RepetitionCounter = 0;

    LL_TIM_Init(TIMER, &TIM_InitStruct);
    LL_TIM_EnableARRPreload(TIMER);
    LL_TIM_SetClockSource(TIMER, LL_TIM_CLOCKSOURCE_INTERNAL);
    LL_TIM_SetTriggerOutput(TIMER, LL_TIM_TRGO_RESET);
    LL_TIM_DisableMasterSlaveMode(TIMER);

    LL_TIM_EnableCounter(TIMER);
}