#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "Big Brother";
	_type = "<CL6P-TP> ";
//	_armor = 5;
//	_rangedDamage = 10;
//	_meleeDamage = 10;
//	_level = 1;
//	_maxEnergy = 100;
//	_energy = 100;
//	_maxHitPoints = 100;
//	_hitPoints = 100;
	std::cout << _type << _name << ": ready for action!" << std::endl;
}

ClapTrap::ClapTrap (int hp,
					int maxhp,
					int energy,
					int maxEnergy,
					int lvl,
					int meleeDmg,
					int rangeDmg,
					int armor,
					std::string n,
					std::string t)
{
	_name = n;
	_type = t;
	_hitPoints = hp;
	_maxHitPoints = maxhp;
	_energy = energy;
	_maxEnergy = maxEnergy;
	_level = lvl;
	_meleeDamage = meleeDmg;
	_rangedDamage = rangeDmg;
	_armor = armor;

	std::cout << _type << _name << ": ready for action!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _type << _name << " destructed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
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
	std::cout << "ClapTrap battle unit duplicated" << std::endl;
}


ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << _name << " known as " << other._name << " from now" << std::endl;
	_hitPoints = other._hitPoints;
	_armor = other._armor;
	_rangedDamage = other._rangedDamage;
	_meleeDamage = other._meleeDamage;
	_level = other._level;
	_energy = other._energy;
	_maxEnergy = other._maxEnergy;
	_maxHitPoints = other._maxEnergy;
	return(*this);
}

void ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << _type << _name << " attacks " << target << " at range, causing " << _rangedDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << _type << _name << " attacks " << target << " at melee, causing " << _meleeDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int current_hp = _hitPoints;
	int damage_taken;
	int absorbed;
	int exceed = 0;

	absorbed = _armor * 2;
	damage_taken = amount - absorbed;
	if (damage_taken < 0)
	{
		damage_taken = 0;
		absorbed = amount;
	}
	if (current_hp < damage_taken)
	{
		exceed = damage_taken - current_hp;
		damage_taken = current_hp;
	}
	_hitPoints = current_hp - damage_taken;

	std::cout << _type << _name << " takes " << damage_taken << " damage! (" << absorbed
			  << " damage absorbed by armor";
	if (exceed)
		std::cout << ". Exceed  max hp  by " << exceed << " damage";
	std::cout << "). HP: " << _hitPoints << std::endl;
	if (_hitPoints == 0)
		std::cout << _type << _name << ": I don't want to play with you anymore!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int current_hp = _hitPoints;
	int overheal = 0;

	if ((amount + current_hp) > _maxHitPoints)
	{
		overheal = amount + current_hp - _maxHitPoints;
		amount = _maxHitPoints - current_hp;
	}

	_hitPoints = current_hp + amount;

	std::cout << _type << _name << " repaired for " << amount << " hit points! ";
	if (overheal)
		std::cout << "(Overheal: " << overheal << " points) ";
	std::cout <<  "HP: " << _hitPoints << std::endl;
}

