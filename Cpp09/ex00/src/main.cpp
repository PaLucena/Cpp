/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:25:39 by palucena          #+#    #+#             */
/*   Updated: 2024/03/14 11:20:39 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			throw (BitcoinExchange::BadInputError());
		BitcoinExchange	Base("data.csv");
		Base.compareDataBases(av[1]);
	}
	catch (const std::exception &e)
	{
		std::cerr << "[Exception] Error: " << e.what() << std::endl;
	}
	return 0;
}
