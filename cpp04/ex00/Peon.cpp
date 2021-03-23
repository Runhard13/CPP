#include "Peon.hpp"

Peon::Peon()
{

}

Peon::Peon(const std::string& name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &other)
{
	*this = other;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}

Peon &Peon::operator=(Peon const &other)
{
	_name = other._name;
	return(*this);
}

