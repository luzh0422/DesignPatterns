cmake_minimum_required(VERSION 3.15)
project(CommandMode)

set(CMAKE_CXX_STANDARD 11)

add_executable(CommandMode main.cpp SimpleCommand.cpp Receiver.cpp ComplexCommand.cpp Invoker.cpp)