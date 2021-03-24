#include "PowerFist.hpp"

//constructors
PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &other) :AWeapon("Power Fist", 8, 50)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

//destructor
PowerFist::~PowerFist()
{
}

//overload
PowerFist &PowerFist::operator=(PowerFist const &other)
{
    std::cout << "Assignation operator called" << std::endl;
    _name = other._name;
    _damage = other._damage;
    _apCost = other._apCost;
    return(*this);
}

//methods
void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
