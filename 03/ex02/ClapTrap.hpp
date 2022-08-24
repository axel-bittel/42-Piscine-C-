/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:28:01 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 19:53:24 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
class ClapTrap
{
	public:
		ClapTrap(std::string name = "");
		ClapTrap(std::string name, int hit, int energy, int attackDamage);
		ClapTrap(ClapTrap& cp);
		~ClapTrap();
		ClapTrap	&operator=(ClapTrap& c);
		void			attack(const std::string& target); 
		void			takeDamage(unsigned int amount); 
		void			beRepare(unsigned int amount); 
		unsigned int	getAttackDamage() const;
		unsigned int	getEnergy() const;
		unsigned int	getHit() const;
		std::string		getName() const;
		void			decreaseEnergy();
	private:
		std::string	name;
		int			hit;
		int			energy;
		int			attackDamage;
};
#endif