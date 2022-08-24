/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:53:56 by abittel           #+#    #+#             */
/*   Updated: 2022/04/27 21:25:28 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)  
{}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& cp) : Form("PresidentialPardonForm", 25, 5), _target(cp._target)
{}
PresidentialPardonForm::~PresidentialPardonForm()
{}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& cp)
{
	cp._target = cp._target;
	Form::operator=(cp);
	return (*this);
}
std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}
void        PresidentialPardonForm::execute(Bureaucrat const & b) const
{
	if (b.get_echellon() > this->get_echellonToExec())
		throw Form::GradeTooLowExeception();
	if (!this->get_isSigned())
		throw IsNotSignedExeception();
    std::cout << getTarget() << " has been fogive by Zaphod Beeblebrox." << std::endl;
}

const char* PresidentialPardonForm::IsNotSignedExeception::what()const throw()
{
	return ("Form not sign");
}