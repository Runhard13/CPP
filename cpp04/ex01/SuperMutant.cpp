#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other) : Enemy(170, "Super Mutant")
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &other)
{
    std::cout << "Assignment operator called" << std::endl;
    _type = other.getType();
    _hp = other.getHP();
    return(*this);
}

void SuperMutant::takeDamage(int dmg)
{
    Enemy::takeDamage(dmg - 3);
}

