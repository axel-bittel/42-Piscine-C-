/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:41:19 by abittel           #+#    #+#             */
/*   Updated: 2022/05/18 20:37:45 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>

template<class T>
class Array
{
	public:
		Array() : tab_size(0)
		{
			tab = new T[0];
		}

		Array(unsigned int n) : tab_size(n)
		{
			tab = new T[tab_size];
		}

		Array(Array& cp) : tab_size(cp.tab_size)
		{
			tab = new T[tab_size];
			for (int i = 0; i < tab_size; i++)
				tab[i] = cp.tab[i];
		}
		Array& operator=(Array& cp)
		{
			delete[] tab;
			tab_size = cp.tab_size;
			tab = new T[tab_size];
			for (int i = 0; i < tab_size; i++)
				tab[i] = cp.tab[i];
		}
		T&	operator[](int idx)
		{
			if (idx >= 0 && idx < (int)tab_size)
				return (tab[idx]);
			else
				throw Array::NotInRange();
		}
		int	size() const
		{
			return (tab_size);
		}
		~Array()
		{
			delete[] tab;
		}
	private:
		T* 	tab;
		unsigned int	tab_size;
		class NotInRange : public std::exception
		{
			public :
				const char* what() const throw()
				{
					return ("IndexOutOfRange");
				}
		};
};