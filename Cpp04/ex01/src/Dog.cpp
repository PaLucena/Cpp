/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:46:26 by palucena          #+#    #+#             */
/*   Updated: 2024/02/15 12:20:08 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &toCopy)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = toCopy;
}

Dog	&Dog::operator=(const Dog &toCopy)
{
	_type = toCopy._type;
	_brain = toCopy._brain;
	return *this;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

void	Dog::lightBulb(const std::string &str) const
{
	_brain->setIdea(str);
}

void	Dog::thinkOutLoud() const
{
	for (int i = 0; i < _brain->_ideaCounter; i++)
		std::cout << "'" << _brain->getIdea(i) << "'" << std::endl;
}
