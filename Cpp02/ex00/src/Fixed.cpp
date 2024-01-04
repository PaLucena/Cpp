/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:55:19 by palucena          #+#    #+#             */
/*   Updated: 2024/01/04 11:43:18 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedNb = 0;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedNb = toCopy.fixedNb;
}

Fixed	&Fixed::operator=(const Fixed &toCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &toCopy)
		this->fixedNb = toCopy.fixedNb;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "Member function getRawBits called" << std::endl;
	return this->fixedNb;
}

void	Fixed::setRawBits(int const Raw)
{
	std::cout << "Member function setRawBits called" << std::endl;
	this->fixedNb = Raw;
}
