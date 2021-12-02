# TimerDelay
STM32 LL(Low Layer) timer delay library.\
Hardware timer in the microcontroller. Can be used with [TIM_Delay](https://github.com/ximtech/TIMDelay)

### Features
- Ultra lightweight
- Easy to use
- Good precision
- No HAL dependency

### Trade-offs
- Hardware timer will be occupied

### Add as CPM project dependency
How to add CPM to the project, check the [link](https://github.com/cpm-cmake/CPM.cmake)
```cmake
CPMAddPackage(
        NAME TIMDelay
        GITHUB_REPOSITORY ximtech/TIMDelay
        GIT_TAG origin/main)

include_directories(${TIM_DELAY_DIRECTORY}) # add directory to project
file(GLOB_RECURSE SOURCES ${TIM_DELAY_SOURCES}) # add source files
```

### Usage
```C
#define TIMER_DELAY  TIM1 // set timer in main.h or use default(TIM1)
```

```C
timDelayInit();

timerDelay_us(10);   // microseconds delay
timerDelay_ms(100); // milliseconds delay
```