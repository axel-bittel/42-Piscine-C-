/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:53:56 by abittel           #+#    #+#             */
/*   Updated: 2022/04/27 21:25:28 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyCreationForm.hpp"
#include <fstream>

RobotomyCreationForm::RobotomyCreationForm(std::string target) : Form("RobotomyCreationForm", 72, 45), _target(target) 
{
	std::srand(std::time(0));
}
RobotomyCreationForm::RobotomyCreationForm(RobotomyCreationForm& cp) : Form("RobotomyCreationForm", 72, 45), _target(cp._target) 
{}
RobotomyCreationForm::~RobotomyCreationForm()
{}
RobotomyCreationForm& RobotomyCreationForm::operator=(RobotomyCreationForm& cp)
{
	cp._target = cp._target;
	Form::operator=(cp);
	return (*this);
}
std::string RobotomyCreationForm::getTarget() const
{
	return (this->_target);
}
void        RobotomyCreationForm::execute(Bureaucrat const & b) const
{
	if (b.get_echellon() > this->get_echellonToExec())
		throw Form::GradeTooLowExeception();
	if (!this->get_isSigned())
		throw IsNotSignedExeception();
    int num = std::rand() % 100;
    if (num < 50)
        std::cout << getTarget() << " has been robotomised" << std::endl;
    else if(num >= 50)
        std::cout << getTarget() << " hasn't been robotomised" << std::endl;
}

const char* RobotomyCreationForm::IsNotSignedExeception::what()const throw()
{
	return ("Form not sign");
}
