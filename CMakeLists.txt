cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 98)

include_directories(cpp00/ex01)
include_directories(cpp01/ex00)
include_directories(cpp01/ex02)
include_directories(cpp00/ex03)
include_directories(cpp01/ex04)
include_directories(cpp01/ex05)
include_directories(cpp00/ex06)

add_executable(megaphone
		cpp00/ex00/megaphone.cpp)
add_executable(phonebook
		cpp00/ex01/Contact.cpp
		cpp00/ex01/Contact.h
		cpp00/ex01/main.cpp
		cpp00/ex01/main.h
		cpp00/ex01/utils.cpp)
add_executable(pony
		cpp01/ex00/Pony.cpp
		cpp01/ex00/Pony.hpp
		cpp01/ex00/main.cpp)
add_executable(zombie
		cpp01/ex02/main.cpp
		cpp01/ex02/Zombie.cpp
		cpp01/ex02/Zombie.hpp
		cpp01/ex02/ZombieEvent.cpp
		cpp01/ex02/ZombieEvent.hpp)

add_executable(zombieHorde
		cpp01/ex03/main.cpp
		cpp01/ex03/Zombie.cpp
		cpp01/ex03/Zombie.hpp
		cpp01/ex03/ZombieHorde.cpp
		cpp01/ex03/ZombieHorde.hpp)
add_executable(brain
		cpp01/ex04/ex04.cpp)
add_executable(human
		cpp01/ex05/Brain.cpp
		cpp01/ex05/Brain.hpp
		cpp01/ex05/Human.cpp
		cpp01/ex05/Human.hpp
		cpp01/ex05/main.cpp)
add_executable(weapon
		cpp01/ex06/HumanA.cpp
		cpp01/ex06/HumanB.cpp
		cpp01/ex06/Weapon.cpp
		cpp01/ex06/HumanA.hpp
		cpp01/ex06/HumanB.hpp
		cpp01/ex06/Weapon.hpp
		cpp01/ex06/main.cpp)