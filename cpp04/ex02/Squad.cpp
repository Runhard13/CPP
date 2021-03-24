#include "Squad.hpp"

int Squad::getCount() const
{
	return _unitsCount;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < _unitsCount && n >= 0)
		return _units[n];
	else
		return 0;
}

int				Squad::push(ISpaceMarine* ptr)
{
	int i;

	if (ptr == 0)
		return _unitsCount;
	i = 0;
	while (i < _unitsCount)
	{
		if (ptr == _units[i])
			return _unitsCount;
		i++;
	}

	ISpaceMarine**	tmp = new ISpaceMarine*[_unitsCount + 1];

	i = 0;
	while (i < _unitsCount)
	{
		tmp[i] = _units[i];
		i++;
	}
	tmp[i] = ptr;
	if (_unitsCount > 0)
		delete [] _units;
	_units = tmp;
	_unitsCount++;
	return _unitsCount;
}

Squad & Squad::operator=(const Squad & other)
{
	int	i;

	if (this != &other)
	{
		i = 0;
		while (i < _unitsCount)
			delete _units[i++];
		if (_unitsCount > 0)
			delete [] _units;

		i = 0;
		_unitsCount = other.getCount();
		_units = new ISpaceMarine*[_unitsCount];
		while (i < _unitsCount)
		{
			_units[i] = other.getUnit(i)->clone();
			i++;
		}
	}
	return *this;
}

Squad::Squad()
{
	_units = 0;
	_unitsCount = 0;
}

Squad::Squad(const Squad & src)
{
	int	i;

	i = 0;
	_unitsCount = src.getCount();
	_units = new ISpaceMarine*[_unitsCount];
	while (i < _unitsCount)
	{
		_units[i] = src.getUnit(i)->clone();
		i++;
	}
}

Squad::~Squad()
{
	int	i;

	i = 0;
	while (i < _unitsCount)
		delete _units[i++];
	if (_unitsCount > 0)
		delete [] _units;
}