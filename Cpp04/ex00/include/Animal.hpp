/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:42:50 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 18:50:16 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal {
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &toCopy);
		Animal	&operator=(const Animal &toCopy);
		~Animal();
		virtual void	makeSound() const;
		std::string		getType();
} ;

#endif