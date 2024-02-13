/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:30:44 by palucena          #+#    #+#             */
/*   Updated: 2024/02/13 13:23:32 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string &str);
		ScavTrap(ScavTrap &toCopy);
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap &toCopy);
		void		guardGate();
} ;

#endif