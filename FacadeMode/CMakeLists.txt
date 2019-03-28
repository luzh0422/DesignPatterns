cmake_minimum_required(VERSION 3.13)
project(FacadeMode)

set(CMAKE_CXX_STANDARD 11)

add_executable(FacadeMode main.cpp DataBase.cpp DataBase.h HtmlWriter.cpp HtmlWriter.h PageMaker.cpp PageMaker.h)