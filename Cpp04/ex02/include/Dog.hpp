/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:44:31 by palucena          #+#    #+#             */
/*   Updated: 2024/02/15 13:02:42 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "aAnimal.hpp"
# include "Brain.hpp"

class	Dog: public aAnimal {
	private:
		std::string	_type;
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