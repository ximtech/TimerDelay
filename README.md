# TimerDelay
STM32 LL(Low Layer) timer delay library.\
Hardware timer in the microcontroller. Can be used with [DWT_Delay](https://github.com/ximtech/DWTDelay)

### Features
- Ultra lightweight
- Easy to use
- Good precision
- No HAL dependency

### Trade-offs
- Only STM32F4 supported at this time
- Hardware timer will be occupied

### Add as CPM project dependency
How to add CPM to the project, check the [link](https://github.com/cpm-cmake/CPM.cmake)
```cmake
CPMAddPackage(
        NAME TIMDelay
        GITHUB_REPOSITORY ximtech/TIMDelay
        GIT_TAG origin/main)

target_link_libraries(${PROJECT_NAME} TIM_Delay)
```
```cmake
add_executable(${PROJECT_NAME}.elf ${SOURCES} ${LINKER_SCRIPT})
# For Clion STM32 plugin generated Cmake use 
target_link_libraries(${PROJECT_NAME}.elf TIM_Delay)
```

### Usage
```C
#define TIMER  TIM1 // set timer in TIM_Delay.h or use default
```

```C
timDelayInit();

timerDelay_us(10);   // microseconds delay
timerDelay_ms(100); // milliseconds delay
```
