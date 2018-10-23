cmake_minimum_required(VERSION 3.12)
project(TemplateMethodMode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES AbstractDisplay.cpp main.cpp CharDisplay.cpp StringDisplay.cpp)

add_executable(TemplateMethodMode ${SOURCE_FILES})