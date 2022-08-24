/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:59:39 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 19:29:52 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class ScravTrap : public ClapTrap
{
public:
	ScravTrap(std::string n = "");
	ScravTrap(ScravTrap &st);
	~ScravTrap();
	ScravTrap& operator=(ScravTrap& st);
	void	guardGate();
	void	attack(const std::string& target); 
};
#endif