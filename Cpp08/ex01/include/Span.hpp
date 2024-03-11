/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:36:24 by palucena          #+#    #+#             */
/*   Updated: 2024/03/11 17:46:03 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <string>
# include <vector>
# include <list>

class Span {
	private:
		std::list<int>	_list;
		unsigned int	_N;
	public:
		// constructors
		Span();
		Span(const unsigned int n);
		Span(const Span &toCopy);

		// operator overload
		Span	&operator=(const Span &toCopy);

		// destructor
		~Span();

		// member functions
		void	addNumber(const int nb);
		int		shortestSpan();
		int		longestSpan();
		void	fillRange(std::list<int>::iterator begin, std::list<int>::iterator end);

		// exception
		class ReachedNException: public std::exception {
			public:
				const char *what() const throw() {
					return ("Exception: Class already contains N elements");
				}
		};
		class ListTooSmallException: public std::exception {
			public:
				const char *what() const throw() {
					return ("Exception: The class contains less than 2 elements");
				}
		};
};

#endif