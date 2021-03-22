#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main ()
{

	FragTrap frag = FragTrap("Bender");
    ScavTrap scav = ScavTrap();
	NinjaTrap ninja = NinjaTrap();
	ClapTrap clap;
	SuperTrap super = SuperTrap();
	std::cout << std::endl;

	std::cout << "__________________Attacks testing__________________" << std::endl;
	std::cout << "*** Melee ***" << std::endl;
	frag.meleeAttack("Training Dummy");
    scav.meleeAttack("Training Dummy");
    ninja.meleeAttack("Training Dummy");
    super.meleeAttack("Training Dummy");
	std::cout << std::endl;

    std::cout << "*** Ranged ***" << std::endl;
    frag.rangedAttack("Training Dummy");
    scav.rangedAttack("Training Dummy");
    ninja.rangedAttack("Training Dummy");
	super.rangedAttack("Training Dummy");
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

	std::cout << "*** NinjaTrap's Special ***" << std::endl;
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(ninja);
	std::cout << std::endl;

	std::cout << "*** SuperTrap's Special ***" << std::endl;
	super.vaulthunter_dot_exe("Dolly");
	super.ninjaShoebox(clap);
	super.vaulthunter_dot_exe("Molly");
	super.ninjaShoebox(frag);
	super.vaulthunter_dot_exe("Polly");


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

    ninja.takeDamage(10);
    ninja.takeDamage(21);
    ninja.takeDamage(12);
    ninja.takeDamage(130);
    ninja.beRepaired(23);
    ninja.beRepaired(100);
    std::cout << std::endl;

	super.takeDamage(10);
	super.takeDamage(21);
	super.takeDamage(12);
	super.takeDamage(130);
	super.beRepaired(23);
	super.beRepaired(100);
	std::cout << std::endl;

	std::cout << "__________________Copy & Assignation__________________" << std::endl;

	FragTrap a = FragTrap(frag);
	ScavTrap b = ScavTrap(scav);
	NinjaTrap c = NinjaTrap(ninja);
	ClapTrap d = ClapTrap(clap);
	SuperTrap e = SuperTrap(super);
	std::cout << std::endl;

	FragTrap aa = FragTrap("Cool Name");
	ScavTrap bb = ScavTrap("qwerty");
	NinjaTrap cc = NinjaTrap("Lololo");
	SuperTrap ee = SuperTrap("QWQW");
	std::cout << std::endl;

	a = aa;
	b = bb;
	c = cc;
	e = ee;
	std::cout << std::endl;

	std::cout << "__________________Exiting main, destructing all robots :)__________________" << std::endl;
	return 0;
}