/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:57 by palucena          #+#    #+#             */
/*   Updated: 2023/12/18 22:25:22 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	YellowPages;
	std::string	cmd;

	do
	{
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			YellowPages.AddContact();
		else if (cmd == "SEARCH")
		{
			/* if (YellowPages.GetNumberOfContacts())
			{
				YellowPages.DisplayAll();
				YellowPages.AskIndex();
			}
			else */
				std::cout << "There are no contacts yet." << std::endl;
		}
	} while (cmd != "EXIT");
	return (0);
}
