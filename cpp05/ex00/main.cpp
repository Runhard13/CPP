#include "Bureaucrat.hpp"

int	main()
{

    std::cout << "__________Creation of bureaucrats__________" << std::endl;
    try
    {
        Bureaucrat high("High", 0);
    }
    catch (std::exception & e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat low("Low", 151);
    }
    catch (std::exception & e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    std::cout << "__________Increment&Decrement__________" << std::endl;

    try
    {
        Bureaucrat	inc("IncTestBureaucrat", 2);
        std::cout << inc << std::endl;
        inc.incGrade();
        std::cout << inc << std::endl;
        inc.incGrade();
        std::cout << inc << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat	dec("DecTestBureaucrat", 149);
        std::cout << dec << std::endl;
        dec.decGrade();
        std::cout << dec << std::endl;
        dec.decGrade();
        std::cout << dec << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }
	return (0);
}