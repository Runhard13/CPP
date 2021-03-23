#include "Acolyte.hpp"

Acolyte::Acolyte()
{

}

Acolyte::Acolyte(const std::string& name) : Victim(name)
{
	std::cout << "My life for Ner'zhul." << std::endl;
}

Acolyte::Acolyte(Acolyte const &other)
{
	*this = other;
}

Acolyte::~Acolyte()
{
	std::cout << "Keeeeeek.." << std::endl;
}

void Acolyte::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a tiny pig!" << std::endl;
}

Acolyte &Acolyte::operator=(Acolyte const &other)
{
	_name = other._name;
	return(*this);
}

