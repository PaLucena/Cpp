/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:57 by palucena          #+#    #+#             */
/*   Updated: 2023/12/17 20:15:06 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"

void	ft_add(PhoneBook YellowPages)
{
	std::cout<<"First name: "<<std::endl;
	std::cout<<"Last name: "<<std::endl;
	std::cout<<"Nickname: "<<std::endl;
	std::cout<<"Phone number: "<<std::endl;
	std::cout<<"Darkest secret: "<<std::endl;
}

void	ft_search(PhoneBook YellowPages)
{
	std::cout<<"searchear"<<std::endl;
}

int	main(void)
{
	PhoneBook	YellowPages;
	std::string	str;

	while (1)
	{
		std::cout<<"> ";
		std::getline(std::cin, str);
		if (str == "EXIT")
			break ;
		else if (str == "ADD")
			YellowPages.AddContact();//addear contacto
		else if (str == "SEARCH")
			ft_search(YellowPages);//display de todos y buscar el contacto con index X
	}
	return (0);
}
