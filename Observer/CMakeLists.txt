cmake_minimum_required(VERSION 3.15)
project(Observer)

set(CMAKE_CXX_STANDARD 11)

add_executable(Observer main.cpp GenerateNumber.cpp RandomGenerateNumber.cpp DigitObserver.cpp GraphObserver.cpp)