/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:04:49 by abittel           #+#    #+#             */
/*   Updated: 2022/05/18 23:11:22 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int number) : tab(), maxN(number)
{}
Span::Span(const Span& cp) : tab(cp.tab), maxN(cp.maxN) 
{}
Span&	Span::operator=(const Span& cp)
{
	maxN = cp.maxN;
	tab = cp.tab;
	return *(this);
}
Span::~Span()
{}
void	Span::addNumber(int num)
{
	if (tab.size() < (unsigned int)maxN)
		tab.push_back(num);
	else
		throw SpanFill();
}
int		Span::longestSpan()
{
	if (tab.size() <= 1)
		throw SpanDistError(); 
	std::vector<int> sorted = tab; 
	std::sort(sorted.begin(), sorted.end());
	return (*(sorted.end() - 1) - *sorted.begin());
}
int		Span::shortestSpan()
{
	if (tab.size() <= 1)
		throw SpanDistError(); 
	std::vector<int> sorted = tab; 
	std::sort(sorted.begin(), sorted.end());
	int min = *(sorted.begin() + 1) - *(sorted.begin());
	for (std::vector<int>::iterator i = (sorted.begin() + 1); i + 1 != sorted.end(); i++)
		if (*i - *(i - 1) < min)
			min = *i - *(i - 1);
	return (min);
}