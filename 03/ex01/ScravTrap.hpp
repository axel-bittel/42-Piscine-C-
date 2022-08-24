/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:59:39 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 15:31:45 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
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