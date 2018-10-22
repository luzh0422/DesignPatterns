cmake_minimum_required(VERSION 3.12)
project(IteratorMode)

set(CMAKE_CXX_STANDARD 14)

add_executable(IteratorMode main.cpp BookShelf.cpp BookShelfIterator.cpp Book.cpp)