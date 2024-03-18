/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:19:23 by palucena          #+#    #+#             */
/*   Updated: 2024/03/18 17:26:18 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <limits>
# include <list>
# include <deque>
# include <ctime>

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
		bool	findInDeque(int);
		void	printList();
		void	order();
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
};

#endif