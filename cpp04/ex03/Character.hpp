#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>

class Character
{
	private:
		Character();
	public:
		Character(Character const &other);
		~Character();

		Character &operator=(Character const &other);

};
