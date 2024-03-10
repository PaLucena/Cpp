/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:13:22 by palucena          #+#    #+#             */
/*   Updated: 2024/03/10 21:12:43 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

int	main(void)
{
	try {
		Array<int> emptyArray;
		std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

		Array<int> intArray(5);
		std::cout << "Size of intArray: " << intArray.size() << std::endl;

		intArray[0] = 33;
		Array<int> copiedArray(intArray);
	
		intArray[0] = 66;
		Array<int> assignedArray = intArray;

		intArray[0] = 99;

		std::cout << "First element of intArray: " << intArray[0] << std::endl;
		std::cout << "First element of copiedArray: " << copiedArray[0] << std::endl;
		std::cout << "First element of assignedArray: " << assignedArray[0] << std::endl;

		std::cout << "Trying to access an out-of-range element..." << std::endl;
		std::cout << intArray[10] << std::endl;

	} catch (const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
