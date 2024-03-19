/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:33:32 by palucena          #+#    #+#             */
/*   Updated: 2024/03/19 23:51:55 by palucena         ###   ########.fr       */
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
	/* 	if (findInList(nb))
			throw (PmergeMe::DuplicateException()); */
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
		if (*it == nb) {
			std::cout << nb << " " << *it << std::endl;
			return (true);
		}
	}
	return (false);
}

void	PmergeMe::printList() {
	std::list<int>::iterator it;
	for (it = _list.begin(); it != _list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int	PmergeMe::getSize() {
	return (_list.size());
}

void	PmergeMe::orderList() {
	std::list<int>::iterator	it = _list.begin();
	int	min = *it, max = *it;

	for (; it != _list.end(); it++) {
		if (*it < min)
			min = *it;
		if (*it > max)
			max = *it;
	}

	int range = max - min + 1;

	int *freq = new int[range];
	for (int i = 0; i < max - min + 1; i++)
		freq[i] = 0;

	for (it = _list.begin(); it != _list.end(); ++it) {
		freq[*it - min]++;
	}

	for (int i = 1; i < range; i++)
		freq[i] += freq[i - 1];

	int	*sorted = new int[_list.size()];
	int index = 0;
	for (int i = min; i <= max; i++) {
		while (freq[i - min] > 0) {
			sorted[index++] = i;
			freq[i - min]--;
		}
	}

	_list.clear();
	for (int i = 0; i < index; i++)
		_list.push_back(sorted[i]);

//	delete[] freq;
//	delete[] sorted;
}

void	PmergeMe::orderDeque() {
	std::deque<int>::iterator	it = _deque.begin();
	int	min = *it, max = *it;

	for (; it != _deque.end(); it++) {
		if (*it < min)
			min = *it;
		if (*it > max)
			max = *it;
	}

	int range = max - min + 1;

	int *freq = new int[range];
	for (int i = 0; i < max - min + 1; i++)
		freq[i] = 0;

	for (it = _deque.begin(); it != _deque.end(); ++it) {
		freq[*it - min]++;
	}

	for (int i = 1; i < range; i++)
		freq[i] += freq[i - 1];

	int	*sorted = new int[_deque.size()];
	int index = 0;
	for (int i = min; i <= max; i++) {
		while (freq[i - min] > 0) {
			sorted[index++] = i;
			freq[i - min]--;
		}
	}

	_deque.clear();
	for (int i = 0; i < index; i++)
		_deque.push_back(sorted[i]);

//	delete[] freq;
//	delete[] sorted;
}
