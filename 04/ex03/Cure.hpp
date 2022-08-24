/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:51:42 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 23:57:48 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
#define Cure_HPP
#include "AMateria.hpp"
class	Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure &cp);
		~Cure();
		Cure&	operator=(Cure& cp);
		virtual Cure* clone() const;
		void	use(ICharacter& target);
};
#endif
