cmake_minimum_required(VERSION 3.12)
project(TemplateMethodMode)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-std=c++11")
# set (CMAKE_CXX_FLAGS “${CMAKE_CXX_FLAGS} -g”)

set(SOURCE_FILES AbstractDisplay.cpp main.cpp CharDisplay.cpp StringDisplay.cpp)
include_directories(
    "/Library/Developer/CommandLineTools/usr/include/c++/v1"
)

add_executable(TemplateMethodMode ${SOURCE_FILES})