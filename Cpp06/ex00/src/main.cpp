/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:19:03 by palucena          #+#    #+#             */
/*   Updated: 2024/03/07 09:42:31 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int	main(int ac, char **av)
{
	(void)ac;
	for (int i = 1; av[i]; i++)
	{
		std::cout << std::endl << "String: " << av[i];
		ScalarConverter::convert(av[i]);
	}
	return 0;
}
