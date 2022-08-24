/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:28:05 by abittel           #+#    #+#             */
/*   Updated: 2022/05/19 17:15:47 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "generate.hpp"
#include <ctime>
#include <cstdlib>

Base*   generate()
{
    srand(time(NULL));
    int random = std::rand() % 3 + 1;
    switch (random)
    {
    case 1:
        return (new A());
        break;
     case 2:
        return (new B());
        break;   
    case 3:
        return (new C());
        break;
    default:
        break;
    }
    return (0);
}
void    identify(Base* p)
{
    A* resA;
    B* resB;
    C* resC;

    resA = dynamic_cast<A*>(p);
    resB = dynamic_cast<B*>(p);
    resC = dynamic_cast<C*>(p);
    if (resA)
        std::cout << "A" << std::endl;
    if (resB)
        std::cout << "B" << std::endl;
    if (resC)
        std::cout << "C" << std::endl;
}
void    identify(Base& p)
{

    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << "unknown." << std::endl;
            }
        }
    }
}