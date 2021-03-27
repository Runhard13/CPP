#include "Form.hpp"

Form::Form() : _signGrade(150), _execGrade(150)
{
    _signed = false;
}

Form::Form(const Form & other) : _name(other.getName()), _signGrade(other.getSignGrade()), _execGrade(other.getExecGrade())
{
    _signed = false;
}

Form::~Form()
{
}

Form &Form::operator=(Form const &other)
{
    _signed = other._signed;
	return(*this);
}

bool Form::getStatus() const
{
    return _signed;
}

const std::string Form::getName() const
{
    return std::string(_name);
}

int Form::getSignGrade() const
{
    return _signGrade;
}

int Form::getExecGrade() const
{
    return _execGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _signGrade)
        throw Form::GradeTooLowException();
    else
        _signed = true;
}

Form::Form(const std::string& name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
    if (_signGrade < 1 || _execGrade < 1)
        throw Form::GradeTooHighException();
    else if (_signGrade > 150 || _execGrade > 150)
        throw Form::GradeTooLowException();
    _signed = false;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return("grade too high!\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return("grade too low!\n");
}

std::ostream & operator<<(std::ostream & os, const Form & src)
{
    os << "Form " << src.getName() << " status:" << std::endl;
    if (src.getStatus())
        os << "Signed." << std::endl;
    else
        os << "Not signed." << std::endl;
    os << "Grade to sign - " << src.getSignGrade() << "." << std::endl;
    os << "Grade to execute - " << src.getExecGrade() << "." << std::endl;
    return (os);
}

void Form::setTarget(const std::string& target)
{
    _target = target;
}

void Form::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > _execGrade)
        throw Form::GradeTooLowException();
    else if (!_signed)
        throw Form::FormNotSignedException();
    else
        action();
}

const std::string Form::getTarget() const
{
    return std::string(_target);
}

const char *Form::FormNotSignedException::what() const throw()
{
    return ("unsigned form\n");
}
