/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:58:44 by abittel           #+#    #+#             */
/*   Updated: 2022/03/27 17:07:52 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	int	i;

	i = -1;
	while (++i < 8)
		this->is_add[i] = 0;
}

int	PhoneBook::add_contact (std::string fst_name, std::string lst_name, std::string nickname, std::string phone, std::string dark_secret)
{
	int		i;
	i = -1;
	if (this->is_add[7])
	{
		for (int i = 0; i < 7; i++)
			this->phone_book[i] = this->phone_book[i + 1];	
		this->phone_book[7].set_names(fst_name, lst_name, nickname, dark_secret);
		if (!this->phone_book[7].set_phone(phone))
			return (-1);
		this->is_add[7] = 1;
		return (1);
	}
	while (++i < 8)
	{
		if (!this->is_add[i])
		{
			this->phone_book[i].set_names(fst_name, lst_name, nickname, dark_secret);
			if (!this->phone_book[i].set_phone(phone))
				return (-1);
			this->is_add[i] = 1;
			return (1);
		}
	}
	return (0);
}

std::string	PhoneBook::get_number_contact (int idx) const
{
	if (idx < 0 || idx > 8 || !this->is_add[idx])
		return ("Erreur, contact inconnu !");
	return (this->phone_book[idx].get_phone());
}

std::string	get_goodformat(std::string str)
{
	std::string	inter;

	inter = str;
	inter.resize(10, ' ');
	if (inter[9] != ' ')
		inter[9] = '.';
	return (inter);

}

void	PhoneBook::print_contact(int idx) const
{
	if (!is_add[idx])
		return ;
	std::cout << idx << "         |" << get_goodformat(this->phone_book[idx].get_fst_name()) << "|" << get_goodformat(this->phone_book[idx].get_lst_name()) << "|" << get_goodformat(this->phone_book[idx].get_nickname()) << std::endl;
}

int	PhoneBook::print_contact_info(int idx) const
{
	if (idx < 0 || idx > 7 || !is_add[idx])
		return (0);
	this->phone_book[idx].print_info();
	return (1);
}
