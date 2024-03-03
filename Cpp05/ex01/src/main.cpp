/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:28:04 by palucena          #+#    #+#             */
/*   Updated: 2024/03/03 21:38:34 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int	main(void)
{
	Bureaucrat	Gabi("Gabi", 150);
	Bureaucrat	Davyd("Davyd", 87);

	Form	Nationality("Nationality", 149, 2);

	std::cout << Gabi;
	Gabi.decrementGrade();
	Gabi.signForm(Nationality);

	std::cout << Davyd;
	Davyd.incrementGrade();
	Davyd.signForm(Nationality);

	return 0;
}
