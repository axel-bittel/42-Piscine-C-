/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:28:51 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 19:46:02 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string aName) : name(aName), hit(10), energy(10), attackDamage(0) 
{
	std::cout << this->name << " is construct (is ClapTrap)" << std::endl;
}
ClapTrap::ClapTrap(std::string aName, int hit, int energy, int attackDamage) : name(aName), hit(hit), energy(energy), attackDamage(attackDamage) 
{
	std::cout << this->name << " is construct (is ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& cp)
{
	this->name = cp.name;
	this->hit = cp.hit;
	this->energy= cp.energy;
	this->attackDamage = cp.attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " is destruct (is ClapTrap)" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap& cp)
{
	this->name = cp.name;
	this->hit = cp.hit;
	this->energy= cp.energy;
	this->attackDamage = cp.attackDamage;
	return (*this);
}
void		ClapTrap::attack(const std::string& target) 
{
	if (this->energy > 0 && this->hit > 0)
	{
		std::cout << "ClapTrap "<< this->name <<" attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit -= amount;
	if (this->hit < 0)
		this->hit = 0;
}

void	ClapTrap::beRepare(unsigned int amount)
{
	if (this->hit > 0 && this->energy > 0)
	{
		this->hit += amount;
		this->energy--;
	}
	if (this->hit > 10)
		this->hit = 10;
}
unsigned int	ClapTrap::getAttackDamage() const
{
	return (this->attackDamage);
}

std::string	ClapTrap::getName() const
{
	return (this->name);
}

unsigned int	ClapTrap::getHit() const
{
	return (this->hit);
}

unsigned int	ClapTrap::getEnergy() const
{
	return (this->energy);
}

void	ClapTrap::decreaseEnergy()
{
	this->energy--;
}