cmake_minimum_required(VERSION 3.5)

project(University-C LANGUAGES C)
set(CMAKE_C_FLAGS "-Wall -Wextra -O0")
add_executable(University-C main.c part_01.c part_02.c part_03.c part_04.c part_05.c)
