/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:27:30 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 20:33:28 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Construct Dog." << std::endl;
}

Dog::Dog(Dog &cp) : Animal(cp)
{
	std::cout << "Copy Dog." << std::endl;
}
Dog::~Dog()
{
	std::cout << "Destruct Dog." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "OUF OUF MTF" << std::endl;
}

Dog& Dog::operator=(Dog& cp)
{
	this->type = cp.type;
	return (*this);
}