/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:44:31 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 18:50:33 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog: public Animal {
	protected:
		std::string	_type;
	public:
		Dog();
		Dog(const Dog &toCopy);
		Dog	&operator=(const Dog &toCopy);
		~Dog();
		void	makeSound() const;
} ;

#endif