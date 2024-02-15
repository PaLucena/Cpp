/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:26:58 by palucena          #+#    #+#             */
/*   Updated: 2024/02/15 12:20:08 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int	main(void)
{
	Animal	*Ditto = new Animal();
	std::cout << "Ditto(" << Ditto->getType() << "): ";
	Ditto->makeSound();
	delete Ditto;
	std::cout << std::endl;

	Dog	*Doggo = new Dog();
	std::cout << "Doggo(" << Doggo->getType() << "): ";
	Doggo->makeSound();
	Doggo->lightBulb("Steak...");
	Doggo->thinkOutLoud();
	delete Doggo;
	std::cout << std::endl;

	Cat	*Catto = new Cat();
	std::cout << "Catto(" << Catto->getType() << "): ";
	Catto->makeSound();
	Catto->lightBulb("Scratches...");
	Catto->thinkOutLoud();
	delete Catto;
	std::cout << std::endl;

	return 0;
}
