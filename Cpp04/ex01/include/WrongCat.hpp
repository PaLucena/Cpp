/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:46:06 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 19:00:04 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal {
	protected:
		std::string	_type;
	public:
		WrongCat();
		WrongCat(const WrongCat &toCopy);
		WrongCat	&operator=(const WrongCat &toCopy);
		~WrongCat();
		void	makeSound() const;
		
} ;

#endif