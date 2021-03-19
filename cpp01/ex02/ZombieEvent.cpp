#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	_setType = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name, this->_setType);
	return newZombie;
}

void	ZombieEvent::randomChump()
{
	std::string	randomNames[10] = {"Gulnaz", "Artur", "Olga", "Piotr", "Almaz",
									  "Jennifer", "Masha", "Platon", "Moo", "Kenny"};
	Zombie	randomZombie = Zombie(randomNames[rand() % 10], this->_setType);
	randomZombie.announce();
}

ZombieEvent::ZombieEvent()
{
	srand(time(0));
}
