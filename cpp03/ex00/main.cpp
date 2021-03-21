#include "FragTrap.hpp"

int main ()
{
	FragTrap one = FragTrap("Bender");
	FragTrap two = FragTrap();

	std::cout << "__________________Attacks testing__________________" << std::endl;

	std::cout << "*** Standard ***" << std::endl;
	one.meleeAttack("target dummy");
	one.rangedAttack("flying robot");
	std::cout << "*** VaultHunter ***" << std::endl;
	two.vaulthunter_dot_exe(" big boss");
	two.vaulthunter_dot_exe(" big boss");
	two.vaulthunter_dot_exe(" big boss");
	two.vaulthunter_dot_exe(" big boss");
	two.vaulthunter_dot_exe(" big boss");
	std::cout << "__________________Healing & Taking damage__________________" << std::endl;

	one.takeDamage(25);
	one.takeDamage(10);
	one.takeDamage(25);
	one.beRepaired(20);
	one.beRepaired(200);
	one.takeDamage(1304);

	std::cout << "__________________Exiting main, destructing all robots :)__________________" << std::endl;
	return 0;
}