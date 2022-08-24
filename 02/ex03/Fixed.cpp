/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:10:15 by abittel           #+#    #+#             */
/*   Updated: 2022/01/24 20:49:37 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::nbBitsFract(8);

Fixed::Fixed() : val(0)
{
}

Fixed::Fixed(const int nbr) : val(0)
{
	int	inter;
	inter = nbr << this->nbBitsFract;
	this->val = inter;
}

Fixed::Fixed(const float nbr)
{
	this->val = (int)(roundf(nbr * (1 << this->nbBitsFract)));
}

Fixed::Fixed(Fixed const& copie)
{
	this->val = copie.getRawBits();
}
Fixed::~Fixed()
{
}
Fixed&	Fixed::operator=(Fixed const& eq)
{
	this->val = eq.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
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

bool	Fixed::operator==(const Fixed& comp) const
{
	return (this->getRawBits() == comp.getRawBits());
}

bool	Fixed::operator>=(const Fixed& comp) const
{
	return (this->getRawBits() > comp.getRawBits() || *this == comp);
}

bool	Fixed::operator<=(const Fixed& comp) const
{
	return (this->getRawBits() < comp.getRawBits() || *this == comp);

}

bool	Fixed::operator>(const Fixed& comp) const
{
	return !(*this <= comp);
}

bool	Fixed::operator<(const Fixed& comp) const 
{
	return !(*this >= comp);
}

bool	Fixed::operator!=(const Fixed& comp) const
{
	return !(*this == comp);
}

Fixed	Fixed::operator+(Fixed const& arg)
{
	Fixed	inter;

	inter = *this;
	inter.setRawBits(inter.getRawBits() + arg.getRawBits());
	return (inter);
}

Fixed	Fixed::operator-(Fixed const& arg)
{
	Fixed	inter;

	inter = *this;
	inter.setRawBits(inter.getRawBits() - arg.getRawBits());
	return (inter);
}

Fixed	Fixed::operator*(Fixed const& arg)
{
	Fixed	inter;

	inter = *this;
	inter.setRawBits((inter.getRawBits() * arg.getRawBits()) >> this->nbBitsFract);
	return (inter);
}

Fixed	Fixed::operator/(Fixed const& arg)
{
	Fixed	inter;

	inter = *this;
	inter.setRawBits((inter.getRawBits() / inter.nbBitsFract) / arg.getRawBits());
	return (inter);
}

Fixed	Fixed::operator++(int)
{
	Fixed	inter = *this;
	this->val++;
	return (inter);
}

Fixed	Fixed::operator--(int)
{
	Fixed	inter = *this;
	this->val--;
	return (inter);
}

Fixed	Fixed::operator++()
{
	this->val++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->val--;
	return (*this);
}

Fixed const&	Fixed::max(Fixed const &a, Fixed const& b)
{
	if (a >= b)
		return (a);
	return (b);
}

Fixed const&	Fixed::min(Fixed const &a, Fixed const& b)
{
	if (a <= b)
		return (a);
	return (b);
}

