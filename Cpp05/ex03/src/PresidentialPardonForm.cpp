/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:16:21 by palucena          #+#    #+#             */
/*   Updated: 2024/03/04 13:19:15 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("UnknownForm", "UnknownTarget", 25, 5)
{
	std::cout << "[PresidentialPardonForm] Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &toCopy): AForm(toCopy)
{
	std::cout << "[PresidentialPardonForm] Copy constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidentialPardonForm", target, 25, 5)
{
	std::cout << "[PresidentialPardonForm] Data constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "[PresidentialPardonForm] Destrucctor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &toCopy)
{
	if (this != &toCopy)
		AForm::operator=(toCopy);
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	try
	{
		if (!getSigned())
			throw (UnsignedFormException());
		else if (executor.getGrade() > getGradeToExec())
			throw (GradeTooLowException());
		else
			std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
