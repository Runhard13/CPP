#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap (const std::string& n);
		NinjaTrap(NinjaTrap const &other);
		~NinjaTrap();

        void ninjaShoebox(const ClapTrap & target);
        void ninjaShoebox(const FragTrap & target);
        void ninjaShoebox(const ScavTrap & target);
        void ninjaShoebox(const NinjaTrap & target);

		NinjaTrap &operator=(NinjaTrap const &other);

};
