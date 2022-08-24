/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:59:36 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 23:14:56 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
public:
    Form(std::string name = "", int echellonToSign = 1, int echllonToExec = 1);
    Form(Form& cp);
    ~Form();
    Form&   operator=(Form& cp);
    friend std::ostream& operator<<(std::ostream& out, Form& form);
    void    beSigned(Bureaucrat& b);
    bool    isSign() const;
    std::string get_name() const;
    int         get_echellonToSign() const;
    int         get_echellonToExec() const;
private:
    class GradeTooHighExeception : public std::exception
    {
    private:
        const char* what()const throw();
    };
    class GradeTooLowExeception : public std::exception
    {
       private:
       const char* what()const throw();
    };

    const       std::string _name;
    bool        _isSigned;
    const int   _echellonToSign;   
    const int   _echellonToExec;   
};
#endif