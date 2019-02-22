cmake_minimum_required(VERSION 3.12)
project(VisitorMode)

set(CMAKE_CXX_STANDARD 11)

add_executable(VisitorMode main.cpp File.cpp Directory.cpp Entry.cpp Visitor.h ListVisitor.cpp ListVisitor.h)