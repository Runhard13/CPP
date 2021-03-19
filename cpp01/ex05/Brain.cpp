#include "Brain.hpp"

std::string Brain::identify() const
{
	std::stringstream address;
	address << this;
	return address.str();
}

Brain::Brain(int a, int b)
{
	_weight = a;
	_iq = b;
}