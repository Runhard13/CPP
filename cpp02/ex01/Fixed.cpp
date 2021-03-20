#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(i << _numFracBits);
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(f * (1 << _numFracBits)));
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Assignation called" << std::endl;
	_fixedPointValue = other.getRawBits();
	return(*this);
}

int Fixed::getRawBits() const
{
	return _fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

float Fixed::toFloat() const
{
	return (float)(_fixedPointValue / (float)(1 << _numFracBits));
}

int Fixed::toInt() const
{
	return (int)(_fixedPointValue >> _numFracBits);
}

std::ostream & operator<<(std::ostream &o, Fixed const &other)
{
	o << other.toFloat();
	return o;
}
