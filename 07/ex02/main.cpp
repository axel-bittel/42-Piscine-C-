/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:00:24 by abittel           #+#    #+#             */
/*   Updated: 2022/05/18 20:35:10 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int	main()
{
	Array<int> test(4);
	test[0] = 1;
	test[1] = 2;
	test[2] = 3;
	test[3] = 4;
	std::cout << "size is : " << test.size() << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << test[i] << std::endl;
	test[4] = 5;
}