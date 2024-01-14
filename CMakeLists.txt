cmake_minimum_required(VERSION 3.0)
project(BoardGameEngine)

# Add the executable
add_executable(${PROJECT_NAME} main.cpp
        Board/Board.h
        Board/Board.cpp
        Board/Graph/Node.h
)

