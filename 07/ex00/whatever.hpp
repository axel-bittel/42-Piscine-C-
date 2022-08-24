/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:06:35 by abittel           #+#    #+#             */
/*   Updated: 2022/05/18 19:19:11 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<class T>
void swap(T& one, T& two) 
{
	T inter;

	inter = two;
	two = one;
	one = inter;
}

template<class T>
T& min(T& one, T& two) 
{
	if (two > one)
		return (one);
	return (two);
}

template<class T>
T& max(T& one, T& two) 
{
	if (two > one)
		return (two);
	return (one);
}