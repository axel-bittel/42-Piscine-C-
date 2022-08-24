/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:45:03 by abittel           #+#    #+#             */
/*   Updated: 2022/04/26 16:04:58 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string> 
#include "ICharacter.hpp"
class AMateria
{
	protected:
		std::string const type;
	public:
		AMateria();
		AMateria(std::string const& type);
		virtual ~AMateria();
		virtual	AMateria& operator=(AMateria& cp);
		std::string const& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif