/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:55:19 by palucena          #+#    #+#             */
/*   Updated: 2024/01/04 16:41:53 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fractionalBits = 8;
	this->fixedNb = 0;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fractionalBits = 8;
	this->fixedNb = toCopy.getRawBits();
}

Fixed::Fixed(const int Nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->fractionalBits = 8;
	this->fixedNb = Nb * (1 << this->fractionalBits);
}

Fixed::Fixed(const float Nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->fractionalBits = 8;
	this->fixedNb = static_cast<int>(Nb * (1 << this->fractionalBits));
}

Fixed	&Fixed::operator=(const Fixed &toCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &toCopy)
		this->fixedNb = toCopy.fixedNb;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &toCopy)
{
	out << toCopy.toFloat();
	return out;
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

float	Fixed::toFloat() const
{
	return static_cast<float>(this->fixedNb) / (1 << this->fractionalBits);
}

int	Fixed::toInt() const
{
	return static_cast<int>(this->fixedNb / (1 << this->fractionalBits));
}
