/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 23:20:14 by abittel           #+#    #+#             */
/*   Updated: 2022/05/19 13:47:25 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"
#include <iostream>
#include <string>
#include <sstream>

int	main(int argc, char **argv)
{
	std::string	val;

	if (argc == 2)
	{
		val = argv[1];	
		Literal l(argv[1]);	
		if (!l.is_char() && !l.is_double() && !l.is_int() && !l.is_char() && !l.is_special())
			std::cerr << "NOT A LITERAL" << std::endl;
		else
			l.printConvert();
	}
	else
		std::cerr << "ARG ERROR !" << std::endl;
	return (0);
}