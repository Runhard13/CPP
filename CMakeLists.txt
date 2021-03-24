cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS  "-Wall -Wextra -Werror")
add_executable(ex01
		cpp04/ex01/AWeapon.cpp
		cpp04/ex01/Character.cpp
		cpp04/ex01/Enemy.cpp
		cpp04/ex01/main.cpp
		cpp04/ex01/PlasmaRifle.cpp
		cpp04/ex01/PowerFist.cpp
		cpp04/ex01/SuperMutant.cpp
		cpp04/ex01/RadScorpion.cpp)