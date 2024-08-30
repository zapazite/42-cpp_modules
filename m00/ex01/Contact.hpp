/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-prin <mde-prin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:12:44 by mde-prin          #+#    #+#             */
/*   Updated: 2024/07/17 16:38:34 by mde-prin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <sstream>
# include <string>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	public:
		Contact();
		~Contact();
		void ft_set_first_name(std::string first_name);
		void ft_set_last_name(std::string last_name);
		void ft_set_nickname(std::string nickname);
		void ft_set_phone_number(std::string phone_number);
		void ft_set_darkest_secret(std::string darkest_secret);
		const std::string&	ft_get_first_name(void) const;
        const std::string&	ft_get_last_name(void) const;
        const std::string&	ft_get_nickname(void) const;
        const std::string&	ft_get_phone_number(void) const;
        const std::string&	ft_get_darkest_secret(void) const;
		void ft_preview_contact(int index);
};
#endif
