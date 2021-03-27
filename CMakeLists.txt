cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS  "-Wall -Wextra -Werror")
add_executable(ex02
		cpp05/ex02/Bureaucrat.cpp
		cpp05/ex02/main.cpp
		cpp05/ex02/ShrubberyCreationForm.cpp
		cpp05/ex02/PresidentialPardonForm.cpp
		cpp05/ex02/RobotomyRequestForm.cpp
		cpp05/ex02/Form.cpp)