/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:40:05 by abittel           #+#    #+#             */
/*   Updated: 2022/04/26 16:00:20 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->stuff[0] = 0;
    this->stuff[1] = 0;
    this->stuff[2] = 0;
    this->stuff[3] = 0;
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->stuff[i])
			delete this->stuff[i];
}
MateriaSource::MateriaSource(MateriaSource& cp)
{
    for (int i = 0; i < 4; i++)
	{
		if (cp.stuff[i])
			this->stuff[i] = cp.stuff[i]->clone();
		else
			this->stuff[i] = 0;
	}
}
MateriaSource& MateriaSource::operator=(MateriaSource& cp)
{
    for (int i = 0; i < 4; i++)
	{
		if (cp.stuff[i])
			this->stuff[i] = cp.stuff[i]->clone();
		else
			this->stuff[i] = 0;
	}
    return (*this);
}
void MateriaSource::learnMateria(AMateria* mat)
{
    for (int i = 0; i < 4; i++)
		if (!this->stuff[i])
			this->stuff[i] = mat;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    AMateria    *res;

    res = 0;
    for (int i = 3; i > 0; i--)
    {
        if (this->stuff[i] && this->stuff[i]->getType() == type)
        {
            res = stuff[i];
            break ;
        }
    }
    if (!res)
        return (0);
    return (res->clone());
}
