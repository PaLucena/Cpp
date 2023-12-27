/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:50 by palucena          #+#    #+#             */
/*   Updated: 2023/12/27 01:11:43 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact	_contacts[8];
		int		_numberOfContacts;
	public:
		PhoneBook();
		bool	AddContact();
		void	RotateContacts();
		void	DisplayAll();
		bool	AskIndex();
		int		GetNumberOfContacts();
};

#endif