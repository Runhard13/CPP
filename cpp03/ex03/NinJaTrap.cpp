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
    std::cout << _type << _name << "For the Robo-Shaolin!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "<NN7J-TP> " << _name << ": It was just a warmup!" << std::endl;
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
	std::cout << "NinjaTrap battle unit duplicated" << std::endl;
}


NinjaTrap &NinjaTrap::operator=(NinjaTrap const &other)
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

void	NinjaTrap::ninjaShoebox(const ClapTrap & target)
{
    (void)target;
    if (_energy >= 25)
    {
        _energy-= 25;
        std::cout << _type << " " << _name << " want to talk with ";
        std::cout << "ClapTrap" << std::endl;
    }
}

void	NinjaTrap::ninjaShoebox(const FragTrap & target)
{
    (void)target;
    if (_energy >= 25)
    {
        _energy-= 25;
        std::cout << _type << " " << _name << " attacks";
        std::cout << "FragTrap with sharp shurriken!" << std::endl;
    }
}

void	NinjaTrap::ninjaShoebox(const ScavTrap & target)
{
    (void)target;
    if (_energy >= 25)
    {
        _energy-= 25;
        std::cout << _type << " " << _name << " attacks ";
        std::cout << "ScavTrap with Super Secret Ninja Slap!" << std::endl;
    }
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap & target)
{
    (void)target;
    if (_energy >= 25)
    {
        _energy-= 25;
        std::cout << _type << " " << _name << " detach ";
        std::cout << "NinjaTrap from charger!" << std::endl;
    }
}



