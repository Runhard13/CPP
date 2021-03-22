#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	srand(time(0));
	_armor = 3;
	_rangedDamage = 15;
	_meleeDamage = 20;
	_energy = 50;
	_maxEnergy = 50;
	_type = "<SC5V-TP> ";
	_name = "Gend";
	std::cout << _type << _name << ": you shall not pass!" << std::endl;
}

ScavTrap::ScavTrap (const std::string& n) : ClapTrap()
{
	_name = n;
	_type = "<SC5V-TP> ";
    srand(time(0));
    _armor = 3;
    _rangedDamage = 15;
    _meleeDamage = 20;
    _energy = 50;
    _maxEnergy = 50;
    _type = "<SC5V-TP> ";
	std::cout << _type << _name << ": you shall not pass!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "<SC5V-TP> " << _name << ": I don't want to play with you anymore!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
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
	std::cout << "ScavTrap battle unit duplicated" << std::endl;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &other)
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


void ScavTrap::challengeNewcomer()
{
	std::string randomChallenge[5] = {
			"don't be душным for 2 month!", "make 10 push ups", "tell a joke",
			"put mask on and wash your hands!", "write cub3d in assembly"
	};
	srand(time(0) + rand());
	int random = rand() % 5;

	if (_energy >= 25)

    {
	    std::cout << _type << _name << " challenges you to " << randomChallenge[random] << std::endl;
	    _energy -= 25;
    }
	else
	    std:: cout << _type << _name << " out of energy!" << std::endl;

}

