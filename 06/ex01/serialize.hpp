/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:06:07 by abittel           #+#    #+#             */
/*   Updated: 2022/05/19 15:12:40 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdint>
struct Data
{
    int a;
};
std::uintptr_t   serialize(Data* ptr);
Data*   deserialize(std::uintptr_t raw);
