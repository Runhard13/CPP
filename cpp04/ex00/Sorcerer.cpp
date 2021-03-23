#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	std::cout << "It's bad if you see that" << std::endl;
}

Sorcerer::Sorcerer(const std::string& name, const std::string& title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title <<  ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
	*this = other;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &other)
{
	_name = other._name;
	_title = other._title;
	return(*this);
}

std::string Sorcerer::getName() const
{
	return _name;
}

std::string Sorcerer::getTitle() const
{
	return _title;
}

void Sorcerer::polymorph(Victim const & v)
{
	v.getPolymorphed();
}


std::ostream & operator<<(std::ostream &os, Sorcerer const &other)
{
	os << "I am " << other.getName() << ", " << other.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}