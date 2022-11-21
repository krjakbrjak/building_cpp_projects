cmake_minimum_required(VERSION 3.16.0)
project(fs)

add_executable(main main.cpp)
target_include_directories(main PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/models>
)
set_property(TARGET main PROPERTY CXX_STANDARD 14)
