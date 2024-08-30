/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <mde-prin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:11:59 by mde-prin          #+#    #+#             */
/*   Updated: 2024/07/29 10:43:18 by mde-prin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    i = 0;
    max_contact_nbr = 8;
    contact_nbr = 0;
}

PhoneBook::~PhoneBook(){}

void PhoneBook::ft_stdin_reset()
{
    std::cin.clear();
    freopen("/dev/tty", "r", stdin);
}
int PhoneBook::ft_get_input(std::string &input)
{
    if (!std::getline(std::cin, input, '\n') || input.find_first_not_of(" \t") == std::string::npos)
    {
        std::cout<<"\x1b[31mContact must be completed!!!\x1b[0m\n";
        ft_stdin_reset();
        return (1);
    }
    return (0);
}

void PhoneBook::ft_add()
{
    std::string input;
    do
    {
        std::cout<<"\x1b[33m+--------------------+\n";
        std::cout<<"| Enter a first name |\n";
        std::cout<<"+--------------------+\x1b[36m\n";
    } while (ft_get_input(input));
    contacts[i].ft_set_first_name(input);
    do
    {
        std::cout<<"\x1b[33m+-------------------+\n";
        std::cout<<"| Enter a last name |\n";
        std::cout<<"+-------------------+\x1b[36m\n";
    } while (ft_get_input(input));
    contacts[i].ft_set_last_name(input);
    do
    {
        std::cout<<"\x1b[33m+------------------+\n";
        std::cout<<"| Enter a nickname |\n";
        std::cout<<"+------------------+\x1b[36m\n";
    } while (ft_get_input(input));
    contacts[i].ft_set_nickname(input);
    do
    {
        std::cout<<"\x1b[33m+----------------------+\n";
        std::cout<<"| Enter a phone number |\n";
        std::cout<<"+----------------------+\x1b[36m\n";
    } while (ft_get_input(input));
    contacts[i].ft_set_phone_number(input);
    do
    {
        std::cout<<"\x1b[33m+------------------------+\n";
        std::cout<<"| Enter a darkest secret |\n";
        std::cout<<"+------------------------+\x1b[36m\n";
    } while (ft_get_input(input));
    contacts[i].ft_set_darkest_secret(input);
    std::cout<<"\x1b[32mContact added successfully\x1b[0m\n";
    i = (i + 1) % max_contact_nbr;
    contact_nbr += (contact_nbr < max_contact_nbr);
}
void PhoneBook::ft_search()
{
    int ind;

    if (contact_nbr == 0)
    {
        std::cout<<"\x1b[31mNo contacts available\x1b[0m\n";
        return;
    }
    for(int j = 0; j < contact_nbr; j++)
    {
        contacts[j].ft_preview_contact(j);
    }
    std::cout<<"\x1b[33m+--------------------------------------------------+\n";
    std::cout<<"| Enter te index of the contact you want to print: |\n";
    std::cout<<"+--------------------------------------------------+\x1b[36m\n";
    while (1)
    {
        std::cin>>ind;
        if (std::cin.eof())
        {
            std::cout << "\n\x1b[31mReturning to main menu...\x1b[0m\n";
            ft_stdin_reset();
            return;
        }
        if (ind < 0 || ind >= contact_nbr || std::cin.fail())
        {
            ft_stdin_reset();
            std::cout<<"\x1b[31mInvalid index\x1b[36m\n";
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
    }
    std::cout<<"    First Name: "<<contacts[ind].ft_get_first_name()<<std::endl;
    std::cout<<"     Last Name: "<<contacts[ind].ft_get_last_name()<<std::endl;
    std::cout<<"      Nickname: "<<contacts[ind].ft_get_nickname()<<std::endl;
    std::cout<<"  Phone Number: "<<contacts[ind].ft_get_phone_number()<<std::endl;
    std::cout<<"Darkest Secret: "<<contacts[ind].ft_get_darkest_secret()<<"\x1b[0m"<<std::endl;
}
