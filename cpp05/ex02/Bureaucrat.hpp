#pragma once

/*
**==========================
**		Includes
**==========================
*/

class Bureaucrat;

#include <iostream>
#include <sstream>
#include "Form.hpp"

class Bureaucrat
{
private:
	const std::string 		_name;
	int						_grade;
	Bureaucrat();

public:

	const std::string		getName() const;
	int     				getGrade() const;
	void    				incGrade();
	void    				decGrade();
	void 					signForm(Form &form) const;
	void 					executeForm(Form & form) const;

	~Bureaucrat();
	Bureaucrat(Bureaucrat const &other);
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat &operator=(Bureaucrat const &other);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);
