/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:56:58 by abittel           #+#    #+#             */
/*   Updated: 2022/05/19 15:13:36 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"
#include <iostream>

int main()
{
    struct Data d;
    d.a = 1;

    uintptr_t   ptr;
    ptr = serialize(&d);
    Data*   p;
    p = deserialize(ptr);
    std::cout << p->a << std::endl;
    return (0);
}