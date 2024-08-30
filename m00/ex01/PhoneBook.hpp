/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <mde-prin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:13:00 by mde-prin          #+#    #+#             */
/*   Updated: 2024/07/17 15:53:46 by mde-prin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <stdio.h>
# include <limits>

class PhoneBook
{
    private:
        Contact contacts[8];
        int max_contact_nbr;
        int contact_nbr;
        int i;
    public:
        PhoneBook();
        ~PhoneBook();
        void ft_add();
        void ft_search();
        void ft_stdin_reset();
        void ft_preview_contact();
        int ft_get_input(std::string &input);
};
#endif
