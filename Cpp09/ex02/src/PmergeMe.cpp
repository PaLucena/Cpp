/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:33:32 by palucena          #+#    #+#             */
/*   Updated: 2024/03/18 17:28:55 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe(): _list(), _deque() {}

PmergeMe::PmergeMe(const PmergeMe &toCopy): _list(toCopy._list), _deque(toCopy._deque) {}

PmergeMe::PmergeMe(char **av): _list(), _deque() {
	int	nb;

	for (int i = 1; av[i] != NULL; i++) {
		if (!isInt(av[i]))
			throw (PmergeMe::NotIntException());
		nb = std::atoi(av[i]);
		if (findInList(nb) || findInDeque(nb))
			throw (PmergeMe::DuplicateException());
		_list.push_back(nb);
		_deque.push_back(nb);
	}
}

PmergeMe::~PmergeMe() {}

PmergeMe	&PmergeMe::operator=(const PmergeMe &toCopy) {
	if (this != &toCopy) {
		_list = toCopy._list;
		_deque = toCopy._deque;
	}
	return (*this);
}

bool	PmergeMe::isInt(const char *str) {
	return ((std::atoi(str) && std::atoi(str) >= 0 && std::atol(str) <= INT_MAX) ? (true) : (false));
}

bool	PmergeMe::findInList(int nb) {
	std::list<int>::iterator it;

	for (it = _list.begin(); it != _list.end(); it++) {
		if (*it == nb)
			return (true);
	}
	return (false);
}

bool	PmergeMe::findInDeque(int nb) {
	std::deque<int>::iterator it;

	for (it = _deque.begin(); it != _deque.end(); it++) {
		if (*it == nb)
			return (true);
	}
	return (false);
}

void	PmergeMe::printList() {
	std::list<int>::iterator it;

	for (it = _list.begin(); it != _list.end(); it++) {
		std::cout << *it;
	}
}

void	PmergeMe::order() {
	std::cout << "Before: ";
	
	
}

void	PmergeMe::orderList() {
	
}

void	PmergeMe::orderDeque() {
	
}
