/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:12:50 by abittel           #+#    #+#             */
/*   Updated: 2022/05/18 22:36:03 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main()
{
	Span sp3 = Span(5);
	sp3.addNumber(6);
	sp3.addNumber(3);
	sp3.addNumber(17);
	sp3.addNumber(9);
	sp3.addNumber(11);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	Span	sp(10000);
	for(int i = 0; i < 10000; i++)
	{
		sp.addNumber(i);
	}
	std::cout << sp.longestSpan() << std::endl;	
	std::cout << sp.shortestSpan() << std::endl;	
	try
	{
		sp.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Span	sp2(2);	
	try
	{
		sp2.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp2.addNumber(42);
		sp2.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}