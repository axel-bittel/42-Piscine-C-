/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:42:12 by abittel           #+#    #+#             */
/*   Updated: 2022/04/13 22:01:22 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		k;
	std::string	val;

	if (argc == 2)
	{
		val = std::string(argv[1]);
		k.complain(argv[1]);
	}
	return (0);
}
