#include "Zombie.hpp"

void	Zombie::announce() const
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie (const std::string& Name, const std::string& Type)
{
	_name = Name;
	_type = Type;

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
	std::cout << "Zombie " << _name << " deleted\n" << std::endl;
}