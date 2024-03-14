/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:24:39 by palucena          #+#    #+#             */
/*   Updated: 2024/03/14 11:12:35 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <stdlib.h>
# include <string>
# include <map>

class BitcoinExchange {
	private:
		std::map<std::string, float>	_db;
	public:
		// Constructors
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &toCopy);
		BitcoinExchange(const std::string &fileName);

		// Destructor
		~BitcoinExchange();

		// Operator overload
		BitcoinExchange	&operator=(const BitcoinExchange &toCopy);

		// Member function
		void	compareDataBases(const std::string &fileName);

		// Exceptions
		class OpenError: public std::exception {
			public:
				const char *what() const throw() {
					return ("Could not open file.");
				}
		};
		class BadInputError: public std::exception {
			public:
				const char *what() const throw() {
					return ("Bad input.");
				}
		};
};

#endif