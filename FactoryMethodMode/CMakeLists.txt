cmake_minimum_required(VERSION 3.12)
project(FactoryMethodMode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Factory.cpp IDCardFactory.cpp IDCard.cpp)

add_executable(FactoryMethodMode ${SOURCE_FILES})