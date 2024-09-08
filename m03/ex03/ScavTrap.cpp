#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    _name = "defaultScavTrap";
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << getName() << " is born!" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "***************energy points : " << ClapTrap::getEnergyPoints() << std::endl;
    std::cout << "***************energy points : " << ClapTrap::_energy_points << std::endl;
    std::cout << "***************energy points : " << ScavTrap::getEnergyPoints() << std::endl;
    std::cout << "***************energy points : " << ScavTrap::_energy_points << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called on "<< getName() << "!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &src)
    {
        ClapTrap::operator=(src);
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called on "<< getName() << "!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (getEnergyPoints() <= 0 || getHitPoints() <= 0)
    {
        std::cout << "ScavTrap " << getName() << " is out of energy points or dead!" << std::endl;
        return;
    }
    ClapTrap::attack(target);
    std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode!" << std::endl;
}

int ScavTrap::getEnergyPoints() const
{
    return _energy_points;
}
