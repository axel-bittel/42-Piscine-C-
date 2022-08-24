/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:43:39 by abittel           #+#    #+#             */
/*   Updated: 2022/04/26 15:58:44 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
	stuff[0] = 0; 
	stuff[1] = 0; 
	stuff[2] = 0; 
	stuff[3] = 0; 
}
Character::Character(Character& cp) : name(cp.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->stuff[i])
			delete this->stuff[i];
		if (cp.stuff[i])
			this->stuff[i] = cp.stuff[i]->clone();
		else
			this->stuff[i] = 0;
	}
}
Character::~Character() 
{
	for (int i = 0; i < 4; i++)
		if (this->stuff[i])
			delete this->stuff[i];
}
std::string const & Character::getName() const
{
	return (this->name);
}
void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (!this->stuff[i])
			this->stuff[i] = m;
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->stuff[idx])
		return ;
	this->stuff[idx] = 0;	
}
void Character::use(int idx, ICharacter& target)
{
	if (this->stuff[idx])
		this->stuff[idx]->use(target);
}
Character&	Character::operator=(Character& cp)
{
	this->name = cp.name;
	for (int i = 0; i < 4; i++)
	{
		if (this->stuff[i])
			delete this->stuff[i];
		if (cp.stuff[i])
			this->stuff[i] = cp.stuff[i]->clone();
		else
			this->stuff[i] = 0;
	}
	return (*this);
}
