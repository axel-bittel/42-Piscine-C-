/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:38:13 by abittel           #+#    #+#             */
/*   Updated: 2022/04/27 21:21:38 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYCREATIONFORM_HPP
#define ROBOTOMYCREATIONFORM_HPP
#include "Form.hpp"
#include <cstdlib>
#include <ctime>
class RobotomyCreationForm : public Form
{
    public :
        RobotomyCreationForm(std::string target = "");
        RobotomyCreationForm(RobotomyCreationForm& cp);
        ~RobotomyCreationForm();
        RobotomyCreationForm& operator=(RobotomyCreationForm& cp);
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

