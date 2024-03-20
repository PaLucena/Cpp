/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:19:02 by palucena          #+#    #+#             */
/*   Updated: 2024/03/20 01:51:42 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int	main(int ac, char **av)
{
	struct timeval	start, end;
	long	listTime;
	long	dequeTime;

	try {
		if (ac < 2)
			throw (PmergeMe::TooFewException());
		PmergeMe	toOrder(av);

		std::cout << "Before: ";
		toOrder.printList();

		gettimeofday(&start, NULL);
		toOrder.sortList(toOrder.getListStart(), toOrder.getListEnd());
		gettimeofday(&end, NULL);
		listTime = end.tv_usec - start.tv_usec;

		gettimeofday(&start, NULL);
		toOrder.sortDeque(toOrder.getDequeStart(), toOrder.getDequeEnd());
		gettimeofday(&end, NULL);
		dequeTime = end.tv_usec - start.tv_usec;

		std::cout << std::endl << "After: ";
		toOrder.printList();

		std::cout << "Time to process a range of " << toOrder.getSize() << " elements with std::list : " << listTime << " us" << std::endl;
		std::cout << "Time to process a range of " << toOrder.getSize() << " elements with std::deque : " << dequeTime << " us" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
