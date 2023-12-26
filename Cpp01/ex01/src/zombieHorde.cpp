/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:08:01 by palucena          #+#    #+#             */
/*   Updated: 2023/12/26 16:32:51 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*Horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie " << i + 1 << ":" << std::endl;
		Horde[i].SetName(name);
		Horde[i].announce();
	}
	return (Horde);
}
