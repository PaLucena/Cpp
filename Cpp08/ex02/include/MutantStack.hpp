/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:36:10 by palucena          #+#    #+#             */
/*   Updated: 2024/03/12 14:15:45 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <algorithm>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		// Iterator
		typedef typename std::stack<T>::container_type::iterator iterator;
	
		// Constructors
		MutantStack() {};
		MutantStack(const MutantStack &toCopy): std::stack<T>(toCopy) {};

		// Destructor
		~MutantStack() {};

		// Operator overload
		MutantStack	&operator=(const MutantStack &toCopy) {
			std::stack<T>::operator=(toCopy);
			return (*this);
		};

		// Member functions
		iterator	begin() {
			return (this->c.begin());
		};

		iterator	end() {
			return (this->c.end());
		};
};

#endif