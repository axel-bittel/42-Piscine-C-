/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 21:26:47 by abittel           #+#    #+#             */
/*   Updated: 2022/05/18 21:51:39 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>
#include <algorithm>

class NotFound;
template <class T>
int	easyfind(T& c, int	val)
{
	class T::iterator i;
	i = std::find(c.begin(), c.end(), val);
	if (i != c.end())
		return (*i);
	throw  NotFound();
}

class NotFound : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("Elemt not found !");
		}
};