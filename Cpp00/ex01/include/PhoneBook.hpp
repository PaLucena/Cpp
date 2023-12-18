/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:50 by palucena          #+#    #+#             */
/*   Updated: 2023/12/18 22:52:28 by palucena         ###   ########.fr       */
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
		int		GetNumberOfContacts();
};

#endif