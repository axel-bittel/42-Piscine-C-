/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:06:44 by abittel           #+#    #+#             */
/*   Updated: 2022/04/27 10:08:37 by abittel          ###   ########.fr       */
/*                               :e                                              */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int echellonToSign, int echellonToExec) : _name(name), _isSigned(false), _echellonToSign(echellonToSign), _echellonToExec(echellonToExec)
{
    if (echellonToSign < 1 || echellonToExec < 1)
        throw Form::GradeTooHighExeception();
    if (echellonToSign > 150 || echellonToExec > 150)
        throw Form::GradeTooLowExeception();
}
Form::Form(Form& cp) : _name(cp._name), _isSigned(cp._isSigned), _echellonToSign(cp._echellonToSign), _echellonToExec(cp._echellonToExec)
{}
Form::~Form()
{}
Form&   Form::operator=(Form& cp)
{
    std::string& name = const_cast<std::string&>(this->_name);
    name = cp.get_name();
    int&    inter = const_cast<int&>(this->_echellonToSign);
    inter = this->_echellonToSign;
    inter = const_cast<int&>(this->_echellonToExec);
    inter = this->_echellonToExec;
    this->_isSigned = cp._isSigned;
    return (*this);
}
std::ostream& operator<<(std::ostream& out, Form& form)
{
    std::string notStr = "";
    if (!form.isSign())
        notStr = "not ";
    out << "Form " << form.get_name() << " is " << notStr << "signed. It can be signed by echellon : " << form.get_echellonToSign() << "." << std::endl;
    return (out);
}
void        Form::beSigned(Bureaucrat& b)
{
    if (b.get_echellon() > _echellonToSign)
        throw Form::GradeTooLowExeception();
    this->_isSigned = true;
}
bool        Form::isSign() const
{
    return (this->_isSigned);
}
std::string Form::get_name() const
{
    return (this->_name);
}
int         Form::get_echellonToSign() const
{
    return (this->_echellonToSign);
}
int         Form::get_echellonToExec() const
{
    return (this->_echellonToExec);
}

int Form::get_isSigned() const 
{
    return (_isSigned); 
}

const char* Form::GradeTooHighExeception::what()const throw()
{
    return ("Grade Too High");
}

const char* Form::GradeTooLowExeception::what()const throw()
{
    return ("Grade Too Low");
}