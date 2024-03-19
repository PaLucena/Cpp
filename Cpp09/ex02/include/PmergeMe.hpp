/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:19:23 by palucena          #+#    #+#             */
/*   Updated: 2024/03/19 23:21:36 by palucena         ###   ########.fr       */
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
		bool	findInList(int);
		void	printList();
		int		getSize();
		void	orderList();
		void	orderDeque();

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