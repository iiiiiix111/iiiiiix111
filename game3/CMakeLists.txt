cmake_minimum_required(VERSION 3.26)
project(game3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(game3
        game3.cpp
        game3.h
        main.c
)
