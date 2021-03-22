#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std:: string& n);
    FragTrap(FragTrap const &other);
    ~FragTrap();

    void vaulthunter_dot_exe(std::string const & target);


    FragTrap &operator=(FragTrap const &other);

};
