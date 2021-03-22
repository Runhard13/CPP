#include "SuperTrap.hpp"

SuperTrap::SuperTrap() :ClapTrap(), FragTrap(), NinjaTrap()
{
	std::cout << "DECEPTICONS! TRANSFORM AND RISE UP!" << std::endl;
	FragTrap f;
	NinjaTrap n;


	_name = "Megatron";
	_type = "<SU8R-TP >";
	_hitPoints = f.getHP();
	_maxHitPoints = f.getMaxHP();
	_maxEnergy = n.getMaxEnergy();
	_energy = n.getEnergy();
	_meleeDamage = n.getMelee();
	_rangedDamage = f.getRanged();
	_armor = f.getArmor();
	std::cout << "<SU8R-TP> " << _name << ": I WILL CRUSH YOU!" << std::endl;
}

SuperTrap::SuperTrap(const std::string& n) : FragTrap(), NinjaTrap()
{
	_name = n;
	_type = "<SU8R-TP> ";
	_hitPoints = FragTrap::_hitPoints;
	_maxHitPoints = FragTrap::_maxHitPoints;
	_maxEnergy = NinjaTrap::_maxEnergy;
	_energy = NinjaTrap::_energy;
	_meleeDamage = NinjaTrap::_meleeDamage;
	_rangedDamage = FragTrap::_rangedDamage;
	_armor = FragTrap::_armor;
	std::cout << "<SU8R-TP> " << _name << ": I WILL CRUSH YOU!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other)
{
	srand(time(0));
	_hitPoints = other._hitPoints;
	_armor = other._armor;
	_rangedDamage = other._rangedDamage;
	_meleeDamage = other._meleeDamage;
	_level = other._level;
	_energy = other._energy;
	_maxEnergy = other._maxEnergy;
	_maxHitPoints = other._maxEnergy;
	_name = other._name;
	std::cout << "SuperTrap battle unit duplicated" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "<SU8R-TP> " << _name << ": NOOO! NOOO!" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &other)
{
	std::cout << _name << " known as ";
	_hitPoints = other._hitPoints;
	_armor = other._armor;
	_rangedDamage = other._rangedDamage;
	_meleeDamage = other._meleeDamage;
	_level = other._level;
	_energy = other._energy;
	_maxEnergy = other._maxEnergy;
	_maxHitPoints = other._maxEnergy;
	_name = other._name;
	std::cout << other._name << std::endl;
	return(*this);
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

