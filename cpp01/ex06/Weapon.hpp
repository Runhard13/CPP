#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP

#include <iostream>

class Weapon
{
public:
	void setType(const std::string& type);
	const std::string& getType();
	Weapon(const std::string& type);
	Weapon();
private:
	std::string _type;
};


#endif //CPP_WEAPON_HPP
