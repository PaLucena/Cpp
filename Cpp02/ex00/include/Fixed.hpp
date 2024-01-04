/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:51:31 by palucena          #+#    #+#             */
/*   Updated: 2024/01/04 11:36:56 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {
	private:
		int					fixedNb;
		static const int	fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &toCopy);
		Fixed	&operator=(const Fixed &toCopy);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const Raw);
} ;

#endif