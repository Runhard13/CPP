#include "Zombie.hpp"

void	Zombie::announce() const
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie (std::string Name, std::string Type)
{
	this->_name = Name;
	this->_type = Type;

}

Zombie::Zombie()
{
	std::string randomNames[8] = { "Semen", "Ilgiz", "Tanya", "Arina", "Ivan", "Aigul", "Nikolay", "Zubaida"};
	srand(time(0) + rand());
	int random = rand() % 8;

	_name = randomNames[random];
	_type = "Normal";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " deleted\n" << std::endl;
}