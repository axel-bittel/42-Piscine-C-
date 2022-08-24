/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:42:12 by abittel           #+#    #+#             */
/*   Updated: 2022/04/27 16:26:56 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl k;

	k.complain("WARNING");
	k.complain("DEBUG");
	k.complain("ERROR");
	k.complain("INFO");
	k.complain("TEST");
}
