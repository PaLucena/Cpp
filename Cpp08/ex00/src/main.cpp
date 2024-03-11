/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:40:21 by palucena          #+#    #+#             */
/*   Updated: 2024/03/11 13:33:52 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

int	main(void)
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	try
	{
		easyfind(v, 4);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
