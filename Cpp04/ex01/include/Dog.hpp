/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:44:31 by palucena          #+#    #+#             */
/*   Updated: 2024/02/16 19:09:24 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal {
	private:
		Brain		*_brain;
	public:
		Dog();
		Dog(const Dog &toCopy);
		Dog	&operator=(const Dog &toCopy);
		~Dog();
		void	makeSound() const;
		void	lightBulb(const std::string &str) const;
		void	thinkOutLoud() const;
} ;

#endif