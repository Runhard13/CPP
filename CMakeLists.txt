cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS  "-Wall -Wextra -Werror")

add_executable(ex01
		cpp08/ex01/main.cpp
		cpp08/ex01/Span.cpp)