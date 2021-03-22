#include "FragTrap.hpp"

FragTrap::FragTrap() : _hitPoints(100), _maxHitPoints(100), _energy(100), _maxEnergy(100), _level(1),
_meleeDamage(30), _rangedDamage(20), _armor(5)
{
	srand(time(0));
	_name = "Destroyer";
	std::cout << "FR4G-TP " << _name << " combat code compiled successfully" << std::endl;
}

FragTrap::FragTrap(const std::string& n) : _hitPoints(100), _maxHitPoints(100), _energy(100), _maxEnergy(100), _level(1),
                       _meleeDamage(30), _rangedDamage(20), _armor(5)
{
    _name = n;
	std::cout << "FR4G-TP " << _name << " combat code compiled successfully" << std::endl;
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
    std::cout << "FR4G-TP " << _name << ": Argh arghargh stop gurgle gurglegurgle urgh... stop it." << std::endl;
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

void FragTrap::rangedAttack(const std::string &target)
{
    std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangedDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
    std::cout << "FR4G-TP " << _name << " attacks " << target << " at melee, causing " << _meleeDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

    std::cout << "FR4G-TP " << _name << " takes " << damage_taken << " damage! (" << absorbed
    << " damage absorbed by armor";
    if (exceed)
    	std::cout << ". Exceed  max hp by " << exceed << " damage";
    std::cout << "). HP: " << _hitPoints << std::endl;

}

void FragTrap::beRepaired(unsigned int amount)
{
	int current_hp = _hitPoints;
	int overheal = 0;

	if ((amount + current_hp) > _maxHitPoints)
	{
		overheal = amount + current_hp - _maxHitPoints;
		amount = _maxHitPoints - current_hp;
	}

	_hitPoints = current_hp + amount;

	std::cout << "FR4G-TP " << _name << " repaired for " << amount << " hit points! ";
	if (overheal)
		std::cout << "(Overheal: " << overheal << " points) ";
	std::cout <<  "HP: " << _hitPoints << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	atks [5] = { "finger of death", "two fingers of death",
								"immolate improved", "strange robot thing", "box with snakes" };

	if (_energy >= 25)
	{
		_energy -= 25;
		std::cout << "FR4G-TP " << _name << " uses his ";
		std::cout << atks[rand() % 5] << " on " << target << "!" << std::endl;
	}
	else
		std::cout << "FR4G-TP " << _name << " is out of energy!" << std::endl;
}