/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 19:48:08 by palucena          #+#    #+#             */
/*   Updated: 2023/12/23 20:37:51 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie {
	private:
		std::string	name;
	public:
		Zombie(std::string str);
		~Zombie();
		void	announce();
} ;

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif