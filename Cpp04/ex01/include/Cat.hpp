/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:46:06 by palucena          #+#    #+#             */
/*   Updated: 2024/02/15 12:20:08 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal {
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