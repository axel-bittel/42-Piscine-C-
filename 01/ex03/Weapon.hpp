/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:11:39 by abittel           #+#    #+#             */
/*   Updated: 2022/03/06 00:54:22 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>
class Weapon 
{
public:
	Weapon(void);
	Weapon(std::string type);
	const std::string&	getType(void) const;
	void	setType(std::string type);
private:
		std::string	type;
};
#endif
