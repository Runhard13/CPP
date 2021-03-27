#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(Intern const &other)
{
    *this= other;
}

Intern::~Intern()
{

}

Intern &Intern::operator=(Intern const &other)
{

	return(*this);
}

Form* Intern::createRobotomyRequest(const std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form* Intern::createShrubberyCreation(const std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form* Intern::createPresidentialPardon(const std::string target)
{
    return (new PresidentialPardonForm(target));
}

