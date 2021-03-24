#include "AWeapon.hpp"

//constructors
AWeapon::AWeapon()
{

}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    _name = name;
    _apCost = apcost;
    _damage = damage;
}

AWeapon::AWeapon(AWeapon const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

//destructors
AWeapon::~AWeapon()
{

}

//overloads
AWeapon &AWeapon::operator=(AWeapon const &other)
{
    std::cout << "Assignment operator called" << std::endl;
    _name = other.getName();
    _apCost = other.getAPCost();
    _damage = other.getDamage();
	return(*this);
}

//methods
std::string AWeapon::getName() const
{
    return _name;
}

int AWeapon::getAPCost() const
{
    return _apCost;
}

int AWeapon::getDamage() const
{
    return _damage;
}