cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 98)
add_executable(ex00
		cpp03/ex00/FragTrap.cpp
		cpp03/ex00/FragTrap.hpp
		cpp03/ex00/main.cpp)
add_executable(ex01
		cpp03/ex01/FragTrap.cpp
		cpp03/ex01/FragTrap.hpp
		cpp03/ex01/main.cpp
		cpp03/ex01/ScavTrap.cpp
		cpp03/ex01/ScavTrap.hpp)