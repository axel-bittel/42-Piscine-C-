/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:11:12 by abittel           #+#    #+#             */
/*   Updated: 2022/01/22 18:00:30 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include "Weapon.hpp"

const std::string&	Weapon::getType(void) const
{
	return (this->type);
}
void	Weapon::setType(std::string aType)
{
	this->type = aType;
}

Weapon::Weapon(std::string aType) : type(aType){}
Weapon::Weapon(void) { type = "";}
