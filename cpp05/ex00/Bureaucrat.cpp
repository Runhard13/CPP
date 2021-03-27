#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}
Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : _name(other.getName())
{
	_grade = other.getGrade();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	_grade = other.getGrade();
	return(*this);
}

const std::string	Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::decGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::incGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade too high!\n");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade too low!\n");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & other)
{
	o << other.getName() << ", bureaucrat grade " << other.getGrade();
	return o;
}
