/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:11:05 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 19:19:31 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default constructor called";
}

Brain::Brain(const Brain &toCopy)
{
	std::cout << "[Brain] Copy constructor called";
	*this = toCopy;
}

Brain	&Brain::operator=(const Brain &toCopy)
{
	_ideas = toCopy._ideas;
	return *this;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called";
}
