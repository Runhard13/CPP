#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include <iostream>
#include <cstdlib>

class ClapTrap
{
	protected:
	int _hitPoints;
	int _maxHitPoints;
	int _energy;
	int _maxEnergy;
	int _level;
	std::string _name;
	int _meleeDamage;
	int _rangedDamage;
	int _armor;
	std::string _type;

	public:
		ClapTrap();
		ClapTrap(ClapTrap const &other);
		~ClapTrap();

		void rangedAttack (std::string const & target);
		void meleeAttack (std::string const & target);
		void takeDamage (unsigned int amount);
		void beRepaired (unsigned int amount);
		std::string  getName();

		ClapTrap &operator=(ClapTrap const &other);

};
