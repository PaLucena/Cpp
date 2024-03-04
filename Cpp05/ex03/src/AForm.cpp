/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:49:07 by palucena          #+#    #+#             */
/*   Updated: 2024/03/04 12:12:11 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm(): _name("UnknownAForm"), _target("UnknownTarget"),  _gradeToSign(150), _gradeToExec(150)
{
	std::cout << "[AForm] Default constructor called" << std::endl;
}

AForm::AForm(const std::string &name, const std::string &target, const int gradeToSign, const int gradeToExec): _name(name), _target(target),  _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	std::cout << "[AForm] Data constructor called" << std::endl;
	try
	{
		if (gradeToExec < 1 || gradeToSign < 1)
			throw (AForm::GradeTooHighException());
		else if (gradeToExec > 150 || gradeToSign > 150)
			throw (AForm::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

AForm::AForm(const AForm &toCopy): _name(toCopy._name), _target(toCopy._target), _gradeToSign(toCopy._gradeToSign), _gradeToExec(toCopy._gradeToExec)
{
	std::cout << "[AForm] Copy constructor called" << std::endl;
	try
	{
		if (toCopy._gradeToExec < 1 || toCopy._gradeToSign < 1)
			throw (AForm::GradeTooHighException());
		else if (toCopy._gradeToExec > 150 || toCopy._gradeToSign > 150)
			throw (AForm::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

AForm	&AForm::operator=(const AForm &toCopy)
{
	if (this != &toCopy)
		_signed = toCopy._signed;
	return *this;
}

AForm::~AForm()
{
	std::cout << "[AForm] Desctructor called" << std::endl;
}

const std::string	AForm::getName() const
{
	return (_name);
}

const std::string	AForm::getTarget() const
{
	return (_target);
}

bool AForm::getSigned() const
{
	return (_signed);
}

int	AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int	AForm::getGradeToExec() const
{
	return (_gradeToExec);
}

void	AForm::beSigned(const Bureaucrat &signer)
{
	if (signer.getGrade() > _gradeToSign)
		throw (AForm::GradeTooLowException());
	else
		_signed = true;
}

std::ostream	&operator<<(std::ostream &out, const AForm &toCopy)
{
	out << "AForm [" << toCopy.getName() << "]" << std::endl;
	out << " Grade required to sign -> " << toCopy.getGradeToSign() << std::endl;
	out << " Grade required to execute -> " << toCopy.getGradeToExec() << std::endl;
	out << " Signed status -> " << (toCopy.getSigned()?"true":"false") << std::endl;
	return (out);
}
