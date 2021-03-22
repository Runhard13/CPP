#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

private:
	using FragTrap::_hitPoints;
	using FragTrap::_maxHitPoints;
	using NinjaTrap::_energy;
	using NinjaTrap::_maxEnergy;
	using NinjaTrap::_meleeDamage;
	using FragTrap::_rangedDamage;
	using FragTrap::_armor;
public:
	SuperTrap();
	SuperTrap(const std::string& n);
	SuperTrap(SuperTrap const &other);
	~SuperTrap();

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	SuperTrap &operator=(SuperTrap const &other);
};
