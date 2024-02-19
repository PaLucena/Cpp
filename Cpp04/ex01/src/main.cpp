/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:26:58 by palucena          #+#    #+#             */
/*   Updated: 2024/02/19 14:09:56 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int	main(void)
{
	Animal	*Crew[4] = {new Dog(), new Cat(), new Dog(), new Cat()};

	for (int i = 0; i < 4; i++)
		Crew[i]->makeSound();

	for (int i = 0; i < 4; i++)
		delete Crew[i];
	
	return 0;
}
