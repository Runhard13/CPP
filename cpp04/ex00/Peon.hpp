#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
private:

public:
	Peon();
	Peon(const std:: string& name);
	Peon(Peon const &other);
	virtual ~Peon();

	void getPolymorphed() const;

	Peon &operator=(Peon const &other);

};
