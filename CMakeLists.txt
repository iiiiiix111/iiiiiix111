cmake_minimum_required(VERSION 3.26)
project(myproject)

set(CMAKE_CXX_STANDARD 17)

add_executable(myproject m.c
        game1.cpp
        "leetcode/editor/cn/19)-remove-nth-node-from-end-of-list.cpp"
        game2.cpp
        game3/game3.cpp
        game3/game3.h
        game3/main.c
        practice.cpp
        practice1.cpp
)

