/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:10:24 by abittel           #+#    #+#             */
/*   Updated: 2022/04/13 22:42:21 by abittel          ###   ########.fr       */
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
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		friend std::ostream	&operator<<(std::ostream &os, Fixed const &num);
	private:
		int					val;
		static const int	nbBitsFract;
};
#endif
