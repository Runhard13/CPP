
#ifndef EX03_ZOMBIEHORDE_HPP
#define EX03_ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce();

private:
	int _numOfZombies;
	Zombie *_zombies;
};


#endif //EX03_ZOMBIEHORDE_HPP
