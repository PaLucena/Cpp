/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:19:23 by palucena          #+#    #+#             */
/*   Updated: 2024/03/20 01:57:28 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <limits>
# include <list>
# include <deque>
# include <sys/time.h>

class PmergeMe {
	private:
		std::list<int>	_list;
		std::deque<int>	_deque;
	public:
		// Constructors
		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe(char **);

		// Destructor
		~PmergeMe();

		// Operator overload
		PmergeMe	&operator=(const PmergeMe &);

		// Member functions
		bool	isInt(const char *);
		void	printList();
		int		getSize();
		std::list<int>::iterator	getListStart();
		std::list<int>::iterator	getListEnd();
		std::deque<int>::iterator	getDequeStart();
		std::deque<int>::iterator	getDequeEnd();
		void	mergeList(std::list<int>::iterator, std::list<int>::iterator, std::list<int>::iterator);
		void	sortList(std::list<int>::iterator, std::list<int>::iterator);
		void	mergeDeque(std::deque<int>::iterator, std::deque<int>::iterator, std::deque<int>::iterator);
		void	sortDeque(std::deque<int>::iterator left, std::deque<int>::iterator right);

		// Exceptions
		class NotIntException: public std::exception {
			public:
				const char *what() const throw() {
					return ("Not an integer.");
				}
		};
		class DuplicateException: public std::exception {
			public:
				const char *what() const throw() {
					return ("Duplicate number.");
				}
		};
		class TooFewException: public std::exception {
			public:
				const char *what() const throw() {
					return ("Not enough numbers.");
				}
		};
};

#endif