/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:59:12 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 15:39:31 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap(std::string n) : ClapTrap(n, 100, 50, 20)
{
	std::cout << this->getName() << " is construct (is ScravTrap)" << std::endl;
}
ScravTrap::ScravTrap(ScravTrap &st) : ClapTrap(st)
{
}
ScravTrap::~ScravTrap()
{
	std::cout << this->getName() << " is destruct (is ScravTrap)" << std::endl;
}
ScravTrap& ScravTrap::operator=(ScravTrap& st)
{
	*(ClapTrap*)(this) = *(ClapTrap*)(&st);
	return (*this);
}
void	ScravTrap::attack(const std::string& target) 
{
	if (this->getEnergy() > 0 && this->getHit() > 0)
	{
		std::cout << "ScravTrap "<< this->getName() <<" attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->decreaseEnergy();
	}
}

void	ScravTrap::guardGate()
{
	std::cout << this->getName() << " is in Gate Keeper." << std::endl;
}
