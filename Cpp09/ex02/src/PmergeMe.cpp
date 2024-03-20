/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:33:32 by palucena          #+#    #+#             */
/*   Updated: 2024/03/20 02:01:32 by palucena         ###   ########.fr       */
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

void	PmergeMe::printList() {
	std::list<int>::iterator it;
	for (it = _list.begin(); it != _list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int	PmergeMe::getSize() {
	return (_list.size());
}

std::list<int>::iterator	PmergeMe::getListStart() {
	return (_list.begin());
}

std::list<int>::iterator	PmergeMe::getListEnd() {
	return (_list.end());
}

std::deque<int>::iterator	PmergeMe::getDequeStart() {
	return (_deque.begin());
}

std::deque<int>::iterator	PmergeMe::getDequeEnd() {
	return (_deque.end());
}

void	PmergeMe::mergeList(std::list<int>::iterator left, std::list<int>::iterator mid, std::list<int>::iterator right) {
	std::list<int> L(left, mid);
	std::list<int> R(mid, right);

	std::list<int>::iterator it = left;
	std::list<int>::iterator itL = L.begin();
	std::list<int>::iterator itR = R.begin();

	while (itL != L.end() && itR != R.end()) {
		if (*itL <= *itR) {
			*it = *itL;
			++itL;
		} else {
			*it = *itR;
			++itR;
		}
		++it;
	}

	while (itL != L.end()) {
		*it = *itL;
		++it;
		++itL;
	}

	while (itR != R.end()) {
		*it = *itR;
		++it;
		++itR;
	}
}

void	PmergeMe::sortList(std::list<int>::iterator left, std::list<int>::iterator right) {
	if (std::distance(left, right) > 1) {
		std::list<int>::iterator mid = left;
		std::advance(mid, std::distance(left, right) / 2);

		sortList(left, mid);
		sortList(mid, right);

		mergeList(left, mid, right);
	}
}

void	PmergeMe::mergeDeque(std::deque<int>::iterator left, std::deque<int>::iterator mid, std::deque<int>::iterator right) {
	std::deque<int> L(left, mid);
	std::deque<int> R(mid, right);

	std::deque<int>::iterator it = left;
	std::deque<int>::iterator itL = L.begin();
	std::deque<int>::iterator itR = R.begin();

	while (itL != L.end() && itR != R.end()) {
		if (*itL <= *itR) {
			*it = *itL;
			++itL;
		} else {
			*it = *itR;
			++itR;
		}
		++it;
	}

	while (itL != L.end()) {
		*it = *itL;
		++it;
		++itL;
	}

	while (itR != R.end()) {
		*it = *itR;
		++it;
		++itR;
	}
}

void	PmergeMe::sortDeque(std::deque<int>::iterator left, std::deque<int>::iterator right) {
	if (std::distance(left, right) > 1) {
		std::deque<int>::iterator mid = left;
		std::advance(mid, std::distance(left, right) / 2);

		sortDeque(left, mid);
		sortDeque(mid, right);

		mergeDeque(left, mid, right);
	}
}