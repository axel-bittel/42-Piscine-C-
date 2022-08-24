/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abittel <abittel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:02:23 by abittel           #+#    #+#             */
/*   Updated: 2022/05/30 23:44:29 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <string.h>
#include <iostream>

void	print_str_without_str(std::string str, char *str1, char *str2, std::ofstream& fout)
{
	size_t	i;
	size_t	idx_find;

	i = -1;
	while (str[++i])
	{
		idx_find = str.find(str1, i);
		if (idx_find != std::string::npos)
		{
			fout << str.substr(i, idx_find - i);
			fout << str2;
			i = idx_find + strlen(str1) - 1;
		}
		else
			fout << str[i];
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	file;
	std::ofstream	file_out;
	std::string		name_file;
	std::string		inter;

	if (argc == 4)
	{
		file.open(argv[1]);
		name_file = argv[1];
		name_file += ".replace";
		file_out.open(name_file.c_str());
		if(file.is_open() && file_out.is_open())
		{
			while(getline(file, inter))
			{
				print_str_without_str(inter, argv[2], argv[3], file_out);
				file_out << std::endl;
			}	
		}
		else
			std::cerr << "FILE ERROR !" << std::endl;
		return (0);
	}
	std::cerr << "ARG ERROR !" << std::endl;
}
