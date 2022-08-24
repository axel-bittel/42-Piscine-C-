/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:10:15 by abittel           #+#    #+#             */
/*   Updated: 2022/04/13 22:47:19 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int	Fixed::nbBitsFract(8);

Fixed::Fixed() : val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr) : val(0)
{
	int	inter;
	std::cout << "INT constructor called" << std::endl;
	inter = nbr << this->nbBitsFract;
	this->val = inter;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "FLOAT constructor called" << std::endl;
	this->val = (int)(roundf(nbr * (1 << this->nbBitsFract)));
}

Fixed::Fixed(Fixed const& copie)
{
	std::cout << "Copy constructor called" << std::endl;
	this->val = copie.getRawBits();
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed&	Fixed::operator=(Fixed const& eq)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->val = eq.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val); 
}

void	Fixed::setRawBits(int const raw)
{
	this->val= raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->val / (1 << this->nbBitsFract));
}

int		Fixed::toInt(void) const
{
	return (this->val >> this->nbBitsFract);
}

std::ostream	&operator<<(std::ostream &os, Fixed const&num)
{
	os << num.toFloat();
	return (os);
}
