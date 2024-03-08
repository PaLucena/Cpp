/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:58:43 by palucena          #+#    #+#             */
/*   Updated: 2024/03/08 16:35:19 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	// std::cout << "[ScalarConverter] Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &toCopy)
{
	// std::cout << "[ScalarConverter] Copy constructor called" << std::endl;
	(void)toCopy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &toCopy)
{
	(void)toCopy;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	// std::cout << "[ScalarConverter] Destructor called" << std::endl;
}

int	findType(const std::string &s)
{
	char	*endPtr;

	//	pseudo literals
	if (s == "nan" || s == "+inf" || s == "-inf" || s == "nanf" || s == "+inff" || s == "-inff")
		return 4;

	//	char
	if (s.length() == 1 && s[0] > 31 && s[0] < 127)
			return 0;

	//	int
	std::strtol(s.c_str(), &endPtr, 10);
	if (*endPtr == '\0')
		return 1;

	//	float
	std::strtod(s.c_str(), &endPtr);
	if (*endPtr == 'f' || *endPtr == 'F')
		return 2;

	//	double
	if (*endPtr == '\0')
		return 3;

	std::cout << std::endl << "[ERROR] The type conversion is impossible" << std::endl;
	return 5;
}

void	ScalarConverter::convert(const std::string &s)
{
	int t = findType(s);
	char	cNb;
	int		iNb;
	float	fNb;
	double	dNb;
	
	switch (t) {
		case 0:
			std::cout << "  [CHAR]" << std::endl;
			cNb = s[0];
			std::cout << "char: '" << static_cast<char>(s[0]) << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(cNb) << std::endl;
			std::cout << "float: " << static_cast<float>(cNb) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(cNb) << ".0" << std::endl;
			break ;
		case 1:
			std::cout << "  [INT]" << std::endl;
			iNb = std::atoi(s.c_str());
			if (iNb > 31 && iNb < 127)
				std::cout << "char: '" << static_cast<char>(iNb) << "'" << std::endl;
			else
				std::cout << "char: " << "Non displayable" << std::endl;
			std::cout << "int: " << iNb << std::endl;
			std::cout << "float: " << (iNb) << ".0f" << std::endl;
			std::cout << "double: " << (iNb) << ".0" << std::endl;
			break ;
		case 2:
			std::cout << "  [FLOAT]" << std::endl;
			fNb = std::atof(s.c_str());
			iNb = static_cast<int>(fNb);
			if (fNb > 31 && fNb < 127)
				std::cout << "char: '" << static_cast<char>(fNb) << "'" << std::endl;
			else
				std::cout << "char: " << "Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(fNb) << std::endl;
			std::cout << "float: " << fNb << (fNb == iNb ? ".0f" : "f") << std::endl;
			std::cout << "double: " << static_cast<double>(fNb) << (fNb == iNb ? ".0" : "") << std::endl;
			break ;
		case 3:
			std::cout << "  [DOUBLE]" << std::endl;
			dNb = std::atof(s.c_str());
			iNb = static_cast<int>(dNb);
			if (dNb > 31 && dNb < 127)
				std::cout << "char: '" << static_cast<char>(dNb) << "'" << std::endl;
			else
				std::cout << "char: " << "Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(dNb) << std::endl;
			std::cout << "float: " << dNb << (dNb == iNb ? ".0f" : "f") << std::endl;
			std::cout << "double: " << static_cast<double>(dNb) << (dNb == iNb ? ".0" : "") << std::endl;
			break ;
		case 4:
			std::cout << "  [PSEUDO LITERAL]" << std::endl;
			std::cout << "char: " << "Impossible" << std::endl;
			std::cout << "int: " << "Impossible" << std::endl;
			std::cout << "float: " << s << (s == "+inff" || s == "-inff" || s == "nanf" ? "" : "f") << std::endl;
			std::cout << "double: " << s << std::endl;
			break ;
	}
}
