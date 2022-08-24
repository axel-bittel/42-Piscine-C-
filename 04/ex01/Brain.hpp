/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:20:25 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 22:18:55 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
class Brain
{
	public:
		Brain();
		Brain(Brain& cp);
		~Brain();
		Brain&	operator=(Brain& cp);
	private:
		std::string	ideas[100];
};
#endif