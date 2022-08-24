/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:59:39 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 19:29:52 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string n = "");
	FragTrap(FragTrap &st);
	~FragTrap();
	FragTrap& operator=(FragTrap& st);
	void	highFivesGuys();
	void	attack(const std::string& target); 
};
#endif