/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:35:25 by palucena          #+#    #+#             */
/*   Updated: 2023/12/19 13:48:06 by palucena         ###   ########.fr       */
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
	for (int i = 0; i < 8; i++)
		this->_contacts[i] = this->_contacts[i + 1];
}

void	PhoneBook::DisplayAll(void)
{
	std::cout << std::endl << "|" << std::setfill(' ') << std::setw(10) << "Index";
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "First name";
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "Last name";
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setfill(' ') << std::setw(10) << (i + 1) << "|";
		if (this->_contacts[i].GetFn().length() > 10)
			std::cout << this->_contacts[i].GetFn().substr(0, 9) << ".|";
		else
			std::cout << std::setfill(' ') << std::setw(10) << this->_contacts[i].GetFn() << "|";
		if (this->_contacts[i].GetLn().length() > 10)
			std::cout << this->_contacts[i].GetLn().substr(0, 9) << ".|";
		else
			std::cout << std::setfill(' ') << std::setw(10) << this->_contacts[i].GetLn() << "|";
		if (this->_contacts[i].GetNn().length() > 10)
			std::cout << this->_contacts[i].GetNn().substr(0, 9) << ".|" << std::endl;
		else
			std::cout << std::setfill(' ') << std::setw(10) << this->_contacts[i].GetNn() << "|" << std::endl;
	}
}

static bool	CheckDigit(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

void	PhoneBook::AskIndex(void)
{
	std::string	nb;

	do
	{
		std::cout << "Index: ";
		std::getline(std::cin, nb);
	} while (nb == "\0" ||!CheckDigit(nb) || std::stol(nb) <= 0 || std::stol(nb) > 8);
	std::cout << std::endl << "  Contact info: " << std::endl;
	std::cout << std::endl << "First name: " << this->_contacts[std::stol(nb) - 1].GetFn();
	std::cout << std::endl << "Last name: " << this->_contacts[std::stol(nb) - 1].GetLn();
	std::cout << std::endl << "Nickname: " << this->_contacts[std::stol(nb) - 1].GetNn();
	std::cout << std::endl << "Phone number: " << this->_contacts[std::stol(nb) - 1].GetPn();
	std::cout << std::endl << "Darkest secret: " << this->_contacts[std::stol(nb) - 1].GetDs() << std::endl;
}

int		PhoneBook::GetNumberOfContacts(void)
{
	return (this->_numberOfContacts);
}
