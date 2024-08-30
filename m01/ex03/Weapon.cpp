/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:28:51 by mde-prin          #+#    #+#             */
/*   Updated: 2024/08/28 13:28:53 by mde-prin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(const std::string& type): _type(type) {}

void Weapon::setType(const std::string& newType)
{
	_type = newType;
}

const std::string& Weapon::getType() const
{
	return _type;
}
