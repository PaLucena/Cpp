/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:43:25 by palucena          #+#    #+#             */
/*   Updated: 2024/03/09 15:54:38 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

int	main(void)
{
	int intArray[] = {1, 2, 3, 4, 5};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "Printing intArray:" << std::endl;
	iter(intArray, 5, printElement<int>);

	std::cout << std::endl << "Printing charArray:" << std::endl;
	iter(charArray, 5, printElement<char>);

	return 0;
}