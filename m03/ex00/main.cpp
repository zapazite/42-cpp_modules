#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap clapTrap1("ClapTrap1");
    ClapTrap clapTrap2("ClapTrap2");
    ClapTrap clapTrap3("ClapTrap3");

    clapTrap1.attack("target");
    clapTrap2.takeDamage(6);
    clapTrap2.beRepaired(1);
    
    ClapTrap clapTrap2bis(clapTrap2);
    ClapTrap clapTrap3bis = clapTrap3;

    std::cout << "ClapTrap1 energy points: " << clapTrap1.getEnergyPoints() << std::endl;
    std::cout << "ClapTrap2bis hit points: " << clapTrap2bis.getHitPoints() << std::endl;
    std::cout << "ClapTrap3bis attack damage: " << clapTrap3bis.getAttackDamage() << std::endl;

    return 0;
}