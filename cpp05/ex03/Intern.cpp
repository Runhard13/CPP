#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &other)
{
	(void)other;
	*this= other;
}

Intern::~Intern(){}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return(*this);
}

const char* Intern::MakeFormException::what() const throw()
{
	return ("Not a valid Form!");
}

Form* Intern::createRobotomyRequest(const std::string& target)
{
    return (new RobotomyRequestForm(target));
}

Form* Intern::createShrubberyCreation(const std::string& target)
{
    return (new ShrubberyCreationForm(target));
}

Form* Intern::createPresidentialPardon(const std::string& target)
{
    return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(const std::string& form, const std::string& target)
{
	typedef Form * (Intern::*Creator) (const std::string& target);

	Creator creator[3] = {&Intern::createPresidentialPardon, &Intern::createRobotomyRequest,
						  &Intern::createShrubberyCreation};

	std::string formTypes[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	int formTypeTotal = 3;
	int i = 0;

	while (i < formTypeTotal)
	{
		if (formTypes[i] == form)
		{
			std::cout << "Intern creates a " << form << " form." << std::endl;
			return (this->*creator[i])(target);
		}
		i++;
	}
	throw Intern::MakeFormException();
}


