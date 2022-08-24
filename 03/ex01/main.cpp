/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:40:23 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 15:38:03 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

int	main()
{
	ScravTrap	c1("bite");
	ScravTrap	c2("bite2");

	c1.guardGate();
	for (int i = 0; i <= 51; i++)
	{
		std::cout << i + 1 << std::endl;
		c1.attack("bite2");
	}
}