cmake_minimum_required(VERSION 3.28)
project(example03 C)

set(CMAKE_C_STANDARD 11)

add_executable(example03 main.c
        ciclo_while.c
        ciclo_while2.c)
