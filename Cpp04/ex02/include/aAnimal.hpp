/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:42:50 by palucena          #+#    #+#             */
/*   Updated: 2024/02/15 13:02:36 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class	aAnimal {
	protected:
		std::string	_type;
	public:
		aAnimal();
		aAnimal(const aAnimal &toCopy);
		aAnimal	&operator=(const aAnimal &toCopy);
		virtual ~aAnimal() = 0;
		virtual void	makeSound() const = 0;
		std::string		getType();
} ;

#endif