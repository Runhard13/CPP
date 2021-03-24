#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &other) : Enemy(80, "Rad Scorpion")
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &other)
{
    std::cout << "Assignment operator called" << std::endl;
    _type = other.getType();
    _hp = other.getHP();
    return(*this);
}

