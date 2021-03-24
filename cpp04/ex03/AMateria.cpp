#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
	_xp = 0;
	_type = type;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

AMateria::~AMateria()
{
}

void AMateria::use(ICharacter& target)
{
	if (_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria & AMateria::operator=(AMateria const &other)
{
	std::cout << "Assignment operator called" << std::endl;
	_type= other._type;
	_xp = other._xp;
	return *this;
}

void AMateria::increaseXP()
{
	_xp += 10;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

std::string const &AMateria::getType() const
{
	return _type;
}
