/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:35:25 by palucena          #+#    #+#             */
/*   Updated: 2023/12/18 22:53:15 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_numberOfContacts = 0;
}

void	PhoneBook::AddContact(void)
{
	std::string	str;
	int			index = this->_numberOfContacts;

	if (this->_numberOfContacts < 8)
		this->_numberOfContacts++;
	else
	{
		this->RotateContacts();
		index--;
	}
	this->_contacts[index].SetFn();
	this->_contacts[index].SetLn();
	this->_contacts[index].SetNn();
	this->_contacts[index].SetPn();
	this->_contacts[index].SetDs();
}

void	PhoneBook::RotateContacts(void)
{
	for (int i = 7; i > 0; i--)
		this->_contacts[i - 1] = this->_contacts[i];
}

void	PhoneBook::DisplayAll(void)
{
	// --------------- Falta esto ---------------
}

int		PhoneBook::GetNumberOfContacts(void)
{
	return (this->_numberOfContacts);
}
