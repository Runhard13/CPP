#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:

	public:
		RadScorpion();
		RadScorpion(RadScorpion const &other);
		virtual ~RadScorpion();

		RadScorpion &operator=(RadScorpion const &other);

};
