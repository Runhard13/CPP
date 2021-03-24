#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

Character::Character()
{

}

Character::Character(std::string name) {
    _name = name;
    _ap = 40;
    wep = 0;
}

Character::Character(Character const &other)
{
    std::string type;
    _name = other._name;
    _ap = other._ap;
    if (other.wep)
    {
        type = other.wep->getName();
        if (type == "Plasma Rifle")
            wep =  new PlasmaRifle();
        else if (type == "Power Fist")
            wep = new PowerFist();
    }
}

Character::~Character()
{
    delete[] wep;
}

Character &Character::operator=(Character const &other)
{
    std::string type;
    if (&other != this)
    {
        _name = other._name;
        _ap = other._ap;
        if (other.wep)
        {
            type = other.wep->getName();
            if (type == "Plasma Rifle")
                wep =  new PlasmaRifle();
            else if (type == "Power Fist")
                wep = new PowerFist();
        }

    }

	return(*this);
}

void Character::recoverAP()
{
    _ap += 10;
    if (_ap > 40)
        _ap = 40;
}

void Character::equip(AWeapon *pushka) {
    wep = pushka;
}

void Character::attack(Enemy *enemy)
{
    const int weaponCost = wep->getAPCost();

    if (enemy && wep && _ap - weaponCost >= 0)
    {
        std::cout << _name << " attacks " << enemy->getType() << " with a " << getWep()->getName() << std::endl;
        wep->attack();
        enemy->takeDamage(wep->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
        _ap -=(weaponCost);
    }
    else
    {
        std::cout << _name << " does not have enough AP to attack!" << std::endl;
    }

}

std::ostream & operator<<(std::ostream & os, Character const & other)
{
    std::stringstream ss;

    if (other.getWep() != 0)
    {
        ss << other.getName() << " has " << other.getAP() << " AP and wields a "
           << other.getWep()->getName() << std::endl;
        os << ss.str();
    }
    else
    {
        ss << other.getName() << " has " << other.getAP() << " AP and is unarmed" << std::endl;
        os << ss.str();
    }
    return os;
}

AWeapon* Character::getWep() const
{
    return wep;
}

std::string Character::getName() const
{
    return _name;
}

int Character::getAP() const
{
    return _ap;
}
