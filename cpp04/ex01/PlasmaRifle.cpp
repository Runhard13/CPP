#include "PlasmaRifle.hpp"

//constructors
PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other) : AWeapon("Plasma Rifle", 5, 21)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

//destructor
PlasmaRifle::~PlasmaRifle()
{
}

//overload
PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &other)
{
    std::cout << "Assignation operator called" << std::endl;
    _name = other._name;
    _damage = other._damage;
    _apCost = other._apCost;
	return(*this);
}

//methods
void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;

}

