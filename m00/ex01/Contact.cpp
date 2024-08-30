/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <mde-prin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:12:28 by mde-prin          #+#    #+#             */
/*   Updated: 2024/07/29 10:40:16 by mde-prin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact(){}

Contact::~Contact(){}

void Contact::ft_set_first_name(std::string first_name)
{
    _first_name = first_name;
}
void Contact::ft_set_last_name(std::string last_name)
{
    _last_name = last_name;
}
void Contact::ft_set_nickname(std::string nickname)
{
    _nickname = nickname;
}
void Contact::ft_set_phone_number(std::string phone_number)
{
    _phone_number = phone_number;
}

void Contact::ft_set_darkest_secret(std::string darkest_secret)
{
    _darkest_secret = darkest_secret;
}

const std::string& Contact::ft_get_first_name(void) const {
    return _first_name;
}

const std::string& Contact::ft_get_last_name(void) const {
    return _last_name;
}

const std::string& Contact::ft_get_nickname(void) const {
    return _nickname;
}

const std::string& Contact::ft_get_phone_number(void) const {
    return _phone_number;
}

const std::string& Contact::ft_get_darkest_secret(void) const {
    return _darkest_secret;
}



void ft_print_format(std::string str)
{
    int padding=10-str.length();
    if (padding>=0)
    {
        while (padding--)
            std::cout<<" ";
        std::cout<<str;
    }
    else
        std::cout<<str.substr(0, 9)<<".";
}
void Contact::ft_preview_contact(int index)
{
    std::ostringstream oss;
    oss << index;
    std::cout<<"\x1b[36m";
    ft_print_format(oss.str());
    std::cout<<'|';
    ft_print_format(_first_name);
    std::cout<<'|';
    ft_print_format(_last_name);
    std::cout<<'|';
    ft_print_format(_nickname);
    std::cout<<std::endl;
}



