/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:42:43 by palucena          #+#    #+#             */
/*   Updated: 2023/12/27 16:47:17 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
	private:
		typedef void (Harl::*FunctionPtr)();
		FunctionPtr	fn[4];
		std::string	levels[4];
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		Harl();
		void	complain(std::string level);
} ;

#endif