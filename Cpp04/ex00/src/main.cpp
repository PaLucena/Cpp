/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:26:58 by palucena          #+#    #+#             */
/*   Updated: 2024/02/15 11:26:00 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int	main(void)
{
	Animal	*Ditto = new Animal();
	std::cout << "Ditto(" << Ditto->getType() << "): ";
	Ditto->makeSound();
	delete Ditto;
	std::cout << std::endl;

	Animal	*Doggo = new Dog();
	std::cout << "Doggo(" << Doggo->getType() << "): ";
	Doggo->makeSound();
	delete Doggo;
	std::cout << std::endl;

	Animal	*Catto = new Cat();
	std::cout << "Catto(" << Catto->getType() << "): ";
	Catto->makeSound();
	delete Catto;
	std::cout << std::endl;

	WrongAnimal	*Dittont = new WrongAnimal();
	std::cout << "Dittont(" << Dittont->getType() << "): ";
	Dittont->makeSound();
	delete Dittont;
	std::cout << std::endl;

	WrongAnimal	*Cattont = new WrongCat();
	std::cout << "Cattont(" << Cattont->getType() << "): ";
	Cattont->makeSound();
	delete Cattont;
	std::cout << std::endl;

	return 0;
}
