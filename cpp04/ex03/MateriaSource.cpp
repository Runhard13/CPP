#include "AMateria.hpp"

AMateria::AMateria(/* args */)
{
}

AMateria::AMateria(std::string const & type) :
		xp_(0),
		type(type)
{
}

AMateria::AMateria(const AMateria &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

AMateria::~AMateria()
{
}

void AMateria::use(ICharacter& target)
{
	if (this->type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (this->type.compare("cure") == 0)
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria & AMateria::operator=(AMateria const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
		this->xp_ = rhs.getXP();
	}
	return *this;
}

void AMateria::increaseXP()
{
	this->xp_ += 10;
}

unsigned int AMateria::getXP() const
{
	return this->xp_;
}

std::string const &AMateria::getType() const
{
	return this->type;
}


