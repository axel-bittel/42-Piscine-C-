/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:58:18 by abittel           #+#    #+#             */
/*   Updated: 2022/05/19 15:12:02 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

std::uintptr_t   serialize(Data* ptr)
{
    return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data*   deserialize(std::uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}