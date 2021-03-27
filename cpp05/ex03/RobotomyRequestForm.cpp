#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("Robotomy Request Form", 72, 45)
{
    srand(time(0));
    setTarget(target);
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
    setTarget(other.getTarget());
    return (*this);
}

void	RobotomyRequestForm::action() const
{
    std::cout << "* Makes some drilling noises *" << std::endl;
    if (rand() % 2)
        std::cout << getTarget() << " robotomized successfully!" << std::endl;
    else
        std::cout << " robotomize failed " << getTarget() << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other)
{
    srand(time(0));
    setTarget(other.getTarget());
}
