#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Acolyte.hpp"


int main()
{
	std::cout << "__________________Appearing__________________" << std::endl;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Acolyte sanya("Sanya");
	std::cout << std::endl;

	std::cout << "__________________<< Overload__________________" << std::endl;
	std::cout << robert << jim << joe << sanya;
	std::cout << std::endl;

	std::cout << "__________________Polymorph__________________" << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(sanya);
	std::cout << std::endl;

	std::cout << "__________________Exit__________________" << std::endl;

	return 0;
}