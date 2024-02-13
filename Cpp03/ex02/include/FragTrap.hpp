/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:03:11 by palucena          #+#    #+#             */
/*   Updated: 2024/02/13 15:13:35 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap();
		FragTrap(const std::string &str);
		FragTrap(FragTrap &toCopy);
		~FragTrap();
		FragTrap	&operator=(FragTrap &toCopy);
		void		highFivesGuys();
} ;

#endif