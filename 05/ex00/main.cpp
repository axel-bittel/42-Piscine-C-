/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:40:25 by abittel           #+#    #+#             */
/*   Updated: 2022/07/10 23:02:55 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  b1("Bob", 1);
    Bureaucrat  b2("Gerard", 150);

    std::cout << b1;
    std::cout << b2;
    try
    {
        b1.increment_ech();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    b1 = b2;
    std::cout << b1;
    b1.increment_ech();
    std::cout << b1;
    try
    {
        b2.decrement_ech();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b3("pute", -150);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}