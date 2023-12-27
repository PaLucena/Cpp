/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:57 by palucena          #+#    #+#             */
/*   Updated: 2023/12/27 01:16:26 by palucena         ###   ########.fr       */
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
		if (!std::getline(std::cin, cmd))
			return 1;
		if (cmd == "ADD" && !YellowPages.AddContact())
			return 1;
		else if (cmd == "SEARCH")
		{
			if (YellowPages.GetNumberOfContacts())
			{
				YellowPages.DisplayAll();
				if (!YellowPages.AskIndex())
					return 1;
			}
			else
				std::cout << "There are no contacts yet." << std::endl;
		}
	} while (cmd != "EXIT");
	return (0);
}
