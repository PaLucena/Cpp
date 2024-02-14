/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:42:32 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 18:33:40 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "[WrongAnimal] Default constructor called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopy)
{
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
	*this = toCopy;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &toCopy)
{
	this->_type = toCopy._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Braiiiiiins" << std::endl;
}


std::string		WrongAnimal::getType()
{
	return this->_type;
}
