/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:40:47 by abittel           #+#    #+#             */
/*   Updated: 2022/04/14 23:40:26 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal	**tab = new Animal*[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			tab[i] = new Dog;
		else
			tab[i] = new Cat;
	}
	for (int i = 0; i < 10; i++)
		tab[i]->makeSound();
	for (int i = 0; i < 10; i++)
		delete tab[i];
	delete[] tab;
	return 0;
}
