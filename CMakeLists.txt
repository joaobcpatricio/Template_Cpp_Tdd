cmake_minimum_required(VERSION 3.3)

project(Template_Cpp_TDD)

set(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++20")

add_subdirectory(src)
add_subdirectory(tests)
