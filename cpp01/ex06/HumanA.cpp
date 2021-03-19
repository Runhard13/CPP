#include "HumanA.hpp"

HumanA::HumanA(const std::string& n, Weapon& w) : _weapon(w)
{
	_name = n;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}