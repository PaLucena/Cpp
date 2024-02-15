/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:42:32 by palucena          #+#    #+#             */
/*   Updated: 2024/02/15 13:06:23 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/aAnimal.hpp"

aAnimal::aAnimal()
{
	std::cout << "[Animal] Default constructor called" << std::endl;
	this->_type = "Animal";
}

aAnimal::aAnimal(const aAnimal &toCopy)
{
	std::cout << "[Animal] Copy constructor called" << std::endl;
	*this = toCopy;
}

aAnimal	&aAnimal::operator=(const aAnimal &toCopy)
{
	this->_type = toCopy._type;
	return *this;
}

aAnimal::~aAnimal()
{
	std::cout << "[Animal] Destructor called" << std::endl;
}

void	aAnimal::makeSound() const
{
	std::cout << "@#$%&!" << std::endl;
}


std::string		aAnimal::getType()
{
	return this->_type;
}
