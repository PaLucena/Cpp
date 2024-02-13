/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:01:42 by palucena          #+#    #+#             */
/*   Updated: 2024/02/13 15:32:00 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_Name = "Unknown";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string &str): ClapTrap(str)
{
	std::cout << "FragTrap Str constructor called" << std::endl;
	this->_Name = str;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &toCopy)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = toCopy;
}

FragTrap	&FragTrap::operator=(FragTrap &toCopy)
{
	this->_Name = toCopy._Name;
	this->_hitPoints = toCopy._hitPoints;
	this->_energyPoints = toCopy._energyPoints;
	this->_attackDamage = toCopy._attackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->_hitPoints > 0)
		std::cout << "FragTrap " << this->_Name << " is offering a high five" << std::endl;
	else
		std::cout << "FragTrap " << this->_Name << "'s corpse is offering a high five" << std::endl;
}
