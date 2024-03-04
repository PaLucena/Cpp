/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:28:50 by palucena          #+#    #+#             */
/*   Updated: 2024/03/04 13:14:19 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <iostream>
# include "AForm.hpp"

class AForm;

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

		void	signForm(AForm &toSign);

		void	executeForm(const AForm &form);

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Exception: Grade too low");
				}
		};
		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Exception: Grade too high");
				}
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &toCopy);

#endif