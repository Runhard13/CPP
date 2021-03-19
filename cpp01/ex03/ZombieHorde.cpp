#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	_zombies = new Zombie[n];
	_numOfZombies = n;
}

ZombieHorde::~ZombieHorde()
{
	delete [] _zombies;
	std::cout << "All zombies was deleted" << std::endl;
}

void ZombieHorde::announce()
{
	int i = 0;

	while(i < _numOfZombies)
	{
		_zombies[i].announce();
		i++;
	}
}