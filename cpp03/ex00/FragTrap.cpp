#include "FragTrap.hpp"

FragTrap::FragTrap() : _hitPoints(100), _maxHitPoints(100), _energy(100), _maxEnergy(100), _level(1),
_meleeDamage(30), _rangedDamage(20), _armor(5)
{
	_name = "Destroyer";
	std::cout << _name << "combat code compiled successfully" << std::endl;
}

FragTrap::FragTrap(const std::string& n) : _hitPoints(100), _maxHitPoints(100), _energy(100), _maxEnergy(100), _level(1),
                       _meleeDamage(30), _rangedDamage(20), _armor(5)
{
    _name = n;
    std::cout << _name << "combat code compiled successfully" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
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
    std::cout << "I'm dead now" << std::endl;
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
    std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangedDamage << "points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
    std::cout << "FR4G-TP " << _name << " attacks " << target << " at melee, causing " << _meleeDamage << "points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    int current_hp = _hitPoints;
    int damage_taken;
    int absorbed;

    absorbed = _armor * 2;
    damage_taken = amount - absorbed;
    if (damage_taken < 0)
    {
        damage_taken = 0;
        absorbed = amount;
    }
    if (current_hp < damage_taken)
    {
        damage_taken = current_hp;
    }
    _hitPoints = current_hp - damage_taken;

    std::cout << "FR4G-TP " << _name << " attack deals " << damage_taken << " damage. " << absorbed << " damage absorbed "
                                                                                                       "by armor" << std::endl;
}

