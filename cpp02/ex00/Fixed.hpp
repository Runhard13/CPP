#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>

class Fixed
{
	private:
	int _fixedPointValue;
	static const int _numFracBits = 8;

	public:
		Fixed();
		Fixed(Fixed const &other);
		~Fixed();

		Fixed &operator=(Fixed const &other);

		int getRawBits() const;
		void setRawBits( int const raw );
};
