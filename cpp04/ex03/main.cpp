#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

int main()
{
    ICharacter* hero = new Character("Sanya");
    ICharacter* villian = new Character("Alladdin");
    IMateriaSource* source = new MateriaSource();

    std::cout << "__________Basic functions testing__________" << std::endl;
    source->learnMateria(new Ice());
    source->learnMateria(new Cure());
    AMateria* ice = source->createMateria("ice");
    AMateria* cure = source->createMateria("cure");
    hero->equip(ice);
    hero->equip(cure);
    hero->use(0, *villian);
    hero->use(1, *hero);
    std:: cout << std::endl;

    std::cout << "__________Materia XP testing__________" << std::endl;
    std::cout << "Ice current XP - " << ice->getXP() << std::endl;
    std::cout << "Cure current XP - " << cure->getXP() << std::endl;
    hero->use(0, *villian);
    hero->use(1, *hero);
    std::cout << "Ice current XP - " << ice->getXP() << std::endl;
    std::cout << "Cure current XP - " << cure->getXP() << std::endl;
    hero->use(0, *villian);
    hero->use(1, *hero);
    std::cout << "Ice current XP - " << ice->getXP() << std::endl;
    std::cout << "Cure current XP - " << cure->getXP() << std::endl;
    hero->use(1, *hero);
    hero->use(1, *hero);
    hero->use(1, *hero);
    hero->use(1, *hero);
    hero->use(1, *hero);
    hero->use(1, *hero);
    hero->use(1, *hero);
    std::cout << "Ice current XP - " << ice->getXP() << std::endl;
    std::cout << "Cure current XP - " << cure->getXP() << std::endl;

    std::cout << "__________Inventory testing__________" << std::endl;
    AMateria* ice2 = source->createMateria("ice");
    AMateria* ice3 = source->createMateria("ice");
    AMateria* cure2 = source->createMateria("cure");
    hero->equip(ice2);
    hero->equip(ice3);
    hero->equip(cure);
    hero->unequip(3);
    hero->equip(cure2);
    std::cout << "Nothing should be printed for next tests" << std::endl;
    hero->use(55, *villian);
    hero->equip(0);


	return 0;
}