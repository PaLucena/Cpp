/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:53 by palucena          #+#    #+#             */
/*   Updated: 2023/12/27 01:14:04 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

bool	Contact::SetFn(void)
{
	std::string	str;

	do
	{
		std::cout << "First name: ";
		if (!std::getline(std::cin, str))
			return 0;
	} while (str == "\0");
	this->_firstName = str;
	return 1;
}

bool	Contact::SetLn(void)
{
	std::string	str;

	do
	{
		std::cout << "Last name: ";
		if (!std::getline(std::cin, str))
			return 0;
	} while (str == "\0");
	this->_lastName = str;
	return 1;
}

bool	Contact::SetNn(void)
{
	std::string	str;

	do
	{
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, str))
			return 0;
	} while (str == "\0");
	this->_nickname = str;
	return 1;
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

bool	Contact::SetPn(void)
{
	std::string	str;

	do
	{
		std::cout << "Phone number: ";
		if (!std::getline(std::cin, str))
			return 0;
		
	} while (str == "\0" || !CheckDigit(str));
	this->_phoneNumber = std::atol(str.c_str());
	return 1;
}

bool	Contact::SetDs(void)
{
	std::string	str;

	do
	{
		std::cout << "Darkest secret: ";
		if (!std::getline(std::cin, str))
			return 0;
	} while (str == "\0");
	this->_darkestSecret = str;
	return 1;
}

std::string	Contact::GetFn(void)
{
	return (this->_firstName);
}

std::string	Contact::GetLn(void)
{
	return (this->_lastName);
}

std::string	Contact::GetNn(void)
{
	return (this->_nickname);
}

int	Contact::GetPn(void)
{
	return (this->_phoneNumber);
}

std::string	Contact::GetDs(void)
{
	return (this->_darkestSecret);
}
