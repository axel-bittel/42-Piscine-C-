/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:40:23 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 19:55:00 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ScravTrap	c1("bite");
	FragTrap	c2("bite2");

	for (int i = 0; i <= 101; i++)
	{
		std::cout << i + 1 << std::endl;
		c2.attack("bite");
	}
	c1.guardGate();
	c2.highFivesGuys();
}