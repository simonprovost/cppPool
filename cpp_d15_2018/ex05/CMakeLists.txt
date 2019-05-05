cmake_minimum_required(VERSION 3.12)

project(day)

file (GLOB SRC
        "./*.cpp")

add_executable(day ${SRC} ./ex04.hpp ex04.cpp)

target_include_directories(day PRIVATE ../ex00)