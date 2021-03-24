#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	std:: cout << "____________1st___________" << std::endl;
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std:: cout << "____________2st___________" << std::endl;

	Enemy* a = new SuperMutant();

	me->attack(a);
	me->attack(a);
	me->attack(a);
	me->attack(a);
	me->attack(a);
	std::cout << *me;
	me->equip(pf);
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(a);
	me->attack(a);
	me->attack(a);
	delete me;
	delete pr;
	delete pf;
	return 0;
}