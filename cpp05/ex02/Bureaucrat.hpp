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
	const std::string _name;
	int			_grade;
	Bureaucrat();

public:
	Bureaucrat(Bureaucrat const &other);
	~Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	const   std::string getName() const;
	int     getGrade() const;
	void    incGrade();
	void    decGrade();
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


	Bureaucrat &operator=(Bureaucrat const &other);

    void signForm(Form &form) const;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);
