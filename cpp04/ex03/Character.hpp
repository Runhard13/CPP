#pragma once

/*
**==========================
**		Includes
**==========================
*/

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
        int _slot_id;
        std::string _name;
        AMateria* _materia[4];
		Character();
	public:
        Character(const std::string &name);
		Character(Character const &other);
		virtual ~Character();

		Character &operator=(Character const &other);

        void deleteMateria();
        AMateria *getMateria(int i) const;
        const std::string &getName() const;
        int getSlots() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};
