/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:54:56 by palucena          #+#    #+#             */
/*   Updated: 2024/02/12 17:38:48 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point	a;
	Point	b(5, 0);
	Point	c(0, 5);
	Point	p(2, 2);

	if (bsp(a, b, c, p))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	return 0;
}
