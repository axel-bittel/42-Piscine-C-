/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:56:14 by abittel           #+#    #+#             */
/*   Updated: 2022/03/06 00:21:43 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	this->fst_name = "";
	this->lst_name = "";
	this->nickname = "";
	this->phone = "";
}

std::string	Contact::get_fst_name(void) const { return (this->fst_name); }

std::string	Contact::get_lst_name(void) const { return (this->lst_name); }

std::string	Contact::get_nickname(void) const { return (this->nickname); }

std::string	Contact::get_phone(void) const { return (this->phone); }

void		Contact::set_names(std::string fst_name, std::string lst_name, std::string nickname, std::string dark_secret)
{
	this->fst_name = fst_name;
	this->lst_name = lst_name;
	this->nickname = nickname;
	this->dark_secret = dark_secret;
}

int	Contact::is_good_phone(std::string phone)
{
	int	i;

	i = -1;
	while (phone [++i])
		if ((phone[i] < '0' || phone[i] > '9' || (phone[i] == '+' && i)) && phone[i] != ' ')
			return (0);
	return (1);
}

int	Contact::set_phone (std::string phone)
{
	if (!this->is_good_phone(phone))
		return (0);
	this->phone = phone;
	return (1);
}

void	Contact::print_info(void) const
{
	std::cout << this->fst_name << std::endl;
	std::cout << this->lst_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone << std::endl;
	std::cout << this->dark_secret << std::endl;
}
