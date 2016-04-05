cmake_minimum_required(VERSION 3.4)
project(02)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Werror")


set(SOURCE_FILES main.c io.c io.h math.c math.h date.h)
add_executable(02 ${SOURCE_FILES} io.c io.h math.c math.h date.h)