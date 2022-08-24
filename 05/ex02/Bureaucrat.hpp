/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:07:15 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 23:09:14 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"
class Form;
class Bureaucrat
{
    public :
        Bureaucrat(std::string name = "", int echellon = 150);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat& cp);
        Bureaucrat& operator=(Bureaucrat& cp);
        std::string get_name() const;
        int         get_echellon() const;
        void        increment_ech();
        void        decrement_ech();
        void        signForm(Form& Form);
        void        executeForm(Form const &form);
    private:
        std::string _name;
        int         _echellon;
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
        
};
std::ostream& operator<<(std::ostream& out, Bureaucrat& obj);
#endif