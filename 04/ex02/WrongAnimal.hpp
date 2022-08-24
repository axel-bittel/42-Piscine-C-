/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:25:37 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 21:03:26 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP
#include <string>
class WrongAnimal
{
	public :
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal &cp);
		virtual ~WrongAnimal();
		std::string	getType() const;
		void makeSound() const;
	private:
		std::string	type;
};
#endif