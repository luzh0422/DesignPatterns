cmake_minimum_required(VERSION 3.15)
project(FlyWeight)

set(CMAKE_CXX_STANDARD 11)

add_executable(FlyWeight main.cpp BigChar.cpp BigCharFactory.cpp BigString.cpp)