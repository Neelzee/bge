cmake_minimum_required(VERSION 3.0)
project(BoardGameEngine)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23")

# Add the executable
add_executable(${PROJECT_NAME} main.cpp)

