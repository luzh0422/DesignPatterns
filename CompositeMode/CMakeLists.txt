cmake_minimum_required(VERSION 3.12)
project(CompositeMode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Entry.cpp File.cpp Directory.cpp)

add_executable(CompositeMode ${SOURCE_FILES})