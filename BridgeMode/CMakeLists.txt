cmake_minimum_required(VERSION 3.12)
project(BridgeMode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Display.cpp StringDisplayImpl.cpp MultiDisplay.cpp)

add_executable(BridgeMode ${SOURCE_FILES})