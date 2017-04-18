cmake_minimum_required(VERSION 3.6)
project(permutation)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    dict.cpp
    dict.h
    dict_buf.cpp
    dict_buf.h
    generate.cpp
    swap.cpp
    swap.h incrnum.h)

add_executable(permutation ${SOURCE_FILES})