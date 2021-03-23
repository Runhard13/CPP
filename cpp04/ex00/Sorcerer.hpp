#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	Sorcerer();
	std::string _name;
	std::string _title;

public:
	Sorcerer(const std::string& name, const std::string& title);
	Sorcerer(Sorcerer const &other);
	~Sorcerer();

	std::string getName() const;
	std::string getTitle() const;
	void polymorph(Victim const & v);

	Sorcerer &operator=(Sorcerer const &other);
};

std::ostream & operator<<(std::ostream &os, Sorcerer const &other);
