cmake_minimum_required(VERSION 3.20)
project(dpp_test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# vcpkg
find_package(dpp CONFIG REQUIRED)

add_executable(dpp_test
        headers/ANSI/ANSI.h++
        headers/ANSI/ANSI.cpp
        main.cpp
        headers/logger/logger.cpp
        headers/logger/logger.h++
)

target_include_directories(dpp_test PRIVATE headers)
target_link_libraries(dpp_test PRIVATE dpp::dpp)
add_compile_definitions(_CRT_SECURE_NO_WARNINGS) # removes deprecations, its annoying