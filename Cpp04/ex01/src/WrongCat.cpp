/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:46:37 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 18:26:36 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "[WrongCat] Default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &toCopy)
{
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
	*this = toCopy;
}

WrongCat	&WrongCat::operator=(const WrongCat &toCopy)
{
	this->_type = toCopy._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "PioPio" << std::endl;
}
