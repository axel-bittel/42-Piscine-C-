/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:34:07 by abittel           #+#    #+#             */
/*   Updated: 2022/03/06 01:15:15 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMAN_B
#define HUMAN_B
#include "Weapon.hpp"
#include <string>

class HumanB
{
public :
	HumanB (std::string name);
	void	attack(void);
	void	setWeapon(Weapon& aW);
private:
	Weapon	*w_human;
	std::string	name;
};
#endif
