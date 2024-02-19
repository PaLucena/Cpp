/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:46:34 by palucena          #+#    #+#             */
/*   Updated: 2024/02/19 19:55:56 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "[AMateria] Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "[AMateria] Type constructor called" << std::endl;
	_type = type;
}

AMateria::AMateria(const AMateria &toCopy)
{
	std::cout << "[AMateria] Copy constructor called" << std::endl;
	*this = toCopy;
}

AMateria	&AMateria::operator=(const AMateria &toCopy)
{
	if (*this != toCopy)
		_type = toCopy._type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "[AMateria] Destructor called" << std::endl;
}
