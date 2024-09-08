#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    _name = "defaultFragTrap";
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "FragTrap " << getName() << " is born!" << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called on "<< getName() << "!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &src)
    {
        ClapTrap::operator=(src);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called on "<< getName() << "!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << getName() << " is requesting a high five!" << std::endl;
}

int FragTrap::getHitPoints() const
{
    return _hit_points;
}

int FragTrap::getAttackDamage() const
{
    return _attack_damage;
}
