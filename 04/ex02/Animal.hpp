/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:25:37 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 22:30:46 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
class Animal
{
	public :
		Animal();
		Animal(std::string name);
		Animal(Animal &cp);
		virtual ~Animal();
		std::string	getType() const;
		virtual void makeSound() const = 0;
	protected:
		std::string	type;
};
#endif