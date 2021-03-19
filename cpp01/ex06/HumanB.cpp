#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& w)
{
	_weapon = &w;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string &n)
{
	_name = n;
}