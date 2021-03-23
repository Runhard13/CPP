cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS  "-Wall -Wextra -Werror -std=98++")
add_executable(ex00
		cpp04/ex00/Sorcerer.cpp
		cpp04/ex00/Victim.cpp
		cpp04/ex00/Peon.cpp
		cpp04/ex00/main.cpp
		cpp04/ex00/Acolyte.cpp)