/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:55:40 by abittel           #+#    #+#             */
/*   Updated: 2022/03/06 00:19:47 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
class	Contact
{
	public :
		Contact();
		std::string	get_fst_name(void) const;
		std::string	get_lst_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone(void) const;
		void		set_names(std::string fst_name, std::string lst_name, std::string nickname, std::string sdark_secret);
		void		print_info(void) const;
		int			set_phone(std::string phone);
	private :
		std::string	fst_name;
		std::string	lst_name;
		std::string	nickname;
		std::string	phone;
		std::string	dark_secret;
		int			is_good_phone(std::string phone);
};
#endif
