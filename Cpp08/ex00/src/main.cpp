/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:40:21 by palucena          #+#    #+#             */
/*   Updated: 2024/03/10 21:46:30 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

int	main(void)
{
	std::vector<int> v = {2, 2, 2};
	v.push_back(3);

	for (int i = 0; v[i]; i++)
		std::cout << "Posición " << i << ": " << v[i] << std::endl;

	return 0;
}
