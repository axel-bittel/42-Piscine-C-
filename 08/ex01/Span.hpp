/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:58:11 by abittel           #+#    #+#             */
/*   Updated: 2022/05/18 23:01:26 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>
#include <vector>
#include <algorithm>

class Span
{
	public:
		Span(int number = 0);
		Span(const Span& cp);
		Span&	operator=(const Span& cp);
		~Span();
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
	private:
		std::vector<int>	tab;
		int	maxN;
		class SpanFill : public std::exception
		{
			public: const char* what() const throw() { return ("Span fill !");}
		};
		class SpanDistError : public std::exception
		{
			public: const char* what() const throw() { return ("Distance can't be find !");}
		};
};