/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:24:47 by palucena          #+#    #+#             */
/*   Updated: 2024/02/12 17:10:10 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point(): _x(0), _y(0)
{
	// Default constructor
}

Point::Point(const float xNb, const float yNb): _x(xNb), _y(yNb)
{
	// const float constructor
}

Point::Point(const Point &toCopy): _x(toCopy._x), _y(toCopy._y)
{
	// Copy constructor
}

Point	&Point::operator=(Point &toCopy)
{
	return (toCopy);
}

Point::~Point()
{
	// Destructor
}

Fixed	Point::getX() const
{
	return (this->_x);
}

Fixed	Point::getY() const
{
	return (this->_y);
}
