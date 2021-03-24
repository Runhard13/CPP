#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(Cure const &other);
		virtual ~Cure();

		Cure &operator=(Cure const &other);

		AMateria *clone() const;
		void use(ICharacter &target);
};
