/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:07:15 by abittel           #+#    #+#             */
/*   Updated: 2022/04/27 10:37:12 by abittel          ###   ########.fr       */
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
        friend std::ostream& operator<<(std::ostream& out, Bureaucrat& obj);
        std::string get_name() const;
        int         get_echellon() const;
        void        increment_ech();
        void        decrement_ech();
        void        signForm(Form& Form);
    private:
        std::string _name;
        int         _echellon;
        class GradeTooHighExeception : public std::exception
        {
            private:
                const char* what()const throw()
                {
                    return ("Grade Too High");
                }
        };
        class GradeTooLowExeception : public std::exception
        {
            private:
                const char* what()const throw()
                {
                    return ("Grade Too Low");
                }
        };
        
};
#endif