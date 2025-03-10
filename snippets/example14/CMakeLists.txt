cmake_minimum_required(VERSION 3.28)
project(example14 C)

set(CMAKE_C_STANDARD 11)

add_executable(example14 main.c
        utility.c
        utility.h)
