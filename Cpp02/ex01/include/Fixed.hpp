/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:51:31 by palucena          #+#    #+#             */
/*   Updated: 2024/01/04 16:41:34 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
	private:
		int	fixedNb;
		int	fractionalBits;
	public:
		Fixed();
		Fixed(const Fixed &toCopy);
		Fixed(const int Nb);
		Fixed(const float Nb);
		Fixed	&operator=(const Fixed &toCopy);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const Raw);
		float	toFloat() const;
		int		toInt() const;
} ;

std::ostream	&operator<<(std::ostream &out, const Fixed &toCopy);

#endif