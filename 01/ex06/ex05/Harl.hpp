/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:42:21 by abittel           #+#    #+#             */
/*   Updated: 2022/01/23 16:12:29 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HARL_HPP
#define HARL_HPP
#include <string>
class Harl 
{
	public:
		Harl();
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
#endif
