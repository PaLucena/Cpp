/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:39:57 by palucena          #+#    #+#             */
/*   Updated: 2024/03/04 13:18:52 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class Bureaucrat;

class	PresidentialPardonForm: public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &toCopy);
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &toCopy);

		void	execute(const Bureaucrat &executor) const;
};

#endif