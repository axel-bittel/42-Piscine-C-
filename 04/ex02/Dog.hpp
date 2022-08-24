/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:25:37 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 20:34:07 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
	public :
		Dog();
		Dog(Dog &cp);
		virtual ~Dog();
		Dog& operator=(Dog& cp);
		virtual void	makeSound() const;
	private :
		Brain*	brain;
};
#endif