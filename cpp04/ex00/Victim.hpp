#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "iostream"

class Victim
{
protected:
	Victim();
	std::string _name;

public:
	Victim(const std::string& name);
	Victim(Victim const &other);
	virtual ~Victim();

	std::string getName() const;

	virtual void getPolymorphed()const;

	Victim &operator=(Victim const &other);

};

std::ostream & operator<<(std::ostream &os, Victim const &other);