/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:24:37 by palucena          #+#    #+#             */
/*   Updated: 2024/02/12 17:20:18 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		Point(const float xNb, const float yNb);
		Point(const Point &toCopy);
		Point	&operator=(Point &toCopy);
		~Point();
		Fixed	getX() const;
		Fixed	getY() const;
} ;
