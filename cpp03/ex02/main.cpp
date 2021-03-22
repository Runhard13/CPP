#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main ()
{

	FragTrap one = FragTrap("Bender");
    ScavTrap two = ScavTrap("Sam");
	ScavTrap three = ScavTrap();


	std::cout << "__________________Attacks testing__________________" << std::endl;

	std::cout << "*** Standard ***" << std::endl;
	one.meleeAttack("target dummy");
	one.rangedAttack("flying robot");
	three.rangedAttack("Sveta");
	three.meleeAttack("Sweta");
	std::cout << std::endl;

	std::cout << "*** VaultHunter ***" << std::endl;
	one.vaulthunter_dot_exe(" big boss");
	one.vaulthunter_dot_exe(" big boss");
	one.vaulthunter_dot_exe(" big boss");
	one.vaulthunter_dot_exe(" big boss");
	one.vaulthunter_dot_exe(" big boss");
	std::cout << std::endl;

	std::cout << "*** Challenges ***" << std::endl;
	three.challengeNewcomer();
	three.challengeNewcomer();
	three.challengeNewcomer();
	std::cout << std::endl;

	std::cout << "__________________Healing & Taking damage__________________" << std::endl;
	one.takeDamage(25);
	one.takeDamage(25);
	three.takeDamage(10);
	three.beRepaired(20);
	one.beRepaired(200);
	one.takeDamage(1304);
	std::cout << std::endl;

	std::cout << "__________________Exiting main, destructing all robots :)__________________" << std::endl;
	return 0;
}