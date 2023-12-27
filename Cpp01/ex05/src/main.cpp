/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:41:49 by palucena          #+#    #+#             */
/*   Updated: 2023/12/27 16:54:32 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout << "Harl doesn’t like parameters..." << std::endl;
		return 1;
	}
	
	Harl	Harl;
	Harl.complain("DEBUG");
	return 0;
}
