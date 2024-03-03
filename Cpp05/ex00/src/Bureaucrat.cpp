/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:28:07 by palucena          #+#    #+#             */
/*   Updated: 2024/03/03 20:37:37 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Someone")
{
	std::cout << "[Bureaucrat] Default constructor called" << std::endl;
	_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name)
{
	std::cout << "[Bureaucrat] Data constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw(Bureaucrat::GradeTooLowException());
		else if (grade <= 150)
			_grade = grade;
		else
			throw(Bureaucrat::GradeTooHighException());
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy): _name(toCopy._name)
{
	std::cout << "[Bureaucrat] Copy constructor called" << std::endl;
	_grade = toCopy._grade;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &toCopy)
{
	if (_grade != toCopy._grade)
		_grade = toCopy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "[Bureaucrat] Destructor called" << std::endl;
}

const std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::incrementGrade()
{
	try
	{
		if (_grade > 1)
			_grade--;
		else
			throw(Bureaucrat::GradeTooHighException());
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade < 150)
			_grade++;
		else
			throw(Bureaucrat::GradeTooLowException());
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade too low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade too high");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &toCopy)
{
	out << toCopy.getName() << ", bureaucrat grade " << toCopy.getGrade() << "." << std::endl;
	return (out);
}
