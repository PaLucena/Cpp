/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:24:36 by palucena          #+#    #+#             */
/*   Updated: 2024/03/08 13:06:26 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

Data::Data()
{
	_data = 0;
}

Data::Data(int nb)
{
	_data = nb;
}

Data::Data(const Data &toCopy)
{
	*this = toCopy;
}

Data	&Data::operator=(const Data &toCopy)
{
	if (this != &toCopy)
		_data = toCopy._data;
	return *this;
}

Data::~Data()
{ }

int	Data::getData()
{
	return _data;
}
