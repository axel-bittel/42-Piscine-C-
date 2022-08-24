/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:10:15 by abittel           #+#    #+#             */
/*   Updated: 2022/04/13 22:40:17 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

const int	Fixed::nbBitsFract(8);

Fixed::Fixed() : idxPtsF(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed& copie)
{
	std::cout << "Copy constructor called" << std::endl;
	this->idxPtsF = copie.getRawBits();
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed&	Fixed::operator=(Fixed& eq)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->idxPtsF = eq.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->idxPtsF); 
}

void	Fixed::setRawBits(int const raw)
{
	this->idxPtsF = raw;
}
