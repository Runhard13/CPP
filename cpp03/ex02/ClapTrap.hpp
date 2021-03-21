#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include <iostream>

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
		ClapTrap (int hp,
			int maxhp,
			int energy,
			int maxEnergy,
			int lvl,
			int meleeDmg,
			int rangeDmg,
			int armor,
			std::string n,
			std::string t);
		ClapTrap (const std::string& n);
		ClapTrap(ClapTrap const &other);
		~ClapTrap();

		void rangedAttack (std::string const & target);
		void meleeAttack (std::string const & target);
		void takeDamage (unsigned int amount);
		void beRepaired (unsigned int amount);

		ClapTrap &operator=(ClapTrap const &other);

};
