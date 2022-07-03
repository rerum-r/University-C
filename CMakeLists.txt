cmake_minimum_required(VERSION 3.5)

project(University-C LANGUAGES C)
set(CMAKE_C_FLAGS "-Wall -Wextra -O0")
aux_source_directory(. SOURCES)
#aux_source_directory(./Extra SOURCES) Если потребуется директория в проекте.
add_executable(University-C ${SOURCES})
