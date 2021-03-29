#include "Array.hpp"
#include <iostream>

template <typename T>
void	print(Array<T> &t)
{
	for (unsigned int i = 0 ; i < t.size() ; i++)
		std::cout << t[i] << std::endl;
	std::cout << "___________" << std::endl;
}

int main()
{

	Array<int> test(5);
	Array<char> test2(5);
	Array <char> test3;
	std::cout << "*Initialized values*" << std::endl;
	print(test);
	print(test2);

	std::cout << "*Operator []*" << std::endl;
	test[0] = 4444444;
	test2[3] = 'f';
	print(test);
	print(test2);
	std::cout << test[0] << std::endl;
	std::cout << test2[3] << std::endl;

	std::cout << "*Size*" << std::endl;
	std::cout << test.size() << std::endl;
	std::cout << test2.size() << std::endl;
	try
	{
		Array<int> test4(3);
		std::cout << "*Initialized values*" << std::endl;
		test4[500];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}