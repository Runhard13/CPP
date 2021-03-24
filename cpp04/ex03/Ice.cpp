#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &other) : AMateria("ice")
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Ice::~Ice()
{
}

Ice & Ice::operator=(Ice const &other)
{
	std::cout << "Assignment operator called" << std::endl;
		_xp = other._xp;
	return *this;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
