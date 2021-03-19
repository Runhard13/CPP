#include "Weapon.hpp"

void Weapon::setType(const std::string& type)
{
	_type = type;
}

const std::string& Weapon::getType()
{
	return(_type);
}

Weapon::Weapon()
{
	_type = "hammer";
}
Weapon::Weapon(const std::string& type)
{
	_type = type;
}