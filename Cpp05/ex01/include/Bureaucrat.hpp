/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:28:50 by palucena          #+#    #+#             */
/*   Updated: 2024/03/03 21:41:11 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(const Bureaucrat &toCopy);
		Bureaucrat			&operator=(const Bureaucrat &toCopy);
		~Bureaucrat();

		const std::string	getName() const;
		int			getGrade() const;
		void	incrementGrade();
		void	decrementGrade();

		void	signForm(Form &toSign);

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &toCopy);

#endif