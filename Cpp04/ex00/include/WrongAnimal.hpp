/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:42:50 by palucena          #+#    #+#             */
/*   Updated: 2024/02/14 18:54:22 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal {
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &toCopy);
		WrongAnimal	&operator=(const WrongAnimal &toCopy);
		~WrongAnimal();
		void	makeSound() const;
		std::string		getType();
} ;

#endif