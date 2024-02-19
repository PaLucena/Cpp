/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:02:09 by palucena          #+#    #+#             */
/*   Updated: 2024/02/19 17:27:50 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "Character.hpp"
class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &toCopy);
		AMateria	&operator=(const AMateria &toCopy);
		~AMateria();
		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif