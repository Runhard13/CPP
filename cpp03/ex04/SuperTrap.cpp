#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap("Standard SuperTrap"),
						 FragTrap("Standard SuperTrap"),
						 NinjaTrap("Standard SuperTrap")
{

}

SuperTrap::SuperTrap(SuperTrap const &other)
{

}

SuperTrap::~SuperTrap()
{

}

SuperTrap &SuperTrap::operator=(SuperTrap const &other)
{


	return(*this);
}

