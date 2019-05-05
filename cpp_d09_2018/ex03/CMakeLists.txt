cmake_minimum_required(VERSION 3.12)
project(day)

add_executable(day Character.cpp Warrior.cpp Mage.cpp Priest.cpp main.cpp)

target_include_directories(day PRIVATE ./)