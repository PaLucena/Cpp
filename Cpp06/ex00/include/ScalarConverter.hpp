/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:58:55 by palucena          #+#    #+#             */
/*   Updated: 2024/03/07 10:44:48 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <cstdlib>
# include <string>
# include <iostream>

class	ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &toCopy);
		ScalarConverter	&operator=(const ScalarConverter & toCopy);
	public:
		~ScalarConverter();

		static void	convert(const std::string &);
};

#endif