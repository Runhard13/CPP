#include "Character.hpp"

Character::Character()
{
}

Character::Character(const std::string& name)
{
	_slot_id = 0;
	_name = name;
    _materia[0] = 0;
	_materia[1] = 0;
	_materia[2] = 0;
	_materia[3] = 0;
}

Character::Character(const Character &other)
{
	int i = 0;
    std::cout << "Copy constructor called" << std::endl;
    _name = other._name;
	deleteMateria();
	while (i < other._slot_id)
    {
	    if (other._materia[i] != 0)
	        _materia[i] = other._materia[i]->clone();
	    else
	        _materia[i] = 0;
	    i++;
    }
	while (i < 4)
    {
	    _materia[i] = 0;
	    i++;
    }
	_slot_id = other._slot_id;
	*this = other;
}

Character::~Character()
{
	deleteMateria();
}

void Character::equip(AMateria *m)
{
	if (!m)
	    return;
	if (_slot_id >= 4)
    {
	    std::cout << "can't equip, inventory is full" << std::endl;
	    return;
    }
	else
    {
        int i = 0;
        while(_materia[i] != 0)
            i++;
        std::cout << m->getType() << " now equipped in slot " << i << std::endl;
        _materia[i] = m;
        _slot_id++;
    }
}

void Character::unequip(int idx)
{
	if (idx < 4)
	{
        std::cout << _materia[idx]->getType() << " now unequipped from slot " << idx << std::endl;
		_materia[idx] = 0;
		_slot_id--;
	}
}

void Character::use(int idx, ICharacter& target)
{

    if (idx < 0 || idx >= _slot_id || !_materia[idx])
        return;
    else
        _materia[idx]->AMateria::use(target);
}

Character & Character::operator=(Character const &other)
{
	if (this != &other)
    {
        int i = 0;
        std::cout << "Assignment operator called" << std::endl;
        _name = other._name;
        deleteMateria();
        while (i < other._slot_id)
        {
            if (other._materia[i] != 0)
                _materia[i] = other._materia[i]->clone();
            else
                _materia[i] = 0;
            i++;
        }
        while (i < 4)
        {
            _materia[i] = 0;
            i++;
        }
        _slot_id = other._slot_id;
    }
	return *this;
}

void Character::deleteMateria()
{
	int i = 0;

	while (i < _slot_id)
    {
	    if (_materia[i] != 0)
        {
	        std::cout << _materia[i]->getType() << " from " << i << " slot was deleted" << std::endl;
	        delete _materia[i];
	        _materia[i] = 0;
        }
	    i++;
    }
}

int Character::getSlots() const
{
	return _slot_id;
}

AMateria *Character::getMateria(int i) const
{
	if (i < 4)
		return _materia[i];
	return 0;
}

std::string const &Character::getName() const
{
	return _name;
}


