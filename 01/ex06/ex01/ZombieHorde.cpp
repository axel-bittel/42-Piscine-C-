/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:51:02 by abittel           #+#    #+#             */
/*   Updated: 2022/04/13 22:09:52 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*tab_z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		tab_z[i].set_name(name);
		tab_z[i].annouce();
	}
	return (tab_z);
}

