/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:46:26 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 18:22:55 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &toCopy)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = toCopy;
}

Dog	&Dog::operator=(const Dog &toCopy)
{
	this->_type = toCopy._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
