/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:42:32 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 14:08:51 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "[Animal] Default constructor called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal &toCopy)
{
	std::cout << "[Animal] Copy constructor called" << std::endl;
	*this = toCopy;
}

Animal	&Animal::operator=(const Animal &toCopy)
{
	this->_type = toCopy._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "@#$%&!" << std::endl;
}
