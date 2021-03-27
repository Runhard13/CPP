#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
    try
    {
        Form	qwer("QWER", 24, 0);
        std::cout << qwer << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    Form		one("One", 12, 1);
    Bureaucrat	san("Sanya", 10);
    Bureaucrat	vov("Vovan", 50);

    //std::cout << one << std::endl;
    san.signForm(one);
    //std::cout << one << std::endl;
    vov.signForm(one);
    //std::cout << one << std::endl;
    return (0);
}