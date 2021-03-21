#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	srand(time(0));
	_hitPoints = 100;
	_armor = 3;
	_rangedDamage = 15;
	_meleeDamage = 20;
	_level = 1;
	_energy = 50;
	_maxEnergy = 50;
	_maxHitPoints = 100;
	_type = "<5C4V-TP> ";
	_name = "Gend";
	std::cout << _type << _name << ": you shall not pass!" << std::endl;
}

ScavTrap::ScavTrap (const std::string& n) : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, n, "<5C4V-TP> ")
{
	_name = n;
	std::cout << _type << _name << ": you shall not pass!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _type << _name << " destructed" << std::endl;
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
	std::cout << "ScavTrap battle unit duplicated" << std::endl;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &other)
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


void ScavTrap::challengeNewcomer()
{
	std::string randomChallenge[5] = {
			"don't be душным for 2 month!", "make 10 push ups", "tell a joke",
			"put mask on and wash your hands!", "write cub3d in assembly"
	};
	srand(time(0) + rand());
	int random = rand() % 5;

	std::cout << _type << _name << " challenges you to "
			  << randomChallenge[random] << std::endl;
}

