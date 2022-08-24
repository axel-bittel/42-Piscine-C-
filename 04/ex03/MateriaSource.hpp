/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:33:34 by abittel           #+#    #+#             */
/*   Updated: 2022/04/26 16:00:00 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource& cp);
        ~MateriaSource();
        virtual MateriaSource& operator=(MateriaSource& cp);
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
    private:
        AMateria    *stuff[4];
};
#endif