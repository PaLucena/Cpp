/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:18:40 by palucena          #+#    #+#             */
/*   Updated: 2024/03/04 15:44:19 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern()
{
	std::cout << "[Intern] Default constructor called" << std::endl;
}

Intern::Intern(const Intern &toCopy)
{
	std::cout << "[Intern] Copy constructor called" << std::endl;
	(void)toCopy;
}

Intern::~Intern()
{
	std::cout << "[Intern] Destructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &toCopy)
{
	(void)toCopy;
	return (*this);
}

AForm	*Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
	std::string	options[3] = {"shrubbery request", "robotomy request", "pardon request"};
	int			i = 0;
	while (i <= 3 && options[i] != formName)
		i++;
	switch (i)
	{
		case 0:
			std::cout << "Intern creates ShrubberyCreationForm." << std::endl;
			return (new ShrubberyCreationForm(formTarget));
		case 1:
			std::cout << "Intern creates RobotomyRequestForm." << std::endl;
			return (new RobotomyRequestForm(formTarget));
		case 2:
			std::cout << "Intern creates PresidentialPardonForm." << std::endl;
			return (new PresidentialPardonForm(formTarget));
	}
	std::cout << "Error: The intern didn't find the requested " << formName << " form." << std::endl;
	return (nullptr);
}
