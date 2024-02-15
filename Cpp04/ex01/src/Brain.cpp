/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:11:05 by palucena          #+#    #+#             */
/*   Updated: 2024/02/15 12:18:50 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default constructor called" << std::endl;
	_ideaCounter = 0;
}

Brain::Brain(const Brain &toCopy)
{
	std::cout << "[Brain] Copy constructor called" << std::endl;
	*this = toCopy;
}

Brain	&Brain::operator=(const Brain &toCopy)
{
	for (int i = 0; i < toCopy._ideaCounter; i++)
		_ideas[i] = toCopy._ideas[i];
	_ideaCounter = toCopy._ideaCounter;
	return *this;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
}

void	Brain::setIdea(const std::string str)
{
	_ideas[_ideaCounter] = str;
	_ideaCounter++;
}

std::string	Brain::getIdea(const int i)
{
	return (i < _ideaCounter)?(_ideas[i]):("[No thought here]");
}
