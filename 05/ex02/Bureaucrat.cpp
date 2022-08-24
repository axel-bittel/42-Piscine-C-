/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:09:42 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 23:09:29 by abittel          ###   ########.fr       */
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
    std::cout << obj.get_name() << ", bureaucrat grade " << obj.get_echellon() << "." << std::endl;
    return (out);
}

void    Bureaucrat::signForm(Form& f)
{
    try { 
        f.beSigned(*this);
        std::cout << this->_name << " signed " << f.get_name() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << this->_name << " couldn't sign " << f.get_name() << " because :" << e.what() << "." << std::endl;
    }
}
void        Bureaucrat::executeForm(Form const &form)
{
    try
    {
       form.execute(*this);
       std::cout << get_name() << " executed " << form.get_name() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << get_name() << " cannot executed because : " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighExeception::what() const throw()
{
    return ("Grade Too High");
}

const char* Bureaucrat::GradeTooLowExeception::what() const throw()
{
    return ("Grade Too Low");
}