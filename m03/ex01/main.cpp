#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavTrap("ScavTrap");

    scavTrap.attack("target");
    scavTrap.guardGate();
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);
}