/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:47 by palucena          #+#    #+#             */
/*   Updated: 2023/12/27 01:12:14 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string	_nickname;
		int			_phoneNumber;
		std::string	_darkestSecret;
	public:
		bool	SetFn();
		bool	SetLn();
		bool	SetNn();
		bool	SetPn();
		bool	SetDs();
		std::string	GetFn();
		std::string	GetLn();
		std::string	GetNn();
		int			GetPn();
		std::string	GetDs();
};

#endif