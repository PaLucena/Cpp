/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:47 by palucena          #+#    #+#             */
/*   Updated: 2023/12/16 21:56:04 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {
	private:
		std::string FirstName;
		std::string LastName;
		std::string	Nickname;
		int			PhoneNumber;
		std::string	DarkestSecret;
	public:
		void	SetFn(std::string);
		void	SetLn(std::string);
		void	SetNn(std::string);
		void	SetPn(int);
		void	SetDs(std::string);
		std::string	GetFn();
		std::string	GetLn();
		std::string	GetNn();
		int			GetPn();
		std::string	GetDs();
};

#endif