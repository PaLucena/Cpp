/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:41:49 by palucena          #+#    #+#             */
/*   Updated: 2023/12/27 17:13:04 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	Harl;
	
	if (ac != 2 || Harl.switchOff(av[1]))
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 1;
	}
	Harl.complain(av[1]);
	return 0;
}
