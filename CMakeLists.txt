cmake_minimum_required(VERSION 3.14)

project(BoardGameEngine)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable
add_executable(${PROJECT_NAME} main.cpp)


