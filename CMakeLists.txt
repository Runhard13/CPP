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
add_executable(ex02
		cpp03/ex02/FragTrap.cpp
		cpp03/ex02/FragTrap.hpp
		cpp03/ex02/main.cpp
		cpp03/ex02/ScavTrap.cpp
		cpp03/ex02/ScavTrap.hpp
		cpp03/ex02/ClapTrap.hpp
		cpp03/ex02/ClapTrap.cpp)
add_executable(ex03
		cpp03/ex03/FragTrap.cpp
		cpp03/ex03/FragTrap.hpp
		cpp03/ex03/main.cpp
		cpp03/ex03/ScavTrap.cpp
		cpp03/ex03/ScavTrap.hpp
		cpp03/ex03/ClapTrap.hpp
		cpp03/ex03/ClapTrap.cpp
		cpp03/ex03/NinjaTrap.hpp
		cpp03/ex03/NinjaTrap.cpp)