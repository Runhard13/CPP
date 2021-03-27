
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
    Bureaucrat qwer("qwer", 1);
    ShrubberyCreationForm shrub("treeeee");
    RobotomyRequestForm robot("zzz");
    PresidentialPardonForm pres("ASAS");

    qwer.executeForm(shrub);
    std::cout << std::endl;

    qwer.signForm(shrub);
    qwer.executeForm(shrub);
	std::cout << std::endl;

    qwer.signForm(robot);
    qwer.executeForm(robot);
	std::cout << std::endl;

    qwer.signForm(pres);
    qwer.executeForm(pres);
	std::cout << std::endl;

    return (0);
}
