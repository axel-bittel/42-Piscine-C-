/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:46:26 by abittel           #+#    #+#             */
/*   Updated: 2022/04/27 15:18:51 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
class Zombie
{
public :
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	void	annouce( void );
private :
	std::string	name;
};
void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
#endif
