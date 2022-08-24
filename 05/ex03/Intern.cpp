/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 23:01:40 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 23:36:29 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}
Intern::Intern(Intern& cp)
{
	(void)cp;
}
Intern::~Intern()
{}
Intern& Intern::operator=(Intern& cp)
{
	(void)cp;
	return (*this);
}
Form* Intern::makeForm(std::string formType, std::string formName)
{
	int	type;

	type = -1;
	std::string	names[3] = {"presidential request", "robotomy request", "shrubery request"};
	for (int i = 0; i < 3; i++)
		if (formType == names[i])
			type = i;
	switch (type)
	{
	case 0:
		return (new PresidentialPardonForm(formName));
		break;
	case 1:
		return (new RobotomyCreationForm(formName));
		break;
	case 2:
		return (new ShrubberyCreationForm(formName));
		break;
	default:
		throw FormNotExist();
		break;
	}
	return (0);
}

const char* Intern::FormNotExist::what()const throw()
{
	return ("Intern doesn't know this Form, he is pay too much for his job !!!!");
}
