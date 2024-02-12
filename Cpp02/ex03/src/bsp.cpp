/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:26:54 by palucena          #+#    #+#             */
/*   Updated: 2024/02/12 17:39:41 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

static Fixed	ftArea(const Point a, const Point b, const Point c)
{
	return ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0f);
}

static Fixed	ftAbs(Fixed Nb)
{
	return (Nb < 0)?(Nb * -1):(Nb);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abc(ftArea(a, b, c));
	Fixed	abp(ftArea(a, b, point));
	Fixed	acp(ftArea(a, c, point));
	Fixed	bcp(ftArea(b, c, point));

	abc = ftAbs(abc);
	abp = ftAbs(abp);
	acp = ftAbs(acp); 
	bcp = ftAbs(bcp);
	return (abc == abp + acp + bcp)?(true):(false);
}
