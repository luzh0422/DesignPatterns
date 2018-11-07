cmake_minimum_required(VERSION 3.12)
project(BuilderMode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Director.cpp TextBuilder.cpp)

add_executable(BuilderMode ${SOURCE_FILES})