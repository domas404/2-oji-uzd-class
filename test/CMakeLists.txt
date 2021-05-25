cmake_minimum_required(VERSION 3.8)

set(This unitTest)

set(Sources
    unitTest.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    Test
)

add_test(
    NAME ${This}
    COMMAND ${This}
)