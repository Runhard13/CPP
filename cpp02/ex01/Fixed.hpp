#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include <cmath>

class Fixed
{
	private:
	int _fixedPointValue;
	static const int _numFracBits = 8;

	public:
		Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const &other);
		~Fixed();

		Fixed &operator=(Fixed const &other);

		int getRawBits() const;
		void setRawBits( int const raw );
		float toFloat() const;
		int toInt() const;

};

std::ostream & operator<<(std::ostream & o, Fixed const & other);
