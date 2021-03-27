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
    std::string			_target;

public:
    const std::string	getName() const;
    const std::string	getTarget() const;
    bool				getStatus() const;
    int					getSignGrade() const;
    int					getExecGrade() const;
    void				setTarget(const std::string& target);
    void				beSigned(const Bureaucrat & bureaucrat);
    virtual void		action() const = 0;
    void				execute(Bureaucrat const & executor) const;


    Form(const std::string& name, int signGrade, int execGrade);
	Form(Form const &other);
	virtual ~Form();

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
    class FormNotSignedException : public std::runtime_error
    {
    public:
        virtual const char* what() const throw();
    };


	Form &operator=(Form const &other);

};

std::ostream & operator<<(std::ostream & os, const Form & src);