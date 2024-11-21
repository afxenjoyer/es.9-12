cmake_minimum_required(VERSION 3.29)
project(es_9_12 C)

set(CMAKE_C_STANDARD 11)

add_executable(es_9_12 main.c
        mcm.c
        mcm.h)
