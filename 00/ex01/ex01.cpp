/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:05:09 by abittel           #+#    #+#             */
/*   Updated: 2022/04/22 19:34:02 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "PhoneBook.hpp"

void	print_all_contact (PhoneBook *pb)
{
	int	i;

	i = -1;
	while (++i < 8)
		pb->print_contact(i);
}

void	exec_cmd(std::string cmd, PhoneBook *pb)
{
	std::string	fst_name;
	std::string	lst_name;
	std::string	nickname;
	std::string	phone;
	std::string	dark_secret;
	int			res;

	if (!cmd.compare("ADD"))
	{
		std::cout << "Get first name of contact : ";
		std::getline(std::cin, fst_name);
		std::cout << "Get last name of contact : ";
		std::getline(std::cin, lst_name);
		std::cout << "Get nickname of contact : ";
		std::getline(std::cin, nickname);
		std::cout << "Get number of contact : ";
		std::getline(std::cin, phone);
		std::cout << "Get dark secret : ";
		std::getline(std::cin, dark_secret);
		res = pb->add_contact (fst_name, lst_name, nickname, phone, dark_secret);
		if (res == -1)
			std::cout << "ERREUR, NUMERO INVALID" << std::endl;
		else if (!res)
			std::cout << "ERREUR, CONTACT PLEIN" << std::endl;
		else
			std::cout << "Contact added" << std::endl;
	}
	else if (!cmd.compare("SEARCH"))
	{
		print_all_contact (pb);
		std::cout << "Entrez l'index du contact voulu : ";
		std::cin >> res;
		std::getline(std::cin, phone);
		if(!pb->print_contact_info(res))
			std::cout << "IDEX NON VALIDE" << std::endl;
	}
	else if (!cmd.compare("EXIT"))
		std::exit (0);
}

int	main(void)
{
	int			play;
	std::string	cmd;
	PhoneBook	pb;

	play = 1;
	while (play)
	{
		std::cout << "CMD >";
		std::getline(std::cin, cmd);
		size_t end = cmd.find_last_not_of(" \t");
    	cmd = (end == std::string::npos) ? "" : cmd.substr(0, end + 1);
		exec_cmd(cmd, &pb); 
	}
	return (0);
}
