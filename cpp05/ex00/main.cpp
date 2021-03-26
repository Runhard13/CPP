#include "Bureaucrat.hpp"

int	main()
{
	try
	{
//		std::cout << "__________Creation of bureaucrats__________" << std::endl;
//		Bureaucrat high("High", 0);
//		Bureaucrat low("Low", 151);

//		std::cout << "__________Increment__________" << std::endl;
//		Bureaucrat	inc("IncTestBureaucrat", 2);
//		std::cout << inc << std::endl;
//		inc.incGrade();
//		std::cout << inc << std::endl;
//		inc.incGrade();
//		std::cout << inc << std::endl;

		std::cout << "__________Decrement__________" << std::endl;
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