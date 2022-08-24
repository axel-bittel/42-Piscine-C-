/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:42:01 by abittel           #+#    #+#             */
/*   Updated: 2022/04/26 15:57:57 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include "AMateria.hpp"
class Character : public ICharacter
{
	public:
		Character(std::string name = "");
		Character(Character& cp);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		Character&	operator=(Character& cp);
    private:
        std::string name;
        AMateria   *stuff[4];
};
#endif