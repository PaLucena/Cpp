/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:06:36 by palucena          #+#    #+#             */
/*   Updated: 2024/02/20 09:31:22 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Headers.hpp"

Cure::Cure()
{
	std::cout << "[Cure] Default constructor called" << std::endl;
	_type = "cure";
}

Cure::Cure(std::string const &type)
{
	std::cout << "[Cure] Type constructor called" << std::endl;
	_type = type;
}

Cure::Cure(const Cure &toCopy)
{
	std::cout << "[Cure] Copy constructor called" << std::endl;
	(void)toCopy;
}

Cure	&Cure::operator=(const Cure &toCopy)
{
	if (this != &toCopy)
		_type = toCopy._type;
	return *this;
}

Cure::~Cure()
{
	std::cout << "[Cure] Destructor called" << std::endl;
}

std::string const	&Cure::getType() const
{
	return _type;
}

Cure	*Cure::clone() const
{
	Cure *Copy = new Cure(_type);
	return Copy;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}
