cmake_minimum_required(VERSION 3.13)
project(MediatorMode)

set(CMAKE_CXX_STANDARD 11)

add_executable(MediatorMode main.cpp ConcreteMediator.cpp Colleague.cpp ConcreteColleague1.cpp ConcreteColleague1.h ConcreteColleague2.cpp ConcreteColleague2.h)