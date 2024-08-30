/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:29:22 by mde-prin          #+#    #+#             */
/*   Updated: 2024/08/28 13:29:24 by mde-prin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, const Weapon& weapon): _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType()<< std::endl;
}
