cmake_minimum_required(VERSION 3.12)
project(ChainOfResponsibility)

set(CMAKE_CXX_STANDARD 11)

add_executable(ChainOfResponsibility main.cpp Problem.cpp Problem.h Support.cpp Support.h NoSupport.cpp NoSupport.h OddSupport.cpp OddSupport.h LimitSupport.cpp LimitSupport.h)