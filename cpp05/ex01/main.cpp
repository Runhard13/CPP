#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
    try
    {
        Form	q1("QWER", 1, 0);
        std::cout << q1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }
	try
	{
		Form	q2("QWER2", 0, 1);
		std::cout << q2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}

    Form		one("One", 12, 1);
	Form		two("Two", 48, 1);
    Bureaucrat	san("Sanya", 10);
    Bureaucrat	vov("Vovan", 50);

    std::cout << one << std::endl;
    san.signForm(one);
    std::cout << one << std::endl;
    vov.signForm(two);
    std::cout << two << std::endl;
    return (0);
}