cmake_minimum_required(VERSION 3.13)
project(CNoteOne C)

set(CMAKE_C_STANDARD 99)

add_executable(CNoteOne main.c test1.c arrfun1.h arrfun1.c fun2.c fun2.h macro.c macro.h commonTest.h commonTest.c)