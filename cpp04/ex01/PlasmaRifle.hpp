#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:

public:
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle const &other);
    virtual ~PlasmaRifle();
    void attack() const;
    PlasmaRifle &operator=(PlasmaRifle const &other);
};
