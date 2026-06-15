cmake_minimum_required(VERSION 4.2)

project(simulate-telemetry VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(simulate-telemetry
        src/main.c
        include/sensor.h
)

target_compile_options(simulate-telemetry PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)