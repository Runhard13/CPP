#include "Enemy.hpp"

//constructors
Enemy::Enemy()
{
}

Enemy::Enemy(int hp, const std::string &type)
{
    _hp = hp;
    _type = type;
}

Enemy::Enemy(Enemy const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

//destructor
Enemy::~Enemy()
{
}

//overload
Enemy &Enemy::operator=(Enemy const &other)
{
    std::cout << "Assignment operator called" << std::endl;
    _type = other.getType();
    _hp = other.getHP();
    return(*this);
}

//methods

int Enemy::getHP() const {
    return _hp;
}

std::string Enemy::getType() const {
    return _type;
}

void Enemy::takeDamage(int damage)
{
    int currentHP = getHP();

    if (!currentHP)
    	return;
    if (damage < 0)
        return;
    if (damage > currentHP)
    	damage = currentHP;
    _hp = currentHP - damage;
    std::cout << _type << " takes " << damage << " points of damage! HP: " << _hp << std::endl;
}
