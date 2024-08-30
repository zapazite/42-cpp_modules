/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:29:33 by mde-prin          #+#    #+#             */
/*   Updated: 2024/08/28 13:29:35 by mde-prin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::~HumanB() {}

HumanB::HumanB(const std::string& name): _name(name), _weapon((Weapon*)0) {}

HumanB::HumanB(const HumanB& source) : _name(source._name), _weapon(source._weapon) {}

HumanB& HumanB::operator=(const HumanB& source)
{
	if (this != &source)
	{
		_name = source._name;
		_weapon = source._weapon;
	}
	return *this;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType()<< std::endl;
	else
		std::cout << _name << " does not have a weapon thus cannot attack!" << std::endl;
}
