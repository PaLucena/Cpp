/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:24:37 by palucena          #+#    #+#             */
/*   Updated: 2024/03/20 11:28:32 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &toCopy): _db(toCopy._db) {}

BitcoinExchange::BitcoinExchange(const std::string &fileName) {
	std::ifstream	file;
	std::string		line;
	size_t			colon;

	file.open(fileName);
	if (!file.is_open()) {
		std::cout << fileName << std::endl;
		throw (BitcoinExchange::OpenError());
	}
	std::getline(file, line);
	while (std::getline(file, line)) {
		if (line.empty())
			break ;
		colon = line.find(',');
		if (colon == std::string::npos)
			throw (BitcoinExchange::BadInputError());
		_db.insert(std::make_pair(line.substr(0, colon), atof(line.substr(colon + 1, line.length()).c_str())));
	}
	file.close();
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &toCopy) {
	if (this != &toCopy)
		_db = toCopy._db;
	return (*this);
}

void	BitcoinExchange::compareDataBases(const std::string &fileName) {
	std::map<std::string, float>::iterator	it;
	std::ifstream	file;
	std::string		line;
	size_t			pipe;
	
	file.open(fileName);
	if (!file.is_open())
		throw (BitcoinExchange::BadInputError());
	std::getline(file, line);
	while (std::getline(file, line)) {
		pipe = line.find('|');
		if (pipe == std::string::npos || atof(line.substr(5, 6).c_str()) < 1 || atof(line.substr(5, 6).c_str()) > 12 || atof(line.substr(8, 9).c_str()) < 0 || atof(line.substr(8, 9).c_str()) > 31)
			std::cout << "Error: bad input => " << line.substr(0, pipe) << std::endl;
		else if (atof(line.substr(pipe + 1, line.length()).c_str()) < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (atof(line.substr(pipe + 1, line.length()).c_str()) > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else {
			std::cout << line.substr(0, pipe) << " => " << line.substr(pipe + 1, line.length()) << " = ";
			it = _db.find(line.substr(0, pipe));
			if (it != _db.end())
				std::cout << it->second * atof(line.substr(pipe + 1, line.length()).c_str()) << std::endl;
			else {
				it = _db.lower_bound(line.substr(0, pipe));,
				if (it != _db.begin())
					it--;
				std::cout << it->second * atof(line.substr(pipe + 1, line.length()).c_str()) << std::endl;
			}
		}
	}
	file.close();
}
