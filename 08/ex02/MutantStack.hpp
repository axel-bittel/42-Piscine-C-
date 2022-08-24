/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:39:09 by abittel           #+#    #+#             */
/*   Updated: 2022/07/12 15:19:32 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <deque>
template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator             iterator;
        typedef typename std::stack<T>::container_type::const_iterator       const_iterator;

        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack& cp) : std::stack<T>(cp) {}
        iterator    begin()
        {   return (this->c.begin());  }
        const_iterator    begin() const
        {   return (this->c.begin());  }
        iterator    end()
        {   return (this->c.end());  }
        const_iterator    end() const
        {   return (this->c.end());  }
};