/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:40:25 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 23:37:48 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
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
    Intern someRandomIntern;
    Form* rrf;
    try
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        rrf = someRandomIntern.makeForm("robotom request", "Bender");
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}