/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:24:37 by palucena          #+#    #+#             */
/*   Updated: 2024/03/12 18:20:00 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &toCopy): _db(toCopy._db) {}

BitcoinExchange::BitcoinExchange(const std::string &fileName) {
	std::ifstream	file;
	std::string		line;
	int				colon;

	file.open("../" + fileName);
	if (!file.is_open())
		throw (BitcoinExchange::BadInputError());
	else {
		std::getline(file, line);
		while (!line.empty()) {
			std::getline(file, line);
			colon = line.find(',');
			if (colon == line.size() - 1)
				throw (BitcoinExchange::BadInputError());
			_db.insert({line.substr(0, colon), atof(line.substr(colon + 1, line.length()).c_str())});
		}
	}
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &toCopy) {
	if (this != &toCopy)
		_db = toCopy._db;
	return (*this);
}

void	BitcoinExchange::compareDataBases(const std::string &fileName) {
	
}
