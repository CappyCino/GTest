cmake_minimum_required(VERSION 3.10)

set(Project)

project(Example C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    Example.hpp
)
set(Sources
    Example.cpp
)

add_library(Example STATIC Example.cpp Example.hpp)

add_subdirectory(test)