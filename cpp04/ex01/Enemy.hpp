#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>

class Enemy
{
private:
    Enemy();

protected:
    int             _hp;
    std::string     _type;

public:

    Enemy(Enemy const &other);
    Enemy(int hp, std::string const & type);
    virtual ~Enemy();

    int getHP() const;
    std::string getType() const;

    virtual void takeDamage(int damage);
    Enemy &operator=(Enemy const &other);

};
