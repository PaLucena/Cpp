/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:19:02 by palucena          #+#    #+#             */
/*   Updated: 2024/03/18 16:18:59 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int	main(int ac, char **av)
{
	try {
		PmergeMe	toOrder(av);
		
		toOrder.order();
	}
	catch (const std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
