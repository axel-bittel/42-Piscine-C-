/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:23:57 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 22:18:45 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Construct Brain." << std::endl;
}
Brain::Brain(Brain& cp)
{
	for (int i = 0; i < 99; i++)
		this->ideas[i] = cp.ideas[i];
	std::cout << "Construct Copy Brain." << std::endl;
}
Brain::~Brain()
{
	std::cout << "Destruct Brain." << std::endl;
}
Brain&	Brain::operator=(Brain& cp)
{
	for (int i = 0; i < 99; i++)
		this->ideas[i] = cp.ideas[i];
	return (*this);
}