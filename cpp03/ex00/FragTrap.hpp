#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include <cstdlib>

class FragTrap
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
		FragTrap();
		FragTrap(const std:: string& n);
		FragTrap(FragTrap const &other);
		~FragTrap();

		void rangedAttack (std::string const & target);
		void meleeAttack (std::string const & target);
		void takeDamage (unsigned int amount);
		void beRepaired (unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);


		FragTrap &operator=(FragTrap const &other);

};
