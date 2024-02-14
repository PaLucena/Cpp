/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:46:37 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 18:26:36 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] Default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &toCopy)
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
	*this = toCopy;
}

Cat	&Cat::operator=(const Cat &toCopy)
{
	this->_type = toCopy._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}
