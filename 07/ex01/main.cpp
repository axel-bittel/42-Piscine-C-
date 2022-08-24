/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:24:28 by abittel           #+#    #+#             */
/*   Updated: 2022/05/18 19:38:23 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

int	add_2(int	i)
{
	return (i + 2);
}

std::string add_str(std::string str)
{
	return (str + "......OUI.");
}

int	main()
{
	int	int_tab[] = {1, 2, 3, 4};	
	iter(int_tab, 3, add_2);
	for (int i = 0; i < 4; i++)
		std::cout << int_tab[i] << std::endl;
	std::string str_tab[] = {"Axel est un BG", "42        "};
	iter(str_tab, 1, add_str);
	for (int i = 0; i < 2; i++)
		std::cout << str_tab[i] << std::endl;
	int	int_tab2[] = {1, 2, 3, 4};	
	iter(int_tab2, 4, mult2);
	for (int i = 0; i < 4; i++)
		std::cout << int_tab2[i] << std::endl;
}