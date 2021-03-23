#include "Victim.hpp"

Victim::Victim()
{

}

Victim::Victim(const std::string& name)
{
	_name = name;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &other)
{
	*this = other;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name  << " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator=(Victim const &other)
{
	_name = other._name;
	return(*this);
}

std::string Victim::getName() const
{
	return _name;
}

std::ostream & operator<<(std::ostream &os, Victim const &other)
{
	os << "I am " << other.getName() << ", and I like otters!" << std::endl;
	return (os);
}

void Victim:: getPolymorphed()const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}