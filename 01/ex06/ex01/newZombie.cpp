/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nweZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:49:28 by abittel           #+#    #+#             */
/*   Updated: 2022/01/20 18:50:51 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*res = new Zombie(name);
	return (res);
}
