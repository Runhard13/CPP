cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS  "-Wall -Wextra -Werror")
add_executable(ex02
		cpp04/ex02/AssaultTerminator.cpp
		cpp04/ex02/Squad.cpp
		cpp04/ex02/TacticalMarine.cpp
		cpp04/ex02/main.cpp)