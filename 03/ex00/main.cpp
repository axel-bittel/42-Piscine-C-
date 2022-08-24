/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:40:23 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 18:52:23 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	c1("bite");
	ClapTrap	c2("bite2");

	c1.attack("bite2");
	c2.takeDamage(c1.getAttackDamage());
	c1.attack("bite2");
	c2.takeDamage(c1.getAttackDamage());
	c1.attack("bite2");
	c2.takeDamage(c1.getAttackDamage());
	c1.attack("bite2");
	c2.takeDamage(c1.getAttackDamage());
	c1.attack("bite2");
	c2.takeDamage(c1.getAttackDamage());
	c1.attack("bite2");
	c2.takeDamage(c1.getAttackDamage());
	c1.attack("bite2");
	c2.takeDamage(c1.getAttackDamage());
	c1.attack("bite2");
	c2.takeDamage(c1.getAttackDamage());
	c1.attack("bite2");
	c2.takeDamage(c1.getAttackDamage());
	c1.attack("bite2");
	c2.takeDamage(c1.getAttackDamage());
	c1.attack("bite2");
	c2.takeDamage(c1.getAttackDamage());
	c1.attack("bite2");
}