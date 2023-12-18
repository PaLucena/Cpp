/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:34:47 by palucena          #+#    #+#             */
/*   Updated: 2023/12/18 22:39:55 by palucena         ###   ########.fr       */
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
		void	SetFn();
		void	SetLn();
		void	SetNn();
		void	SetPn();
		void	SetDs();
		std::string	GetFn();
		std::string	GetLn();
		std::string	GetNn();
		int			GetPn();
		std::string	GetDs();
};

#endif