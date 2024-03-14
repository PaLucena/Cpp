/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:41:47 by palucena          #+#    #+#             */
/*   Updated: 2024/03/14 16:25:16 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <vector>

class RPN {
	private:
		std::vector<int>	_nb;
		std::vector<char>	_operators;
	public:
		// Constructors
		RPN();
		RPN(const RPN &);
		RPN(const std::string &);

		// Destructor
		~RPN();

		// Operator overload
		RPN	&operator=(const RPN &);

		//  Member functions
		void	calculate();
		
		// Exception
		class Error: public std::exception {
			public:
				const char *what() const throw() {
					return ("Error");
				}
		};
};

#endif