/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:44:26 by palucena          #+#    #+#             */
/*   Updated: 2024/02/20 09:13:31 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Headers.hpp"

class Character: public ICharacter {
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		int			_usage;
	public:
		Character();
		Character(const Character &toCopy);
		Character(const std::string &name);
		Character	&operator=(const Character &toCopy);
		~Character();
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif