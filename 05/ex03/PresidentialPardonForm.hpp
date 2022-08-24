/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:38:13 by abittel           #+#    #+#             */
/*   Updated: 2022/04/27 21:21:38 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP 
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include <cstdlib>
class PresidentialPardonForm : public Form
{
    public :
        PresidentialPardonForm(std::string target = "");
        PresidentialPardonForm(PresidentialPardonForm& cp);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(PresidentialPardonForm& cp);
        std::string getTarget() const;
        void        execute(Bureaucrat const & b) const;
    private :
        std::string _target;
        class IsNotSignedExeception : public std::exception
        {
        private:
            const char* what()const throw();
        };
};
#endif

