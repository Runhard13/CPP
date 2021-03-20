#include "FragTrap.hpp"

FragTrap::FragTrap() : _hitPoints(100)
{
	_name = "FR4G-TP";
	std::cout << _name << "combat code compiled successfully" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{

}

FragTrap::~FragTrap()
{

}

FragTrap &FragTrap::operator=(FragTrap const &other)
{


	return(*this);
}

