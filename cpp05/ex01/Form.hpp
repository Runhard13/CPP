#pragma once

/*
**==========================
**		Includes
**==========================
*/

class Bureaucrat;
class Form;

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    Form();
    const std::string	_name;
    const int			_signGrade;
    const int			_execGrade;
    bool				_signed;

public:
    const std::string	getName() const;
    bool				getStatus() const;
    int					getSignGrade() const;
    int					getExecGrade() const;
    void				beSigned(const Bureaucrat & bureaucrat);

	Form &operator=(Form const &other);
    Form(const std::string& name, int signGrade, int execGrade);
	Form(Form const &other);
	~Form();

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

std::ostream & operator<<(std::ostream & os, const Form & other);
