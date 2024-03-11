/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:27:59 by palucena          #+#    #+#             */
/*   Updated: 2024/03/11 13:33:25 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <stdexcept>

class ValueNotFoundException: public std::exception {
	public:
		const char *what() const throw() {
			return ("Exception: Value not found");
		}
};

template <class T>
void	easyfind(const T &container, int data) {
	typename T::const_iterator iter;

	for (iter = container.begin(); iter != container.end(); iter++) {
		if (*iter == data) {
			std::cout << "Value " << data << " in container." << std::cout;
			return ;
		}
	}
	throw (ValueNotFoundException());
}

#endif