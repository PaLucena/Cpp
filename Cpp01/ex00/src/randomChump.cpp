/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 19:47:18 by palucena          #+#    #+#             */
/*   Updated: 2023/12/23 20:37:23 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

//It creates a zombie, name it, and the zombie announces itself.

void	randomChump(std::string name)
{
	Zombie	Severino(name);

	Severino.announce();
}
