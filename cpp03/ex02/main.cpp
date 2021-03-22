#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main ()
{

	FragTrap frag = FragTrap("Bender");
	ScavTrap scav = ScavTrap();
	ClapTrap clap;



	std::cout << "__________________Attacks testing__________________" << std::endl;

	std::cout << "*** Melee ***" << std::endl;
	frag.meleeAttack("Training Dummy");
	scav.meleeAttack("Training Dummy");
	std::cout << std::endl;

	std::cout << "*** Ranged ***" << std::endl;
	frag.rangedAttack("Training Dummy");
	scav.rangedAttack("Training Dummy");
	std::cout << std::endl;

	std::cout << "*** FragTrap's VaultHunter ***" << std::endl;
	frag.vaulthunter_dot_exe(" big boss");
	frag.vaulthunter_dot_exe(" big boss");
	frag.vaulthunter_dot_exe(" big boss");
	frag.vaulthunter_dot_exe(" big boss");
	frag.vaulthunter_dot_exe(" big boss");
	std::cout << std::endl;

	std::cout << "*** ScavTrap's Challenges ***" << std::endl;
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	std::cout << std::endl;

	std::cout << "__________________Healing & Taking damage__________________" << std::endl;
	frag.takeDamage(10);
	frag.takeDamage(21);
	frag.takeDamage(12);
	frag.takeDamage(130);
	frag.beRepaired(23);
	frag.beRepaired(100);
	std::cout << std::endl;

	scav.takeDamage(10);
	scav.takeDamage(21);
	scav.takeDamage(12);
	scav.takeDamage(130);
	scav.beRepaired(23);
	scav.beRepaired(100);
	std::cout << std::endl;

	std::cout << "__________________Copy & Assignation__________________" << std::endl;

	FragTrap a = FragTrap(frag);
	ScavTrap b = ScavTrap(scav);
	ClapTrap d = ClapTrap(clap);
	std::cout << std::endl;

	FragTrap aa = FragTrap("Cool Name");
	ScavTrap bb = ScavTrap("qwerty");
	std::cout << std::endl;

	a = aa;
	b = bb;
	std::cout << std::endl;

	std::cout << "__________________Exiting main, destructing all robots :)__________________" << std::endl;
	return 0;
}