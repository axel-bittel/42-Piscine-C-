/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:34:07 by abittel           #+#    #+#             */
/*   Updated: 2022/03/06 01:07:19 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMAN_A
#define HUMAN_A
#include "Weapon.hpp"
#include <string>

class HumanA
{
public :
	HumanA (std::string name, Weapon& w);
	void	attack(void);
private:
	Weapon	&w_human;
	std::string	name;
};
#endif
