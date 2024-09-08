#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("defaultClapTrap_clap_name"), ScavTrap(), FragTrap(), _name("defaultDiamondTrap")
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    _hit_points = FragTrap::getHitPoints();
    _energy_points = ScavTrap::getEnergyPoints();
    _attack_damage = FragTrap::getAttackDamage();
    std::cout << "name : " << _name << std::endl;
    std::cout << "hit points : " << _hit_points << std::endl;
    std::cout << "energy points : " << _energy_points << std::endl;
    std::cout << "attack damage : " << _attack_damage << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    std::cout << "DiamondTrap " << _name << " is born!" << std::endl;
    _hit_points = FragTrap::getHitPoints();
    _energy_points = ScavTrap::getEnergyPoints();
    _attack_damage = FragTrap::getAttackDamage();
    std::cout << "name : " << _name << std::endl;
    std::cout << "hit points : " << _hit_points << std::endl;
    std::cout << "energy points : " << _energy_points << std::endl;
    std::cout << "attack damage : " << _attack_damage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    std::cout << "DiamondTrap " << _name << " is cloned!" << std::endl;
    _name = src._name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
    if (this == &src)
        return *this;
    ClapTrap::operator=(src);
    _name = src._name;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name : " << _name << "!" << std::endl;
    std::cout << "ClapTrap name    : " << ClapTrap::getName() << "!" << std::endl;
}