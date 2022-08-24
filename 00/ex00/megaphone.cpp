/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:01:20 by abittel           #+#    #+#             */
/*   Updated: 2022/04/22 18:29:28 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		for(int j = 0; argv[1 + j]; j++)
		{
			for (int i = 0; argv[1 + j][i]; i++)
				std::cout << (unsigned char)std::toupper(argv[1 + j][i]);
			if (argc > j + 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	else if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}
