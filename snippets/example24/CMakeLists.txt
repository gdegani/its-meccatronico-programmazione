cmake_minimum_required(VERSION 3.30)
project(example24 C)

set(CMAKE_C_STANDARD 11)

add_executable(example24 main.c
        simple_list.c
        simple_list.h)
