/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:55:19 by palucena          #+#    #+#             */
/*   Updated: 2024/02/12 17:03:49 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
	this->fractionalBits = 8;
	this->fixedNb = 0;
}

Fixed::Fixed(const Fixed &toCopy)
{
	this->fractionalBits = 8;
	this->fixedNb = toCopy.getRawBits();
}

Fixed::Fixed(const int Nb)
{
	this->fractionalBits = 8;
	this->fixedNb = Nb * (1 << this->fractionalBits);
}

Fixed::Fixed(const float Nb)
{
	this->fractionalBits = 8;
	this->fixedNb = static_cast<int>(roundf(Nb * (1 << this->fractionalBits)));
}

int	Fixed::getRawBits() const
{
	return this->fixedNb;
}

void	Fixed::setRawBits(int const Raw)
{
	this->fixedNb = Raw;
}

float	Fixed::toFloat() const
{
	return static_cast<float>(this->fixedNb) / (1 << this->fractionalBits);
}

int	Fixed::toInt() const
{
	return static_cast<int>(roundf(this->fixedNb / (1 << this->fractionalBits)));
}

Fixed	&Fixed::operator=(const Fixed &toCopy)
{
	if (this != &toCopy)
		this->fixedNb = toCopy.fixedNb;
	return *this;
}

bool	Fixed::operator<(const Fixed &Nb)
{
	if (this->fixedNb < Nb.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed &Nb)
{
	if (this->fixedNb <= Nb.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>(const Fixed &Nb)
{
	if (this->fixedNb > Nb.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed &Nb)
{
	if (this->fixedNb >= Nb.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed &Nb)
{
	if (this->fixedNb == Nb.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed &Nb)
{
	if (this->fixedNb != Nb.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+(const Fixed &Nb)
{
	Fixed tmp(this->toFloat() + Nb.toFloat());
	return tmp;
}

Fixed	Fixed::operator-(const Fixed &Nb)
{
	Fixed tmp(this->toFloat() - Nb.toFloat());
	return tmp;
}

Fixed	Fixed::operator*(const Fixed &Nb)
{
	Fixed tmp(this->toFloat() * Nb.toFloat());
	return tmp;
}

Fixed	Fixed::operator/(const Fixed &Nb)
{
	Fixed tmp(this->toFloat() / Nb.toFloat());
	return tmp;
}

Fixed	&Fixed::operator++() // ++Nb
{
	this->fixedNb++;
	return *this;
}

Fixed	Fixed::operator++(int) // Nb++
{
	Fixed	tmp(*this);

	this->fixedNb++;
	return tmp;
}

Fixed	&Fixed::operator--() // --Nb
{
	this->fixedNb--;
	return *this;
}

Fixed	Fixed::operator--(int) // Nb--
{
	Fixed	tmp(*this);

	this->fixedNb--;
	return tmp;
}

Fixed	&Fixed::min(Fixed &Nb1, Fixed &Nb2)
{
	if (Nb1.getRawBits() < Nb2.getRawBits())
		return Nb1;
	return Nb2;
}

const Fixed	&Fixed::min(const Fixed &Nb1, const Fixed &Nb2)
{
	if (Nb1.getRawBits() < Nb2.getRawBits())
		return Nb1;
	return Nb2;
}

Fixed	&Fixed::max(Fixed &Nb1, Fixed &Nb2)
{
	if (Nb1.getRawBits() > Nb2.getRawBits())
		return Nb1;
	return Nb2;
}

const Fixed	&Fixed::max(const Fixed &Nb1, const Fixed &Nb2)
{
	if (Nb1.getRawBits() > Nb2.getRawBits())
		return Nb1;
	return Nb2;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &toCopy)
{
	out << toCopy.toFloat();
	return out;
}

Fixed::~Fixed()
{
	// Destructor
}
