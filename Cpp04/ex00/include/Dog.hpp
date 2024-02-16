/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:44:31 by palucena          #+#    #+#             */
/*   Updated: 2024/02/16 19:09:51 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog: public Animal {
	public:
		Dog();
		Dog(const Dog &toCopy);
		Dog	&operator=(const Dog &toCopy);
		~Dog();
		void	makeSound() const;
} ;

#endif