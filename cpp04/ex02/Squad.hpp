#pragma once

/*
**==========================
**		Includes
**==========================
*/


#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
public:
	Squad();
	Squad(const Squad & src);
	virtual ~Squad();

	Squad & operator=(const Squad & src);

	int				getCount() const;
	ISpaceMarine*	getUnit(int n) const;
	int				push(ISpaceMarine* ptr);

private:
	ISpaceMarine**	_units;
	int				_unitsCount;
};