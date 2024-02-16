/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:01:12 by palucena          #+#    #+#             */
/*   Updated: 2024/02/16 18:42:04 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure: public AMateria {
	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &toCopy);
		Cure	&operator=(const Cure &toCopy);
		~Cure();
		std::string const	&getType() const; //Returns the materia type
		Cure	*clone() const = 0;
		void		use(ICharacter &target);	
};

#endif