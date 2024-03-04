/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:28:04 by palucena          #+#    #+#             */
/*   Updated: 2024/03/04 15:52:25 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int	main(void)
{
	Intern		Koldo;
	Bureaucrat	Alberto("Alberto", 60);
	Bureaucrat	Pedro("Pedro", 3);

	AForm	*F1 = Koldo.makeForm("shrubbery request", "Alberto");
	AForm	*F2 = Koldo.makeForm("robotomy request", "Alberto");
	AForm	*F3 = Koldo.makeForm("pardon request", "Alberto");
	AForm	*F4;
	
	F4 = Koldo.makeForm("unknown request", "Alberto");

	std::cout << Alberto;
	Alberto.signForm(*F1);
	Alberto.executeForm(*F1);
	Alberto.signForm(*F2);
	Alberto.executeForm(*F2);
	Alberto.signForm(*F3);
	Alberto.executeForm(*F3);

	std::cout << Pedro;
	Pedro.signForm(*F1);
	Pedro.executeForm(*F1);
	Pedro.signForm(*F2);
	Pedro.executeForm(*F2);
	Pedro.signForm(*F3);
	Pedro.executeForm(*F3);

	delete F1;
	delete F2;
	delete F3;

	return 0;
}
