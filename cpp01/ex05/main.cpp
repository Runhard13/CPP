#include "Human.hpp"

int main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	std::cout << std::endl;

	Human tom;
	std::cout << tom.identify() << std::endl;
	std::cout << tom.getBrain().identify() << std::endl;
}

