#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(const std::string& type)
{
	_setType = type;
}

Zombie*	ZombieEvent::newZombie(const std::string& name)
{
	Zombie *newZombie = new Zombie(name, _setType);
	return newZombie;
}

void	ZombieEvent::randomChump()
{
	std::string	randomNames[10] = {"Gulnaz", "Artur", "Olga", "Piotr", "Almaz",
									  "Jennifer", "Masha", "Platon", "Moo", "Kenny"};
	Zombie	randomZombie = Zombie(randomNames[rand() % 10], _setType);
	randomZombie.announce();
}

ZombieEvent::ZombieEvent()
{
	srand(time(0));
}
