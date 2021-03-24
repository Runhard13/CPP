#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice();
		Ice(Ice const &other);
		virtual ~Ice();

		AMateria* clone() const;

		Ice &operator=(Ice const &other);
		void use(ICharacter &target);
};
