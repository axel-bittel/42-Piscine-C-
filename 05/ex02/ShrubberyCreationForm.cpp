/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:53:56 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 23:12:23 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) 
{}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& cp) : Form("ShrubberyCreationForm", 145, 137), _target(cp._target) 
{}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& cp)
{
	cp._target = cp._target;
	Form::operator=(cp);
	return (*this);
}
std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}
void        ShrubberyCreationForm::execute(Bureaucrat const & b) const
{
	if (b.get_echellon() > this->get_echellonToExec())
		throw Form::GradeTooLowExeception();
	if (!this->get_isSigned())
		throw IsNotSignedExeception();
	std::string filename = getTarget() + "_shrubbery";
	std::ofstream	file;
	file.open(filename.c_str(), std::ios::out);
	print_arbre(20, file);
}
void    ShrubberyCreationForm::print_arbre(int base_size, std::ostream &out) const
{
    if (!(base_size % 2))
        base_size--;
    for (int i = 1; i <= base_size; i += 2)
    {
        int space = (base_size - i) / 2;
        for (int j = 0; j < space; j++)
            out << " ";
        for (int j = 0; j < i; j++)
            out << "*";
        out << std::endl;
    }
    for (int j = 0; j < (base_size - 1) / 2; j++)
            out << " ";
    out << "|" << std::endl;
    for (int j = 0; j < (base_size - 1) / 2; j++)
            out << " ";
    out << "|" << std::endl;
}

const char* ShrubberyCreationForm::IsNotSignedExeception::what()const throw()
{
    return ("Form not sign");
}