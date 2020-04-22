cmake_minimum_required(VERSION 3.15)
project(State)

set(CMAKE_CXX_STANDARD 11)

add_executable(State main.cpp Context.cpp ConcreteStateA.cpp ConcreteStateB.cpp)