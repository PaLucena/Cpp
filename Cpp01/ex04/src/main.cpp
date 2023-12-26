/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:11:13 by palucena          #+#    #+#             */
/*   Updated: 2023/12/26 20:41:02 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacetron.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong parameters" << std::endl;
		return 1;
	}
	if (ftReplacetron((std::string)av[3], (std::string)av[1], (std::string)av[2]))
		return 1;
	return 0;
}
