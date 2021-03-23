#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include "Victim.hpp"

class Acolyte : public Victim
{
private:

public:
	Acolyte();
	Acolyte(const std:: string& name);
	Acolyte(Acolyte const &other);
	virtual ~Acolyte();

	void getPolymorphed() const;

	Acolyte &operator=(Acolyte const &other);

};