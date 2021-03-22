#include "FragTrap.hpp"

int main ()
{

    FragTrap frag = FragTrap("Bender");


    std::cout << "__________________Attacks testing__________________" << std::endl;

    std::cout << "*** Melee ***" << std::endl;
    frag.meleeAttack("Training Dummy");
    std::cout << std::endl;

    std::cout << "*** Ranged ***" << std::endl;
    frag.rangedAttack("Training Dummy");
    std::cout << std::endl;

    std::cout << "*** FragTrap's VaultHunter ***" << std::endl;
    frag.vaulthunter_dot_exe(" big boss");
    frag.vaulthunter_dot_exe(" big boss");
    frag.vaulthunter_dot_exe(" big boss");
    frag.vaulthunter_dot_exe(" big boss");
    frag.vaulthunter_dot_exe(" big boss");
    std::cout << std::endl;

    std::cout << "__________________Healing & Taking damage__________________" << std::endl;
    frag.takeDamage(10);
    frag.takeDamage(21);
    frag.takeDamage(12);
    frag.takeDamage(130);
    frag.beRepaired(23);
    frag.beRepaired(100);
    std::cout << std::endl;

    std::cout << "__________________Exiting main, destructing all robots :)__________________" << std::endl;
    return 0;
}