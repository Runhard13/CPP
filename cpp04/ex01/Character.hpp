#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <sstream>

class Character
{
private:
    Character();
    int             _ap;
    AWeapon         *wep;
    std::string     _name;

public:
    Character(std::string name);
    Character(Character const &other);
    ~Character();

    void recoverAP();
    void equip(AWeapon* pushka);
    void attack(Enemy*);

    AWeapon* getWep() const;
    std::string getName() const;
    int getAP() const;

    Character &operator=(Character const &other);
};

std::ostream & operator<<(std::ostream & os, Character const & other);
