#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _hitPoints(100), _maxHitPoints(100), _energy(50), _maxEnergy(50), _level(1),
					   _meleeDamage(20), _rangedDamage(15), _armor(3)
{
	srand(time(0));
	_name = "Gend";
	std::cout << "SCV-TP <" << _name << ">: you shall not pass!" << std::endl;
}

ScavTrap::ScavTrap (const std::string& n) : _hitPoints(100), _maxHitPoints(100), _energy(50), _maxEnergy(50), _level(1),
											_meleeDamage(20), _rangedDamage(15), _armor(3)
{
	_name = n;
	std::cout << "SCV-TP " << _name << ": you shall not pass!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SCV-TP <" << _name << ": I don't want to play with you anymore!" << std::endl;
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

void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << "SCV-TP <" << _name << "> attacks " << target << " at range, causing " << _rangedDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "SCV-TP <" << _name << "> attacks " << target << " at melee, causing " << _meleeDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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

	std::cout << "SCV-TP <" << _name << "> takes " << damage_taken << " damage! (" << absorbed
			  << " damage absorbed by armor";
	if (exceed)
		std::cout << ". Exceed  max hp  by " << exceed << " damage";
	std::cout << "). HP: " << _hitPoints << std::endl;

}

void ScavTrap::beRepaired(unsigned int amount)
{
	int current_hp = _hitPoints;
	int overheal = 0;

	if ((amount + current_hp) > _maxHitPoints)
	{
		overheal = amount + current_hp - _maxHitPoints;
		amount = _maxHitPoints - current_hp;
	}

	_hitPoints = current_hp + amount;

	std::cout << "SCV-TP <" << _name << "> repaired for " << amount << " hit points! ";
	if (overheal)
		std::cout << "(Overheal: " << overheal << " points) ";
	std::cout <<  "HP: " << _hitPoints << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::string randomChallenge[5] = {
			"don't be душным for 2 month!", "make 10 push ups", "tell a joke",
			"put mask on and wash your hands!", "write cub3d in assembly"
	};
	srand(time(0) + rand());
	int random = rand() % 5;

	std::cout << "SCV-TP <" << _name << "> challenges you to "
			  << randomChallenge[random] << std::endl;
}

