#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	srand(time(0));
	_hitPoints = 60;
	_maxHitPoints = 60;
	_armor = 0;
	_rangedDamage = 5;
	_meleeDamage = 60;
	_energy = 120;
	_maxEnergy = 120;
	_type = "<NN7J-TP> ";
	_name = "Ju Lao";
	std::cout << _type << _name << " For the Robo-Shaolin!" << std::endl;
}

NinjaTrap::NinjaTrap (const std::string& n) : ClapTrap()
{
	_name = n;
    srand(time(0));
    _hitPoints = 60;
    _maxHitPoints = 60;
    _armor = 0;
    _rangedDamage = 5;
    _meleeDamage = 60;
    _energy = 120;
    _maxEnergy = 120;
    _type = "<NN7J-TP> ";
    std::cout << _type << _name << " For the Robo-Shaolin!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "<NN7J-TP> " << _name << ": I'll be back!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other)
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
	std::cout << "NinjaTrap battle unit duplicated" << std::endl;
}


NinjaTrap &NinjaTrap::operator=(NinjaTrap const &other)
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

void NinjaTrap::ninjaShoebox(FragTrap & target)
{
	if (_energy >= 30)
	{
		std::cout << "<NN7J-TP> " << _name << " attacks FR4G-TP "
				  << target.getName() << " by tickling it until it can't breath!" << std::endl;
		_energy -= 30;
	}
	else
		std:: cout << _type << _name << " out of energy!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & target)
{
	if (_energy >= 30)
	{
		std::cout << "<NN7J-TP> " << _name << " attacks <SC5V-TP> "
				  << target.getName() << " let mee iiiiiiiiiin!" << std::endl;
		_energy = 30;
	}
	else
		std:: cout << _type << _name << " out of energy!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
	if (_energy >= 30)
	{
		std::cout << "<NN7J-TP> " << _name << " attacks <NN7J-TP> "
				  << target._name << " only ninja can beat ninja!" << std::endl;
		_energy -= 30;
	}
	else
		std:: cout << _type << _name << " out of energy!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap & target)
{
	if (_energy >= 30)
	{
		std::cout << "<NN7J-TP> " << _name << " attacks <CL6P-TP> "
				  << target.getName() << " throwing fire shuriken" << std::endl;
		_energy -= 30;
	}
	else
		std:: cout << _type << _name << " out of energy!" << std::endl;
}



