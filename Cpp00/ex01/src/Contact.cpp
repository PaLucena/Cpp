/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:53 by palucena          #+#    #+#             */
/*   Updated: 2023/12/19 18:39:24 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

void	Contact::SetFn(void)
{
	std::string	str;

	do
	{
		std::cout << "First name: ";
		std::getline(std::cin, str);
	} while (str == "\0");
	this->_firstName = str;
}

void	Contact::SetLn(void)
{
	std::string	str;

	do
	{
		std::cout << "Last name: ";
		std::getline(std::cin, str);
	} while (str == "\0");
	this->_lastName = str;
}

void	Contact::SetNn(void)
{
	std::string	str;

	do
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, str);
	} while (str == "\0");
	this->_nickname = str;
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

void	Contact::SetPn(void)
{
	std::string	str;

	do
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, str);
		
	} while (str == "\0" || !CheckDigit(str));
	this->_phoneNumber = std::stol(str);
}

void	Contact::SetDs(void)
{
	std::string	str;

	do
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, str);
	} while (str == "\0");
	this->_darkestSecret = str;
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
