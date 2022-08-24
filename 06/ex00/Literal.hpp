/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:11:31 by abittel           #+#    #+#             */
/*   Updated: 2022/05/19 13:46:49 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITTERAL_HPP
#define LITTERAL_HPP
#include <iostream>
class Literal
{
	public:
		Literal(std::string str = "");
		Literal(Literal& l);
		~Literal();
		Literal& operator=(Literal& cp);
		void	printConvert();
		int	is_char();
		int	is_double();
		int	is_float();
		int	is_int();
		int	is_special();
	private:
		std::string	_val;
		int		_castInt;
		float	_castFloat;
		double	_castDouble;
		char	_castChar;
};
#endif