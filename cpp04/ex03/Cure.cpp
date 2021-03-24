#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &other) : AMateria("cure")
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Cure::~Cure()
{
}

Cure & Cure::operator=(Cure const &other)
{
	std::cout << "Assignment operator called" << std::endl;
	_xp = other._xp;
	return *this;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

