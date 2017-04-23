cmake_minimum_required(VERSION 3.6)
project(grid_lab_6)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp")

set(SOURCE_FILES main_get_num_threads.cpp)
add_executable(get_num_threads ${SOURCE_FILES})

set(SOURCE_FILES main_get_thread_num.cpp)
add_executable(get_thread_num ${SOURCE_FILES})