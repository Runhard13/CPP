#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>

class AWeapon
{
private:
    AWeapon();

protected:
    std::string     _name;
    int             _damage;
    int             _apCost;

public:
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(AWeapon const &other);
    virtual ~AWeapon();

    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;

    AWeapon &operator=(AWeapon const &other);

};
