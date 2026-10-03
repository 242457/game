cmake_minimum_required(VERSION 3.10)
project(stdio_demo CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)

add_executable(game main.cpp gamestart.cpp user_output.cpp error.cpp is_all_digit.cpp ground.cpp load.cpp save.cpp)
