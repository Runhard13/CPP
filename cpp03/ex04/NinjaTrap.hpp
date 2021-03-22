#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap (const std::string& n);
		NinjaTrap(NinjaTrap const &other);
		~NinjaTrap();

		void ninjaShoebox(FragTrap & target);
		void ninjaShoebox(ClapTrap & target);
        void ninjaShoebox(ScavTrap & target);
		void ninjaShoebox(NinjaTrap & target);

		NinjaTrap &operator=(NinjaTrap const &other);

};
