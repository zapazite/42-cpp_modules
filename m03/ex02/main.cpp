#include "FragTrap.hpp"
#include <iostream>

int main()
{
    FragTrap FragTrap("FragTrap");

    FragTrap.attack("target");
    FragTrap.highFivesGuys();
    FragTrap.takeDamage(10);
    std::cout << "Energy points: " << FragTrap.getEnergyPoints() << std::endl;
    std::cout << "Hit points: " << FragTrap.getHitPoints() << std::endl;
    FragTrap.beRepaired(10);
    std::cout << "Hit points: " << FragTrap.getHitPoints() << std::endl;
    return 0;
}