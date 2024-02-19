/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:46:37 by palucena          #+#    #+#             */
/*   Updated: 2024/02/19 13:05:34 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] Default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &toCopy)
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
	_brain = new Brain();
	*this = toCopy;
}

Cat	&Cat::operator=(const Cat &toCopy)
{
	_type = toCopy._type;
	_brain = toCopy._brain;
	return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}

void	Cat::lightBulb(const std::string &str) const
{
	_brain->setIdea(str);
}

void	Cat::thinkOutLoud() const
{
	for (int i = 0; i < _brain->_ideaCounter; i++)
		std::cout << "'" << _brain->getIdea(i) << "'" << std::endl;
}
