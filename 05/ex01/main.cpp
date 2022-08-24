/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:40:25 by abittel           #+#    #+#             */
/*   Updated: 2022/04/27 11:57:16 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    print_arbre(int base_size)
{
    if (!(base_size % 2))
        base_size--;
    for (int i = 1; i <= base_size; i += 2)
    {
        int space = (base_size - i) / 2;
        for (int j = 0; j < space; j++)
            std::cout << " ";
        for (int j = 0; j < i; j++)
            std::cout << "*";
        std::cout << std::endl;
    }
    for (int j = 0; j < (base_size - 1) / 2; j++)
            std::cout << " ";
    std::cout << "|" << std::endl;
    for (int j = 0; j < (base_size - 1) / 2; j++)
            std::cout << " ";
    std::cout << "|" << std::endl;

}

int main()
{
    Bureaucrat  b1("Bob", 1);
    Bureaucrat  b2("Gerard", 150);
    Form        f1("42Acte", 10, 10);
    
    std::cout << f1;
    b2.signForm(f1);
    b1.signForm(f1);
    return (0);
}