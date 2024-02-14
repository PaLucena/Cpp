/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:26:58 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 19:01:55 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int	main(void)
{
	Animal	Ditto;
	std::cout << "Ditto(" << Ditto.getType() << "): ";
	Ditto.makeSound();

	Dog		Doggo;
	std::cout << "Doggo(" << Doggo.getType() << "): ";
	Doggo.makeSound();

	Cat		Catto;
	std::cout << "Catto(" << Catto.getType() << "): ";
	Catto.makeSound();

	WrongAnimal	Dittont;
	std::cout << "Dittont(" << Dittont.getType() << "): ";
	Dittont.makeSound();

	WrongCat	Cattont;
	std::cout << "Cattont(" << Cattont.getType() << "): ";
	Cattont.makeSound();
	return 0;
}
