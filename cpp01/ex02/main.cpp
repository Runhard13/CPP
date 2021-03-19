#include "ZombieEvent.hpp"

int	main()
{
	ZombieEvent	apocalypse;
	Zombie		*zombie;

	apocalypse.setZombieType("Vegan");

	zombie = apocalypse.newZombie("Anya");
	zombie->announce();
	delete zombie;
	zombie = apocalypse.newZombie("Vadim");
	zombie->announce();
	delete zombie;

	std::cout << std::endl;
	apocalypse.setZombieType("Hipster");

	apocalypse.randomChump();
	apocalypse.randomChump();
	apocalypse.randomChump();
	apocalypse.randomChump();
	apocalypse.randomChump();

	return (0);
}
