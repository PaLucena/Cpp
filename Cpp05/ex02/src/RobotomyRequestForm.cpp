/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:16:21 by palucena          #+#    #+#             */
/*   Updated: 2024/03/04 13:19:28 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("UnknownForm", "UnknownTarget", 72, 45)
{
	std::cout << "[RobotomyRequestForm] Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy): AForm(toCopy)
{
	std::cout << "[RobotomyRequestForm] Copy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("RobotomyRequestForm", target, 72, 45)
{
	std::cout << "[RobotomyRequestForm] Data constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[RobotomyRequestForm] Destrucctor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &toCopy)
{
	if (this != &toCopy)
		AForm::operator=(toCopy);
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	try
	{
		if (!getSigned())
			throw (UnsignedFormException());
		else if (executor.getGrade() > getGradeToExec())
			throw (GradeTooLowException());
		else {
			std::cout << "Brrrrt... brrrrt... brrrrt..." << std::endl;
			std::srand(static_cast<unsigned int>(std::time(NULL)));
			if (std::rand() % 2 == 0)
				std::cout << getTarget() << " has been robotomized successfully." << std::endl;
			else
				std::cout << "The robotomy of " << getTarget() << " failed." << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
