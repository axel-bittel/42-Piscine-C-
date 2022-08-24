/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:25:37 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 20:34:07 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP
#include <string>
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(WrongCat &cp);
		~WrongCat();
		WrongCat& operator=(WrongCat& cp);
		void	makeSound() const;
};
#endif