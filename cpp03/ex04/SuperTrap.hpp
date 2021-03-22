#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
	using FragTrap::vaulthunter_dot_exe;

	public:
		SuperTrap();
		SuperTrap(SuperTrap const &other);
		~SuperTrap();

		SuperTrap &operator=(SuperTrap const &other);

};
