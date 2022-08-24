/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:25:37 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 20:34:07 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
	public :
		Cat();
		Cat(Cat &cp);
		virtual ~Cat();
		Cat& operator=(Cat& cp);
		void	makeSound() const;
	private:
		Brain	*brain;
};
#endif