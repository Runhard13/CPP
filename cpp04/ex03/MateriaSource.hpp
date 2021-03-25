#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
        AMateria* _materia[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		virtual ~MateriaSource();

		MateriaSource &operator=(MateriaSource const &other);

        void learnMateria(AMateria *ptr);

        AMateria *createMateria(const std::string &type);
};
