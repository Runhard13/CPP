#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5)
{
}


PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("Presidential Pardon Form", 25, 5)
{
    this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) : Form(other)
{
    setTarget(other.getTarget());
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    setTarget(other.getTarget());
    return (*this);
}

void	PresidentialPardonForm::action() const
{
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

