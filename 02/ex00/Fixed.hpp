/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:10:24 by abittel           #+#    #+#             */
/*   Updated: 2022/01/23 20:21:50 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
class Fixed
{
	public:
		Fixed();
		Fixed(Fixed& copie);
		~Fixed();
		Fixed	&operator=(Fixed& eq);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					idxPtsF;
		static const int	nbBitsFract;
};
#endif
