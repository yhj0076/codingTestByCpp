cmake_minimum_required(VERSION 3.31)
project(codingTestByCpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

add_executable(codingTestByCpp
        until_2025_04_30/Josephus.cpp
        until_2025_04_30/open_chat.cpp
        until_2025_05_07/bw_chef.cpp)
