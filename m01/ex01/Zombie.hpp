/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <mde-prin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:27:02 by mde-prin          #+#    #+#             */
/*   Updated: 2024/07/29 17:59:46 by mde-prin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        Zombie(const std::string& name);
        Zombie(const Zombie& other);
        Zombie& operator=(const Zombie& other);
        ~Zombie();
        void announce() const;
        void setName(const std::string& name);
        const std::string& getName() const;
};

Zombie* zombieHorde(int N, std::string name);

#endif
