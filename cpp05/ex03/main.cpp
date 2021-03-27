
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"


int	main()
{
	Bureaucrat	sanya("Sanya", 1);
	Intern		intern;
	Form		*form;

	form = intern.makeForm("shrubbery creation", "ZZZ");
	sanya.signForm(*form);
	sanya.executeForm(*form);
	std::cout << std::endl;

	form = intern.makeForm("robotomy request", "AAA");
	sanya.signForm(*form);
	sanya.executeForm(*form);
	std::cout << std::endl;

	form = intern.makeForm("presidential pardon", "FFF");
	sanya.signForm(*form);
	sanya.executeForm(*form);
	std::cout << std::endl;

	try
	{
		form = intern.makeForm("fregerg", "ertrhger");
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	return (0);
}
