/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <mde-prin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:27:02 by mde-prin          #+#    #+#             */
/*   Updated: 2024/08/28 10:21:12 by mde-prin         ###   ########.fr       */
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
        ~Zombie();
        Zombie(const Zombie& other);
        Zombie& operator=(const Zombie& other);
        void announce() const;
        const std::string& getName() const;
};
#endif
