#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap (const std::string& n);
		ScavTrap(ScavTrap const &other);
		~ScavTrap();

		void challengeNewcomer();

		ScavTrap &operator=(ScavTrap const &other);

};
