/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <mde-prin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:40:25 by mde-prin          #+#    #+#             */
/*   Updated: 2024/07/29 17:46:59 by mde-prin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(const std::string& name);
void randomChump(const std::string& name);

int main()
{
    Zombie* heapzombie = newZombie("HeapZombie");
    heapzombie->announce();
    randomChump("StackZombie");
    delete heapzombie;
    return 0;
}
