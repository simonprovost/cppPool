cmake_minimum_required(VERSION 3.12)

file (GLOB SRC
        "./*.cpp"
        "./*.hpp")

add_executable(day ${SRC})

target_include_directories(day PRIVATE ./)