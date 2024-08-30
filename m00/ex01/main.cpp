/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <mde-prin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:52:51 by mde-prin          #+#    #+#             */
/*   Updated: 2024/07/29 10:14:05 by mde-prin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string input;

    std::cout<<"+----------------------------+\n"
             <<"|                            |\n"
             <<"|        MY PHONEBOOK        |\n"
             <<"|        ============        |\n"
             <<"|                            |\n"
             <<"+----------------------------+\n";
    while (1)
    {
        std::cout<<"+----------------------------+\n";   
        std::cout<<"| enter: ADD, SEARCH or EXIT |\n";   
        std::cout<<"+----------------------------+\n";   
        if (!std::getline(std::cin, input, '\n'))
        {
            if (std::cin.eof())
                std::cout<<"\x1b[31mPlease use the EXIT command to exit.\x1b[0m\n";
            phonebook.ft_stdin_reset();
        }
        else if (input == "ADD")
            phonebook.ft_add();
        else if (input == "SEARCH")
            phonebook.ft_search();
        else if (input == "EXIT")
        {
            std::cout<<"\x1b[32mExiting...\x1b[0m\n";
            break;
        }
        else
        {
            std::cout<<"\x1b[31mInvalid command\x1b[0m\n";
        }
    }
}