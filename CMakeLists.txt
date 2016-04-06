cmake_minimum_required(VERSION 3.4)
project(03)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lm -Werror")


set(SOURCE_FILES main.c io.c io.h math.c math.h date.h)
add_executable(03 ${SOURCE_FILES} io.c io.h math.c math.h date.h)