#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include <iostream>
#include <cstdlib>

class ScavTrap
{
	private:
	int _hitPoints;
	int _maxHitPoints;
	int _energy;
	int _maxEnergy;
	int _level;
	std::string _name;
	int _meleeDamage;
	int _rangedDamage;
	int _armor;

	public:
		ScavTrap();
		ScavTrap (const std::string& n);
		ScavTrap(ScavTrap const &other);
		~ScavTrap();

		void rangedAttack (std::string const & target);
		void meleeAttack (std::string const & target);
		void takeDamage (unsigned int amount);
		void beRepaired (unsigned int amount);
		void challengeNewcomer();

		ScavTrap &operator=(ScavTrap const &other);

};
