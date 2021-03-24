#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{

	std::cout << "_________________________________Subject main_________________________________" << std::endl;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	std::cout << std::endl;

	std::cout << "_________________________________Additional Testing_________________________________" << std::endl;

	ISquad* sq = new Squad;

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
			sq->push(new TacticalMarine);
		else
			sq->push(new AssaultTerminator);
	}
	std::cout << "Units in team - " << sq->getCount() << std::endl;
	std::cout << "Trying add NULL unit, units in team now - " << sq->push(NULL) << std::endl;
	std::cout << "Trying add existing unit, units in team now - " << sq->push(sq->getUnit(5)) << std::endl;
	std::cout << std::endl;
	std::cout  << sq->push(sq->getUnit(3)->clone()) << "- units in team now because clone + push used, " << std::endl;
	std::cout << std::endl;

	std::cout << "Trying get pointer of [0] index unit - " << std::cout << sq->getUnit(0) << std::endl;
	std::cout << "Trying get pointer of existing unit - " << std::cout << sq->getUnit(4) << std::endl;
	std::cout << "Trying get pointer of out of bounds unit - " << std::cout << sq->getUnit(22000) << std::endl;
	std::cout << std::endl;


	std::cout << "____Deleting squad____" << std::endl;
	delete sq;
	return 0;
}