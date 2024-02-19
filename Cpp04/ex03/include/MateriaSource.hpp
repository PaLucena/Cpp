/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:04:48 by palucena          #+#    #+#             */
/*   Updated: 2024/02/19 20:22:40 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource
{
	private:
		AMateria	*_storage[4];
		int			_usage;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &toCopy);
		MateriaSource	&operator=(const MateriaSource &toCopy);
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);
};

#endif