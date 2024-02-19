/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:10:25 by palucena          #+#    #+#             */
/*   Updated: 2024/02/19 21:08:27 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "[MateriaSource] Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_storage[i] = NULL;
	_usage = 0;
}

MateriaSource::MateriaSource(const MateriaSource &toCopy)
{
	std::cout << "[MateriaSource] Copy constructor called" << std::endl;
	*this = toCopy;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &toCopy)
{
	if (this != &toCopy)
	{
		for (int i = 0; i < toCopy._usage; i++)
		_storage[i] = toCopy._storage[i]->clone();
		_usage = toCopy._usage;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "[MateriaSource] Destructor called" << std::endl;
	for (int i = 0; i < _usage; i++)
		delete _storage[i];
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (_usage < 4)
	{
		_storage[_usage] = m;
		_usage++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _usage; i++)
	{
		if (_storage[i]->getType() == type)
			return _storage[i];
	}
	std::cout << "The " << type << " materia hasn't been learned" << std::endl;
	return (0);
}
