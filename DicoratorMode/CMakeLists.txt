cmake_minimum_required(VERSION 3.12)
project(DicoratorMode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp StringDisplay.cpp Border.h Display.cpp SideBorder.cpp SideBorder.h FullBorder.cpp FullBorder.h)

add_executable(DicoratorMode ${SOURCE_FILES})