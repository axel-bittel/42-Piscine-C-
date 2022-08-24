/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 00:56:47 by abittel           #+#    #+#             */
/*   Updated: 2022/03/06 01:00:53 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << &str << " / " << stringPTR << " / " << &stringREF << std::endl;
	std::cout << str << " / " << *stringPTR << " / " << stringREF << std::endl;
}
