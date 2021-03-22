#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	srand(time(0));
	_name = "Destroyer";
	_energy = 100;
	_maxEnergy = 100;
	_meleeDamage = 30;
	_rangedDamage = 20;
	_armor = 5;
	_type = "<FR4G-TP> ";
	std::cout << _type << _name << " combat code compiled successfully" << std::endl;
}

FragTrap::FragTrap(const std::string& n) : ClapTrap()
{
    _name = n;
    srand(time(0));
    _energy = 100;
    _maxEnergy = 100;
    _meleeDamage = 30;
    _rangedDamage = 20;
    _armor = 5;
    _type = "<FR4G-TP> ";
    std::cout << _type << _name << " combat code compiled successfully" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
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
    std::cout << "FragTrap battle unit duplicated" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << _type << _name << " destructed" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	atks [5] = { "finger of death", "two fingers of death",
								"immolate improved", "strange robot thing", "box with snakes" };

	if (_energy >= 25)
	{
		_energy -= 25;
		std::cout << "FR4G-TP <" << _name << "> uses his ";
		std::cout << atks[rand() % 5] << " on " << target << "!" << std::endl;
	}
	else
		std::cout << "FR4G-TP <" << _name << "> is out of energy!" << std::endl;
}