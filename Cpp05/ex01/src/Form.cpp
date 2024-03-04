/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:49:07 by palucena          #+#    #+#             */
/*   Updated: 2024/03/04 11:14:26 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form(): _name("Unknown form"),  _gradeToSign(150), _gradeToExec(150)
{
	std::cout << "[Form] Default constructor called" << std::endl;
}

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExec): _name(name),  _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	std::cout << "[Form] Data constructor called" << std::endl;
	try
	{
		if (gradeToExec < 1 || gradeToSign < 1)
			throw (Form::GradeTooHighException());
		else if (gradeToExec > 150 || gradeToSign > 150)
			throw (Form::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Form::Form(const Form &toCopy): _name(toCopy._name), _gradeToSign(toCopy._gradeToSign), _gradeToExec(toCopy._gradeToExec)
{
	std::cout << "[Form] Copy constructor called" << std::endl;
	try
	{
		if (toCopy._gradeToExec < 1 || toCopy._gradeToSign < 1)
			throw (Form::GradeTooHighException());
		else if (toCopy._gradeToExec > 150 || toCopy._gradeToSign > 150)
			throw (Form::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Form	&Form::operator=(const Form &toCopy)
{
	if (this != &toCopy)
		_signed = toCopy._signed;
	return *this;
}

Form::~Form()
{
	std::cout << "[Form] Desctructor called" << std::endl;
}

const std::string	Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}

int	Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int	Form::getGradeToExec() const
{
	return (_gradeToExec);
}

void	Form::beSigned(const Bureaucrat &signer)
{
	if (signer.getGrade() > _gradeToSign)
		throw (Form::GradeToLowException());
	else
		_signed = true;
}

std::ostream	&operator<<(std::ostream &out, const Form &toCopy)
{
	out << "Form [" << toCopy.getName() << "]" << std::endl;
	out << " Grade required to sign -> " << toCopy.getGradeToSign() << std::endl;
	out << " Grade required to execute -> " << toCopy.getGradeToExec() << std::endl;
	out << " Signed status -> " << (toCopy.getSigned()?"true":"false") << std::endl;
	return (out);
}
