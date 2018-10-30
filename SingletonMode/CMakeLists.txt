cmake_minimum_required(VERSION 3.12)
project(SingletonMode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Singleton.cpp)

add_executable(SingletonMode ${SOURCE_FILES})