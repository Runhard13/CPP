
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
    Bureaucrat john("John", 1);
    ShrubberyCreationForm shrub("cozy");
    RobotomyRequestForm robot("Mike");
    PresidentialPardonForm pres("Jerry Smith");

    john.executeForm(shrub);

    john.signForm(shrub);
    john.executeForm(shrub);

    john.signForm(robot);
    john.executeForm(robot);

    john.signForm(pres);
    john.executeForm(pres);

    return (0);
}
