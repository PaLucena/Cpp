/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:30:12 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 13:01:52 by palucena         ###   ########.fr       */
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

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ScavTrap " << this->_Name << "doesn't have enough energy to attack..." << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_Name << " has been hit with " << amount << " points of damage" << std::endl;
		if (amount >= this->_hitPoints)
		{
			std::cout << "ScavTrap " << this->_Name << " died." << std::endl;
			this->_hitPoints = 0;
		}
		else
			this->_hitPoints -= amount;
	}
	else
		std::cout << "ScavTrap " << this->_Name << " is already dead... God bless it's soul" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_Name << " has recovered " << amount << " hit points" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_Name << "doesn't have enough energy to repair itself..." << std::endl;
	else if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_Name << " is dead. It cannot repair itself" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode" << std::endl;
}
