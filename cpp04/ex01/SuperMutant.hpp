#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:

	public:
		SuperMutant();
		SuperMutant(SuperMutant const &other);
		virtual ~SuperMutant();

		void takeDamage(int damage);

		SuperMutant &operator=(SuperMutant const &other);

};
