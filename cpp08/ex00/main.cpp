#include "easyfind.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>

int	main()
{

    srand(time(0));
    int numberToFind;
    std::vector<int> test;

    test.reserve(100);
    for ( int i = 0 ; i < 100 ; i++ )
    {
        test.push_back(random() % 200);
    }

    int		pos;

    try
    {
        numberToFind = rand() % 200;
        pos = easyfind(test, numberToFind);
        std::cout << "Found " << numberToFind << " index - " << pos << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    try
    {
        numberToFind = (rand() % 200 * rand() % 12 - rand()/12) % 200;
        pos = easyfind(test, numberToFind);
        std::cout << "Found " << numberToFind << " . Index - " << pos << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    try
    {
        numberToFind = (rand() % 200 + rand() % 200 + rand() % 200) % 200;
        pos = easyfind(test, numberToFind);
        std::cout << "Found " << numberToFind << ". Index - " << pos << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    return (0);
}