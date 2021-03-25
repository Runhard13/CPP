cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 98)
#set(CMAKE_CXX_FLAGS  "-Wall -Wextra -Werror")
add_executable(ex03
		cpp04/ex03/AMateria.cpp
		cpp04/ex03/Character.cpp
		cpp04/ex03/Cure.cpp
		cpp04/ex03/Ice.cpp
		cpp04/ex03/MateriaSource.cpp
		cpp04/ex03/main.cpp)