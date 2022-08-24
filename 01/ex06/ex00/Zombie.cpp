/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:44:23 by abittel           #+#    #+#             */
/*   Updated: 2022/03/06 00:35:05 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie (void) {}
Zombie::Zombie (std::string n) : name(n) {}
Zombie::~Zombie (void) { std::cout << this->name << " is dying, wait...." << std::endl;  }
void	Zombie::annouce (void)
{
	std::cout << this->name << ":	BraiiiiiiinnnzzzZ..." << std::endl;
}
