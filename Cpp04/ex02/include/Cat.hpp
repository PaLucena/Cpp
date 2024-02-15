/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:46:06 by palucena          #+#    #+#             */
/*   Updated: 2024/02/15 13:02:56 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "aAnimal.hpp"
# include "Brain.hpp"

class	Cat: public aAnimal {
	private:
		std::string	_type;
		Brain		*_brain;
	public:
		Cat();
		Cat(const Cat &toCopy);
		Cat	&operator=(const Cat &toCopy);
		~Cat();
		void	makeSound() const;
		void	lightBulb(const std::string &str) const;
		void	thinkOutLoud() const;
} ;

#endif