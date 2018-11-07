cmake_minimum_required(VERSION 3.12)
project(PrototypeMode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES Manager.cpp main.cpp MessageBox.cpp)

add_executable(PrototypeMode ${SOURCE_FILES})