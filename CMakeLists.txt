cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS  "-Wall -Wextra -Werror")
add_executable(ex03
		cpp05/ex03/Bureaucrat.cpp
		cpp05/ex03/main.cpp
		cpp05/ex03/ShrubberyCreationForm.cpp
		cpp05/ex03/PresidentialPardonForm.cpp
		cpp05/ex03/RobotomyRequestForm.cpp
		cpp05/ex03/Form.cpp
		cpp05/ex03/Intern.cpp)

add_executable(ex00
		cpp06/ex00/Convert.cpp
		cpp06/ex00/main.cpp)