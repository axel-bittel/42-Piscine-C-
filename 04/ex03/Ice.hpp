/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:51:42 by abittel           #+#    #+#             */
/*   Updated: 2022/04/26 11:32:59 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
class	Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice &cp);
		~Ice();
		Ice&	operator=(Ice& cp);
		virtual Ice* clone() const;
		void	use(ICharacter& target);
};
#endif
