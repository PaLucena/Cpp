/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:43:23 by palucena          #+#    #+#             */
/*   Updated: 2024/03/09 15:54:16 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T, typename Func>
void	iter(T *array, int lenght, Func fn)
{
	for (int i = 0; i < lenght; i++)
		fn(array[i]);
}

template <typename T>
void	printElement(const T &element)
{
	std::cout << element << std::endl;
}

#endif