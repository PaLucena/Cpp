/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:46:06 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 18:50:47 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal {
	protected:
		std::string	_type;
	public:
		Cat();
		Cat(const Cat &toCopy);
		Cat	&operator=(const Cat &toCopy);
		~Cat();
		void	makeSound() const;
		
} ;

#endif