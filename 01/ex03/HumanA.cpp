/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:37:02 by abittel           #+#    #+#             */
/*   Updated: 2022/03/06 01:06:42 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA (std::string aName, Weapon& aW) : w_human(aW), name(aName){}
void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << w_human.getType() << std::endl;
}
