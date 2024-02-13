/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:58:32 by palucena          #+#    #+#             */
/*   Updated: 2024/02/13 16:02:04 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	protected:
		std::string		_Name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	public:
		ClapTrap();
		ClapTrap(const std::string &str);
		ClapTrap(ClapTrap &toCopy);
		~ClapTrap();
		ClapTrap		&operator=(ClapTrap &toCopy);
		void			attack(const std::string& target);
		virtual void			takeDamage(unsigned int amount);
		virtual void			beRepaired(unsigned int amount);
		virtual void			setAttackDamage(unsigned int amount);
		unsigned int	getAttackDamage();
} ;

#endif