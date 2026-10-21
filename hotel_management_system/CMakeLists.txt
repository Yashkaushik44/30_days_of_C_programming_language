cmake_minimum_required(VERSION 3.10)

project(hotel_management_system LANGUAGES C )

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(hotel_management_system
    src/main.c
    src/add_guest.c
    src/check_out_guest.c
    src/display_all_guest.c
    src/guest_search.c
)

target_include_directories(hotel_management_system PRIVATE include)
