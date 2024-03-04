/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:43:35 by palucena          #+#    #+#             */
/*   Updated: 2024/03/04 13:18:56 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm {
	private:
		const std::string	_name;
		const std::string	_target;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
	public:
		AForm();
		AForm(const std::string &name, const std::string &target, const int gradeToSign, const int gradeToExec);
		AForm(const AForm &toCopy);
		AForm	&operator=(const AForm &toCopy);
		~AForm();

		const std::string	getName() const;
		const std::string	getTarget() const;
		bool				getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		void	beSigned(const Bureaucrat &signer);

		virtual void	execute(Bureaucrat const &executor) const = 0;

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
		class UnsignedFormException: public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Exception: Unsigned form");
				}
		};
};

std::ostream	&operator<<(std::ostream &out, const AForm &toCopy);

#endif