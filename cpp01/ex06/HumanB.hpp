#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;
public:
	void attack();
	void setWeapon(Weapon &w);
	HumanB(const std::string& n);
};

#endif //CPP_HUMANB_HPP
