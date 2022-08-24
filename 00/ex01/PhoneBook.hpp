/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 19:37:38 by abittel           #+#    #+#             */
/*   Updated: 2022/03/06 00:21:55 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>
#include "Contact.hpp"

class PhoneBook 
{
	public :
				PhoneBook(void);
	int			add_contact (std::string fst_name, std::string lst_name, std::string nickname, std::string phone, std::string dark_secret);
	void		print_contact(int idx) const;
	int			print_contact_info(int idx) const;
	std::string	get_number_contact (int idx) const;
	private :
	Contact	phone_book[8];
	int		is_add[8];
};
#endif
