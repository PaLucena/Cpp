/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:00:58 by palucena          #+#    #+#             */
/*   Updated: 2024/02/19 20:14:23 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "Character.hpp"

class Ice: public AMateria {
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &toCopy);
		Ice	&operator=(const Ice &toCopy);
		~Ice();
		std::string const	&getType() const;
		Ice					*clone() const;
		void				use(ICharacter &target);	
};

#endif