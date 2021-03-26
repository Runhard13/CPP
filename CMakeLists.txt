cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS  "-Wall -Wextra -Werror")
add_executable(ex00
		cpp05/ex00/Bureaucrat.cpp
		cpp05/ex00/main.cpp)