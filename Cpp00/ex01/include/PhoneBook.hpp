/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:50 by palucena          #+#    #+#             */
/*   Updated: 2023/12/19 18:41:44 by palucena         ###   ########.fr       */
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
		void	AddContact();
		void	RotateContacts();
		void	DisplayAll();
		void	AskIndex();
		int		GetNumberOfContacts();
};

#endif