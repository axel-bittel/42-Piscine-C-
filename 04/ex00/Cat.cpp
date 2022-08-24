/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:27:30 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 20:33:28 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Construct Cat." << std::endl;
}

Cat::Cat(Cat &cp) : Animal(cp)
{
	std::cout << "Copy Cat." << std::endl;
}
Cat::~Cat()
{
	std::cout << "Destruct Cat." << std::endl;
}
Cat& Cat::operator=(Cat& cp)
{
	this->type = cp.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MIAOU MIAOU" << std::endl;
}