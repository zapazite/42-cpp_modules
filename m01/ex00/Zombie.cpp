/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <mde-prin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:36:58 by mde-prin          #+#    #+#             */
/*   Updated: 2024/07/29 18:01:48 by mde-prin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# include <iostream>

Zombie::Zombie() : _name("Unnamed zombie") {}

Zombie::Zombie(const std::string& name) : _name(name) {}

Zombie::~Zombie()
{
    std::cout << _name << " is destroyed" << std::endl;
}

Zombie::Zombie(const Zombie& other) : _name(other._name) {}

Zombie& Zombie::operator=(const Zombie& other)
{
    if (this != &other)
        _name = other._name;
    return *this;
}

void Zombie::announce() const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

const std::string& Zombie::getName() const
{
    return _name;
}
