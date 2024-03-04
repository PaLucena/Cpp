/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:39:55 by palucena          #+#    #+#             */
/*   Updated: 2024/03/04 13:19:35 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("UnknownForm", "UnknownTarget", 145, 137)
{
	std::cout << "[ShrubberyCreationForm] Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &toCopy): AForm(toCopy)
{
	std::cout << "[ShrubberyCreationForm] Copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("ShrubberyCreationForm", target, 145, 137)
{
	std::cout << "[ShrubberyCreationForm] Data constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "[ShrubberyCreationForm] Destrucctor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toCopy)
{
	if (this != &toCopy)
		AForm::operator=(toCopy);
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	try
	{
		if (!getSigned())
			throw (UnsignedFormException());
		else if (executor.getGrade() > getGradeToExec())
			throw (GradeTooLowException());
		else {
			std::ofstream	fileWrite(getTarget() + "_shrubbery");
			if (fileWrite.is_open()) {
				fileWrite << "        *" << std::endl;
				fileWrite << "       / \\" << std::endl;
				fileWrite << "      / * \\" << std::endl;
				fileWrite << "     / * * \\" << std::endl;
				fileWrite << "    / * * * \\" << std::endl;
				fileWrite << "   / * * * * \\" << std::endl;
				fileWrite << "  / * * * * * \\" << std::endl;
				fileWrite << " / * * * * * * \\" << std::endl;
				fileWrite << "/ * * * * * * * \\" << std::endl;
				fileWrite << "      | | |" << std::endl;
				fileWrite << "      | | |" << std::endl;
			}
			else
				std::cerr << "Error: Couldn't open " << getTarget() << "_shrubbery" << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
