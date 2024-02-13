/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:30:12 by palucena          #+#    #+#             */
/*   Updated: 2024/02/13 13:28:02 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_Name = "Unknown";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &str): ClapTrap(str)
{
	std::cout << "Str ScavTrap constructor called" << std::endl;
	this->_Name = str;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &toCopy)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = toCopy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap		&ScavTrap::operator=(ScavTrap &toCopy)
{
	this->_Name = toCopy._Name;
	this->_attackDamage = toCopy._attackDamage;
	this->_energyPoints = toCopy._energyPoints;
	this->_hitPoints = toCopy._hitPoints;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode" << std::endl;
}
