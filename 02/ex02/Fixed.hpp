/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:10:24 by abittel           #+#    #+#             */
/*   Updated: 2022/01/24 20:48:56 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
	public:
		Fixed();
		Fixed(int const nbr);
		Fixed(const float nbr);
		Fixed(Fixed const& copie);
		~Fixed();
		Fixed	&operator=(Fixed const& eq);
		float	toFloat(void) const;
		int		toInt(void) const;
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		bool	operator>(const Fixed& comp) const;
		bool	operator<(const Fixed& comp) const;
		bool	operator>=(const Fixed& comp) const;
		bool	operator<=(const Fixed& comp) const;
		bool	operator==(const Fixed& comp) const;
		bool	operator!=(const Fixed& comp) const;
		Fixed	operator+(Fixed const& arg);
		Fixed	operator-(Fixed const& arg);
		Fixed	operator*(Fixed const& arg);
		Fixed	operator/(Fixed const& arg);
		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		friend std::ostream	&operator<<(std::ostream &os, Fixed const &num);
		static Fixed const&	max(Fixed const &a, Fixed const& b);
		static Fixed const&	min(Fixed const &a, Fixed const& b);
	private:
		int					val;
		static const int	nbBitsFract;
};
#endif
