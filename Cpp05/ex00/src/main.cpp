/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:28:04 by palucena          #+#    #+#             */
/*   Updated: 2024/03/03 20:37:54 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	Pedro("Pedro", 150);
	Bureaucrat	Alberto("Alberto", 87);
	Bureaucrat	Mariano("Mariano", 1);

	std::cout << Pedro;
	Pedro.decrementGrade();
	std::cout << Alberto;
	Alberto.incrementGrade();
	std::cout << Alberto;
	std::cout << Mariano;
	Mariano.incrementGrade();

	return 0;
}
