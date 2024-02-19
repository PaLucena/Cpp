/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:01:12 by palucena          #+#    #+#             */
/*   Updated: 2024/02/19 17:31:28 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "Character.hpp"

class	Cure: public AMateria {
	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &toCopy);
		Cure	&operator=(const Cure &toCopy);
		~Cure();
		std::string const	&getType() const;
		Cure				*clone() const;
		void				use(ICharacter &target);	
};

#endif