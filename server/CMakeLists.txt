cmake_minimum_required(VERSION 3.20)
project(pizzeria_server CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(app
    src/main.cpp
    src/pizza.cpp
)

target_include_directories(app PRIVATE include)
target_compile_options(app PRIVATE -Wall -Wextra -Wpedantic)
