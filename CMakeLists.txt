cmake_minimum_required(VERSION 3.8)

set(This Test)

project(${This} C CXX)

set(CMAKE_C_STANDART 99)
set(CMAKE_CXX_STANDART 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    studentas.h
    main_header.h
)
set(Sources
    calculations.cpp
    file_generation.cpp
    file_output.cpp
    file_read.cpp
    main.cpp
    sort.cpp
    student_division.cpp
    studentas.cpp
    test.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)