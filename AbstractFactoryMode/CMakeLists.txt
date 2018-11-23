cmake_minimum_required(VERSION 3.12)
project(AbstractFactoryMode)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp AbstractTray.cpp AbstractPage.cpp ListLink.cpp ListTray.cpp ListPage.cpp ListFactory.cpp)


add_subdirectory(lib)

link_directories(./cmake-build-debug/lib/)

link_libraries(hello)

add_executable(AbstractFactoryMode ${SOURCE_FILES})

target_link_libraries(AbstractFactoryMode hello)
