cmake_minimum_required(VERSION 3.10)

project(calc LANGUAGES C )

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(calc
    src/main.c
    src/add.c
    src/sub.c
)

target_include_directories(calc PRIVATE include)
