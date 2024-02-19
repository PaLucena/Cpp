/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:00:37 by palucena          #+#    #+#             */
/*   Updated: 2024/02/19 20:19:28 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice()
{
	std::cout << "[Ice] Default constructor called" << std::endl;
	_type = "Ice";
}

Ice::Ice(std::string const &type)
{
	std::cout << "[Ice] Type constructor called" << std::endl;
	_type = type;
}

Ice::Ice(const Ice &toCopy)
{
	std::cout << "[Ice] Copy constructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice &toCopy)
{
	if (this != &toCopy)
		_type = toCopy._type;
	return *this;
}

Ice::~Ice()
{
	std::cout << "[Ice] Destructor called" << std::endl;
}

std::string const	&Ice::getType() const
{
	return _type;
}

Ice	*Ice::clone() const
{
	Ice *Copy = new Ice(_type);
	return Copy;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}
