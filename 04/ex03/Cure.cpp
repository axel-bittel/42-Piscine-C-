/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:55:00 by abittel           #+#    #+#             */
/*   Updated: 2022/04/15 00:01:14 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{}

Cure::Cure(Cure &cp) : AMateria(cp)
{
	(void)cp;
}
Cure::~Cure()
{}
Cure&	Cure::operator=(Cure& cp)
{
	(void)cp;
	return (*this);
}
Cure* Cure::clone() const
{
	return (new Cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}