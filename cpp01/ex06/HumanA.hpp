#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon;
public:
	HumanA(const std::string& n, Weapon& w);
	void attack();
};


#endif //CPP_HUMANA_HPP
