/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:36:16 by palucena          #+#    #+#             */
/*   Updated: 2024/02/13 17:05:51 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap("Unknown_clap_name"), FragTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->_Name = "Unknown";
	this->_hitPoints = 100;
}

DiamondTrap::DiamondTrap(const std::string &str): ScavTrap(str + "_clap_name"), FragTrap()
{
	std::cout << "DiamondTrap Str constructor called" << std::endl;
	this->_Name = str;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap &toCopy): ScavTrap(toCopy._Name + "_clap_name"), FragTrap()
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = toCopy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap		&DiamondTrap::operator=(DiamondTrap &toCopy)
{
	this->_Name = toCopy._Name;
	this->_attackDamage = toCopy._attackDamage;
	this->_energyPoints = toCopy._energyPoints;
	this->_hitPoints = toCopy._hitPoints;
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "DiamondTrap " << this->_Name << " attacks " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "DiamondTrap " << this->_Name << "doesn't have enough energy to attack..." << std::endl;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "DiamondTrap " << this->_Name << " has been hit with " << amount << " points of damage" << std::endl;
		if (amount >= this->_hitPoints)
		{
			std::cout << "DiamondTrap " << this->_Name << " died." << std::endl;
			this->_hitPoints = 0;
		}
		else
			this->_hitPoints -= amount;
	}
	else
		std::cout << "DiamondTrap " << this->_Name << " is already dead... God bless it's soul" << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "DiamondTrap " << this->_Name << " has recovered " << amount << " hit points" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
		std::cout << "DiamondTrap " << this->_Name << "doesn't have enough energy to repair itself..." << std::endl;
}
