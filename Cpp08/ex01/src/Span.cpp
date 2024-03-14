/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:39:30 by palucena          #+#    #+#             */
/*   Updated: 2024/03/14 14:34:24 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(): _N(1) {}

Span::Span(const unsigned int n): _N(n) {}

Span::Span(const Span &toCopy): _N(toCopy._N) {}

Span	&Span::operator=(const Span &toCopy) {
	if (this != &toCopy)
		_N = toCopy._N;
	return (*this);
}

Span::~Span() {}

void		Span::addNumber(const int nb)
{
	if (_list.size() < _N)
		_list.push_back(nb);
	else
		throw (Span::ReachedNException());
}

int	Span::shortestSpan()
{
	if (_list.size() < 2)
		throw (Span::ListTooSmallException());

	std::list<int> sorted(_list);
	sorted.sort();

	std::list<int>::iterator i = sorted.begin();
	int	iPre = *i;
	i++;
	int	minSpan = *i - iPre;
	int	currSpan;

	for (; i != sorted.end(); i++) {
		currSpan = *i - iPre;
		if (currSpan < minSpan)
			minSpan = currSpan;
		iPre = *i;
	}
	return (minSpan);
}

int	Span::longestSpan()
{
	if (_list.size() < 2)
		throw (Span::ListTooSmallException());
	std::list<int>::iterator max = std::max_element(_list.begin(), _list.end());
	std::list<int>::iterator min = std::min_element(_list.begin(), _list.end());

	return (static_cast<int>(*max - *min));
}

void	Span::fillRange(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	for (std::list<int>::iterator it = begin; it != end; it++) {
		if (_list.size() >= _N) {
			throw (Span::ReachedNException());
			return ;
		}
		this->addNumber(*it);
	}
}
