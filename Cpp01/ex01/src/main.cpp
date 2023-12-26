/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:10:59 by palucena          #+#    #+#             */
/*   Updated: 2023/12/26 16:31:54 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void)
{
	Zombie		*Horde;
	std::string	name = "Manuel";
	int			N = 4;

	std::cout << "Creating a horde of " << N << " zombies" << std::endl;
	Horde = zombieHorde(N, name);
	delete[] Horde;
}
