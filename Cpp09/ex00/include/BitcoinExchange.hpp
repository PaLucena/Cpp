/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:24:39 by palucena          #+#    #+#             */
/*   Updated: 2024/03/12 16:29:34 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <stdlib.h>
# include <string>
# include <limits>
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
				const char *What() const throw() {
					return ("Could not open the DataBase.");
				}
		};
		class NegativeError: public std::exception {
			public:
				const char *What() const throw() {
					return ("Negative numbers not accepted.");
				}
		};
		class TooBigError: public std::exception {
			public:
				const char *What() const throw() {
					return ("Number too big.");
				}
		};
		class BadInputError: public std::exception {
			public:
				const char *What() const throw() {
					return ("Bad input.");
				}
		};
};

#endif