cmake_minimum_required(VERSION 3.12)
project(StrategyMode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Hand.cpp WinningStrategy.cpp ProbStrategy.cpp Player.cpp)

add_executable(StrategyMode ${SOURCE_FILES})