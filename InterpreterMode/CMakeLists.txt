cmake_minimum_required(VERSION 3.15)
project(InterpreterMode)

set(CMAKE_CXX_STANDARD 11)

add_executable(InterpreterMode main.cpp Context.cpp TermialExpression.cpp NonterminalExpression.cpp)