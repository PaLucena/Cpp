/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:43:35 by palucena          #+#    #+#             */
/*   Updated: 2024/03/03 21:40:57 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
	public:
		Form();
		Form(const std::string &name, const int gradeToSign, const int gradeToExec);
		Form(const Form &toCopy);
		Form	&operator=(const Form &toCopy);
		~Form();

		const std::string	getName() const;
		bool				getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		void	beSigned(const Bureaucrat &signer);

		class GradeToLowException: public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Exception: Grade too low");
				}
		};
		class GradeToHighException: public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Exception: Grade too high");
				}
		};
};

std::ostream	&operator<<(std::ostream &out, const Form &toCopy);

#endif