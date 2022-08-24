/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:09:42 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 23:06:26 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int echellon) : _name(name), _echellon(echellon)
{
    if (echellon < 1)
        throw Bureaucrat::GradeTooHighExeception();
    if (echellon > 150)
        throw Bureaucrat::GradeTooLowExeception();
}
Bureaucrat::~Bureaucrat()
{}
Bureaucrat::Bureaucrat(Bureaucrat& cp) : _name(cp.get_name()), _echellon(cp.get_echellon())
{}
Bureaucrat& Bureaucrat::operator=(Bureaucrat& cp)
{
    this->_echellon = cp.get_echellon();
    this->_name = cp.get_name();
    return (*this);
}
std::string Bureaucrat::get_name() const
{
    return (this->_name);
}
int Bureaucrat::get_echellon() const
{
    return (this->_echellon);
}
void    Bureaucrat::increment_ech()
{
    this->_echellon--;
    if (this->_echellon < 1)
        throw   Bureaucrat::GradeTooHighExeception();
}
void    Bureaucrat::decrement_ech()
{
    this->_echellon++;
    if (this->_echellon > 150)
        throw   Bureaucrat::GradeTooLowExeception();
}
std::ostream& operator<<(std::ostream& out, Bureaucrat& obj)
{
    std::cout << obj.get_name() << ", bureaucrat grade " << obj.get_name() << "." << std::endl;
    return (out);
}

const char* Bureaucrat::GradeTooHighExeception::what() const throw()
{
    return ("Grade Too High");
}

const char* Bureaucrat::GradeTooLowExeception::what() const throw()
{
    return ("Grade Too Low");
}