#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
private:

public:
    PowerFist();
    PowerFist(PowerFist const &other);
    virtual ~PowerFist();
    void attack() const;
    PowerFist &operator=(PowerFist const &other);

};
