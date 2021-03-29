#include "Convert.hpp"

int main(int ac, const char **av)
{
    if (ac != 2)
    {
        std::cout << "Invalid arguments count" << std::endl;
        return 1;
    }

	std:: cout << std::fixed << std::setprecision(1);
    Convert convert(av[1]);

    try
    {
        int cast;

        std::cout << "char: ";
        cast = static_cast<int>(convert);

        if (cast > 0 && cast < 32)
			std::cout << "Non Displayable" << std::endl;
        else
			std::cout << static_cast<char>(convert) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        int cast;

        std::cout << "int: ";
		cast = static_cast<int>(convert);
		std::cout << cast << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        float cast;

        std::cout << "float: ";
        cast = static_cast<float>(convert);
		std:: cout << std::fixed << std::setprecision(1) << (cast) << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        double cast;

        std::cout << "double: ";
        cast = static_cast<double>(convert);
        std::cout << cast << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}