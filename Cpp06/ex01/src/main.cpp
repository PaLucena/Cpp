/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:19:03 by palucena          #+#    #+#             */
/*   Updated: 2024/03/08 13:05:08 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

int	main(void)
{
	Data	dt(42);

	uintptr_t	serialized = Serializer::serialize(&dt);
	
	Data	*deserialized = Serializer::deserialize(serialized);

	std::cout << dt.getData() << " - " << deserialized->getData() << std::endl;

	return 0;
}
