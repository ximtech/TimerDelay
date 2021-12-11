cmake_minimum_required(VERSION 3.20)
project(TIM_Delay VERSION 1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 99)

set(TIM_DELAY_DIRECTORY
        ${TIM_DELAY_SOURCE_DIR}
        ${TIM_DELAY_SOURCE_DIR}/include
        CACHE STRING "TIM delay directories include to the main project")

set(TIM_DELAY_SOURCES
        ${TIM_DELAY_SOURCE_DIR}/TIM_Delay.c
        ${TIM_DELAY_SOURCE_DIR}/include/TIM_Delay.h
        CACHE STRING "TIM delay sources include to the main project")
