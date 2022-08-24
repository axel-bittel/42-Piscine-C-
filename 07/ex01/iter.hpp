/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:21:22 by abittel           #+#    #+#             */
/*   Updated: 2022/05/18 19:34:19 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
template<class T>
void	iter(T* tab, int size, T f(T))
{
	for(int i = 0; i < size; i++)
		tab[i] = f(tab[i]);
}

template<class T>
T	mult2(T elem)
{
	return (elem + elem);
}