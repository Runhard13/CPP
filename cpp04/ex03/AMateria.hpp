#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
private:
	AMateria();

protected:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const & type);

	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);


	void increaseXP();
};
