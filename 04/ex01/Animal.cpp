/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:27:30 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 21:02:35 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("HDUFER")
{
	std::cout << "Construct Animal." << std::endl;
}
Animal::Animal(std::string name) : type(name)
{
	std::cout << "Construct Animal." << std::endl;
}

Animal::Animal(Animal &animal)
{
	this->type = animal.type;
	std::cout << "Copy Animal." << std::endl;
}
Animal::~Animal()
{
	std::cout << "Destruct Animal." << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Je m'aime ptn !" << std::endl;
}