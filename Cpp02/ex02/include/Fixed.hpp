/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:51:31 by palucena          #+#    #+#             */
/*   Updated: 2024/02/12 14:11:14 by palucena         ###   ########.fr       */
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
		bool	operator<(const Fixed &Nb);
		bool	operator<=(const Fixed &Nb);
		bool	operator>(const Fixed &Nb);
		bool	operator>=(const Fixed &Nb);
		bool	operator==(const Fixed &Nb);
		bool	operator!=(const Fixed &Nb);

		Fixed	operator+(const Fixed &Nb) const;
		Fixed	operator-(const Fixed &Nb) const;
		Fixed	operator*(const Fixed &Nb) const;
		Fixed	operator/(const Fixed &Nb) const;

		static Fixed	&min(Fixed &Nb1, Fixed &Nb2);
		static const Fixed	&min(const Fixed &Nb1, const Fixed &Nb2);
		static Fixed	&max(Fixed &Nb1, Fixed &Nb2);
		static const Fixed	&max(const Fixed &Nb1, const Fixed &Nb2);

		Fixed	operator++(int Nb);
		Fixed	&operator++();
		Fixed	operator--(int Nb);
		Fixed	&operator--();

		int		getRawBits() const;
		void	setRawBits(int const Raw);
		float	toFloat() const;
		int		toInt() const;

		~Fixed();
} ;

std::ostream	&operator<<(std::ostream &out, const Fixed &toCopy);

#endif