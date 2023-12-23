/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 19:47:09 by palucena          #+#    #+#             */
/*   Updated: 2023/12/23 20:46:46 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void)
{
	std::cout << "Creating zombie:" << std::endl;
	Zombie	Anastasio("Anastasio");
	Anastasio.announce();
	std::cout << "Creating zombie:" << std::endl;
	Zombie	*Fede = newZombie("Federico");
	std::cout << "Creating zombie:" << std::endl;
	randomChump("Severino");
	delete(Fede);
	return (0);
}
