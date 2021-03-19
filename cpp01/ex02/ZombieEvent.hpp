

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
public:
	void	setZombieType(const std::string& type);
	Zombie	*newZombie(const std::string& name);
	void	randomChump();
	ZombieEvent();
private:
	std::string	_setType;

};
#endif
