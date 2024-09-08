#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("defaultClapTrap"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap " << getName() << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
    std::cout << "ClapTrap copy constructor called on "<< getName() << "!" << std::endl;
    *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    _name = src.getName();
    _hit_points = src.getHitPoints();
    _energy_points = src.getEnergyPoints();
    _attack_damage = src.getAttackDamage();
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called on "<< getName() << "!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (getEnergyPoints() <= 0 || getHitPoints() <= 0)
    {
        std::cout << "ClapTrap " << getName() << " is out of energy points or dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    _energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hit_points -= amount;
    std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage!" << std::endl;
    if (getHitPoints() <= 0)
    {
        std::cout << "ClapTrap " << getName() << " is dead!" << std::endl;
        _hit_points = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergyPoints() <= 0 || getHitPoints() <= 0)
    {
        std::cout << "ClapTrap " << getName() << " is out of energy points or dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << getName() << " is repaired for " << amount << " points!" << std::endl;
    _hit_points += amount;
    _energy_points -= 1;
}

std::string ClapTrap::getName() const
{
    return _name;
}

int ClapTrap::getHitPoints() const
{
    return _hit_points;
}

int ClapTrap::getEnergyPoints() const
{
    return _energy_points;
}

int ClapTrap::getAttackDamage() const
{
    return _attack_damage;
}