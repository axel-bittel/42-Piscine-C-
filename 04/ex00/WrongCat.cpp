/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:27:30 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 20:33:28 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Construct WrongCat." << std::endl;
}

WrongCat::WrongCat(WrongCat &cp) : WrongAnimal(cp)
{
	std::cout << "Copy WrongCat." << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "Destruct WrongCat." << std::endl;
}
WrongCat& WrongCat::operator=(WrongCat& cp)
{
	*this = cp;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "MIAOU MIAOU but Wrong ?" << std::endl;
}