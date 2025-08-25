cmake_minimum_required(VERSION 3.10)

set(Project)

set(Sources
    ExampleTests.cpp
)

add_executable(ExampleTests ${Sources})

target_link_libraries(ExampleTests PUBLIC
    gtest_main
    Example
)

add_test(
    NAME ExampleTests
    COMMAND ExampleTests
)