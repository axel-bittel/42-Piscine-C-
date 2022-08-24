/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:42:12 by abittel           #+#    #+#             */
/*   Updated: 2022/01/23 16:12:12 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void)
{}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*f[4])(void) = {&Harl::warning, &Harl::debug, &Harl::info, &Harl::error};
	std::string	str[4]= {"WARNING", "DEBUG", "INFO", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (!level.compare(str[i]))
			(this->*f[i])();
}
