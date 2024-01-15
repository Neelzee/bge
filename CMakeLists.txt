cmake_minimum_required(VERSION 3.0)
project(BoardGameEngine)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23")

# Add the executable
add_executable(${PROJECT_NAME} main.cpp
        Board/Board.h
        Board/Board.cpp
        Board/Graph/Node.h
        BGDL/Lexer/BDSLLexer.cpp
        BGDL/Lexer/BDSLLexer.h
        BGDL/Lexer/BDSLType/BDSLType.cpp
        BGDL/Lexer/BDSLType/BDSLType.h
        BGDL/Lexer/BDSLToken/BDSLToken.cpp
        BGDL/Lexer/BDSLToken/BDSLToken.h
        BGDL/Lexer/BDSLToken/BDSLToken.h
        Funcs/Funcs.cpp
        Funcs/Funcs.h
)

