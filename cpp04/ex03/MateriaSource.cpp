#include "MateriaSource.hpp"

void		MateriaSource::learnMateria(AMateria* ptr)
{
    int	i = 0 ;

   while (i < 4)
   {
       if (_materia[i] == 0)
       {
           _materia[i] = ptr;
           return;
       }
       i++;
   }
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
    int	i = 0;

    while (i < 4)
    {
        if (_materia[i] != 0 && _materia[i]->getType() == type)
            return(_materia[i]->clone());
        i++;
    }
    return 0;
}


MateriaSource & MateriaSource::operator=(const MateriaSource & other)
{
    int	i = 0;

    if (this != &other)
    {
        while (i < 4)
        {
            if (_materia[i])
                delete _materia[i];
            i++;
        }
        i = 0;
        while (i < 4)
        {
            if (other._materia[i])
                _materia[i] = other._materia[i]->clone();
            else
                _materia[i] = 0;
            i++;
        }
    }
    return (*this);
}

MateriaSource::MateriaSource()
{
    _materia[0] = 0;
    _materia[1] = 0;
    _materia[2] = 0;
    _materia[3] = 0;
}

MateriaSource::MateriaSource(const MateriaSource & other)
{
    int	i = 0;

    while (i < 4)
    {
        if (other._materia[i])
            _materia[i] = other._materia[i]->clone();
        else
            _materia[i] = 0;
        i++;
    }
}

MateriaSource::~MateriaSource()
{
    int	i = 0;

    while (i < 4)
    {
        if (_materia[i])
            delete _materia[i];
        i++;
    }
}


