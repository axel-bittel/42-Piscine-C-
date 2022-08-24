/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:07:15 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 23:07:24 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <stdexcept>
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