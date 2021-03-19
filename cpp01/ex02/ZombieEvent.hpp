

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
public:
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	void	randomChump();
	ZombieEvent();
private:
	std::string	_setType;

};
#endif
