/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:40:25 by abittel           #+#    #+#             */
/*   Updated: 2022/04/27 22:37:36 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyCreationForm.hpp"

int main()
{
    Bureaucrat  b1("Bob", 1);
    Bureaucrat  b2("Gerard", 150);
    ShrubberyCreationForm   s1("Arbre");    
    PresidentialPardonForm  p1("Macron");
    RobotomyCreationForm    r1("robot");

    try
    {
        b1.executeForm(s1);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        b1.signForm(s1);
        b1.signForm(p1);
        b1.signForm(r1);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        b2.executeForm(s1);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        b1.executeForm(s1);
        b1.executeForm(r1);
        b1.executeForm(p1);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    } 
    return (0);
}