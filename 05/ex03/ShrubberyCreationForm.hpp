/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:38:13 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 23:12:29 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP
#include "Form.hpp"
class ShrubberyCreationForm : public Form
{
    public :
        ShrubberyCreationForm(std::string target = "");
        ShrubberyCreationForm(ShrubberyCreationForm& cp);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& cp);
        std::string getTarget() const;
        void        execute(Bureaucrat const & b) const;
    private :
        std::string _target;
        void    print_arbre(int base_size, std::ostream &out) const;
    class IsNotSignedExeception : public std::exception
    {
    private:
        const char* what()const throw();
    };
};
#endif

