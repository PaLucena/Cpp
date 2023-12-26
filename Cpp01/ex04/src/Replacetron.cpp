/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacetron.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:51:14 by palucena          #+#    #+#             */
/*   Updated: 2023/12/26 21:00:13 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacetron.hpp"

std::string	replaceLine(std::string line, std::string s1, std::string s2)
{
	std::size_t	i = line.find(s1);

	std::cout << "Antes: " << line << std::endl;
	while (!line.empty() && i != std::string::npos)
	{
		std::cout << "entra con: " << i << std::endl;
		line.erase(i, s1.length());
		line.insert(i, s2);
		i = line.find(s1, i + 1);
	}
	std::cout << "Despues: " << line << std::endl;
	return (line);
}

bool	ftReplacetron(std::string file, std::string s1, std::string s2)
{
	std::string		line;
	std::ifstream	fileRead(file);
	std::ofstream	fileWrite(file + ".replace");

	if (!fileRead.is_open() || !fileWrite.is_open())
	{
		std::cout << "error: cannot open " << file << std::endl;
		return 1;
	}
	std::getline(fileRead, line);
	while (!fileRead.eof())
	{
		fileWrite << replaceLine(line, s1, s2) << std::endl;
		std::getline(fileRead, line);
	}
	fileRead.close();
	fileWrite.close();
	return 0;
}