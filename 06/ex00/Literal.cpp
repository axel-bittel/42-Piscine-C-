/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 23:31:04 by abittel           #+#    #+#             */
/*   Updated: 2022/05/19 13:47:11 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"
#include <sstream>
#include <limits>
#include <iomanip>
#include <sstream>

Literal::Literal(std::string str) : _val(str), _castInt(0), _castFloat(0.f), _castDouble(0.), _castChar(0)
{}
Literal::Literal(Literal& l) : _val(l._val), _castInt(l._castInt), _castFloat(l._castFloat), _castDouble(l._castDouble), _castChar(l._castChar)
{
}
Literal::~Literal()
{}
Literal& Literal::operator=(Literal& cp)
{
	this->_val = cp._val;
	return (*this);
}
void	Literal::printConvert()
{
	int	prec;
	if (!(prec = is_double()) && !is_float() && !is_int())
	{
		if (is_char())
		{
			this->_castChar = _val[0];
			this->_castInt = static_cast<int>(_val[0]);
			this->_castDouble = static_cast<double>(_val[0]);
			this->_castFloat = static_cast<float>(_val[0]);
			std::cout << "char : " << _castChar << std::endl;
			std::cout << "int : " << _castInt << std::endl;
		}
		else if (!_val.compare("nanf") || !_val.compare("nan"))
		{
			this->_castDouble = std::numeric_limits<double>::quiet_NaN();
			this->_castFloat = std::numeric_limits<float>::quiet_NaN();
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible" << std::endl;
		}
		else if (!_val.compare("-inff") || !_val.compare("+inff") || !_val.compare("-inf") || !_val.compare("+inf"))
		{
			if (_val[0] == '-')
			{
				this->_castDouble = -std::numeric_limits<double>::infinity();
				this->_castFloat = -std::numeric_limits<float>::infinity();
			}
			else
			{
				this->_castDouble = std::numeric_limits<double>::infinity();
				this->_castFloat = std::numeric_limits<float>::infinity();
			}
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible" << std::endl;
		}
		std::cout << "float : " << _castFloat << "f"<< std::endl;
		std::cout << "double: " << _castDouble << std::endl;
	}
	else
	{
		long double	res;
		res = std::strtold(_val.c_str(), nullptr);
		_castDouble = static_cast<double>(res);
		try
		{
			_castFloat = std::stof(_val);
		}
		catch(const std::exception& e)
		{
			_castFloat = 0.0f;
		}
		_castInt = static_cast<int>(res);
		_castChar = static_cast<char>(_castInt);
		if (_castInt < 0 || _castInt > 255)
			std::cout << "char : OVERFLOW" << std::endl;
		else if (std::isprint(_castChar))
			std::cout << "char : " << _castChar << std::endl;
		else
			std::cout << "char : " << "No displayable" << std::endl;
		if (static_cast<long>(_castDouble) <= std::numeric_limits<int>::max() && static_cast<long>(_castDouble) >= std::numeric_limits<int>::min())
			std::cout << "int : " << _castInt << std::endl;
		else
			std::cout << "int : OVERFLOW" << std::endl;
		std::cout << std::setprecision(std::max(prec, 1)) << std::fixed;
		if (res <= std::numeric_limits<float>::max() && res >= -std::numeric_limits<float>::max())
			std::cout << "float : " << _castFloat << "f"<< std::endl;
		else
			std::cout << "float : OVERFLOW" << std::endl;
		try 
		{
			_castDouble = std::stod(_val);
			std::cout << "double: " << _castDouble << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << "double: OVERFLOW" << std::endl;
		}
	}
}
int	Literal::is_char()
{
	if (this->_val.length() == 1)
		return (true);
	return (false);
}
int	Literal::is_double()
{
	int	nb_points = 0;
	int	nb_prec = 0;

	for (unsigned int i = 0; i < _val.length(); i++)
	{
		if (!(std::isdigit(_val[i]) || (_val[i] == '-' && i == 0) || (!nb_points && _val[i] == '.')))
			return (false);
		if (nb_points)
			nb_prec++;
		if (_val[i] == '.')
			nb_points++;
	}
	return (nb_prec);
}
int	Literal::is_float()
{
	int	nb_points = 0;
	int	find_number = 0;

	for (unsigned int i = 0; i < _val.length(); i++)
	{
		if (!(std::isdigit(_val[i]) || (_val[i] == '-' && i == 0 && std::isdigit(_val[i + 1])) || (!nb_points && _val[i] == '.') || (_val[i] == 'f' && nb_points <= 1 && find_number)))
			return (false);
		if (_val[i] == '.')
			nb_points++;
		if (std::isdigit(_val[i]))
			find_number++;
	}
	return (true);
}

int	Literal::is_int()
{
	for (unsigned int i = 0; i < _val.length(); i++)
		if (!std::isdigit(_val[i]) && _val[i] != '-' && i != 0)
			return (0);
	return (1);
}

int	Literal::is_special()
{
	if (!_val.compare("nanf") || !_val.compare("nan") || !_val.compare("-inff") || !_val.compare("+inff") || !_val.compare("-inf") || !_val.compare("+inf"))
		return (1);
	return (0);
}