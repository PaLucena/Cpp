/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:05:41 by palucena          #+#    #+#             */
/*   Updated: 2023/12/26 17:37:56 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->setType(str);
}

Weapon::~Weapon()
{
}

const std::string	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}
