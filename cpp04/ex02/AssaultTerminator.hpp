#pragma once

/*
**==========================
**		Includes
**==========================
*/


#include <iostream>

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &f);
	virtual ~AssaultTerminator();
	AssaultTerminator & operator=(AssaultTerminator const &rhs);
	ISpaceMarine* clone() const;

	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};
