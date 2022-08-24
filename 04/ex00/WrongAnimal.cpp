/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:27:30 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 21:02:35 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("ITAOUIL")
{
	std::cout << "Construct WrongAnimal." << std::endl;
}
WrongAnimal::WrongAnimal(std::string name) : type(name)
{
	std::cout << "Construct WrongAnimal." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &WrongAnimal)
{
	this->type = WrongAnimal.type;
	std::cout << "Copy WrongAnimal." << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destruct WrongAnimal." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "BLAH BLAH BLAH ..." << std::endl;
}