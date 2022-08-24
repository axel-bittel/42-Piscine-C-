/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:59:12 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 19:46:37 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n) : ClapTrap(n, 100, 100, 30)
{
	std::cout << this->getName() << " is construct (is FragTrap)" << std::endl;
}
FragTrap::FragTrap(FragTrap &st) : ClapTrap(st)
{
}
FragTrap::~FragTrap()
{
	std::cout << this->getName() << " is destruct (is FragTrap)" << std::endl;
}
FragTrap& FragTrap::operator=(FragTrap& st)
{
	*(ClapTrap*)(this) = *(ClapTrap*)(&st);
	return (*this);
}
void	FragTrap::attack(const std::string& target) 
{
	if (this->getEnergy() > 0 && this->getHit() > 0)
	{
		std::cout << "FragTrap "<< this->getName() <<" attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->decreaseEnergy();
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->getName() << " ask an high fives." << std::endl;
}
