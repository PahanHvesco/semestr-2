cmake_minimum_required(VERSION 3.24)
project(lab9 C)

set(CMAKE_C_STANDARD 11)

add_executable(labs labs/main.c labs/header.h labs/functions.c)
