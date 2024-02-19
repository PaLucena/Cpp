/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:19:45 by palucena          #+#    #+#             */
/*   Updated: 2024/02/19 20:15:53 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character()
{
	std::cout << "[Character] Default constructor called" << std::endl;
	_name = "Unknown";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	_usage = 0;
}

Character::Character(const Character &toCopy)
{
	std::cout << "[Character] Copy constructor called" << std::endl;
	*this = toCopy;
}

Character::Character(const std::string &name)
{
	std::cout << "[Character] String constructor called" << std::endl;
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	_usage = 0;
}

Character	&Character::operator=(const Character &toCopy)
{
	if (this != &toCopy)
	{
		_name = toCopy._name;
		for (int i = 0; i < toCopy._usage; i++)
			_inventory[i] = toCopy._inventory[i]->clone();
		_usage = toCopy._usage;
	}
	return *this;
}

Character::~Character()
{
	std::cout << "[Character] Destructor called" << std::endl;
	for (int i = 0; i < _usage; i++)
		delete _inventory[i];
}

std::string const &Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria *m)
{
	if (_usage < 4 && m)
	{
		_inventory[_usage] = m;
		_usage++;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && _inventory[idx])
	{
		_inventory[idx] = NULL;
		while (++idx < _usage && _inventory[idx])
			_inventory[idx - 1] = _inventory[idx];
		if (idx <= 3)
			_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	std::cout << _name << " ";
	if (_inventory[idx])
		_inventory[idx]->use(target);
}
