/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:46:26 by abittel           #+#    #+#             */
/*   Updated: 2022/04/27 15:20:05 by abittel          ###   ########.fr       */
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
	void	set_name (std::string name);
private :
	std::string	name;
};
Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);
#endif
