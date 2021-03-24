#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine & src);
	virtual ~TacticalMarine();

	TacticalMarine & operator=(const TacticalMarine & src);

	ISpaceMarine*	clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};
