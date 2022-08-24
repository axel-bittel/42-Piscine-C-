/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:57:39 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 23:36:42 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyCreationForm.hpp"
class Intern
{
	public:
		Intern();
		Intern(Intern& cp);
		~Intern();
		Intern& operator=(Intern& cp);
		Form*	makeForm(std::string formType, std::string formName);
		class FormNotExist : public std::exception
		{
			const char* what()const throw();
		};
};
#endif