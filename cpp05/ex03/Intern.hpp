#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern & src);
	~Intern();

	Intern & operator=(const Intern & src);
	Form *	createShrubberyCreation(const std::string& target);
	Form *	createRobotomyRequest(const std::string& target);
	Form *	createPresidentialPardon(const std::string& target);

	Form *	makeForm(const std::string& form, const std::string& target);
	class MakeFormException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

private:

};