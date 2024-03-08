/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:41:28 by palucena          #+#    #+#             */
/*   Updated: 2024/03/08 12:42:41 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <cstdint>
# include "Data.hpp"

class Data;

class	Serializer {
	private:
		Serializer();
		Serializer(const Serializer &toCopy);
		Serializer	&operator=(const Serializer &toCopy);
	public:
		~Serializer();
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};

#endif