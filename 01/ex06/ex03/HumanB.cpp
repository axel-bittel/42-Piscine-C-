/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:37:02 by abittel           #+#    #+#             */
/*   Updated: 2022/03/06 01:15:39 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include "Weapon.hpp"
#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB (std::string aName) : name(aName)
{}
void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << w_human->getType() << std::endl;
}
void	HumanB::setWeapon(Weapon& aW)
{ this->w_human = &aW; }
