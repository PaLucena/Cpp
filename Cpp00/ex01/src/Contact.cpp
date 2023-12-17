/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:53 by palucena          #+#    #+#             */
/*   Updated: 2023/12/17 19:19:58 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

void	Contact::SetFn(std::string str)
{
	this->FirstName = str;
}

void	Contact::SetLn(std::string str)
{
	this->LastName = str;
}

void	Contact::SetNn(std::string str)
{
	this->Nickname = str;
}

void	Contact::SetPn(int n)
{
	this->PhoneNumber = n;
}

void	Contact::SetDs(std::string str)
{
	this->DarkestSecret = str;
}

std::string	Contact::GetFn(void)
{
	return (this->FirstName);
}

std::string	Contact::GetLn(void)
{
	return (this->LastName);
}

std::string	Contact::GetNn(void)
{
	return (this->Nickname);
}

int	Contact::GetPn(void)
{
	return (this->PhoneNumber);
}

std::string	Contact::GetDs(void)
{
	return (this->DarkestSecret);
}
