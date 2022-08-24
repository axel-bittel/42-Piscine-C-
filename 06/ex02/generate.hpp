/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:52:33 by abittel           #+#    #+#             */
/*   Updated: 2022/05/19 16:52:48 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Base.hpp"
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base*   generate();
void    identify(Base* p);
void    identify(Base& p);