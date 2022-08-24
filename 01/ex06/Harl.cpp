/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:42:12 by abittel           #+#    #+#             */
/*   Updated: 2022/04/13 21:58:01 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

Harl::Harl(void)
{}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void	Harl::def(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
}

void	Harl::complain(std::string level)
{
	int	level_act;

	level_act = -2;
	std::string	str[4]= {"ERROR", "WARNING", "INFO" ,"DEBUG"};
	for (int i = 0; i < 4; i++)
		if (!level.compare(str[i]))
			level_act = i;
	while (level_act >= 0 || level_act == -2)
	{
		switch (level_act)
		{
		case 0:
			this->error();
			level_act--;
			break;
		case 1:
			this->warning();
			level_act--;
			break;
		case 2 :
			this->info();
			level_act--;
			break;
		case 3 :
			this->debug();
			level_act--;
			break;
		default:
			this->def();
			level_act--;
		}
		std::cout << std::endl;
	}
}
