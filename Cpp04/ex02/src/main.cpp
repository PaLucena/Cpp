/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:26:58 by palucena          #+#    #+#             */
/*   Updated: 2024/02/15 13:09:25 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/aAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

void	checkLeaks(void)
{
	system("leaks -q Polimorphism3.0");
}

int	main(void)
{
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

	//To break:
	//aAnimal	*Error = new aAnimal();

	checkLeaks();

	return 0;
}
