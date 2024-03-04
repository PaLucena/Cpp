/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:58:43 by palucena          #+#    #+#             */
/*   Updated: 2024/03/04 17:35:59 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "[ScalarConverter] Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &toCopy)
{
	std::cout << "[ScalarConverter] Copy constructor called" << std::endl;
	(void)toCopy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &toCopy)
{
	(void)toCopy;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "[ScalarConverter] Destructor called" << std::endl;
}

static void	convert(const std::string &s)
{
	
}
