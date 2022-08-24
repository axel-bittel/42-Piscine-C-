/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:55:00 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 22:32:37 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() 
{}

Ice::Ice(Ice &cp) : AMateria(cp)
{
	(void)cp;
}
Ice::~Ice()
{}
Ice&	Ice::operator=(Ice& cp)
{
	(void)cp;
	return (*this);
}
Ice* Ice::clone() const
{
	return (new Ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice blot at " << target.getName() << " *" << std::endl;
}